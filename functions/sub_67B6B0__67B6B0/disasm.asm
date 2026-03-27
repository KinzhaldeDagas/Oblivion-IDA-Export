0x67B6B0: mov     edx, [ecx]
0x67B6B2: push    esi
0x67B6B3: push    edi
0x67B6B4: xor     eax, eax
0x67B6B6: xor     esi, esi
0x67B6B8: xor     edi, edi
0x67B6BA: test    edx, edx
0x67B6BC: jz      short loc_67B6E6
0x67B6BE: push    ebx
0x67B6BF: mov     ebx, [esp+0Ch+arg_0]
0x67B6C3: mov     ecx, [edx]
0x67B6C5: test    ecx, ecx
0x67B6C7: jz      short loc_67B6E5
0x67B6C9: cmp     [ecx], ebx
0x67B6CB: jz      short loc_67B6E3
0x67B6CD: cmp     [ecx+4], al
0x67B6D0: jz      short loc_67B6D7
0x67B6D2: add     edi, 1
0x67B6D5: jmp     short loc_67B6DA
0x67B6D7: add     esi, 1
0x67B6DA: mov     edx, [edx+4]
0x67B6DD: test    edx, edx
0x67B6DF: jnz     short loc_67B6C3
0x67B6E1: jmp     short loc_67B6E5
0x67B6E3: mov     eax, ecx
0x67B6E5: pop     ebx
0x67B6E6: mov     edx, [esp+8+arg_4]
0x67B6EA: test    edx, edx
0x67B6EC: jz      short loc_67B6FE
0x67B6EE: test    eax, eax
0x67B6F0: jz      short loc_67B6FE
0x67B6F2: cmp     byte ptr [eax+4], 0
0x67B6F6: mov     ecx, edi
0x67B6F8: jnz     short loc_67B6FC
0x67B6FA: mov     ecx, esi
0x67B6FC: mov     [edx], ecx
0x67B6FE: pop     edi
0x67B6FF: pop     esi
0x67B700: retn    8
