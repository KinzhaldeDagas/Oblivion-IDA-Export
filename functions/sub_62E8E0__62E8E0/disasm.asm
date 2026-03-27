0x62E8E0: fild    dword ptr ds:0B36A50h
0x62E8E6: push    ebp
0x62E8E7: push    esi
0x62E8E8: mov     esi, [esp+8+arg_0]
0x62E8EC: mov     eax, [esi]
0x62E8EE: mov     edx, [eax+174h]
0x62E8F4: push    esi; a7
0x62E8F5: push    offset sub_62E890; a6
0x62E8FA: push    ecx
0x62E8FB: mov     ecx, esi
0x62E8FD: fstp    [esp+14h+a5]; a5
0x62E900: call    edx
0x62E902: fild    dword ptr ds:0B36A50h
0x62E908: push    eax; a4
0x62E909: mov     eax, [esi]
0x62E90B: mov     edx, [eax+174h]
0x62E911: push    ecx
0x62E912: mov     ecx, esi
0x62E914: fstp    [esp+1Ch+a3]; a3
0x62E917: call    edx
0x62E919: push    eax; a2
0x62E91A: mov     ecx, esi; this
0x62E91C: call    TESObjectREFR_GetParentCell
0x62E921: mov     ecx, ds:0B33A98h
0x62E927: push    eax; a1
0x62E928: call    sub_446B90
0x62E92D: mov     eax, [esp+8+arg_4]
0x62E931: push    offset dword_B3B944
0x62E936: push    eax
0x62E937: mov     ecx, offset ActorProcessManager_ptr
0x62E93C: call    sub_6753F0
0x62E941: mov     ebp, eax
0x62E943: test    ebp, ebp
0x62E945: mov     [esp+8+arg_4], ebp
0x62E949: jz      loc_62E9F5
0x62E94F: push    ebx
0x62E950: push    edi
0x62E951: mov     ecx, [ebp+0]
0x62E954: test    ecx, ecx
0x62E956: jz      loc_62E9DF
0x62E95C: mov     edx, [ecx]
0x62E95E: mov     eax, [edx+190h]
0x62E964: xor     esi, esi
0x62E966: call    eax
0x62E968: test    al, al
0x62E96A: jz      short loc_62E96F
0x62E96C: mov     esi, [ebp+0]
0x62E96F: test    esi, esi
0x62E971: mov     ebp, [ebp+4]
0x62E974: jz      short loc_62E9D7
0x62E976: mov     ecx, esi; this
0x62E978: call    Actor__GetProcessLevel
0x62E97D: test    eax, eax
0x62E97F: jz      short loc_62E9D7
0x62E981: mov     ebx, [esi+58h]
0x62E984: mov     edi, [ebx]
0x62E986: mov     ecx, offset TimeGlobals
0x62E98B: add     edi, 1Ch
0x62E98E: call    TimeGlobals_GetGameHour
0x62E993: fsub    qword ptr ds:0A2F928h
0x62E999: mov     edx, [edi]
0x62E99B: push    ecx
0x62E99C: fstp    [esp+14h+arg_0]
0x62E9A0: mov     ecx, ebx
0x62E9A2: fld     [esp+14h+arg_0]
0x62E9A6: fstp    [esp+14h+a5]
0x62E9A9: call    edx
0x62E9AB: mov     ecx, esi; this
0x62E9AD: call    Actor__GetProcessLevel
0x62E9B2: push    eax
0x62E9B3: push    esi
0x62E9B4: mov     ecx, offset ActorProcessManager_ptr
0x62E9B9: call    sub_674550
0x62E9BE: push    0
0x62E9C0: push    0
0x62E9C2: push    0
0x62E9C4: mov     ecx, esi; this
0x62E9C6: call    Actor__GetProcessLevel
0x62E9CB: push    eax
0x62E9CC: push    esi
0x62E9CD: mov     ecx, offset ActorProcessManager_ptr
0x62E9D2: call    sub_673A90
0x62E9D7: test    ebp, ebp
0x62E9D9: jnz     loc_62E951
0x62E9DF: mov     esi, [esp+10h+arg_4]
0x62E9E3: mov     ecx, esi
0x62E9E5: call    BSSimpleList_Clear
0x62E9EA: push    esi
0x62E9EB: call    FormHeapFree
0x62E9F0: add     esp, 4
0x62E9F3: pop     edi
0x62E9F4: pop     ebx
0x62E9F5: mov     eax, ds:0B3B948h
0x62E9FA: test    eax, eax
0x62E9FC: jz      short loc_62EA17
0x62E9FE: mov     edi, edi
0x62EA00: mov     esi, [eax+4]
0x62EA03: push    eax
0x62EA04: call    FormHeapFree
0x62EA09: add     esp, 4
0x62EA0C: test    esi, esi
0x62EA0E: mov     eax, esi
0x62EA10: mov     ds:0B3B948h, eax
0x62EA15: jnz     short loc_62EA00
0x62EA17: pop     esi
0x62EA18: mov     dword ptr ds:0B3B944h, 0
0x62EA22: pop     ebp
0x62EA23: retn    8
