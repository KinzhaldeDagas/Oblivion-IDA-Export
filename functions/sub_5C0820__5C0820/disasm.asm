0x5C0820: mov     eax, [esp+arg_0]
0x5C0824: cmp     eax, 6
0x5C0827: push    esi
0x5C0828: mov     esi, ecx
0x5C082A: jnz     loc_5C0949
0x5C0830: mov     ecx, [esi+30h]
0x5C0833: push    ebx
0x5C0834: push    ebp
0x5C0835: push    edi
0x5C0836: push    0FB5h
0x5C083B: call    Tile_GetFloat
0x5C0840: call    Double_To_SInt32
0x5C0845: mov     ebx, [esi+44h]
0x5C0848: mov     ebp, [esi+4Ch]
0x5C084B: push    3F0h
0x5C0850: mov     edi, eax
0x5C0852: call    Menu_GetOpenMenuTile
0x5C0857: add     esp, 4
0x5C085A: mov     [esp+10h+arg_0], eax
0x5C085E: call    sub_5C07D0
0x5C0863: mov     eax, [esi+50h]
0x5C0866: test    eax, eax
0x5C0868: jz      short loc_5C08C6
0x5C086A: add     eax, 44h ; 'D'
0x5C086D: mov     ecx, eax
0x5C086F: call    ExtraDataList_GetExtraCount
0x5C0874: mov     ecx, ds:0B333C4h
0x5C087A: push    0
0x5C087C: push    0
0x5C087E: movsx   ebx, ax
0x5C0881: mov     eax, [esi+50h]
0x5C0884: push    edi
0x5C0885: push    eax
0x5C0886: sub     ebx, edi
0x5C0888: call    sub_4DDC40
0x5C088D: test    ebx, ebx
0x5C088F: mov     ecx, [esi+50h]
0x5C0892: jle     short loc_5C08AB
0x5C0894: push    ebx
0x5C0895: add     ecx, 44h ; 'D'
0x5C0898: call    ExtraDataList_SetExtraCount
0x5C089D: pop     edi
0x5C089E: pop     ebp
0x5C089F: pop     ebx
0x5C08A0: mov     dword ptr [esi+50h], 0
0x5C08A7: pop     esi
0x5C08A8: retn    8
0x5C08AB: test    ecx, ecx
0x5C08AD: jz      short loc_5C08B8
0x5C08AF: mov     edx, [ecx]
0x5C08B1: mov     eax, [edx+10h]
0x5C08B4: push    1
0x5C08B6: call    eax
0x5C08B8: pop     edi
0x5C08B9: pop     ebp
0x5C08BA: pop     ebx
0x5C08BB: mov     dword ptr [esi+50h], 0
0x5C08C2: pop     esi
0x5C08C3: retn    8
0x5C08C6: mov     ecx, [esp+10h+arg_0]
0x5C08CA: test    ecx, ecx
0x5C08CC: jz      short loc_5C0902
0x5C08CE: push    0; int
0x5C08D0: push    offset ??_R0?AVContainerMenu@@@8; struct TypeDescriptor *
0x5C08D5: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5C08DA: push    0; int
0x5C08DC: call    Tile_GetParentMenu
0x5C08E1: push    eax; void *
0x5C08E2: call    OblivionDynamicCast
0x5C08E7: add     esp, 14h
0x5C08EA: mov     ds:0B13E94h, edi
0x5C08F0: mov     edx, [eax]
0x5C08F2: push    ebp
0x5C08F3: mov     ecx, eax
0x5C08F5: mov     eax, [edx+0Ch]
0x5C08F8: push    ebx
0x5C08F9: call    eax
0x5C08FB: pop     edi
0x5C08FC: pop     ebp
0x5C08FD: pop     ebx
0x5C08FE: pop     esi
0x5C08FF: retn    8
0x5C0902: push    3EAh
0x5C0907: call    Menu_GetOpenMenuTile
0x5C090C: add     esp, 4
0x5C090F: test    eax, eax
0x5C0911: jz      short loc_5C08FB
0x5C0913: push    0; int
0x5C0915: push    offset ??_R0?AVInventoryMenu@@@8; struct TypeDescriptor *
0x5C091A: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5C091F: push    0; int
0x5C0921: mov     ecx, eax
0x5C0923: call    Tile_GetParentMenu
0x5C0928: push    eax; void *
0x5C0929: call    OblivionDynamicCast
0x5C092E: add     esp, 14h
0x5C0931: mov     ds:0B140E4h, edi
0x5C0937: mov     edx, [eax]
0x5C0939: push    ebp
0x5C093A: mov     ecx, eax
0x5C093C: mov     eax, [edx+0Ch]
0x5C093F: push    ebx
0x5C0940: call    eax
0x5C0942: pop     edi
0x5C0943: pop     ebp
0x5C0944: pop     ebx
0x5C0945: pop     esi
0x5C0946: retn    8
0x5C0949: cmp     eax, 7
0x5C094C: jnz     short loc_5C08FE
0x5C094E: push    3EAh
0x5C0953: call    Menu_GetOpenMenuTile
0x5C0958: add     esp, 4
0x5C095B: test    eax, eax
0x5C095D: jz      short loc_5C0988
0x5C095F: push    0; int
0x5C0961: push    offset ??_R0?AVInventoryMenu@@@8; struct TypeDescriptor *
0x5C0966: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5C096B: push    0; int
0x5C096D: mov     ecx, eax
0x5C096F: call    Tile_GetParentMenu
0x5C0974: push    eax; void *
0x5C0975: call    OblivionDynamicCast
0x5C097A: add     esp, 14h
0x5C097D: test    eax, eax
0x5C097F: jz      short loc_5C0988
0x5C0981: mov     byte ptr ds:0B3B3D8h, 0
0x5C0988: call    sub_5C07D0
0x5C098D: pop     esi
0x5C098E: retn    8
