0x7077A0: mov     eax, [ecx+9Ch]
0x7077A6: test    eax, eax
0x7077A8: jz      short loc_7077C5
0x7077AA: lea     ebx, [ebx+0]
0x7077B0: lea     ecx, [eax+8]
0x7077B3: mov     ecx, [ecx]
0x7077B5: test    ecx, ecx
0x7077B7: mov     eax, [eax]
0x7077B9: jz      short loc_7077C1
0x7077BB: cmp     dword ptr [ecx+0Ch], 0
0x7077BF: jnz     short loc_7077C8
0x7077C1: test    eax, eax
0x7077C3: jnz     short loc_7077B0
0x7077C5: xor     al, al
0x7077C7: retn
0x7077C8: mov     al, 1
0x7077CA: retn
