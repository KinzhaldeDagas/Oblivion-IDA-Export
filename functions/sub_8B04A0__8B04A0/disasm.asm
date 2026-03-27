0x8B04A0: test    ecx, ecx
0x8B04A2: jz      short loc_8B04B0
0x8B04A4: mov     eax, [ecx+8]
0x8B04A7: test    eax, eax
0x8B04A9: jz      short loc_8B04B0
0x8B04AB: mov     eax, [eax+0Ch]
0x8B04AE: jmp     short loc_8B04B2
0x8B04B0: xor     eax, eax
0x8B04B2: test    eax, eax
0x8B04B4: jz      short loc_8B04C9
0x8B04B6: mov     eax, [eax+8]
0x8B04B9: test    eax, eax
0x8B04BB: jz      short loc_8B04C9
0x8B04BD: mov     edx, [eax]
0x8B04BF: mov     ecx, eax
0x8B04C1: mov     edx, [edx+8Ch]
0x8B04C7: jmp     edx
0x8B04C9: jmp     sub_8A2760
