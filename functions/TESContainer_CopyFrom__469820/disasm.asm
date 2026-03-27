0x469820: mov     eax, [esp+arg_0]
0x469824: push    ebx
0x469825: push    esi
0x469826: push    0; int
0x469828: push    offset ??_R0?AVTESContainer@@@8; struct TypeDescriptor *
0x46982D: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x469832: push    0; int
0x469834: push    eax; void *
0x469835: mov     ebx, ecx
0x469837: call    OblivionDynamicCast
0x46983C: mov     esi, eax
0x46983E: add     esp, 14h
0x469841: test    esi, esi
0x469843: jz      short loc_4698A3
0x469845: mov     ecx, ebx
0x469847: call    TESContainer_Clear
0x46984C: test    byte ptr [esi+4], 1
0x469850: jz      short loc_469858
0x469852: or      byte ptr [ebx+4], 1
0x469856: jmp     short loc_46985C
0x469858: and     byte ptr [ebx+4], 0FEh
0x46985C: push    edi
0x46985D: lea     edi, [esi+8]
0x469860: test    edi, edi
0x469862: jz      short loc_4698A2
0x469864: push    ebp
0x469865: test    byte ptr [ebx+4], 1
0x469869: jz      short loc_46989A
0x46986B: mov     ebp, [edi]
0x46986D: test    ebp, ebp
0x46986F: jz      short loc_46989A
0x469871: push    8; Size
0x469873: call    FormHeapAlloc
0x469878: xor     esi, esi
0x46987A: add     esp, 4
0x46987D: cmp     eax, esi
0x46987F: jz      short loc_46988C
0x469881: mov     [eax+4], esi
0x469884: mov     dword ptr [eax], 1
0x46988A: mov     esi, eax
0x46988C: push    esi
0x46988D: lea     ecx, [ebx+8]
0x469890: call    BSSimpleList_PushFront
0x469895: mov     ecx, [ebp+0]
0x469898: mov     [esi], ecx
0x46989A: mov     edi, [edi+4]
0x46989D: test    edi, edi
0x46989F: jnz     short loc_469865
0x4698A1: pop     ebp
0x4698A2: pop     edi
0x4698A3: pop     esi
0x4698A4: pop     ebx
0x4698A5: retn    4
