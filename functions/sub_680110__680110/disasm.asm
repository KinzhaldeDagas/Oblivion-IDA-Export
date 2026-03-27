0x680110: push    0FFFFFFFFh
0x680112: push    offset SEH_680110
0x680117: mov     eax, large fs:0
0x68011D: push    eax
0x68011E: sub     esp, 14h
0x680121: push    ebx
0x680122: push    ebp
0x680123: push    esi
0x680124: push    edi
0x680125: mov     eax, ds:0B30AACh
0x68012A: xor     eax, esp
0x68012C: push    eax; ArgList
0x68012D: lea     eax, [esp+34h+var_C]
0x680131: mov     large fs:0, eax
0x680137: xor     ebx, ebx
0x680139: cmp     ds:0B3BE00h, ebx
0x68013F: jnz     short loc_680157
0x680141: xor     al, al
0x680143: mov     ecx, [esp+34h+var_C]
0x680147: mov     large fs:0, ecx
0x68014E: pop     ecx
0x68014F: pop     edi
0x680150: pop     esi
0x680151: pop     ebp
0x680152: pop     ebx
0x680153: add     esp, 20h
0x680156: retn
0x680157: mov     ebp, [esp+34h+arg_0]
0x68015B: cmp     ebp, ebx
0x68015D: mov     byte ptr [esp+34h+var_20+3], bl
0x680161: jz      loc_68031C
0x680167: mov     esi, [esp+34h+arg_8]
0x68016B: cmp     esi, ebx
0x68016D: jz      loc_68031C
0x680173: mov     ecx, [esp+34h+arg_10]
0x680177: cmp     ecx, ebx
0x680179: jz      loc_68031C
0x68017F: mov     edi, [esp+34h+arg_14]
0x680183: cmp     edi, ebx
0x680185: jz      loc_68031C
0x68018B: call    BSSimpleList_Clear
0x680190: cmp     ebp, esi
0x680192: jnz     short loc_6801AA
0x680194: mov     al, 1
0x680196: mov     ecx, [esp+34h+var_C]
0x68019A: mov     large fs:0, ecx
0x6801A1: pop     ecx
0x6801A2: pop     edi
0x6801A3: pop     esi
0x6801A4: pop     ebp
0x6801A5: pop     ebx
0x6801A6: add     esp, 20h
0x6801A9: retn
0x6801AA: push    offset unk_A2F830; lpCriticalSection
0x6801AF: mov     ecx, offset g_pathingMutex
0x6801B4: call    NiEnterCriticalSection
0x6801B9: call    sub_6805C0
0x6801BE: mov     [esp+34h+var_10], ebx
0x6801C2: mov     [esp+34h+var_18], ebx
0x6801C6: mov     [esp+34h+var_14], ebx
0x6801CA: mov     [esp+34h+var_1C], offset ??_7AStarWorldNodeList@@6B@; const AStarWorldNodeList::`vftable'
0x6801D2: fld     dword ptr ds:0A32048h
0x6801D8: mov     eax, [esp+34h+arg_4]
0x6801DC: fstp    dword ptr ds:0B1545Ch
0x6801E2: mov     ds:0B3BE08h, edi
0x6801E8: mov     ds:0B3BE04h, ebx
0x6801EE: mov     ds:0B3BE0Ch, ebp
0x6801F4: mov     ds:0B3BE10h, esi
0x6801FA: mov     ecx, [eax]
0x6801FC: mov     ds:0B3BE20h, ecx
0x680202: mov     edx, [eax+4]
0x680205: mov     ds:0B3BE24h, edx
0x68020B: mov     eax, [eax+8]
0x68020E: mov     ds:0B3BE28h, eax
0x680213: mov     eax, [esp+34h+arg_C]
0x680217: mov     ecx, [eax]
0x680219: mov     ds:0B3BE2Ch, ecx
0x68021F: mov     edx, [eax+4]
0x680222: mov     ds:0B3BE30h, edx
0x680228: mov     eax, [eax+8]
0x68022B: lea     ecx, [esp+34h+var_1C]
0x68022F: push    ecx
0x680230: mov     [esp+38h+var_4], ebx
0x680234: mov     ds:0B3BE34h, eax
0x680239: call    sub_67F690
0x68023E: fld     dword ptr ds:0B1545Ch
0x680244: lea     ecx, [esp+38h+var_1C]
0x680248: fstp    [esp+38h+var_38]; float
0x68024B: call    sub_680B40
0x680250: mov     esi, eax
0x680252: cmp     esi, ebx
0x680254: jz      short loc_68029E
0x680256: mov     ecx, esi
0x680258: call    sub_680760
0x68025D: push    eax
0x68025E: mov     ecx, esi
0x680260: call    sub_6803F0
0x680265: cmp     eax, ds:0B3BE10h
0x68026B: jz      short loc_68027C
0x68026D: lea     edx, [esp+34h+var_1C]
0x680271: push    edx
0x680272: push    esi
0x680273: push    eax
0x680274: call    sub_67F830
0x680279: add     esp, 0Ch
0x68027C: push    1
0x68027E: mov     ecx, esi
0x680280: call    sub_680500
0x680285: fld     dword ptr ds:0B1545Ch
0x68028B: push    ecx
0x68028C: lea     ecx, [esp+38h+var_1C]
0x680290: fstp    [esp+38h+var_38]; float
0x680293: call    sub_680B40
0x680298: mov     esi, eax
0x68029A: cmp     esi, ebx
0x68029C: jnz     short loc_680256
0x68029E: mov     esi, ds:0B3BE04h
0x6802A4: cmp     esi, ebx
0x6802A6: jz      short loc_680301
0x6802A8: mov     byte ptr [esp+34h+var_20+3], 1
0x6802AD: lea     ecx, [ecx+0]
0x6802B0: mov     ecx, esi
0x6802B2: call    sub_680760
0x6802B7: cmp     eax, ebx
0x6802B9: jnz     short loc_6802BD
0x6802BB: mov     eax, ebp
0x6802BD: push    eax
0x6802BE: mov     ecx, esi
0x6802C0: call    sub_680380
0x6802C5: mov     ecx, [esp+34h+arg_10]
0x6802C9: push    eax
0x6802CA: call    BSSimpleList_PushFront
0x6802CF: mov     ecx, esi
0x6802D1: call    sub_680430
0x6802D6: mov     esi, eax
0x6802D8: cmp     esi, ebx
0x6802DA: jz      short loc_680301
0x6802DC: mov     ecx, esi
0x6802DE: call    sub_680430
0x6802E3: cmp     esi, eax
0x6802E5: jnz     short loc_6802B0
0x6802E7: push    offset aLoopFoundInLow; "Loop found in low path. Failing."
0x6802EC: call    PrintError
0x6802F1: mov     ecx, [esp+38h+arg_10]
0x6802F5: add     esp, 4
0x6802F8: call    BSSimpleList_Clear
0x6802FD: mov     byte ptr [esp+34h+var_20+3], bl
0x680301: mov     ecx, offset g_pathingMutex; lpCriticalSection
0x680306: call    NiLeaveCriticalSection_0
0x68030B: lea     ecx, [esp+34h+var_1C]; this
0x68030F: mov     [esp+34h+var_4], 0FFFFFFFFh
0x680317: call    ??1AStarWorldNodeList@@UAE@XZ; AStarWorldNodeList::~AStarWorldNodeList(void)
0x68031C: mov     al, byte ptr [esp+34h+var_20+3]
0x680320: mov     ecx, [esp+34h+var_C]
0x680324: mov     large fs:0, ecx
0x68032B: pop     ecx
0x68032C: pop     edi
0x68032D: pop     esi
0x68032E: pop     ebp
0x68032F: pop     ebx
0x680330: add     esp, 20h
0x680333: retn
