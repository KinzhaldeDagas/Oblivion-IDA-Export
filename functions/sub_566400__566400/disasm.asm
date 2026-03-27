0x566400: mov     eax, [esp+arg_0]
0x566404: push    esi
0x566405: push    edi
0x566406: push    0; int
0x566408: push    offset ??_R0?AVTESPackage@@@8; struct TypeDescriptor *
0x56640D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x566412: push    0; int
0x566414: push    eax; void *
0x566415: mov     edi, ecx
0x566417: call    OblivionDynamicCast
0x56641C: mov     esi, eax
0x56641E: add     esp, 14h
0x566421: test    esi, esi
0x566423: jz      short loc_566455
0x566425: push    esi; a2
0x566426: mov     ecx, edi; this
0x566428: call    TESForm_CompareAllComponentsTo
0x56642D: test    al, al
0x56642F: jnz     short loc_566455
0x566431: mov     cl, [edi+20h]
0x566434: cmp     cl, [esi+20h]
0x566437: jnz     short loc_566455
0x566439: mov     edx, [edi+1Ch]
0x56643C: cmp     edx, [esi+1Ch]
0x56643F: jnz     short loc_566455
0x566441: mov     ecx, [edi+24h]
0x566444: test    ecx, ecx
0x566446: jz      short loc_56645C
0x566448: mov     eax, [esi+24h]
0x56644B: push    eax
0x56644C: call    sub_569940
0x566451: test    al, al
0x566453: jz      short loc_566462
0x566455: pop     edi
0x566456: mov     al, 1
0x566458: pop     esi
0x566459: retn    4
0x56645C: cmp     dword ptr [esi+24h], 0
0x566460: jnz     short loc_566476
0x566462: mov     ecx, [edi+28h]
0x566465: test    ecx, ecx
0x566467: jz      short loc_56647D
0x566469: mov     eax, [esi+28h]
0x56646C: push    eax
0x56646D: call    sub_569F70
0x566472: test    al, al
0x566474: jz      short loc_566483
0x566476: pop     edi
0x566477: mov     al, 1
0x566479: pop     esi
0x56647A: retn    4
0x56647D: cmp     dword ptr [esi+28h], 0
0x566481: jnz     short loc_566455
0x566483: lea     ecx, [edi+2Ch]
0x566486: test    ecx, ecx
0x566488: jz      short loc_56649E
0x56648A: lea     eax, [esi+2Ch]
0x56648D: push    eax
0x56648E: call    sub_569E00
0x566493: test    al, al
0x566495: jz      short loc_5664A5
0x566497: pop     edi
0x566498: mov     al, 1
0x56649A: pop     esi
0x56649B: retn    4
0x56649E: lea     ecx, [esi+2Ch]
0x5664A1: test    ecx, ecx
0x5664A3: jnz     short loc_566455
0x5664A5: lea     ecx, [edi+34h]
0x5664A8: test    ecx, ecx
0x5664AA: jz      short loc_5664C0
0x5664AC: add     esi, 34h ; '4'
0x5664AF: push    esi
0x5664B0: call    sub_56A4B0
0x5664B5: test    al, al
0x5664B7: jz      short loc_5664C5
0x5664B9: pop     edi
0x5664BA: mov     al, 1
0x5664BC: pop     esi
0x5664BD: retn    4
0x5664C0: add     esi, 34h ; '4'
0x5664C3: jnz     short loc_566455
0x5664C5: pop     edi
0x5664C6: xor     al, al
0x5664C8: pop     esi
0x5664C9: retn    4
