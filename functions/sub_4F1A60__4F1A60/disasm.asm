0x4F1A60: mov     eax, [ecx+7Ch]
0x4F1A63: test    eax, eax
0x4F1A65: jz      short loc_4F1A6E
0x4F1A67: mov     eax, [eax+28h]
0x4F1A6A: test    eax, eax
0x4F1A6C: jmp     short loc_4F1A75
0x4F1A6E: mov     ecx, [ecx+28h]
0x4F1A71: test    ecx, ecx
0x4F1A73: mov     eax, ecx
0x4F1A75: jnz     short locret_4F1A7C
0x4F1A77: mov     eax, offset EmptyString
0x4F1A7C: retn
