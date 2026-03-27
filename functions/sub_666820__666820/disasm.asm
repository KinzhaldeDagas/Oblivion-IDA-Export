0x666820: mov     eax, [esp+a7]
0x666824: push    ebx
0x666825: push    esi
0x666826: push    edi
0x666827: mov     edi, [esp+0Ch+a6]
0x66682B: push    eax; a7
0x66682C: push    edi; a6
0x66682D: mov     esi, ecx
0x66682F: call    sub_5E4440
0x666834: mov     eax, [edi+0Ch]
0x666837: push    eax
0x666838: push    edi
0x666839: mov     ecx, esi
0x66683B: call    sub_4D8D70
0x666840: mov     ebx, eax
0x666842: test    ebx, ebx
0x666844: jz      short loc_666864
0x666846: mov     ecx, ebx
0x666848: call    ContainerEntryExtraData_DestroyDataTable
0x66684D: push    ebx
0x66684E: call    FormHeapFree
0x666853: add     esp, 4
0x666856: push    edi
0x666857: mov     ecx, esi
0x666859: call    sub_664850
0x66685E: pop     edi
0x66685F: pop     esi
0x666860: pop     ebx
0x666861: retn    8
0x666864: cmp     dword ptr [esi+628h], 0
0x66686B: jz      short loc_666876
0x66686D: push    0
0x66686F: mov     ecx, esi
0x666871: call    PlayerCharacter_SetCurrentMagicItem
0x666876: push    0
0x666878: mov     ecx, esi
0x66687A: mov     dword ptr [esi+628h], 0
0x666884: call    PlayerCharacter_SetCurrentMagicItem
0x666889: pop     edi
0x66688A: pop     esi
0x66688B: pop     ebx
0x66688C: retn    8
