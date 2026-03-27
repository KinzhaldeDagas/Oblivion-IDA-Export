0x67F340: sub     esp, 14h
0x67F343: push    edi
0x67F344: xor     edi, edi
0x67F346: cmp     ds:0B3BE00h, edi
0x67F34C: jz      loc_67F5C6
0x67F352: push    ebp
0x67F353: push    offset unk_A2F830
0x67F358: mov     ecx, offset g_pathingMutex
0x67F35D: call    NiEnterCriticalSection
0x67F362: mov     ebp, [esp+1Ch+arg_0]
0x67F366: cmp     ebp, edi
0x67F368: jz      loc_67F5B7
0x67F36E: push    esi
0x67F36F: mov     ecx, ebp; this
0x67F371: call    GetTeleportExtraData
0x67F376: mov     esi, eax
0x67F378: cmp     esi, edi
0x67F37A: jz      loc_67F5B6
0x67F380: mov     ecx, esi
0x67F382: call    sub_42B410
0x67F387: test    eax, eax
0x67F389: jz      loc_67F5B6
0x67F38F: push    ebx
0x67F390: mov     ecx, ebp
0x67F392: call    sub_4D8AF0
0x67F397: mov     ebx, eax
0x67F399: mov     ecx, esi
0x67F39B: mov     [esp+24h+var_C], ebx
0x67F39F: call    sub_42B410
0x67F3A4: mov     ecx, eax
0x67F3A6: call    sub_4D8AF0
0x67F3AB: cmp     ebx, edi
0x67F3AD: mov     esi, eax
0x67F3AF: mov     [esp+24h+var_8], esi
0x67F3B3: jz      loc_67F5B5
0x67F3B9: cmp     esi, edi
0x67F3BB: jz      loc_67F5B5
0x67F3C1: mov     ecx, ds:0B3BE00h
0x67F3C7: lea     eax, [esp+24h+var_14]
0x67F3CB: push    eax
0x67F3CC: push    ebx
0x67F3CD: mov     [esp+2Ch+var_14], edi
0x67F3D1: call    NiTMap_GetAt
0x67F3D6: test    al, al
0x67F3D8: jz      loc_67F5B5
0x67F3DE: mov     ebx, [esp+24h+var_14]
0x67F3E2: cmp     ebx, edi
0x67F3E4: jz      loc_67F5B5
0x67F3EA: lea     ecx, [esp+24h+var_10]
0x67F3EE: push    ecx
0x67F3EF: push    esi
0x67F3F0: mov     ecx, ebx
0x67F3F2: mov     [esp+2Ch+var_10], edi
0x67F3F6: call    NiTMap_GetAt
0x67F3FB: test    al, al
0x67F3FD: jz      loc_67F5B5
0x67F403: mov     esi, [esp+24h+var_10]
0x67F407: cmp     esi, edi
0x67F409: jz      loc_67F5B5
0x67F40F: nop
0x67F410: mov     ecx, esi
0x67F412: call    BSSimpleList_IsEmpty
0x67F417: test    al, al
0x67F419: jnz     loc_67F5B5
0x67F41F: mov     ecx, [esi]
0x67F421: push    ebp
0x67F422: call    sub_680410
0x67F427: test    al, al
0x67F429: jnz     short loc_67F445
0x67F42B: mov     edi, esi
0x67F42D: mov     esi, [esi+4]
0x67F430: test    esi, esi
0x67F432: jnz     short loc_67F410
0x67F434: pop     ebx
0x67F435: pop     esi
0x67F436: pop     ebp
0x67F437: mov     ecx, offset g_pathingMutex; lpCriticalSection
0x67F43C: pop     edi
0x67F43D: add     esp, 14h
0x67F440: jmp     NiLeaveCriticalSection_0
0x67F445: test    edi, edi
0x67F447: mov     ebp, [esi]
0x67F449: mov     [esp+24h+var_4], ebp
0x67F44D: jz      short loc_67F459
0x67F44F: push    ebp
0x67F450: mov     ecx, edi
0x67F452: call    BSSimpleList_Remove
0x67F457: jmp     short loc_67F460
0x67F459: mov     ecx, esi
0x67F45B: call    sub_67F100
0x67F460: mov     esi, [esp+24h+var_10]
0x67F464: mov     ecx, esi
0x67F466: call    BSSimpleList_IsEmpty
0x67F46B: test    al, al
0x67F46D: jz      short loc_67F4AC
0x67F46F: push    esi
0x67F470: call    FormHeapFree
0x67F475: mov     edx, [esp+28h+var_8]
0x67F479: add     esp, 4
0x67F47C: push    edx
0x67F47D: mov     ecx, ebx
0x67F47F: call    NiTMap_RemoveAt
0x67F484: cmp     dword ptr [ebx+0Ch], 0
0x67F488: jnz     short loc_67F4AC
0x67F48A: mov     eax, [ebx]
0x67F48C: mov     edx, [eax]
0x67F48E: push    1
0x67F490: mov     ecx, ebx
0x67F492: call    edx
0x67F494: mov     eax, [esp+24h+var_C]
0x67F498: mov     ecx, ds:0B3BE00h
0x67F49E: push    eax
0x67F49F: mov     [esp+28h+var_14], 0
0x67F4A7: call    NiTMap_RemoveAt
0x67F4AC: test    ebp, ebp
0x67F4AE: jz      loc_67F5B5
0x67F4B4: mov     edx, [esp+24h+var_8]
0x67F4B8: lea     ecx, [esp+24h+var_14]
0x67F4BC: push    ecx
0x67F4BD: mov     ecx, ds:0B3BE00h
0x67F4C3: push    edx
0x67F4C4: call    NiTMap_GetAt
0x67F4C9: test    al, al
0x67F4CB: jz      loc_67F5B5
0x67F4D1: mov     ebx, [esp+24h+var_14]
0x67F4D5: test    ebx, ebx
0x67F4D7: jz      loc_67F5B5
0x67F4DD: mov     ecx, [esp+24h+var_C]
0x67F4E1: lea     eax, [esp+24h+var_10]
0x67F4E5: push    eax
0x67F4E6: push    ecx
0x67F4E7: mov     ecx, ebx
0x67F4E9: mov     [esp+2Ch+var_10], 0
0x67F4F1: call    NiTMap_GetAt
0x67F4F6: test    al, al
0x67F4F8: jz      loc_67F5B5
0x67F4FE: mov     ebp, [esp+24h+var_10]
0x67F502: test    ebp, ebp
0x67F504: jz      loc_67F5B5
0x67F50A: mov     esi, ebp
0x67F50C: xor     edi, edi
0x67F50E: mov     edi, edi
0x67F510: mov     ecx, esi
0x67F512: call    BSSimpleList_IsEmpty
0x67F517: test    al, al
0x67F519: jnz     loc_67F5B5
0x67F51F: mov     eax, [esp+24h+var_4]
0x67F523: cmp     [esi], eax
0x67F525: jz      short loc_67F541
0x67F527: mov     edi, esi
0x67F529: mov     esi, [esi+4]
0x67F52C: test    esi, esi
0x67F52E: jnz     short loc_67F510
0x67F530: pop     ebx
0x67F531: pop     esi
0x67F532: pop     ebp
0x67F533: mov     ecx, offset g_pathingMutex; lpCriticalSection
0x67F538: pop     edi
0x67F539: add     esp, 14h
0x67F53C: jmp     NiLeaveCriticalSection_0
0x67F541: test    edi, edi
0x67F543: jz      short loc_67F54F
0x67F545: push    eax
0x67F546: mov     ecx, edi
0x67F548: call    BSSimpleList_Remove
0x67F54D: jmp     short loc_67F556
0x67F54F: mov     ecx, esi
0x67F551: call    sub_67F100
0x67F556: mov     ecx, ebp
0x67F558: call    BSSimpleList_IsEmpty
0x67F55D: test    al, al
0x67F55F: jz      short loc_67F596
0x67F561: push    ebp
0x67F562: call    FormHeapFree
0x67F567: mov     edx, [esp+28h+var_C]
0x67F56B: add     esp, 4
0x67F56E: push    edx
0x67F56F: mov     ecx, ebx
0x67F571: call    NiTMap_RemoveAt
0x67F576: cmp     dword ptr [ebx+0Ch], 0
0x67F57A: jnz     short loc_67F596
0x67F57C: mov     eax, [ebx]
0x67F57E: mov     edx, [eax]
0x67F580: push    1
0x67F582: mov     ecx, ebx
0x67F584: call    edx
0x67F586: mov     eax, [esp+24h+var_8]
0x67F58A: mov     ecx, ds:0B3BE00h
0x67F590: push    eax
0x67F591: call    NiTMap_RemoveAt
0x67F596: mov     esi, [esp+24h+var_4]
0x67F59A: push    esi
0x67F59B: mov     ecx, offset dword_B3BE18
0x67F5A0: call    BSSimpleList_Remove
0x67F5A5: mov     ecx, esi
0x67F5A7: call    sub_680340
0x67F5AC: push    esi
0x67F5AD: call    FormHeapFree
0x67F5B2: add     esp, 4
0x67F5B5: pop     ebx
0x67F5B6: pop     esi
0x67F5B7: pop     ebp
0x67F5B8: mov     ecx, offset g_pathingMutex; lpCriticalSection
0x67F5BD: pop     edi
0x67F5BE: add     esp, 14h
0x67F5C1: jmp     NiLeaveCriticalSection_0
0x67F5C6: pop     edi
0x67F5C7: add     esp, 14h
0x67F5CA: retn
