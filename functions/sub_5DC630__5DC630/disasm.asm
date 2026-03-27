0x5DC630: push    0FFFFFFFFh
0x5DC632: push    offset SEH_5DC630
0x5DC637: mov     eax, large fs:0
0x5DC63D: push    eax
0x5DC63E: sub     esp, 128h
0x5DC644: mov     eax, ds:0B30AACh
0x5DC649: xor     eax, esp
0x5DC64B: mov     [esp+134h+var_10], eax
0x5DC652: push    ebx
0x5DC653: push    ebp
0x5DC654: push    esi
0x5DC655: push    edi
0x5DC656: mov     eax, ds:0B30AACh
0x5DC65B: xor     eax, esp
0x5DC65D: push    eax; a3
0x5DC65E: lea     eax, [esp+148h+var_C]
0x5DC665: mov     large fs:0, eax
0x5DC66B: xor     esi, esi
0x5DC66D: mov     ebx, ecx
0x5DC66F: mov     [esp+148h+var_11C], ebx
0x5DC673: mov     [esp+148h+var_118], esi
0x5DC677: xor     edi, edi
0x5DC679: lea     esp, [esp+0]
0x5DC680: push    esi
0x5DC681: push    2
0x5DC683: call    ActorValue_GetAVFromGroupOffset
0x5DC688: mov     ecx, ds:0B333C4h
0x5DC68E: add     esp, 8
0x5DC691: mov     ebp, eax
0x5DC693: call    Actor_GetBaseClass
0x5DC698: test    eax, eax
0x5DC69A: jz      short loc_5DC6B6
0x5DC69C: mov     ecx, ds:0B333C4h
0x5DC6A2: push    ebp
0x5DC6A3: call    Actor_GetBaseClass
0x5DC6A8: mov     ecx, eax
0x5DC6AA: call    sub_51C090
0x5DC6AF: test    al, al
0x5DC6B1: jz      short loc_5DC6B6
0x5DC6B3: add     edi, 1
0x5DC6B6: add     esi, 1
0x5DC6B9: cmp     esi, 15h
0x5DC6BC: jl      short loc_5DC680
0x5DC6BE: mov     ecx, [ebx+30h]; this
0x5DC6C1: mov     [esp+148h+var_134], edi
0x5DC6C5: fild    [esp+148h+var_134]
0x5DC6C9: push    ecx
0x5DC6CA: fstp    [esp+14Ch+a2]; a3
0x5DC6CD: push    0FB1h; a2
0x5DC6D2: call    Tile_SetFloat
0x5DC6D7: test    edi, edi
0x5DC6D9: jle     short loc_5DC6E2
0x5DC6DB: add     edi, 1
0x5DC6DE: mov     [esp+148h+var_134], edi
0x5DC6E2: lea     edi, [ebx+60h]
0x5DC6E5: xor     ebp, ebp
0x5DC6E7: mov     [esp+148h+var_124], edi
0x5DC6EB: jmp     short loc_5DC6F8
0x5DC6ED: align 10h
0x5DC6F0: mov     edi, [esp+148h+var_124]
0x5DC6F4: mov     ebx, [esp+148h+var_11C]
0x5DC6F8: xor     esi, esi
0x5DC6FA: push    esi; a3
0x5DC6FB: push    offset aStat_skill_tem; "stat_skill_template"
0x5DC700: lea     ecx, [esp+150h+var_12C]; this
0x5DC704: mov     [esp+150h+var_12C.m_data], esi
0x5DC708: mov     [esp+150h+var_12C.m_dataLen], si
0x5DC70D: mov     [esp+150h+var_12C.m_bufLen], si
0x5DC712: call    BSStringT_Set
0x5DC717: mov     eax, [esp+148h+var_12C.m_data]
0x5DC71B: mov     ecx, [ebx+3Ch]
0x5DC71E: push    esi
0x5DC71F: push    eax
0x5DC720: push    ecx
0x5DC721: mov     ecx, ebx
0x5DC723: mov     [esp+154h+var_4], esi
0x5DC72A: call    Menu_CreateTileFromTemplate
0x5DC72F: mov     esi, eax
0x5DC731: test    esi, esi
0x5DC733: jz      loc_5DC909
0x5DC739: mov     ecx, [edi]
0x5DC73B: test    ecx, ecx
0x5DC73D: jz      short loc_5DC747
0x5DC73F: mov     edx, [ecx]
0x5DC741: mov     eax, [edx]
0x5DC743: push    1; a3
0x5DC745: call    eax
0x5DC747: push    ebp
0x5DC748: push    2
0x5DC74A: mov     [edi], esi
0x5DC74C: call    ActorValue_GetAVFromGroupOffset
0x5DC751: mov     ecx, ds:0B33A98h
0x5DC757: add     esp, 8
0x5DC75A: mov     edi, eax
0x5DC75C: push    ebp
0x5DC75D: mov     [esp+14Ch+var_120], edi
0x5DC761: call    TESDataHandler_GetTESSkillByCode
0x5DC766: add     eax, 20h ; ' '
0x5DC769: mov     eax, [eax+4]
0x5DC76C: test    eax, eax
0x5DC76E: jnz     short loc_5DC775
0x5DC770: mov     eax, offset EmptyString
0x5DC775: mov     ecx, eax
0x5DC777: lea     edx, [esp+148h+Str]
0x5DC77B: jmp     short loc_5DC780
0x5DC77D: align 10h
0x5DC780: mov     al, [ecx]
0x5DC782: mov     [edx], al
0x5DC784: add     ecx, 1
0x5DC787: add     edx, 1
0x5DC78A: test    al, al
0x5DC78C: jnz     short loc_5DC780
0x5DC78E: lea     ecx, [esp+148h+Str]
0x5DC792: push    2Eh ; '.'; Ch
0x5DC794: push    ecx; Str
0x5DC795: call    _strrchr
0x5DC79A: mov     ebx, eax
0x5DC79C: add     esp, 8
0x5DC79F: test    ebx, ebx
0x5DC7A1: jz      short loc_5DC7CF
0x5DC7A3: lea     edx, [eax+1]
0x5DC7A6: mov     cl, [eax]
0x5DC7A8: add     eax, 1
0x5DC7AB: test    cl, cl
0x5DC7AD: jnz     short loc_5DC7A6
0x5DC7AF: sub     eax, edx
0x5DC7B1: add     eax, 1
0x5DC7B4: push    eax; Size
0x5DC7B5: lea     edx, [ebx+6]
0x5DC7B8: push    ebx; Src
0x5DC7B9: push    edx; Dst
0x5DC7BA: call    _memcpy
0x5DC7BF: push    6; Count
0x5DC7C1: push    offset a_small; "_small"
0x5DC7C6: push    ebx; Dest
0x5DC7C7: call    _strncpy
0x5DC7CC: add     esp, 18h
0x5DC7CF: mov     ecx, ds:0B333C4h
0x5DC7D5: call    Actor_GetBaseClass
0x5DC7DA: test    eax, eax
0x5DC7DC: jz      short loc_5DC806
0x5DC7DE: mov     ecx, ds:0B333C4h
0x5DC7E4: push    edi
0x5DC7E5: call    Actor_GetBaseClass
0x5DC7EA: mov     ecx, eax
0x5DC7EC: call    sub_51C090
0x5DC7F1: test    al, al
0x5DC7F3: jz      short loc_5DC806
0x5DC7F5: mov     eax, [esp+148h+var_118]
0x5DC7F9: mov     dword ptr [esp+148h+var_130], eax
0x5DC7FD: add     eax, 1
0x5DC800: mov     [esp+148h+var_118], eax
0x5DC804: jmp     short loc_5DC815
0x5DC806: mov     eax, [esp+148h+var_134]
0x5DC80A: mov     dword ptr [esp+148h+var_130], eax
0x5DC80E: add     eax, 1
0x5DC811: mov     [esp+148h+var_134], eax
0x5DC815: push    edi
0x5DC816: call    ActorValue_GetName
0x5DC81B: add     esp, 4
0x5DC81E: xor     ebx, ebx
0x5DC820: push    ebx; a3
0x5DC821: lea     ecx, [esi+8]; this
0x5DC824: push    eax; a2
0x5DC825: call    BSStringT_Set
0x5DC82A: fild    dword ptr [esp+148h+var_130]
0x5DC82E: push    ecx
0x5DC82F: mov     ecx, esi; this
0x5DC831: fstp    [esp+14Ch+a2]; a3
0x5DC834: push    0FAAh; a2
0x5DC839: call    Tile_SetFloat
0x5DC83E: mov     ecx, ds:0B333C4h
0x5DC844: mov     eax, [ecx]
0x5DC846: mov     edx, [eax+284h]
0x5DC84C: push    edi; a3
0x5DC84D: call    edx
0x5DC84F: mov     dword ptr [esp+148h+var_130], eax
0x5DC853: fild    dword ptr [esp+148h+var_130]
0x5DC857: push    ecx
0x5DC858: mov     ecx, esi; this
0x5DC85A: fstp    [esp+14Ch+a2]; a3
0x5DC85D: push    0FB1h; a2
0x5DC862: call    Tile_SetFloat
0x5DC867: push    edi
0x5DC868: call    ActorValue_GetName
0x5DC86D: add     esp, 4
0x5DC870: push    eax
0x5DC871: push    0FB2h
0x5DC876: mov     ecx, esi
0x5DC878: call    Tile_SetString
0x5DC87D: lea     eax, [esp+148h+Str]
0x5DC881: push    eax
0x5DC882: push    0FB3h
0x5DC887: mov     ecx, esi
0x5DC889: call    Tile_SetString
0x5DC88E: fild    [esp+148h+var_120]
0x5DC892: push    ecx
0x5DC893: mov     ecx, esi; this
0x5DC895: fstp    [esp+14Ch+a2]; a3
0x5DC898: push    0FB4h; a2
0x5DC89D: call    Tile_SetFloat
0x5DC8A2: mov     ecx, ds:0B333C4h
0x5DC8A8: push    edi
0x5DC8A9: call    Actor_GetBaseCalcAVi
0x5DC8AE: mov     [esp+148h+var_120], eax
0x5DC8B2: fild    [esp+148h+var_120]
0x5DC8B6: push    ecx
0x5DC8B7: mov     ecx, esi; this
0x5DC8B9: fstp    [esp+14Ch+a2]; a3
0x5DC8BC: push    0FB5h; a2
0x5DC8C1: call    Tile_SetFloat
0x5DC8C6: mov     ecx, [esp+148h+var_11C]
0x5DC8CA: push    edi
0x5DC8CB: call    sub_5DA1A0
0x5DC8D0: mov     ecx, [esp+148h+var_12C.m_data]
0x5DC8D4: push    ecx; a3
0x5DC8D5: mov     [esp+14Ch+var_4], 0FFFFFFFFh
0x5DC8E0: call    FormHeapFree
0x5DC8E5: add     [esp+14Ch+var_124], 4
0x5DC8EA: add     ebp, 1
0x5DC8ED: add     esp, 4
0x5DC8F0: cmp     ebp, 15h
0x5DC8F3: mov     [esp+148h+var_12C.m_data], ebx
0x5DC8F7: mov     [esp+148h+var_12C.m_bufLen], bx
0x5DC8FC: mov     [esp+148h+var_12C.m_dataLen], bx
0x5DC901: jl      loc_5DC6F0
0x5DC907: jmp     short loc_5DC920
0x5DC909: push    offset aErrorCreatingS; "Error creating skill item in Stats menu"...
0x5DC90E: call    PrintError
0x5DC913: mov     edx, [esp+14Ch+var_12C.m_data]
0x5DC917: push    edx
0x5DC918: call    FormHeapFree
0x5DC91D: add     esp, 8
0x5DC920: mov     ecx, [esp+148h+var_C]
0x5DC927: mov     large fs:0, ecx
0x5DC92E: pop     ecx
0x5DC92F: pop     edi
0x5DC930: pop     esi
0x5DC931: pop     ebp
0x5DC932: pop     ebx
0x5DC933: mov     ecx, [esp+134h+var_10]
0x5DC93A: xor     ecx, esp
0x5DC93C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5DC941: add     esp, 134h
0x5DC947: retn
