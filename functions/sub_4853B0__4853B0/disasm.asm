0x4853B0: push    0FFFFFFFFh
0x4853B2: push    offset SEH_787830
0x4853B7: mov     eax, large fs:0
0x4853BD: push    eax
0x4853BE: push    ebp
0x4853BF: push    esi
0x4853C0: push    edi
0x4853C1: mov     eax, ds:0B30AACh
0x4853C6: xor     eax, esp
0x4853C8: push    eax
0x4853C9: lea     eax, [esp+1Ch+var_C]
0x4853CD: mov     large fs:0, eax
0x4853D3: mov     esi, ecx
0x4853D5: cmp     byte ptr [esp+1Ch+arg_0], 0
0x4853DA: jz      loc_48547D
0x4853E0: push    14h; Size
0x4853E2: call    FormHeapAlloc
0x4853E7: add     esp, 4
0x4853EA: mov     [esp+1Ch+arg_0], eax
0x4853EE: test    eax, eax
0x4853F0: mov     [esp+1Ch+var_4], 0
0x4853F8: jz      short loc_485405
0x4853FA: mov     ecx, eax
0x4853FC: call    ExtraDataList_constr
0x485401: mov     edi, eax
0x485403: jmp     short loc_485407
0x485405: xor     edi, edi
0x485407: mov     eax, [esp+1Ch+arg_4]
0x48540B: push    eax
0x48540C: push    1
0x48540E: mov     ecx, edi
0x485410: mov     [esp+24h+var_4], 0FFFFFFFFh
0x485418: call    SetWorn
0x48541D: cmp     dword ptr [esi], 0
0x485420: jnz     short loc_485460
0x485422: push    8; Size
0x485424: call    FormHeapAlloc
0x485429: add     esp, 4
0x48542C: test    eax, eax
0x48542E: jz      short loc_48545C
0x485430: mov     dword ptr [eax], 0
0x485436: mov     dword ptr [eax+4], 0
0x48543D: push    edi
0x48543E: mov     ecx, eax
0x485440: mov     [esi], eax
0x485442: call    BSSimpleList_PushFront
0x485447: mov     ecx, [esp+1Ch+var_C]
0x48544B: mov     large fs:0, ecx
0x485452: pop     ecx
0x485453: pop     edi
0x485454: pop     esi
0x485455: pop     ebp
0x485456: add     esp, 0Ch
0x485459: retn    0Ch
0x48545C: xor     eax, eax
0x48545E: mov     [esi], eax
0x485460: mov     ecx, [esi]
0x485462: push    edi
0x485463: call    BSSimpleList_PushFront
0x485468: mov     ecx, [esp+1Ch+var_C]
0x48546C: mov     large fs:0, ecx
0x485473: pop     ecx
0x485474: pop     edi
0x485475: pop     esi
0x485476: pop     ebp
0x485477: add     esp, 0Ch
0x48547A: retn    0Ch
0x48547D: mov     ebp, [esp+1Ch+arg_4]
0x485481: push    ebp
0x485482: call    ContainerEntryExtraData_HasWorn
0x485487: test    al, al
0x485489: jz      short loc_4854D8
0x48548B: mov     esi, [esi]
0x48548D: test    esi, esi
0x48548F: jz      short loc_4854D8
0x485491: mov     edi, [esi]
0x485493: test    edi, edi
0x485495: jz      short loc_4854D8
0x485497: push    ebp
0x485498: mov     ecx, edi
0x48549A: call    ExtraDataList_HasWorn
0x48549F: test    al, al
0x4854A1: jnz     short loc_4854BF
0x4854A3: mov     esi, [esi+4]
0x4854A6: test    esi, esi
0x4854A8: jnz     short loc_485491
0x4854AA: mov     ecx, [esp+1Ch+var_C]
0x4854AE: mov     large fs:0, ecx
0x4854B5: pop     ecx
0x4854B6: pop     edi
0x4854B7: pop     esi
0x4854B8: pop     ebp
0x4854B9: add     esp, 0Ch
0x4854BC: retn    0Ch
0x4854BF: push    edi
0x4854C0: mov     ecx, esi
0x4854C2: call    BSSimpleList_Remove
0x4854C7: cmp     [esp+1Ch+arg_8], 0
0x4854CC: jz      short loc_4854D8
0x4854CE: mov     edx, [edi]
0x4854D0: mov     eax, [edx]
0x4854D2: push    1
0x4854D4: mov     ecx, edi
0x4854D6: call    eax
0x4854D8: mov     ecx, [esp+1Ch+var_C]
0x4854DC: mov     large fs:0, ecx
0x4854E3: pop     ecx
0x4854E4: pop     edi
0x4854E5: pop     esi
0x4854E6: pop     ebp
0x4854E7: add     esp, 0Ch
0x4854EA: retn    0Ch
