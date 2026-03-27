0x446C30: test    ecx, ecx
0x446C32: jz      short loc_446C43
0x446C34: mov     eax, [esp+arg_0]
0x446C38: cmp     [ecx], eax
0x446C3A: jz      short loc_446C43
0x446C3C: mov     ecx, [ecx+4]
0x446C3F: test    ecx, ecx
0x446C41: jnz     short loc_446C38
0x446C43: xor     eax, eax
0x446C45: test    ecx, ecx
0x446C47: setnz   al
0x446C4A: retn    4
