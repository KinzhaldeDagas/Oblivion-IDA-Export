0x5FB3D6: lea     ecx, [esi+44h]; this
0x5FB3D9: call    ExtraDataList_GetContainerChanges
0x5FB3DE: mov     ebp, eax
0x5FB3E0: test    ebp, ebp
0x5FB3E2: jz      loc_5FB47E
0x5FB3E8: push    0
0x5FB3EA: mov     ecx, ebp
0x5FB3EC: call    ContainerExtraData_GetBestApparatusExtraEntryData
0x5FB3F1: push    1
0x5FB3F3: mov     ecx, ebp
0x5FB3F5: mov     ebx, eax
0x5FB3F7: call    ContainerExtraData_GetBestApparatusExtraEntryData
0x5FB3FC: push    2
0x5FB3FE: mov     ecx, ebp
0x5FB400: mov     [esp+4+arg_38], eax
0x5FB404: call    ContainerExtraData_GetBestApparatusExtraEntryData
0x5FB409: push    3
0x5FB40B: mov     ecx, ebp
0x5FB40D: mov     [esp+4+arg_3C], eax
0x5FB411: call    ContainerExtraData_GetBestApparatusExtraEntryData
0x5FB416: test    ebx, ebx
0x5FB418: mov     ebp, eax
0x5FB41A: jz      short loc_5FB43A
0x5FB41C: call    sub_57CC00
0x5FB421: mov     edx, [esp+arg_3C]
0x5FB425: mov     eax, [esp+arg_38]
0x5FB429: push    ebp
0x5FB42A: push    edx
0x5FB42B: push    eax
0x5FB42C: push    ebx
0x5FB42D: call    AlchMenu_Create
0x5FB432: add     esp, 10h
0x5FB435: jmp     loc_5FB685
0x5FB43A: mov     esi, [esp+arg_38]
0x5FB43E: test    esi, esi
0x5FB440: jz      short loc_5FB452
0x5FB442: mov     ecx, esi
0x5FB444: call    ContainerEntryExtraData_DestroyDataTable
0x5FB449: push    esi
0x5FB44A: call    FormHeapFree
0x5FB44F: add     esp, 4
0x5FB452: mov     esi, [esp+arg_3C]
0x5FB456: test    esi, esi
0x5FB458: jz      short loc_5FB46A
0x5FB45A: mov     ecx, esi
0x5FB45C: call    ContainerEntryExtraData_DestroyDataTable
0x5FB461: push    esi
0x5FB462: call    FormHeapFree
0x5FB467: add     esp, 4
0x5FB46A: test    ebp, ebp
0x5FB46C: jz      short loc_5FB47E
0x5FB46E: mov     ecx, ebp
0x5FB470: call    ContainerEntryExtraData_DestroyDataTable
0x5FB475: push    ebp
0x5FB476: call    FormHeapFree
0x5FB47B: add     esp, 4
0x5FB47E: mov     ecx, ds:0B38CF0h
0x5FB484: mov     edx, ds:0B388D8h
0x5FB48A: push    0
0x5FB48C: push    ecx
0x5FB48D: push    1
0x5FB48F: push    0
0x5FB491: push    edx
0x5FB492: call    ShowUIMessageBox
0x5FB497: add     esp, 14h
0x5FB49A: jmp     loc_5FB98E
