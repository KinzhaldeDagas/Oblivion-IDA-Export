0x4B07C0: push    ecx
0x4B07C1: push    ebp
0x4B07C2: push    esi
0x4B07C3: push    edi
0x4B07C4: mov     edi, ecx
0x4B07C6: lea     ecx, [edi+24h]
0x4B07C9: xor     ebp, ebp
0x4B07CB: xor     esi, esi
0x4B07CD: call    TESLeveledList_GetCalcEachInCount
0x4B07D2: test    al, al
0x4B07D4: jz      loc_4B08C4
0x4B07DA: add     edi, 28h ; '('
0x4B07DD: cmp     edi, ebp
0x4B07DF: mov     [esp+10h+var_4], edi
0x4B07E3: jz      loc_4B090B
0x4B07E9: push    ebx
0x4B07EA: lea     ebx, [ebx+0]
0x4B07F0: mov     eax, [esp+14h+var_4]
0x4B07F4: mov     edi, [eax]
0x4B07F6: cmp     edi, ebp
0x4B07F8: jz      loc_4B08A7
0x4B07FE: cmp     esi, ebp
0x4B0800: jnz     short loc_4B081B
0x4B0802: push    8; Size
0x4B0804: call    FormHeapAlloc
0x4B0809: add     esp, 4
0x4B080C: cmp     eax, ebp
0x4B080E: jz      short loc_4B0817
0x4B0810: mov     [eax], ebp
0x4B0812: mov     [eax+4], ebp
0x4B0815: jmp     short loc_4B0819
0x4B0817: xor     eax, eax
0x4B0819: mov     esi, eax
0x4B081B: mov     ecx, [edi+4]
0x4B081E: push    ebp; int
0x4B081F: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x4B0824: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B0829: push    ebp; int
0x4B082A: push    ecx; void *
0x4B082B: call    OblivionDynamicCast
0x4B0830: mov     ebx, eax
0x4B0832: add     esp, 14h
0x4B0835: cmp     ebx, ebp
0x4B0837: jz      short loc_4B086E
0x4B0839: cmp     [esi], ebp
0x4B083B: jz      short loc_4B086A
0x4B083D: push    8; Size
0x4B083F: call    FormHeapAlloc
0x4B0844: add     esp, 4
0x4B0847: cmp     eax, ebp
0x4B0849: jz      short loc_4B085F
0x4B084B: mov     edx, [esi]
0x4B084D: mov     [eax], edx
0x4B084F: mov     [eax+4], ebp
0x4B0852: mov     ecx, [esi+4]
0x4B0855: mov     [eax+4], ecx
0x4B0858: mov     [esi+4], eax
0x4B085B: mov     [esi], ebx
0x4B085D: jmp     short loc_4B08A7
0x4B085F: mov     ecx, [esi+4]
0x4B0862: xor     eax, eax
0x4B0864: mov     [eax+4], ecx
0x4B0867: mov     [esi+4], eax
0x4B086A: mov     [esi], ebx
0x4B086C: jmp     short loc_4B08A7
0x4B086E: mov     edx, [edi+4]
0x4B0871: push    ebp; int
0x4B0872: push    offset ??_R0?AVTESLevSpell@@@8; struct TypeDescriptor *
0x4B0877: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B087C: push    ebp; int
0x4B087D: push    edx; void *
0x4B087E: call    OblivionDynamicCast
0x4B0883: add     esp, 14h
0x4B0886: cmp     eax, ebp
0x4B0888: jz      short loc_4B08A7
0x4B088A: mov     ecx, [esp+14h+arg_4]
0x4B088E: mov     edx, [esp+14h+arg_0]
0x4B0892: push    ecx
0x4B0893: push    edx
0x4B0894: mov     ecx, eax
0x4B0896: call    sub_4B0770
0x4B089B: cmp     eax, ebp
0x4B089D: jz      short loc_4B08A7
0x4B089F: push    eax
0x4B08A0: mov     ecx, esi
0x4B08A2: call    BSSimpleList_PushFront
0x4B08A7: mov     eax, [esp+14h+var_4]
0x4B08AB: mov     eax, [eax+4]
0x4B08AE: cmp     eax, ebp
0x4B08B0: mov     [esp+14h+var_4], eax
0x4B08B4: jnz     loc_4B07F0
0x4B08BA: pop     ebx
0x4B08BB: pop     edi
0x4B08BC: mov     eax, esi
0x4B08BE: pop     esi
0x4B08BF: pop     ebp
0x4B08C0: pop     ecx
0x4B08C1: retn    8
0x4B08C4: mov     ecx, [esp+10h+arg_4]
0x4B08C8: mov     edx, [esp+10h+arg_0]
0x4B08CC: push    ecx
0x4B08CD: push    edx
0x4B08CE: mov     ecx, edi
0x4B08D0: call    sub_4B0770
0x4B08D5: mov     edi, eax
0x4B08D7: cmp     edi, ebp
0x4B08D9: jz      short loc_4B090B
0x4B08DB: push    8; Size
0x4B08DD: call    FormHeapAlloc
0x4B08E2: add     esp, 4
0x4B08E5: cmp     eax, ebp
0x4B08E7: jz      short loc_4B0901
0x4B08E9: mov     esi, eax
0x4B08EB: push    edi
0x4B08EC: mov     ecx, esi
0x4B08EE: mov     [eax], ebp
0x4B08F0: mov     [eax+4], ebp
0x4B08F3: call    BSSimpleList_PushFront
0x4B08F8: pop     edi
0x4B08F9: mov     eax, esi
0x4B08FB: pop     esi
0x4B08FC: pop     ebp
0x4B08FD: pop     ecx
0x4B08FE: retn    8
0x4B0901: xor     esi, esi
0x4B0903: push    edi
0x4B0904: mov     ecx, esi
0x4B0906: call    BSSimpleList_PushFront
0x4B090B: pop     edi
0x4B090C: mov     eax, esi
0x4B090E: pop     esi
0x4B090F: pop     ebp
0x4B0910: pop     ecx
0x4B0911: retn    8
