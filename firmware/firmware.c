// Function to output a character to a specific hardware address, typically a serial port.
void putc(char c)
{
    // Write the character 'c' to the memory-mapped I/O address 0x10000000.
    // This is a typical way to send data to a device mapped in memory.
    *(volatile char*)0x10000000 = c;
}

// Function to output a null-terminated string by sending each character to `putc`.
void puts(const char *s)
{
    // Loop through each character in the string 's' until the null terminator is reached.
    while (*s) 
        putc(*s++); // Send the current character and increment the pointer.
}

// Function to copy 'n' bytes from source 'src' to destination 'dest'.
void *memcpy(void *dest, const void *src, int n)
{
    // Loop 'n' times from the end of the blocks to the beginning.
    while (n) {
        n--; // Decrement 'n' first to copy the last byte first.
        ((char*)dest)[n] = ((char*)src)[n]; // Copy each byte from source to destination.
    }
    return dest; // Return the destination pointer.
}

// Main function to demonstrate string manipulation and output.
void main()
{
    // Initialize a character array with a coded message.
    char message[] = "$Uryyb+Jbeyq!+Vs+lbh+pna+ernq+guvf+zrffntr+gura$gur+CvpbEI32+PCH"
            "+frrzf+gb+or+jbexvat+whfg+svar.$$++++++++++++++++GRFG+CNFFRQ!$$";
    
    // Iterate over each character in the message array.
    for (int i = 0; message[i]; i++)
        switch (message[i])
        {
            case 'a' ... 'm': // If character is between 'a' and 'm' or 'A' and 'M':
            case 'A' ... 'M':
                message[i] += 13; // Shift the character by 13 places (ROT13 encryption).
                break;
            case 'n' ... 'z': // If character is between 'n' and 'z' or 'N' and 'Z':
            case 'N' ... 'Z':
                message[i] -= 13; // Shift the character back by 13 places (ROT13 decryption).
                break;
            case '$': // If character is '$':
                message[i] = '\n'; // Replace '$' with newline character.
                break;
            case '+': // If character is '+':
                message[i] = ' '; // Replace '+' with space character.
                break;
        }
    puts(message); // Output the modified message.
}
