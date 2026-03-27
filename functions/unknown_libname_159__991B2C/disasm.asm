0x991B2C: test    eax, 80000h
0x991B31: jz      short tosIsSNaN
0x991B33: mov     eax, 7
0x991B38: retn
0x991B39: fadd    ds:dbl_AA5090
0x991B3F: mov     eax, 1
0x991B44: retn
