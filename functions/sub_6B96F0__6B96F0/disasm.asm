0x6B96F0: push    ebx
0x6B96F1: push    ebp
0x6B96F2: push    esi
0x6B96F3: mov     esi, [ecx+14h]
0x6B96F6: push    edi
0x6B96F7: mov     edi, [ecx+1Ch]
0x6B96FA: xor     eax, eax
0x6B96FC: test    edi, edi
0x6B96FE: jbe     short loc_6B9742
0x6B9700: mov     ebp, [esp+10h+arg_0]
0x6B9704: mov     ecx, [esi+8]
0x6B9707: mov     ecx, [ecx+8]
0x6B970A: mov     edx, ebp
0x6B970C: lea     esp, [esp+0]
0x6B9710: mov     bl, [ecx]
0x6B9712: cmp     bl, [edx]
0x6B9714: jnz     short loc_6B9730
0x6B9716: test    bl, bl
0x6B9718: jz      short loc_6B972C
0x6B971A: mov     bl, [ecx+1]
0x6B971D: cmp     bl, [edx+1]
0x6B9720: jnz     short loc_6B9730
0x6B9722: add     ecx, 2
0x6B9725: add     edx, 2
0x6B9728: test    bl, bl
0x6B972A: jnz     short loc_6B9710
0x6B972C: xor     ecx, ecx
0x6B972E: jmp     short loc_6B9735
0x6B9730: sbb     ecx, ecx
0x6B9732: sbb     ecx, 0FFFFFFFFh
0x6B9735: test    ecx, ecx
0x6B9737: jz      short loc_6B9745
0x6B9739: mov     esi, [esi]
0x6B973B: add     eax, 1
0x6B973E: cmp     eax, edi
0x6B9740: jb      short loc_6B9704
0x6B9742: or      eax, 0FFFFFFFFh
0x6B9745: pop     edi
0x6B9746: pop     esi
0x6B9747: pop     ebp
0x6B9748: pop     ebx
0x6B9749: retn    4
