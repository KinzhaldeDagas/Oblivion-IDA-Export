0x70E970: push    esi
0x70E971: push    edi
0x70E972: mov     edi, [esp+8+a2]
0x70E976: push    edi; a2
0x70E977: mov     esi, ecx
0x70E979: call    sub_700670
0x70E97E: test    al, al
0x70E980: jnz     short loc_70E989
0x70E982: pop     edi
0x70E983: xor     al, al
0x70E985: pop     esi
0x70E986: retn    4
0x70E989: lea     eax, [edi+8]
0x70E98C: push    eax
0x70E98D: lea     ecx, [esi+8]
0x70E990: call    sub_70E260
0x70E995: test    al, al
0x70E997: jnz     short loc_70E982
0x70E999: mov     ecx, [esi+4Ch]
0x70E99C: test    ecx, ecx
0x70E99E: jz      short loc_70E9AF
0x70E9A0: mov     eax, [edi+4Ch]
0x70E9A3: mov     edx, [ecx]
0x70E9A5: push    eax
0x70E9A6: mov     eax, [edx+2Ch]
0x70E9A9: call    eax
0x70E9AB: test    al, al
0x70E9AD: jz      short loc_70E982
0x70E9AF: mov     edx, [esi+60h]
0x70E9B2: cmp     edx, [edi+60h]
0x70E9B5: jnz     short loc_70E982
0x70E9B7: mov     ecx, [esi+64h]
0x70E9BA: cmp     ecx, [edi+64h]
0x70E9BD: jnz     short loc_70E982
0x70E9BF: push    ebx
0x70E9C0: xor     eax, eax
0x70E9C2: test    edx, edx
0x70E9C4: push    ebp
0x70E9C5: jbe     short loc_70EA03
0x70E9C7: mov     ecx, [esi+54h]
0x70E9CA: mov     ebx, [edi+54h]
0x70E9CD: sub     ebx, ecx
0x70E9CF: nop
0x70E9D0: mov     ecx, [esi+54h]
0x70E9D3: mov     ebp, [ecx+eax*4]
0x70E9D6: lea     ecx, [ecx+eax*4]
0x70E9D9: cmp     ebp, [ebx+ecx]
0x70E9DC: jnz     short loc_70EA1F
0x70E9DE: mov     ebp, [esi+58h]
0x70E9E1: mov     ecx, [edi+58h]
0x70E9E4: mov     ebp, [ebp+eax*4+0]
0x70E9E8: cmp     ebp, [ecx+eax*4]
0x70E9EB: jnz     short loc_70EA1F
0x70E9ED: mov     ebp, [esi+5Ch]
0x70E9F0: mov     ecx, [edi+5Ch]
0x70E9F3: mov     ebp, [ebp+eax*4+0]
0x70E9F7: cmp     ebp, [ecx+eax*4]
0x70E9FA: jnz     short loc_70EA1F
0x70E9FC: add     eax, 1
0x70E9FF: cmp     eax, edx
0x70EA01: jb      short loc_70E9D0
0x70EA03: mov     ecx, [esi+5Ch]
0x70EA06: mov     ebx, [edi+5Ch]
0x70EA09: mov     eax, edx
0x70EA0B: add     eax, eax
0x70EA0D: add     eax, eax
0x70EA0F: mov     ebp, [eax+ecx]
0x70EA12: cmp     ebp, [eax+ebx]
0x70EA15: jnz     short loc_70EA1F
0x70EA17: mov     eax, [esi+6Ch]
0x70EA1A: cmp     eax, [edi+6Ch]
0x70EA1D: jz      short loc_70EA28
0x70EA1F: pop     ebp
0x70EA20: pop     ebx
0x70EA21: pop     edi
0x70EA22: xor     al, al
0x70EA24: pop     esi
0x70EA25: retn    4
0x70EA28: mov     eax, [ecx+edx*4]
0x70EA2B: cmp     eax, 4
0x70EA2E: mov     ecx, [edi+50h]
0x70EA31: mov     edx, [esi+50h]
0x70EA34: jb      short loc_70EA4A
0x70EA36: mov     esi, [edx]
0x70EA38: cmp     esi, [ecx]
0x70EA3A: jnz     short loc_70EA4E
0x70EA3C: sub     eax, 4
0x70EA3F: add     ecx, 4
0x70EA42: add     edx, 4
0x70EA45: cmp     eax, 4
0x70EA48: jnb     short loc_70EA36
0x70EA4A: test    eax, eax
0x70EA4C: jz      short loc_70EAB5
0x70EA4E: movzx   esi, byte ptr [edx]
0x70EA51: movzx   edi, byte ptr [ecx]
0x70EA54: sub     esi, edi
0x70EA56: jnz     short loc_70EA9D
0x70EA58: sub     eax, 1
0x70EA5B: add     ecx, 1
0x70EA5E: add     edx, 1
0x70EA61: test    eax, eax
0x70EA63: jz      short loc_70EAB5
0x70EA65: movzx   esi, byte ptr [edx]
0x70EA68: movzx   edi, byte ptr [ecx]
0x70EA6B: sub     esi, edi
0x70EA6D: jnz     short loc_70EA9D
0x70EA6F: sub     eax, 1
0x70EA72: add     ecx, 1
0x70EA75: add     edx, 1
0x70EA78: test    eax, eax
0x70EA7A: jz      short loc_70EAB5
0x70EA7C: movzx   esi, byte ptr [edx]
0x70EA7F: movzx   edi, byte ptr [ecx]
0x70EA82: sub     esi, edi
0x70EA84: jnz     short loc_70EA9D
0x70EA86: sub     eax, 1
0x70EA89: add     ecx, 1
0x70EA8C: add     edx, 1
0x70EA8F: test    eax, eax
0x70EA91: jz      short loc_70EAB5
0x70EA93: movzx   esi, byte ptr [edx]
0x70EA96: movzx   ecx, byte ptr [ecx]
0x70EA99: sub     esi, ecx
0x70EA9B: jz      short loc_70EAB5
0x70EA9D: test    esi, esi
0x70EA9F: mov     eax, 1
0x70EAA4: jg      short loc_70EAB7
0x70EAA6: pop     ebp
0x70EAA7: or      eax, 0FFFFFFFFh
0x70EAAA: pop     ebx
0x70EAAB: test    eax, eax
0x70EAAD: pop     edi
0x70EAAE: setz    al
0x70EAB1: pop     esi
0x70EAB2: retn    4
0x70EAB5: xor     eax, eax
0x70EAB7: pop     ebp
0x70EAB8: pop     ebx
0x70EAB9: test    eax, eax
0x70EABB: pop     edi
0x70EABC: setz    al
0x70EABF: pop     esi
0x70EAC0: retn    4
