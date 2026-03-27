0x88B430: push    ebx
0x88B431: push    esi
0x88B432: mov     esi, ecx
0x88B434: mov     eax, [esi]
0x88B436: mov     edx, [eax+58h]
0x88B439: push    edi
0x88B43A: xor     bl, bl
0x88B43C: call    edx
0x88B43E: test    eax, eax
0x88B440: jz      loc_88B4D6
0x88B446: mov     edi, [esp+0Ch+arg_0]
0x88B44A: test    edi, edi
0x88B44C: jz      loc_88B4D6
0x88B452: cmp     dword ptr [esi+20h], 0
0x88B456: mov     ecx, [edi+0Ch]
0x88B459: jbe     short loc_88B4B9
0x88B45B: test    ecx, ecx
0x88B45D: jz      short loc_88B4B1
0x88B45F: mov     eax, [ecx+18h]
0x88B462: test    al, 30h
0x88B464: jnz     short loc_88B4B1
0x88B466: or      eax, 20h
0x88B469: mov     [ecx+18h], eax
0x88B46C: cmp     dword ptr [esi+4Ch], 0BB8h
0x88B473: jb      short loc_88B491
0x88B475: mov     ecx, esi
0x88B477: call    sub_88A440
0x88B47C: mov     ecx, esi
0x88B47E: call    sub_88A3A0
0x88B483: mov     ecx, esi
0x88B485: call    sub_88A310
0x88B48A: mov     ecx, esi
0x88B48C: call    sub_88A280
0x88B491: mov     ecx, edi
0x88B493: call    sub_8BC720
0x88B498: mov     eax, [esi+4Ch]
0x88B49B: mov     ecx, [esi+48h]
0x88B49E: mov     [ecx+eax*4], edi
0x88B4A1: mov     ebx, 1
0x88B4A6: add     [esi+4Ch], ebx
0x88B4A9: pop     edi
0x88B4AA: pop     esi
0x88B4AB: mov     al, bl
0x88B4AD: pop     ebx
0x88B4AE: retn    4
0x88B4B1: pop     edi
0x88B4B2: pop     esi
0x88B4B3: mov     al, 1
0x88B4B5: pop     ebx
0x88B4B6: retn    4
0x88B4B9: test    ecx, ecx
0x88B4BB: jz      short loc_88B4B1
0x88B4BD: test    byte ptr [ecx+18h], 30h
0x88B4C1: jnz     short loc_88B4B1
0x88B4C3: push    edi
0x88B4C4: lea     edx, [esp+10h+arg_0]
0x88B4C8: push    edx
0x88B4C9: mov     ecx, eax
0x88B4CB: call    sub_8996C0
0x88B4D0: cmp     byte ptr [eax], 0
0x88B4D3: setnz   bl
0x88B4D6: pop     edi
0x88B4D7: pop     esi
0x88B4D8: mov     al, bl
0x88B4DA: pop     ebx
0x88B4DB: retn    4
