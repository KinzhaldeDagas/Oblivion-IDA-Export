0x68A1A0: mov     ecx, [ecx+4]
0x68A1A3: test    ecx, ecx
0x68A1A5: jz      short loc_68A1AC
0x68A1A7: jmp     loc_68B1A0
0x68A1AC: xor     eax, eax
0x68A1AE: retn
0x68B1A0: cmp     byte ptr [ecx+4], 0
0x68B1A4: jnz     short loc_68B1B1
0x68B1A6: mov     ecx, [ecx]
0x68B1A8: test    ecx, ecx
0x68B1AA: jz      short loc_68B1B1
0x68B1AC: jmp     TESObjectREFR_GetWorldSpace
0x68B1B1: xor     eax, eax
0x68B1B3: retn
