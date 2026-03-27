0x42A440: push    ebx
0x42A441: mov     ebx, ecx
0x42A443: cmp     dword ptr [ebx+0Ch], 0
0x42A447: push    edi
0x42A448: jnz     short loc_42A46C
0x42A44A: push    8; Size
0x42A44C: call    FormHeapAlloc
0x42A451: add     esp, 4
0x42A454: test    eax, eax
0x42A456: jz      short loc_42A467
0x42A458: mov     dword ptr [eax], 0
0x42A45E: mov     dword ptr [eax+4], 0
0x42A465: jmp     short loc_42A469
0x42A467: xor     eax, eax
0x42A469: mov     [ebx+0Ch], eax
0x42A46C: mov     eax, [ebx+0Ch]
0x42A46F: test    eax, eax
0x42A471: mov     edi, [esp+8+arg_0]
0x42A475: jz      short loc_42A488
0x42A477: mov     ecx, [eax]
0x42A479: test    ecx, ecx
0x42A47B: jz      short loc_42A488
0x42A47D: cmp     [ecx], edi
0x42A47F: jz      short loc_42A4AD
0x42A481: mov     eax, [eax+4]
0x42A484: test    eax, eax
0x42A486: jnz     short loc_42A477
0x42A488: push    esi
0x42A489: push    8; Size
0x42A48B: call    FormHeapAlloc
0x42A490: mov     ecx, [ebx+0Ch]
0x42A493: add     esp, 4
0x42A496: mov     esi, eax
0x42A498: push    esi
0x42A499: call    BSSimpleList_PushFront
0x42A49E: mov     cl, [esp+0Ch+arg_4]
0x42A4A2: mov     [esi], edi
0x42A4A4: mov     [esi+4], cl
0x42A4A7: pop     esi
0x42A4A8: pop     edi
0x42A4A9: pop     ebx
0x42A4AA: retn    8
0x42A4AD: mov     al, [esp+8+arg_4]
0x42A4B1: mov     [ecx], edi
0x42A4B3: pop     edi
0x42A4B4: mov     [ecx+4], al
0x42A4B7: pop     ebx
0x42A4B8: retn    8
