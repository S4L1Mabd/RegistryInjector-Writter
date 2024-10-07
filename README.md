<!--   my-ticker -->    
<!-- &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;[![Typing SVG](https://readme-typing-svg.herokuapp.com?color=%F0E68C&center=true&vCenter=true&width=250&lines=Registry+Shellcode+Writer"")](https://git.io/typing-svg) -->

<p align="center">
  <a href="https://git.io/typing-svg">
    <img src="https://readme-typing-svg.herokuapp.com?color=%F0E68C&center=true&vCenter=true&width=250&lines=Registry+Shellcode+Writer" alt="Typing SVG">
  </a>
</p>

# Registry Shellcode Writer: Writing XOR-Encoded Shellcode to Windows Registry

This project demonstrates writing XOR-encoded shellcode into the Windows Registry using C. It focuses on securely storing shellcode as binary data in the registry for later retrieval and execution in a malware model.

## Features

- **XOR Shellcode Encoding**: Shellcode is XOR-encoded for obfuscation before being written to the registry.
- **Registry Manipulation**: Uses Windows API functions to open, write, and close registry keys and values.
- **Process Injection Ready**: The encoded shellcode can be easily read back for injection into target processes.

## Technical Overview

### 1. Shellcode Encoding and Writing
- **XOR Encoding**: Shellcode is obfuscated using XOR to hide it from simple signature-based detections.
- **Registry Key Writing**: The encoded shellcode is written to a specific registry key and subkey for stealthy persistence.

### 2. Registry Operations
- **RegOpenKeyExA**: Opens the specified registry key with `KEY_ALL_ACCESS`.
- **RegSetValueExA**: Writes the XOR-encoded shellcode as a binary value to the specified registry subkey.
- **Error Handling**: Handles errors such as failed key access or writing attempts.

## Usage

1. **Clone the Repository**: Download the project and compile it using Visual Studio or another compatible compiler.
2. **Run the Program**: Execute the binary to write the encoded shellcode into the registry.

    ```bash
    Registry_Writer.exe
    ```

### Example:
```bash
Registry_Writer.exe
