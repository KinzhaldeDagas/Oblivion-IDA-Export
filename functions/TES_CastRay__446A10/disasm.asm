0x446A10: mov     eax, [ecx+34h]
0x446A13: test    eax, eax
0x446A15: jnz     short loc_446A2E
0x446A17: mov     eax, ds:0B06A2Ch
0x446A1C: mov     ecx, [ecx+8]; this
0x446A1F: shr     eax, 1
0x446A21: push    eax; a3
0x446A22: push    eax; a2
0x446A23: call    GetGridEntry
0x446A28: mov     eax, [eax]
0x446A2A: test    eax, eax
0x446A2C: jz      short loc_446A35
0x446A2E: mov     ecx, eax
0x446A30: jmp     loc_4D4E30
0x446A35: xor     eax, eax
0x446A37: retn    4
