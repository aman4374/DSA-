# Cryptographically Secure Random Number Generator (CSPRNG) with Quantum-Inspired Entropy

## Overview
This project implements a **Cryptographically Secure Random Number Generator (CSPRNG)** using **AES-CTR mode**. It integrates **Elliptic Curve Diffie-Hellman (ECDH) key exchange** and **Quantum-inspired entropy** to generate highly secure random numbers.

## Features
- **Elliptic Curve Diffie-Hellman (ECDH) Key Exchange**: Establishes a shared secret between two parties using elliptic curve cryptography, which is more efficient and secure compared to traditional key exchange mechanisms.
- **Quantum Random Number Generator (QRNG) Simulation**: Introduces additional entropy using system-generated randomness (`os.urandom(32)`) to ensure unpredictability.
- **Secure Seed Generation**: Uses **SHA-384** to create a cryptographically strong seed that combines the shared secret and quantum entropy.
- **AES-CTR Based CSPRNG**: Uses **AES in Counter (CTR) mode** to generate high-quality random numbers for cryptographic purposes.

## Understanding Key Concepts

### **Elliptic Curve Diffie-Hellman (ECDH) Key Exchange**
ECDH is a method of securely exchanging cryptographic keys using elliptic curve mathematics. It allows two parties (Alice and Bob) to independently generate a shared secret without ever transmitting it directly. 
- **Private Key**: A randomly generated secret number.
- **Public Key**: Derived from the private key using an elliptic curve function.
- **Shared Secret**: Computed using one's own private key and the other party's public key.
- **Security**: ECDH is highly secure because an attacker cannot feasibly compute the private key from the public key (Elliptic Curve Discrete Logarithm Problem).

### **Quantum-Inspired Entropy (QRNG Simulation)**
- In real quantum random number generation (QRNG), randomness comes from quantum mechanical phenomena.
- Since true QRNG devices are not always available, we simulate randomness using `os.urandom(32)`, which provides cryptographically secure random numbers from the operating system.

### **Secure Seed Generation: Uses SHA-384**
SHA-384 is a cryptographic hash function that takes an input and produces a 48-byte (384-bit) output.
- **Why SHA-384?** It provides a longer hash output than SHA-256, which strengthens security.
- **Purpose in this project:** Combines the shared secret and quantum randomness to create a highly secure seed for the CSPRNG.

### **AES-CTR Mode: A Cryptographic Secure PRNG**
AES (Advanced Encryption Standard) is a widely used encryption algorithm. **CTR (Counter) mode** turns AES into a stream cipher, making it useful for generating secure random numbers.
- **How it works:** Encrypts a counter value that is incremented for each block, producing unique and unpredictable outputs.
- **Why AES-CTR?**
  - Does not require padding like other AES modes.
  - Efficient and fast.
  - Ensures forward and backward security (previous and future outputs cannot be inferred).

## Prerequisites
Ensure you have **Python 3.x** installed.

### Install Required Dependencies
Run the following command to install the required library:
```sh
pip install cryptography
```

## How It Works
1. **Key Exchange using ECDH**: Two parties (Alice & Bob) generate a shared secret using elliptic curve cryptography.
2. **Quantum Randomness (Simulated)**: Uses `os.urandom(32)` as a stand-in for a real QRNG.
3. **Seed Creation**: Combines the shared secret and QRNG output, then hashes them with SHA-384.
4. **CSPRNG Using AES-CTR**: Uses AES-256 in CTR mode to generate cryptographically secure random numbers.

## Code Explanation

### Import Required Libraries
```python
import os
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes
from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives.asymmetric import ec
from cryptography.hazmat.primitives import hashes
```

### Generate Secure Random Numbers Using AES-CTR
```python
def generate_random_numbers(seed, num_bytes=16):
    if len(seed) < 48:
        raise ValueError("Seed must be at least 48 bytes long.")
    key = seed[:32]
    nonce = seed[32:48]
    cipher = Cipher(algorithms.AES(key), modes.CTR(nonce), backend=default_backend())
    encryptor = cipher.encryptor()
    return encryptor.update(bytes([0] * num_bytes))
```

### ECDH Key Exchange for Shared Secret
```python
def generate_shared_secret():
    alice_private_key = ec.generate_private_key(ec.SECP384R1())
    bob_private_key = ec.generate_private_key(ec.SECP384R1())
    alice_shared_secret = alice_private_key.exchange(ec.ECDH(), bob_private_key.public_key())
    bob_shared_secret = bob_private_key.exchange(ec.ECDH(), alice_private_key.public_key())
    assert alice_shared_secret == bob_shared_secret
    return alice_shared_secret
```

### Simulate Quantum Random Number Generation
```python
def get_quantum_random_number():
    return os.urandom(32)
```

### Create a Secure Seed Using SHA-384
```python
def create_seed(shared_secret, qrng_output):
    digest = hashes.Hash(hashes.SHA384())
    digest.update(shared_secret + qrng_output)
    return digest.finalize()
```

### Main Function: Bringing Everything Together
```python
def main():
    shared_secret = generate_shared_secret()
    qrng_output = get_quantum_random_number()
    print("Quantum-like Random Number: ", qrng_output.hex())
    seed = create_seed(shared_secret, qrng_output)
    print("Generated Seed: ", seed.hex())
    random_numbers = generate_random_numbers(seed, num_bytes=16)
    print("Generated Random Numbers: ", random_numbers.hex())
```

### Fixing the `if __name__` Block
```python
if __name__ == "__main__":
    main()
```

## Running the Script
Execute the following command in your terminal:
```sh
python main.py
```

## Expected Output
```
Quantum-like Random Number: <random_hex>
Generated Seed: <seed_hex>
Generated Random Numbers: <random_numbers_hex>
```

## Conclusion
This implementation achieves a **cryptographically secure PRNG** by:
- Using **ECDH key exchange** to establish a strong shared secret.
- Introducing **quantum-inspired entropy** via `os.urandom(32)`.
- Strengthening security with **SHA-384 seed derivation**.
- Generating **secure random numbers using AES-CTR**.

These techniques make it suitable for applications such as **encryption, authentication, and secure communications**. 🚀

## License
This project is open-source and available under the **MIT License**.

## Author
Aman Trivedi

