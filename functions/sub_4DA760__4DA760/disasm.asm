0x4DA760: push    ecx
0x4DA761: push    ebx
0x4DA762: mov     ebx, [esp+8+arg_0]
0x4DA766: test    ebx, ebx
0x4DA768: mov     [esp+8+var_4], 2
0x4DA770: jz      short loc_4DA7DF
0x4DA772: mov     al, [ebx+8]
0x4DA775: shr     al, 3
0x4DA778: test    al, 1
0x4DA77A: jz      short loc_4DA7DF
0x4DA77C: push    edi
0x4DA77D: xor     edi, edi
0x4DA77F: cmp     [ebx+46h], di
0x4DA783: jbe     short loc_4DA7D6
0x4DA785: push    ebp
0x4DA786: mov     bp, word ptr [esp+10h+var_4]
0x4DA78B: push    esi
0x4DA78C: lea     esp, [esp+0]
0x4DA790: mov     ecx, [ebx+40h]
0x4DA793: mov     ecx, [ecx+edi*4]
0x4DA796: test    ecx, ecx
0x4DA798: jz      short loc_4DA7C2
0x4DA79A: cmp     dword ptr [ecx+44h], 0
0x4DA79E: jz      short loc_4DA7C2
0x4DA7A0: mov     eax, [ecx+8]
0x4DA7A3: lea     esi, [eax+1]
0x4DA7A6: mov     dl, [eax]
0x4DA7A8: add     eax, 1
0x4DA7AB: test    dl, dl
0x4DA7AD: jnz     short loc_4DA7A6
0x4DA7AF: sub     eax, esi
0x4DA7B1: mov     esi, eax
0x4DA7B3: call    sub_49F550
0x4DA7B8: add     ax, si
0x4DA7BB: add     ax, 1
0x4DA7BF: add     bp, ax
0x4DA7C2: movzx   edx, word ptr [ebx+46h]
0x4DA7C6: add     edi, 1
0x4DA7C9: cmp     edi, edx
0x4DA7CB: jb      short loc_4DA790
0x4DA7CD: pop     esi
0x4DA7CE: mov     ax, bp
0x4DA7D1: pop     ebp
0x4DA7D2: pop     edi
0x4DA7D3: pop     ebx
0x4DA7D4: pop     ecx
0x4DA7D5: retn
0x4DA7D6: mov     ax, word ptr [esp+0Ch+var_4]
0x4DA7DB: pop     edi
0x4DA7DC: pop     ebx
0x4DA7DD: pop     ecx
0x4DA7DE: retn
0x4DA7DF: mov     ax, word ptr [esp+8+var_4]
0x4DA7E4: pop     ebx
0x4DA7E5: pop     ecx
0x4DA7E6: retn
