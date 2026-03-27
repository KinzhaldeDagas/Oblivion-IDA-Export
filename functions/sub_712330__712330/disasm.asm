0x712330: push    ebx
0x712331: mov     ebx, [esp+4+arg_0]
0x712335: push    ebp
0x712336: push    esi
0x712337: mov     esi, ecx
0x712339: mov     eax, [esi]
0x71233B: mov     edx, [eax+4]
0x71233E: push    edi
0x71233F: push    ebx
0x712340: call    edx
0x712342: mov     ebp, eax
0x712344: mov     eax, [esi+8]
0x712347: mov     edi, [eax+ebp*4]
0x71234A: test    edi, edi
0x71234C: jz      short loc_712368
0x71234E: mov     edi, edi
0x712350: mov     eax, [edi+4]
0x712353: mov     edx, [esi]
0x712355: mov     edx, [edx+8]
0x712358: push    eax
0x712359: push    ebx
0x71235A: mov     ecx, esi
0x71235C: call    edx
0x71235E: test    al, al
0x712360: jnz     short loc_71239C
0x712362: mov     edi, [edi]
0x712364: test    edi, edi
0x712366: jnz     short loc_712350
0x712368: mov     edx, [esi]
0x71236A: mov     eax, [edx+14h]
0x71236D: mov     ecx, esi
0x71236F: call    eax
0x712371: mov     edx, [esi]
0x712373: mov     edx, [edx+0Ch]
0x712376: mov     edi, eax
0x712378: mov     eax, [esp+10h+arg_4]
0x71237C: push    eax
0x71237D: push    ebx
0x71237E: push    edi
0x71237F: mov     ecx, esi
0x712381: call    edx
0x712383: mov     eax, [esi+8]
0x712386: mov     ecx, [eax+ebp*4]
0x712389: mov     [edi], ecx
0x71238B: mov     edx, [esi+8]
0x71238E: mov     [edx+ebp*4], edi
0x712391: add     dword ptr [esi+0Ch], 1
0x712395: pop     edi
0x712396: pop     esi
0x712397: pop     ebp
0x712398: pop     ebx
0x712399: retn    8
0x71239C: cmp     byte ptr [esi+10h], 0
0x7123A0: jnz     short loc_7123A5
0x7123A2: mov     [edi+4], ebx
0x7123A5: mov     ax, word ptr [esp+10h+arg_4]
0x7123AA: mov     [edi+8], ax
0x7123AE: pop     edi
0x7123AF: pop     esi
0x7123B0: pop     ebp
0x7123B1: pop     ebx
0x7123B2: retn    8
