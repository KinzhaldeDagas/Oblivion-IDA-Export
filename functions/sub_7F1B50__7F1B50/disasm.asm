0x7F1B50: mov     ecx, [ecx+0A8h]; this
0x7F1B56: test    ecx, ecx
0x7F1B58: jz      short locret_7F1B5F
0x7F1B5A: jmp     OB_STLSPData_CopyLeafConstants_010201A0; Copy at most 0xC0 floats (192 floats / 0x300 bytes) into the leaf constant table, then zero-fill the remainder.
0x7F1B5F: retn    8
