0x89F4D0: test    ecx, ecx
0x89F4D2: jz      short loc_89F4E5
0x89F4D4: mov     eax, [ecx+8]
0x89F4D7: test    eax, eax
0x89F4D9: jz      short loc_89F4E5
0x89F4DB: add     eax, 14h
0x89F4DE: jz      short loc_89F4E5
0x89F4E0: mov     eax, [eax+1Ch]
0x89F4E3: jmp     short loc_89F4E7
0x89F4E5: xor     eax, eax
0x89F4E7: mov     edx, [esp+arg_0]
0x89F4EB: movzx   eax, ax
0x89F4EE: shl     edx, 10h
0x89F4F1: or      eax, edx
0x89F4F3: test    ecx, ecx
0x89F4F5: jz      short loc_89F506
0x89F4F7: mov     edx, [ecx+8]
0x89F4FA: test    edx, edx
0x89F4FC: jz      short loc_89F506
0x89F4FE: add     edx, 14h
0x89F501: jz      short loc_89F506
0x89F503: mov     [edx+1Ch], eax
0x89F506: mov     eax, [ecx]
0x89F508: mov     edx, [eax+80h]
0x89F50E: call    edx
0x89F510: retn    4
