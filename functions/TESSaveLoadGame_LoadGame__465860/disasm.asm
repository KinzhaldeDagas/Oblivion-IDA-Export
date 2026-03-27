0x465860: push    0FFFFFFFFh
0x465862: push    offset TESSaveLoadGame_LoadGame_SEH
0x465867: mov     eax, large fs:0
0x46586D: push    eax
0x46586E: sub     esp, 310h
0x465874: mov     eax, ds:0B30AACh
0x465879: xor     eax, esp
0x46587B: mov     [esp+31Ch+var_10], eax
0x465882: push    ebx
0x465883: push    ebp
0x465884: push    esi
0x465885: push    edi
0x465886: mov     eax, ds:0B30AACh
0x46588B: xor     eax, esp
0x46588D: push    eax
0x46588E: lea     eax, [esp+330h+var_C]
0x465895: mov     large fs:0, eax
0x46589B: mov     esi, [esp+330h+arg_0]
0x4658A2: mov     edi, [esp+330h+Str]
0x4658A9: mov     ebp, ecx
0x4658AB: mov     [esp+330h+var_280], esi
0x4658B2: call    dword ptr ds:0A280D0h
0x4658B8: push    414h
0x4658BD: mov     [esp+334h+var_2CC], eax
0x4658C1: mov     byte ptr [ebp+0A9h], 0
0x4658C8: call    Menu_GetOpenMenuTile
0x4658CD: add     esp, 4
0x4658D0: test    eax, eax
0x4658D2: jz      short loc_4658E6
0x4658D4: mov     ecx, eax
0x4658D6: call    Tile_GetParentMenu
0x4658DB: test    eax, eax
0x4658DD: jz      short loc_4658E6
0x4658DF: mov     byte ptr [ebp+0A9h], 1
0x4658E6: cmp     byte ptr [ebp+0A9h], 0
0x4658ED: jz      short loc_46591D
0x4658EF: mov     eax, ds:0B33398h
0x4658F4: mov     byte ptr ds:0B3C0ECh, 0
0x4658FB: mov     ebx, [eax+24h]
0x4658FE: test    ebx, ebx
0x465900: jz      short loc_46591D
0x465902: push    1
0x465904: push    0
0x465906: push    0FFFFh
0x46590B: mov     ecx, ebx
0x46590D: call    SoundManager_OpenMusicFile
0x465912: test    al, al
0x465914: jz      short loc_46591D
0x465916: mov     ecx, ebx
0x465918: call    SoundManager_PlayMusic
0x46591D: push    1
0x46591F: push    edi
0x465920: push    esi
0x465921: mov     ecx, ebp
0x465923: call    Savegame_Rename
0x465928: mov     esi, eax
0x46592A: mov     eax, 32h ; '2'
0x46592F: xor     ecx, ecx
0x465931: xor     ebx, ebx
0x465933: mov     [esp+330h+var_290], eax
0x46593A: mov     [esp+330h+var_284], eax
0x465941: mov     edx, 4
0x465946: mul     edx
0x465948: seto    cl
0x46594B: mov     [esp+330h+var_2F8], esi
0x46594F: mov     [esp+330h+var_298], offset ??_7?$NiTLargeArray@PAUFormAndFlags@@@@6B@; const NiTLargeArray<FormAndFlags *>::`vftable'
0x46595A: mov     [esp+330h+var_28C], ebx
0x465961: mov     [esp+330h+var_288], ebx
0x465968: neg     ecx
0x46596A: or      ecx, eax
0x46596C: push    ecx; Size
0x46596D: call    FormHeapAlloc
0x465972: add     esp, 4
0x465975: mov     [esp+330h+var_294], eax
0x46597C: test    esi, esi
0x46597E: mov     [esp+330h+var_4], ebx
0x465985: jz      loc_466A3D
0x46598B: cmp     [esi+24h], bl
0x46598E: jz      loc_466A3D
0x465994: push    1
0x465996: push    esi
0x465997: mov     ecx, ebp
0x465999: call    sub_45DBC0
0x46599E: mov     ebx, eax
0x4659A0: test    ebx, ebx
0x4659A2: jz      loc_466A3D
0x4659A8: cmp     ebx, 0FFFFFFFFh
0x4659AB: jz      loc_466A3D
0x4659B1: mov     al, [ebp+7Ch]
0x4659B4: cmp     al, 7Eh ; '~'
0x4659B6: jz      short loc_465A17
0x4659B8: cmp     al, 7Dh ; '}'
0x4659BA: jbe     short loc_465A17
0x4659BC: movzx   eax, al
0x4659BF: push    7Dh ; '}'
0x4659C1: push    eax
0x4659C2: lea     ecx, [esp+338h+var_114]
0x4659C9: push    offset aYouAreLoadingA; "You are loading a savegame with version"...
0x4659CE: push    ecx
0x4659CF: call    __sprintf
0x4659D4: mov     ecx, ds:0B34D90h
0x4659DA: mov     edx, [ecx]
0x4659DC: mov     edx, [edx+18h]
0x4659DF: add     esp, 10h
0x4659E2: lea     eax, [esp+330h+var_114]
0x4659E9: push    eax
0x4659EA: call    edx
0x4659EC: cmp     eax, 3
0x4659EF: jnz     short loc_465A17
0x4659F1: mov     ebp, [ebp+6Ch]
0x4659F4: test    ebp, ebp
0x4659F6: jz      short loc_465A00
0x4659F8: push    esi
0x4659F9: mov     ecx, ebp
0x4659FB: call    BSSimpleList_Remove
0x465A00: mov     eax, [esi]
0x465A02: mov     edx, [eax]
0x465A04: push    1
0x465A06: mov     ecx, esi
0x465A08: call    edx
0x465A0A: mov     eax, [esp+330h+var_294]
0x465A11: push    eax
0x465A12: jmp     loc_466A92
0x465A17: push    0; int
0x465A19: lea     ecx, [ebp+1BCh]
0x465A1F: push    ecx; int
0x465A20: push    0; int
0x465A22: lea     edx, [ebp+1B8h]
0x465A28: push    edx; int
0x465A29: push    0; void *
0x465A2B: lea     eax, [ebp+1B4h]
0x465A31: push    eax; int
0x465A32: lea     ecx, [ebp+0B0h]
0x465A38: push    ecx; Dst
0x465A39: push    0; int
0x465A3B: push    ebx; int
0x465A3C: push    esi; int
0x465A3D: mov     ecx, ebp
0x465A3F: call    sub_45D5F0
0x465A44: cmp     [esp+330h+arg_8], 0
0x465A4C: jz      short loc_465A7E
0x465A4E: push    8; Size
0x465A50: call    FormHeapAlloc
0x465A55: add     esp, 4
0x465A58: mov     [esp+330h+var_2D8], eax
0x465A5C: test    eax, eax
0x465A5E: mov     byte ptr [esp+330h+var_4], 1
0x465A66: jz      short loc_465A71
0x465A68: mov     ecx, eax
0x465A6A: call    sub_45F0F0
0x465A6F: jmp     short loc_465A73
0x465A71: xor     eax, eax
0x465A73: mov     byte ptr [esp+330h+var_4], 0
0x465A7B: mov     [ebp+40h], eax
0x465A7E: push    esi
0x465A7F: mov     ecx, ebp
0x465A81: call    sub_45C9C0
0x465A86: test    al, al
0x465A88: jnz     short loc_465AC4
0x465A8A: mov     ecx, [ebp+6Ch]
0x465A8D: test    ecx, ecx
0x465A8F: jz      short loc_465A97
0x465A91: push    esi
0x465A92: call    BSSimpleList_Remove
0x465A97: mov     edx, [esi]
0x465A99: mov     eax, [edx]
0x465A9B: push    1
0x465A9D: mov     ecx, esi
0x465A9F: call    eax
0x465AA1: mov     esi, [ebp+40h]
0x465AA4: test    esi, esi
0x465AA6: jz      short loc_465AB8
0x465AA8: mov     ecx, esi
0x465AAA: call    sub_4530A0
0x465AAF: push    esi
0x465AB0: call    FormHeapFree
0x465AB5: add     esp, 4
0x465AB8: mov     dword ptr [ebp+40h], 0
0x465ABF: jmp     loc_466A8A
0x465AC4: push    esi
0x465AC5: mov     ecx, ebp
0x465AC7: call    sub_45A190
0x465ACC: mov     edx, ds:0B33398h
0x465AD2: mov     edi, [edx+10h]
0x465AD5: call    dword ptr ds:0A2808Ch
0x465ADB: cmp     eax, edi
0x465ADD: mov     edi, 1
0x465AE2: jnz     short loc_465AE9
0x465AE4: or      [ebp+18h], edi
0x465AE7: jmp     short loc_465AF0
0x465AE9: or      dword ptr [ebp+18h], 40000h
0x465AF0: mov     ecx, [ebp+40h]
0x465AF3: or      dword ptr [ebp+18h], 800h
0x465AFA: test    ecx, ecx
0x465AFC: mov     byte ptr [ebp+0A8h], 0
0x465B03: jz      short loc_465B10
0x465B05: push    offset aSaveGameHeader; "Save Game Header"
0x465B0A: push    ebx
0x465B0B: call    sub_4531B0
0x465B10: mov     ecx, ebp
0x465B12: call    sub_462080
0x465B17: push    10h; Size
0x465B19: call    FormHeapAlloc
0x465B1E: add     esp, 4
0x465B21: mov     [esp+330h+var_2D8], eax
0x465B25: test    eax, eax
0x465B27: mov     byte ptr [esp+330h+var_4], 2
0x465B2F: jz      short loc_465B3A
0x465B31: mov     ecx, eax; this
0x465B33: call    ??0ChangesMap@@QAE@XZ; ChangesMap::ChangesMap(void)
0x465B38: jmp     short loc_465B3C
0x465B3A: xor     eax, eax
0x465B3C: mov     [ebp+4], eax
0x465B3F: mov     edx, [esi+4]
0x465B42: push    edi
0x465B43: lea     eax, [esp+334h+var_2F4]
0x465B47: push    eax
0x465B48: push    4
0x465B4A: lea     ecx, [esp+33Ch+var_300]
0x465B4E: push    ecx
0x465B4F: push    esi
0x465B50: mov     byte ptr [esp+344h+var_4], 0
0x465B58: mov     [esp+344h+var_2F4], edi
0x465B5C: call    edx
0x465B5E: mov     edx, [esi+4]
0x465B61: push    edi
0x465B62: lea     eax, [esp+348h+var_2F4]
0x465B66: push    eax
0x465B67: push    4
0x465B69: lea     ecx, [esp+350h+var_2FC]
0x465B6D: push    ecx
0x465B6E: push    esi
0x465B6F: mov     [esp+358h+var_2F4], edi
0x465B73: call    edx
0x465B75: add     esp, 28h
0x465B78: cmp     [esp+330h+var_300], 0
0x465B7D: jnz     short loc_465BDD
0x465B7F: mov     eax, ds:0B33398h
0x465B84: mov     ebx, [eax+10h]
0x465B87: call    dword ptr ds:0A2808Ch
0x465B8D: cmp     eax, ebx
0x465B8F: jnz     short loc_465B97
0x465B91: and     dword ptr [ebp+18h], 0FFFFFFFEh
0x465B95: jmp     short loc_465B9E
0x465B97: and     dword ptr [ebp+18h], 0FFFBFFFFh
0x465B9E: and     dword ptr [ebp+18h], 0FFFFF7FFh
0x465BA5: push    esi
0x465BA6: mov     ecx, ebp
0x465BA8: call    sub_45A4E0
0x465BAD: mov     ecx, [ebp+6Ch]
0x465BB0: test    ecx, ecx
0x465BB2: jz      short loc_465BBA
0x465BB4: push    esi
0x465BB5: call    BSSimpleList_Remove
0x465BBA: mov     edx, [esi]
0x465BBC: mov     eax, [edx]
0x465BBE: push    edi
0x465BBF: mov     ecx, esi
0x465BC1: call    eax
0x465BC3: mov     ecx, [ebp+4]
0x465BC6: test    ecx, ecx
0x465BC8: jz      short loc_465BD1
0x465BCA: mov     edx, [ecx]
0x465BCC: mov     eax, [edx]
0x465BCE: push    edi
0x465BCF: call    eax
0x465BD1: mov     dword ptr [ebp+4], 0
0x465BD8: jmp     loc_466A8A
0x465BDD: mov     edx, ds:0B33A10h
0x465BE3: mov     dword ptr [edx+38h], 5
0x465BEA: mov     ecx, ds:0B33A10h
0x465BF0: call    sub_432860
0x465BF5: mov     ecx, ebp
0x465BF7: call    sub_459A10
0x465BFC: mov     edi, [esi+30h]
0x465BFF: cmp     edi, 0FFFFFFFFh
0x465C02: jnz     short loc_465C0A
0x465C04: mov     edi, [esi+148h]
0x465C0A: mov     ecx, ds:0A853D0h
0x465C10: mov     edx, [ebp+8Ch]
0x465C16: add     edx, [esp+330h+var_300]
0x465C1A: mov     eax, [esi]
0x465C1C: mov     eax, [eax+0Ch]
0x465C1F: push    ecx
0x465C20: push    edx
0x465C21: mov     ecx, esi
0x465C23: call    eax
0x465C25: push    esi
0x465C26: mov     ecx, ebp
0x465C28: call    sub_45E3D0
0x465C2D: mov     eax, ds:0A853D0h
0x465C32: mov     edx, [esi]
0x465C34: mov     edx, [edx+0Ch]
0x465C37: push    eax
0x465C38: push    edi
0x465C39: mov     ecx, esi
0x465C3B: call    edx
0x465C3D: mov     ecx, ds:0B33A98h
0x465C43: push    0FFFFFFFEh
0x465C45: call    sub_447DB0
0x465C4A: push    esi
0x465C4B: mov     ecx, ebp
0x465C4D: call    SaveLoad_LoadGame_Subroutine?
0x465C52: mov     ecx, ds:0B33A98h
0x465C58: push    0FFFFFFFFh
0x465C5A: call    sub_447DB0
0x465C5F: xor     edi, edi
0x465C61: cmp     [esp+330h+var_2FC], edi
0x465C65: mov     [esp+330h+var_2F4], edi
0x465C69: mov     [esp+330h+var_2C8], edi
0x465C6D: jbe     loc_466885
0x465C73: push    0
0x465C75: call    sub_5AD980
0x465C7A: mov     edx, [esi+4]
0x465C7D: mov     ebx, 1
0x465C82: push    ebx
0x465C83: lea     eax, [esp+338h+var_318]
0x465C87: push    eax
0x465C88: push    0Ch
0x465C8A: lea     ecx, [esp+340h+a1]
0x465C8E: push    ecx
0x465C8F: push    esi
0x465C90: mov     [esp+348h+var_318], ebx
0x465C94: call    edx
0x465C96: mov     edi, [esp+348h+a1]
0x465C9A: add     esp, 18h
0x465C9D: cmp     edi, 0FEFFFFFFh
0x465CA3: jnz     short loc_465D04
0x465CA5: fldz
0x465CA7: mov     edx, [esi+4]
0x465CAA: push    ebx
0x465CAB: fstp    [esp+334h+var_318]
0x465CAF: lea     eax, [esp+334h+var_304]
0x465CB3: push    eax
0x465CB4: push    ebx
0x465CB5: lea     ecx, [esp+33Ch+var_319]
0x465CB9: push    ecx
0x465CBA: push    esi
0x465CBB: mov     [esp+344h+var_319], 0
0x465CC0: mov     [esp+344h+var_304], ebx
0x465CC4: call    edx
0x465CC6: mov     edx, [esi+4]
0x465CC9: push    ebx
0x465CCA: lea     eax, [esp+348h+var_304]
0x465CCE: push    eax
0x465CCF: push    4
0x465CD1: lea     ecx, [esp+350h+var_318]
0x465CD5: push    ecx
0x465CD6: push    esi
0x465CD7: mov     [esp+358h+var_304], ebx
0x465CDB: call    edx
0x465CDD: mov     eax, ds:0B333C4h
0x465CE2: mov     cl, [esp+358h+var_319]
0x465CE6: mov     [eax+116h], cl
0x465CEC: fld     [esp+358h+var_318]
0x465CF0: mov     edx, ds:0B333C4h
0x465CF6: fstp    dword ptr [edx+700h]
0x465CFC: add     esp, 28h
0x465CFF: jmp     loc_46686C
0x465D04: push    edi
0x465D05: mov     ecx, ebp
0x465D07: call    SaveLoad_ResolveFormID
0x465D0C: test    eax, eax
0x465D0E: jnz     short loc_465D39
0x465D10: push    edi
0x465D11: push    offset aLoadErrorPlugi; "Load Error: Plugin for form with ID %08"...
0x465D16: call    PrintError
0x465D1B: mov     ecx, ds:0A853D4h
0x465D21: movzx   edx, word ptr [esp+338h+var_30B+1]
0x465D26: mov     eax, [esi]
0x465D28: mov     eax, [eax+0Ch]
0x465D2B: add     esp, 8
0x465D2E: push    ecx
0x465D2F: push    edx
0x465D30: mov     ecx, esi
0x465D32: call    eax
0x465D34: jmp     loc_46686C
0x465D39: mov     ecx, [esp+330h+var_30B]
0x465D3D: push    ecx
0x465D3E: mov     ecx, ebp
0x465D40: mov     [esp+334h+a1], eax
0x465D44: call    sub_45A140
0x465D49: mov     edx, [esp+330h+a1]
0x465D4D: push    edx; a1
0x465D4E: mov     [esp+334h+var_319], bl
0x465D52: call    TESForm_LookupByFormID
0x465D57: mov     ebx, eax
0x465D59: mov     eax, [esp+334h+var_30F]
0x465D5D: add     esp, 4
0x465D60: test    al, 2
0x465D62: jz      loc_4660EA
0x465D68: test    al, 4
0x465D6A: jz      loc_465EB1
0x465D70: mov     ecx, ds:0B33B00h
0x465D76: xor     edi, edi
0x465D78: xor     ebx, ebx
0x465D7A: cmp     byte ptr [ecx+7Ch], 5Bh ; '['
0x465D7E: mov     [esp+330h+var_318], edi
0x465D82: mov     [esp+330h+var_304], edi
0x465D86: jb      short loc_465DF4
0x465D88: test    eax, 4000000h
0x465D8D: jz      short loc_465DB1
0x465D8F: push    4
0x465D91: lea     eax, [esp+334h+var_2D0]
0x465D95: push    eax
0x465D96: push    esi
0x465D97: call    sub_45BB00
0x465D9C: movsx   edi, byte ptr [esp+330h+var_2D0+2]
0x465DA1: movsx   ecx, byte ptr [esp+330h+var_2D0+3]
0x465DA6: mov     edx, [esp+330h+var_2D0]
0x465DAA: mov     ebx, 4
0x465DAF: jmp     short loc_465DD8
0x465DB1: test    eax, 2000000h
0x465DB6: jz      short loc_465DEE
0x465DB8: push    6
0x465DBA: lea     eax, [esp+334h+var_2C4]
0x465DBE: push    eax
0x465DBF: push    esi
0x465DC0: call    sub_45BB00
0x465DC5: movsx   edi, word ptr [esp+330h+var_2C4+2]
0x465DCA: movsx   ecx, [esp+330h+var_2C0]
0x465DCF: mov     edx, [esp+330h+var_2C4]
0x465DD3: mov     ebx, 6
0x465DD8: mov     [esp+330h+var_304], ecx
0x465DDC: push    edx
0x465DDD: mov     ecx, ebp
0x465DDF: call    sub_459990
0x465DE4: mov     ecx, ds:0B33B00h
0x465DEA: mov     [esp+330h+var_318], eax
0x465DEE: cmp     byte ptr [ecx+7Ch], 5Bh ; '['
0x465DF2: jnb     short loc_465E2E
0x465DF4: push    0Ch
0x465DF6: lea     eax, [esp+334h+var_250]
0x465DFD: push    eax
0x465DFE: push    esi
0x465DFF: call    sub_45BB00
0x465E04: mov     ecx, [esp+330h+var_248]
0x465E0B: mov     edx, [esp+330h+var_250]
0x465E12: mov     edi, [esp+330h+var_24C]
0x465E19: mov     [esp+330h+var_304], ecx
0x465E1D: push    edx
0x465E1E: mov     ecx, ebp
0x465E20: mov     ebx, 0Ch
0x465E25: call    sub_459950
0x465E2A: mov     [esp+330h+var_318], eax
0x465E2E: mov     ecx, ds:0A853D4h
0x465E34: mov     eax, [esi]
0x465E36: mov     edx, [eax+0Ch]
0x465E39: push    ecx
0x465E3A: neg     ebx
0x465E3C: push    ebx
0x465E3D: mov     ecx, esi
0x465E3F: call    edx
0x465E41: mov     eax, [esp+330h+a1]
0x465E45: push    eax; a1
0x465E46: call    TESForm_LookupByFormID
0x465E4B: push    0; int
0x465E4D: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x465E52: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x465E57: mov     ebx, eax
0x465E59: push    0; int
0x465E5B: push    ebx; void *
0x465E5C: call    OblivionDynamicCast
0x465E61: mov     esi, eax
0x465E63: add     esp, 18h
0x465E66: test    esi, esi
0x465E68: jz      short loc_465E86
0x465E6A: mov     ecx, esi; this
0x465E6C: call    TESObjectCELL_GetXCoordinate
0x465E71: cmp     eax, edi
0x465E73: jnz     short loc_465E86
0x465E75: mov     ecx, esi; this
0x465E77: call    TESObjectCELL_GetYCoordinate
0x465E7C: cmp     eax, [esp+330h+var_304]
0x465E80: jz      loc_4663FB
0x465E86: mov     ecx, [esp+330h+var_304]
0x465E8A: mov     edx, [esp+330h+a1]
0x465E8E: mov     eax, [esp+330h+var_318]
0x465E92: push    ecx
0x465E93: mov     ecx, [ebp+10h]
0x465E96: push    edi
0x465E97: push    edx
0x465E98: push    eax
0x465E99: call    sub_452FE0
0x465E9E: test    ebx, ebx
0x465EA0: jz      short loc_465EAA
0x465EA2: push    ebx
0x465EA3: mov     ecx, ebp
0x465EA5: call    sub_45C7A0
0x465EAA: xor     ebx, ebx
0x465EAC: jmp     loc_4663FB
0x465EB1: push    24h ; '$'
0x465EB3: lea     ecx, [esp+334h+var_2BC]
0x465EB7: xor     eax, eax
0x465EB9: push    ecx
0x465EBA: mov     ecx, ds:0B33B00h
0x465EC0: push    esi
0x465EC1: mov     [esp+33Ch+var_2BC], eax
0x465EC8: mov     [esp+33Ch+var_2B8], eax
0x465ECF: mov     [esp+33Ch+var_2B4], eax
0x465ED6: call    sub_45BB00
0x465EDB: mov     edx, [esp+330h+var_2B8]
0x465EDF: push    edx
0x465EE0: mov     ecx, ebp
0x465EE2: call    sub_459950
0x465EE7: mov     [esp+330h+var_2B8], eax
0x465EEB: mov     eax, [esp+330h+var_2B4]
0x465EEF: push    eax
0x465EF0: mov     ecx, ebp
0x465EF2: call    sub_459950
0x465EF7: mov     edx, [esi]
0x465EF9: mov     edx, [edx+0Ch]
0x465EFC: mov     [esp+330h+var_2B4], eax
0x465F00: mov     eax, ds:0A853D4h
0x465F05: push    eax
0x465F06: push    0FFFFFFDCh
0x465F08: mov     ecx, esi
0x465F0A: call    edx
0x465F0C: mov     eax, [esp+330h+var_2B4]
0x465F10: push    eax; a1
0x465F11: call    TESForm_LookupByFormID
0x465F16: push    0; int
0x465F18: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x465F1D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x465F22: mov     edi, eax
0x465F24: push    0; int
0x465F26: push    edi; void *
0x465F27: call    OblivionDynamicCast
0x465F2C: push    0; int
0x465F2E: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x465F33: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x465F38: push    0; int
0x465F3A: push    edi; void *
0x465F3B: mov     [esp+35Ch+var_318], eax
0x465F3F: call    OblivionDynamicCast
0x465F44: add     esp, 2Ch
0x465F47: lea     ecx, [esp+330h+var_2B0]
0x465F4E: push    ecx
0x465F4F: mov     ecx, ebp
0x465F51: mov     edi, eax
0x465F53: call    sub_452430
0x465F58: test    al, al
0x465F5A: jz      short loc_465F66
0x465F5C: mov     [esp+330h+var_319], 0
0x465F61: jmp     loc_4663FB
0x465F66: test    edi, edi
0x465F68: jz      short loc_465F9D
0x465F6A: fld     [esp+330h+var_2B0]
0x465F71: fistp   [esp+330h+var_2EC]
0x465F75: fld     dword ptr [esp+330h+var_2AC]
0x465F7C: fistp   [esp+330h+var_2F0]
0x465F80: mov     edx, [esp+330h+var_2F0]
0x465F84: mov     eax, [esp+330h+var_2EC]
0x465F88: sar     edx, 0Ch
0x465F8B: push    edx; signed int
0x465F8C: sar     eax, 0Ch
0x465F8F: push    eax; signed int
0x465F90: mov     ecx, edi; this
0x465F92: call    TESWorldSpace__GetCellAtCellCoord
0x465F97: mov     [esp+330h+var_318], eax
0x465F9B: jmp     short loc_465FA1
0x465F9D: mov     eax, [esp+330h+var_318]
0x465FA1: test    eax, eax
0x465FA3: jz      short loc_465FBB
0x465FA5: mov     ecx, ds:0B333A0h
0x465FAB: push    0; a2
0x465FAD: push    eax; a1
0x465FAE: call    TESObjectCELL_IsProcessLevel?LowHigh
0x465FB3: test    al, al
0x465FB5: jnz     short loc_465FC6
0x465FB7: mov     eax, [esp+330h+var_318]
0x465FBB: cmp     [esp+330h+var_2BC], 3
0x465FC0: jnz     loc_466049
0x465FC6: mov     ecx, [esp+330h+a1]
0x465FCA: push    ecx; a1
0x465FCB: call    TESForm_LookupByFormID
0x465FD0: mov     edi, eax
0x465FD2: add     esp, 4
0x465FD5: test    edi, edi
0x465FD7: jz      short loc_466031
0x465FD9: mov     ecx, [ebp+0]
0x465FDC: push    edi
0x465FDD: call    sub_452D30
0x465FE2: xor     ecx, ecx
0x465FE4: test    eax, eax
0x465FE6: jz      short loc_465FEA
0x465FE8: mov     ecx, [eax]
0x465FEA: push    ecx
0x465FEB: push    edi
0x465FEC: mov     ecx, ebp
0x465FEE: call    sub_453530
0x465FF3: mov     esi, [esp+330h+var_30F]
0x465FF7: not     esi
0x465FF9: and     esi, eax
0x465FFB: and     esi, 0FFFh
0x466001: jz      short loc_466031
0x466003: push    0; int
0x466005: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x46600A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46600F: push    0; int
0x466011: push    edi; void *
0x466012: call    OblivionDynamicCast
0x466017: add     esp, 14h
0x46601A: test    eax, eax
0x46601C: jz      short loc_466021
0x46601E: and     esi, 0FFFFFFBFh
0x466021: and     esi, 0FFFFF7FFh
0x466027: jz      short loc_466031
0x466029: push    edi
0x46602A: mov     ecx, ebp
0x46602C: call    sub_45C7A0
0x466031: mov     eax, [esp+330h+a1]
0x466035: lea     edx, [esp+330h+var_2BC]
0x466039: push    edx
0x46603A: push    eax
0x46603B: mov     ecx, ebp
0x46603D: call    sub_4603E0
0x466042: mov     ebx, eax
0x466044: jmp     loc_4663FB
0x466049: test    eax, eax
0x46604B: jz      short loc_46606C
0x46604D: mov     ecx, eax; this
0x46604F: call    TESObjectCELL_IsInterior
0x466054: test    al, al
0x466056: jz      short loc_46606C
0x466058: mov     ecx, [esp+330h+a1]
0x46605C: mov     edx, [esp+330h+var_2B4]
0x466060: push    ecx
0x466061: mov     ecx, [ebp+8]
0x466064: push    edx
0x466065: call    sub_452E70
0x46606A: jmp     short loc_4660A7
0x46606C: test    edi, edi
0x46606E: jz      short loc_4660BE
0x466070: mov     ecx, [esp+330h+var_2B0]
0x466077: mov     edx, dword ptr [esp+330h+var_2AC]
0x46607E: sub     esp, 0Ch
0x466081: mov     eax, esp
0x466083: mov     [eax], ecx
0x466085: mov     ecx, dword ptr [esp+33Ch+var_2AC+4]
0x46608C: mov     [eax+4], edx
0x46608F: mov     edx, [esp+33Ch+a1]
0x466093: mov     [eax+8], ecx
0x466096: mov     eax, [esp+33Ch+var_2B4]
0x46609D: mov     ecx, [ebp+0Ch]
0x4660A0: push    edx
0x4660A1: push    eax
0x4660A2: call    sub_452F10
0x4660A7: test    ebx, ebx
0x4660A9: jz      loc_4663FB
0x4660AF: push    ebx
0x4660B0: mov     ecx, ebp
0x4660B2: call    sub_45C7A0
0x4660B7: xor     ebx, ebx
0x4660B9: jmp     loc_4663FB
0x4660BE: mov     ecx, [esp+330h+var_2B4]
0x4660C2: push    ecx
0x4660C3: push    offset aWorldspace08xC; "Worldspace %08X could not be found whil"...
0x4660C8: call    PrintError
0x4660CD: movzx   ecx, word ptr [esp+338h+var_30B+1]
0x4660D2: mov     eax, ds:0A853D4h
0x4660D7: mov     edx, [esi]
0x4660D9: mov     edx, [edx+0Ch]
0x4660DC: add     esp, 8
0x4660DF: push    eax
0x4660E0: push    ecx
0x4660E1: mov     ecx, esi
0x4660E3: call    edx
0x4660E5: jmp     loc_46686C
0x4660EA: test    eax, eax
0x4660EC: jns     loc_4662F0
0x4660F2: mov     ecx, ds:0B33B00h
0x4660F8: xor     eax, eax
0x4660FA: mov     [esp+330h+var_27C], eax
0x466101: mov     [esp+330h+var_26C], eax
0x466108: push    2Ch ; ','
0x46610A: lea     eax, [esp+334h+var_27C]
0x466111: push    eax
0x466112: push    esi
0x466113: call    sub_45BB00
0x466118: mov     ecx, [esp+330h+var_27C]
0x46611F: push    ecx
0x466120: mov     ecx, ebp
0x466122: call    sub_459950
0x466127: mov     edx, [esp+330h+var_26C]
0x46612E: push    edx
0x46612F: mov     ecx, ebp
0x466131: mov     [esp+334h+var_27C], eax
0x466138: call    sub_459950
0x46613D: mov     ecx, ds:0A853D4h
0x466143: mov     [esp+330h+var_26C], eax
0x46614A: mov     eax, [esi]
0x46614C: mov     edx, [eax+0Ch]
0x46614F: push    ecx
0x466150: push    0FFFFFFD4h
0x466152: mov     ecx, esi
0x466154: call    edx
0x466156: mov     eax, [esp+330h+var_26C]
0x46615D: push    eax; a1
0x46615E: call    TESForm_LookupByFormID
0x466163: push    0; int
0x466165: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x46616A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46616F: mov     edi, eax
0x466171: push    0; int
0x466173: push    edi; void *
0x466174: call    OblivionDynamicCast
0x466179: push    0; int
0x46617B: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x466180: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466185: push    0; int
0x466187: push    edi; void *
0x466188: mov     [esp+35Ch+var_304], eax
0x46618C: call    OblivionDynamicCast
0x466191: mov     edi, eax
0x466193: add     esp, 2Ch
0x466196: test    edi, edi
0x466198: jz      short loc_4661CB
0x46619A: fld     [esp+330h+var_268]
0x4661A1: fistp   [esp+330h+var_2E8]
0x4661A5: fld     dword ptr [esp+330h+var_264]
0x4661AC: fistp   [esp+330h+var_2E4]
0x4661B0: mov     ecx, [esp+330h+var_2E4]
0x4661B4: mov     edx, [esp+330h+var_2E8]
0x4661B8: sar     ecx, 0Ch
0x4661BB: push    ecx; signed int
0x4661BC: sar     edx, 0Ch
0x4661BF: push    edx; signed int
0x4661C0: mov     ecx, edi; this
0x4661C2: call    TESWorldSpace__GetCellAtCellCoord
0x4661C7: mov     [esp+330h+var_304], eax
0x4661CB: cmp     [esp+330h+var_304], 0
0x4661D0: jz      short loc_46620D
0x4661D2: mov     eax, [esp+330h+var_304]
0x4661D6: mov     ecx, ds:0B333A0h
0x4661DC: push    0; a2
0x4661DE: push    eax; a1
0x4661DF: call    TESObjectCELL_IsProcessLevel?LowHigh
0x4661E4: test    al, al
0x4661E6: jz      short loc_46620D
0x4661E8: test    ebx, ebx
0x4661EA: jnz     loc_4663FB
0x4661F0: mov     edx, [esp+330h+a1]
0x4661F4: lea     ecx, [esp+330h+var_27C]
0x4661FB: push    ecx
0x4661FC: push    edx
0x4661FD: mov     ecx, ebp
0x4661FF: call    sub_45C4F0
0x466204: mov     ecx, [esp+330h+var_304]
0x466208: jmp     loc_4663F3
0x46620D: test    ebx, ebx
0x46620F: jz      short loc_466256
0x466211: push    0; int
0x466213: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x466218: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46621D: push    0; int
0x46621F: push    ebx; void *
0x466220: call    OblivionDynamicCast
0x466225: add     esp, 14h
0x466228: test    eax, eax
0x46622A: mov     [esp+330h+var_318], eax
0x46622E: jz      short loc_46624C
0x466230: mov     ecx, eax; this
0x466232: call    TESObjectREFR_GetParentCell
0x466237: test    eax, eax
0x466239: jz      short loc_46624C
0x46623B: mov     ecx, [esp+330h+var_318]; this
0x46623F: push    ecx
0x466240: call    TESObjectREFR_GetParentCell
0x466245: mov     ecx, eax
0x466247: call    sub_4CECD0
0x46624C: push    ebx
0x46624D: mov     ecx, ebp
0x46624F: call    sub_45C7A0
0x466254: xor     ebx, ebx
0x466256: cmp     [esp+330h+var_304], 0
0x46625B: jz      short loc_466291
0x46625D: mov     ecx, [esp+330h+var_304]; this
0x466261: call    TESObjectCELL_IsInterior
0x466266: test    al, al
0x466268: jz      short loc_466291
0x46626A: mov     eax, [esp+330h+a1]
0x46626E: mov     ecx, [esp+330h+var_26C]
0x466275: push    eax
0x466276: push    ecx
0x466277: mov     ecx, [ebp+8]
0x46627A: call    sub_452E70
0x46627F: mov     edx, [esp+330h+a1]
0x466283: push    edx
0x466284: lea     ecx, [ebp+20h]
0x466287: call    BSSimpleList_PushFront
0x46628C: jmp     loc_4663FB
0x466291: test    edi, edi
0x466293: jz      short loc_4662DE
0x466295: mov     ecx, [esp+330h+var_268]
0x46629C: mov     edx, dword ptr [esp+330h+var_264]
0x4662A3: sub     esp, 0Ch
0x4662A6: mov     eax, esp
0x4662A8: mov     [eax], ecx
0x4662AA: mov     ecx, dword ptr [esp+33Ch+var_264+4]
0x4662B1: mov     [eax+4], edx
0x4662B4: mov     edx, [esp+33Ch+a1]
0x4662B8: mov     [eax+8], ecx
0x4662BB: mov     eax, [esp+33Ch+var_26C]
0x4662C2: mov     ecx, [ebp+0Ch]
0x4662C5: push    edx
0x4662C6: push    eax
0x4662C7: call    sub_452F10
0x4662CC: mov     ecx, [esp+330h+a1]
0x4662D0: push    ecx
0x4662D1: lea     ecx, [ebp+20h]
0x4662D4: call    BSSimpleList_PushFront
0x4662D9: jmp     loc_4663FB
0x4662DE: mov     edx, [esp+330h+var_26C]
0x4662E5: push    edx
0x4662E6: push    offset aWorldspace08_0; "Worldspace %08X could not be found whil"...
0x4662EB: jmp     loc_465D16
0x4662F0: test    ebx, ebx
0x4662F2: jnz     loc_4663FB
0x4662F8: mov     ecx, [esp+330h+a1]
0x4662FC: push    ecx
0x4662FD: mov     ecx, [ebp+0]
0x466300: call    sub_452D10
0x466305: test    eax, eax
0x466307: jz      loc_4663FB
0x46630D: test    dword ptr [eax], 80000000h
0x466313: jz      loc_4663FB
0x466319: mov     esi, [eax+4]
0x46631C: test    esi, esi
0x46631E: jz      loc_4663FB
0x466324: add     esi, 4
0x466327: mov     ecx, 0Bh
0x46632C: lea     edi, [esp+330h+var_244]
0x466333: rep movsd
0x466335: mov     edx, [esp+330h+var_244]
0x46633C: push    edx
0x46633D: mov     ecx, ebp
0x46633F: call    sub_459950
0x466344: mov     esi, eax
0x466346: mov     eax, [esp+330h+var_234]
0x46634D: push    eax
0x46634E: mov     ecx, ebp
0x466350: mov     [esp+334h+var_244], esi
0x466357: call    sub_459950
0x46635C: push    esi; a1
0x46635D: mov     [esp+334h+var_234], eax
0x466364: call    TESForm_LookupByFormID
0x466369: push    ebx; int
0x46636A: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x46636F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466374: mov     esi, eax
0x466376: push    ebx; int
0x466377: push    esi; void *
0x466378: call    OblivionDynamicCast
0x46637D: push    ebx; int
0x46637E: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x466383: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466388: push    ebx; int
0x466389: push    esi; void *
0x46638A: mov     edi, eax
0x46638C: call    OblivionDynamicCast
0x466391: add     esp, 2Ch
0x466394: test    eax, eax
0x466396: jz      short loc_4663C7
0x466398: fld     [esp+330h+var_240]
0x46639F: fistp   [esp+330h+var_2D4]
0x4663A3: fld     [esp+330h+var_23C]
0x4663AA: fistp   [esp+330h+var_2DC]
0x4663AE: mov     ecx, [esp+330h+var_2DC]
0x4663B2: mov     edx, [esp+330h+var_2D4]
0x4663B6: sar     ecx, 0Ch
0x4663B9: push    ecx; signed int
0x4663BA: sar     edx, 0Ch
0x4663BD: push    edx; signed int
0x4663BE: mov     ecx, eax; this
0x4663C0: call    TESWorldSpace__GetCellAtCellCoord
0x4663C5: mov     edi, eax
0x4663C7: test    edi, edi
0x4663C9: jz      short loc_4663FB
0x4663CB: mov     ecx, ds:0B333A0h
0x4663D1: push    0; a2
0x4663D3: push    edi; a1
0x4663D4: call    TESObjectCELL_IsProcessLevel?LowHigh
0x4663D9: test    al, al
0x4663DB: jz      short loc_4663FB
0x4663DD: mov     ecx, [esp+330h+a1]
0x4663E1: lea     eax, [esp+330h+var_244]
0x4663E8: push    eax
0x4663E9: push    ecx
0x4663EA: mov     ecx, ebp
0x4663EC: call    sub_45C4F0
0x4663F1: mov     ecx, edi
0x4663F3: mov     ebx, eax
0x4663F5: push    ebx
0x4663F6: call    sub_4D35D0
0x4663FB: push    0; int
0x4663FD: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x466402: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466407: push    0; int
0x466409: push    ebx; void *
0x46640A: call    OblivionDynamicCast
0x46640F: mov     cl, [esp+344h+var_310]
0x466413: add     esp, 14h
0x466416: test    ebx, ebx
0x466418: jz      short loc_466451
0x46641A: mov     dl, [ebx+4]
0x46641D: cmp     dl, cl
0x46641F: jz      short loc_466451
0x466421: movzx   eax, dl
0x466424: lea     edx, [eax+eax*2]
0x466427: mov     eax, ds:0B05E04h[edx*4]
0x46642E: push    eax
0x46642F: movzx   eax, cl
0x466432: lea     ecx, [eax+eax*2]
0x466435: mov     edx, ds:0B05E04h[ecx*4]
0x46643C: mov     eax, [esp+334h+a1]
0x466440: push    edx
0x466441: push    eax
0x466442: push    offset aLoadErrorFormW; "Load Error: Form with ID %08X was saved"...
0x466447: call    PrintError
0x46644C: add     esp, 10h
0x46644F: jmp     short loc_466494
0x466451: test    eax, eax
0x466453: jz      short loc_46648D
0x466455: mov     edx, [eax]
0x466457: mov     ecx, eax
0x466459: mov     eax, [edx+170h]
0x46645F: call    eax
0x466461: test    eax, eax
0x466463: jnz     short loc_466489
0x466465: movzx   eax, [esp+330h+var_310]
0x46646A: lea     ecx, [eax+eax*2]
0x46646D: mov     edx, ds:0B05E04h[ecx*4]
0x466474: mov     eax, [esp+330h+a1]
0x466478: push    edx
0x466479: push    eax
0x46647A: push    offset aLoadErrorRefer; "Load Error: Reference with ID %08X and "...
0x46647F: call    PrintError
0x466484: add     esp, 0Ch
0x466487: jmp     short loc_466494
0x466489: mov     cl, [esp+330h+var_310]
0x46648D: cmp     [esp+330h+var_319], 0
0x466492: jnz     short loc_4664B0
0x466494: mov     eax, ds:0A853D4h
0x466499: mov     ecx, [esp+330h+var_2F8]
0x46649D: mov     edx, [ecx]
0x46649F: mov     edx, [edx+0Ch]
0x4664A2: push    eax
0x4664A3: movzx   eax, word ptr [esp+334h+var_30B+1]
0x4664A8: push    eax
0x4664A9: call    edx
0x4664AB: jmp     loc_466862
0x4664B0: xor     esi, esi
0x4664B2: test    ebx, ebx
0x4664B4: jz      loc_466787
0x4664BA: mov     ecx, [ebp+0]
0x4664BD: push    ebx
0x4664BE: call    sub_452D30
0x4664C3: test    eax, eax
0x4664C5: jz      short loc_4664C9
0x4664C7: mov     esi, [eax]
0x4664C9: push    esi
0x4664CA: push    ebx
0x4664CB: mov     ecx, ebp
0x4664CD: call    sub_453530
0x4664D2: push    ebx
0x4664D3: mov     ecx, ebp
0x4664D5: mov     edi, eax
0x4664D7: call    sub_459FA0
0x4664DC: mov     [esp+330h+var_304], eax
0x4664E0: mov     dword ptr [ebp+44h], 1FFFF000h
0x4664E7: mov     edx, [ebx]
0x4664E9: mov     edx, [edx+60h]
0x4664EC: mov     eax, edi
0x4664EE: and     eax, 1FFFF080h
0x4664F3: push    eax
0x4664F4: mov     ecx, ebx
0x4664F6: call    edx
0x4664F8: mov     esi, [esp+330h+var_30F]
0x4664FC: not     esi
0x4664FE: and     esi, edi
0x466500: and     esi, 0FFFh
0x466506: jz      loc_466650
0x46650C: push    0; int
0x46650E: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x466513: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466518: push    0; int
0x46651A: push    ebx; void *
0x46651B: call    OblivionDynamicCast
0x466520: add     esp, 14h
0x466523: test    eax, eax
0x466525: jz      short loc_46654B
0x466527: push    0; int
0x466529: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x46652E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x466533: push    0; int
0x466535: push    ebx; void *
0x466536: and     esi, 0FFFFF7FFh
0x46653C: call    OblivionDynamicCast
0x466541: add     esp, 14h
0x466544: test    eax, eax
0x466546: jz      short loc_46654B
0x466548: and     esi, 0FFFFFFBFh
0x46654B: test    esi, esi
0x46654D: jz      loc_466650
0x466553: cmp     ebx, ds:0B333C4h
0x466559: jz      loc_466650
0x46655F: mov     eax, [ebx+0Ch]
0x466562: mov     ecx, ds:0B33A98h
0x466568: push    eax; _DWORD
0x466569: call    TESDataHandler_IsFormIDCreated?
0x46656E: test    al, al
0x466570: jnz     loc_466650
0x466576: mov     eax, [ebx+0Ch]
0x466579: mov     ecx, ds:0B33A98h
0x46657F: push    eax; _DWORD
0x466580: call    TESDataHandler_IsFormIDCreated?
0x466585: test    al, al
0x466587: jz      short loc_4665B0
0x466589: mov     eax, [esp+330h+var_30F]
0x46658D: push    edi
0x46658E: push    eax
0x46658F: movzx   eax, byte ptr [ebx+4]
0x466593: lea     ecx, [eax+eax*2]
0x466596: mov     edx, ds:0B05E04h[ecx*4]
0x46659D: mov     eax, [ebx+0Ch]
0x4665A0: push    esi
0x4665A1: push    edx
0x4665A2: push    eax
0x4665A3: push    offset aCreatedForm08x; "Created form %08X with type %s is going"...
0x4665A8: call    PrintError
0x4665AD: add     esp, 18h
0x4665B0: mov     ecx, [esp+330h+var_30F]
0x4665B4: push    ecx
0x4665B5: push    esi
0x4665B6: push    ebx
0x4665B7: mov     ecx, ebp
0x4665B9: call    TESSaveLoadGame_ResetObject
0x4665BE: mov     ecx, ebp
0x4665C0: call    sub_45A500
0x4665C5: cmp     byte ptr [ebx+4], 30h ; '0'
0x4665C9: mov     byte ptr [esp+330h+var_2D8], al
0x4665CD: jnz     short loc_4665F5
0x4665CF: mov     edx, ds:0B33398h
0x4665D5: mov     eax, [edx+10h]
0x4665D8: mov     [esp+330h+var_318], eax
0x4665DC: call    dword ptr ds:0A2808Ch
0x4665E2: cmp     eax, [esp+330h+var_318]
0x4665E6: jnz     short loc_4665EE
0x4665E8: and     dword ptr [ebp+18h], 0FFFFFFFEh
0x4665EC: jmp     short loc_4665F5
0x4665EE: and     dword ptr [ebp+18h], 0FFFBFFFFh
0x4665F5: mov     edx, [ebx]
0x4665F7: mov     eax, [edx+6Ch]
0x4665FA: mov     ecx, ebx
0x4665FC: call    eax
0x4665FE: mov     ecx, [esp+330h+var_2D8]
0x466602: push    ecx
0x466603: mov     ecx, ebp
0x466605: call    sub_45A530
0x46660A: push    1
0x46660C: push    esi
0x46660D: push    ebx
0x46660E: mov     ecx, ebp
0x466610: call    sub_45C020
0x466615: test    al, al
0x466617: jnz     short loc_466650
0x466619: movzx   edx, [esp+330h+var_310]
0x46661E: mov     eax, [esp+330h+a1]
0x466622: push    edx
0x466623: push    eax
0x466624: push    offset aInitobjectDele; "InitObject deleted form %08X with type "...
0x466629: call    PrintError
0x46662E: mov     eax, ds:0A853D4h
0x466633: mov     ecx, [esp+33Ch+var_280]
0x46663A: mov     edx, [ecx]
0x46663C: mov     edx, [edx+0Ch]
0x46663F: add     esp, 0Ch
0x466642: push    eax
0x466643: movzx   eax, word ptr [esp+334h+var_30B+1]
0x466648: push    eax
0x466649: call    edx
0x46664B: jmp     TESSaveLoadGame_LoadGame___ChangeRecordLoop_Next
0x466650: mov     eax, [esp+330h+var_30F]
0x466654: mov     ecx, [ebx+0Ch]
0x466657: push    eax
0x466658: push    ecx
0x466659: mov     ecx, [ebp+4]
0x46665C: call    sub_452C90
0x466661: movzx   edx, word ptr [esp+330h+var_30B+1]
0x466666: push    edx
0x466667: mov     ecx, ebp
0x466669: call    sub_453500
0x46666E: mov     ecx, [esp+330h+var_2F8]
0x466672: mov     esi, eax
0x466674: movzx   eax, word ptr [esp+330h+var_30B+1]
0x466679: push    eax
0x46667A: push    esi
0x46667B: push    ecx
0x46667C: mov     ecx, ebp
0x46667E: call    sub_45BB00
0x466683: mov     eax, [esp+330h+var_30F]
0x466687: push    eax
0x466688: lea     edx, [esp+334h+a1]
0x46668C: push    ebx
0x46668D: mov     ecx, ebp
0x46668F: mov     [ebp+80h], edx
0x466695: call    sub_460BC0
0x46669A: mov     edx, [ebx]
0x46669C: mov     eax, [esp+330h+var_30F]
0x4666A0: mov     edx, [edx+54h]
0x4666A3: push    edi
0x4666A4: push    eax
0x4666A5: mov     ecx, ebx
0x4666A7: call    edx
0x4666A9: push    10h; Size
0x4666AB: mov     dword ptr [ebp+80h], 0
0x4666B5: call    FormHeapAlloc
0x4666BA: add     esp, 4
0x4666BD: test    eax, eax
0x4666BF: jz      short loc_4666D6
0x4666C1: mov     cl, byte ptr [esp+330h+var_30B]
0x4666C5: mov     edx, [esp+330h+var_30F]
0x4666C9: mov     [eax], ebx
0x4666CB: mov     [eax+4], edx
0x4666CE: mov     [eax+8], edi
0x4666D1: mov     [eax+0Ch], cl
0x4666D4: jmp     short loc_4666D8
0x4666D6: xor     eax, eax
0x4666D8: cmp     ebx, ds:0B333C4h
0x4666DE: mov     [esp+330h+var_318], eax
0x4666E2: jz      short loc_4666F7
0x4666E4: lea     eax, [esp+330h+var_318]
0x4666E8: push    eax
0x4666E9: lea     ecx, [esp+334h+var_298]
0x4666F0: call    sub_5A6AB0
0x4666F5: jmp     short loc_4666FB
0x4666F7: mov     [esp+330h+var_2F4], eax
0x4666FB: movzx   ecx, word ptr [esp+330h+var_30B+1]
0x466700: mov     eax, [ebp+14h]
0x466703: sub     eax, ecx
0x466705: sub     eax, esi
0x466707: jz      short loc_466720
0x466709: cmp     eax, 0FFFFFFFEh
0x46670C: jz      short loc_466720
0x46670E: mov     ecx, ds:0B34D90h
0x466714: mov     edx, [ecx]
0x466716: mov     eax, [edx+18h]
0x466719: push    offset aLoadgameCallDi; "LoadGame() call did not properly empty "...
0x46671E: call    eax
0x466720: mov     dword ptr [ebp+44h], 60000000h
0x466727: mov     edx, [ebx]
0x466729: mov     eax, [edx+60h]
0x46672C: and     edi, 60000000h
0x466732: push    edi
0x466733: mov     ecx, ebx
0x466735: call    eax
0x466737: mov     ecx, [esp+330h+var_304]
0x46673B: push    ecx
0x46673C: push    ebx
0x46673D: mov     ecx, ebp
0x46673F: call    sub_45A020
0x466744: push    esi
0x466745: mov     ecx, ebp
0x466747: call    sub_452230
0x46674C: mov     edx, [ebx+0Ch]
0x46674F: mov     ecx, [ebp+0]
0x466752: push    1
0x466754: push    edx
0x466755: call    sub_452DF0
0x46675A: mov     eax, [ebp+50h]
0x46675D: test    eax, eax
0x46675F: jz      short loc_466772
0x466761: mov     ecx, [ebp+4]
0x466764: push    eax
0x466765: push    ebx
0x466766: call    sub_452D60
0x46676B: mov     dword ptr [ebp+50h], 0
0x466772: mov     ecx, [ebp+40h]
0x466775: test    ecx, ecx
0x466777: jz      loc_466862
0x46677D: lea     eax, [esp+330h+a1]
0x466781: push    eax
0x466782: jmp     loc_46685D
0x466787: mov     ax, word ptr [esp+330h+var_30B+1]
0x46678C: test    ax, ax
0x46678F: jz      loc_466830
0x466795: movzx   edx, ax
0x466798: mov     [esp+330h+var_2DE], cl
0x46679C: mov     cl, byte ptr [esp+330h+var_30B]
0x4667A0: add     edx, 4
0x4667A3: mov     [esp+330h+var_2DD], cl
0x4667A7: push    edx
0x4667A8: mov     ecx, ebp
0x4667AA: mov     [esp+334h+Src], ax
0x4667AF: call    sub_453500
0x4667B4: mov     edi, ds:0A2808Ch
0x4667BA: mov     ebx, eax
0x4667BC: mov     eax, ds:0B33398h
0x4667C1: mov     esi, [eax+10h]
0x4667C4: call    edi ; GetCurrentThreadId
0x4667C6: cmp     eax, esi
0x4667C8: jnz     short loc_4667D0
0x4667CA: and     dword ptr [ebp+18h], 0FFFFFFFEh
0x4667CE: jmp     short loc_4667D7
0x4667D0: and     dword ptr [ebp+18h], 0FFFBFFFFh
0x4667D7: push    4; Size
0x4667D9: lea     ecx, [esp+334h+Src]
0x4667DD: push    ecx; Src
0x4667DE: mov     ecx, ds:0B33B00h
0x4667E4: call    SaveLoad_SaveData
0x4667E9: mov     edx, ds:0B33398h
0x4667EF: mov     esi, [edx+10h]
0x4667F2: call    edi ; GetCurrentThreadId
0x4667F4: cmp     eax, esi
0x4667F6: jnz     short loc_4667FE
0x4667F8: or      dword ptr [ebp+18h], 1
0x4667FC: jmp     short loc_466805
0x4667FE: or      dword ptr [ebp+18h], 40000h
0x466805: movzx   eax, word ptr [esp+330h+var_30B+1]
0x46680A: mov     ecx, [ebp+14h]
0x46680D: mov     edx, [esp+330h+var_2F8]
0x466811: push    eax
0x466812: push    ecx
0x466813: push    edx
0x466814: mov     ecx, ebp
0x466816: call    sub_45BB00
0x46681B: mov     eax, [esp+330h+var_30F]
0x46681F: mov     ecx, [esp+330h+a1]
0x466823: push    ebx
0x466824: push    eax
0x466825: push    ecx
0x466826: mov     ecx, [ebp+4]
0x466829: call    sub_452CF0
0x46682E: jmp     short loc_466842
0x466830: mov     edx, [esp+330h+var_30F]
0x466834: mov     eax, [esp+330h+a1]
0x466838: mov     ecx, [ebp+4]
0x46683B: push    edx
0x46683C: push    eax
0x46683D: call    sub_452C90
0x466842: mov     ecx, [esp+330h+a1]
0x466846: push    1
0x466848: push    ecx
0x466849: mov     ecx, [ebp+0]
0x46684C: call    sub_452DF0
0x466851: mov     ecx, [ebp+40h]
0x466854: test    ecx, ecx
0x466856: jz      short loc_466862
0x466858: lea     edx, [esp+330h+a1]
0x46685C: push    edx
0x46685D: call    sub_45AD00
0x466862: mov     al, [ebp+71h]
0x466865: mov     [ebp+7Ch], al
0x466868: mov     esi, [esp+330h+var_2F8]
0x46686C: mov     eax, [esp+330h+var_2C8]
0x466870: add     eax, 1
0x466873: cmp     eax, [esp+330h+var_2FC]
0x466877: mov     [esp+330h+var_2C8], eax
0x46687B: jb      TESSaveLoadGame_LoadGame___ChangeRecordLoop_Top
0x466881: mov     edi, [esp+330h+var_2F4]
0x466885: push    1
0x466887: mov     ecx, ebp
0x466889: call    sub_464440
0x46688E: mov     ecx, ds:0B33A10h
0x466894: call    sub_432890
0x466899: push    1
0x46689B: push    edi
0x46689C: lea     ecx, [esp+338h+var_298]
0x4668A3: push    ecx
0x4668A4: mov     ecx, ebp
0x4668A6: call    sub_45FDA0
0x4668AB: test    edi, edi
0x4668AD: jz      short loc_4668B8
0x4668AF: push    edi
0x4668B0: call    FormHeapFree
0x4668B5: add     esp, 4
0x4668B8: mov     ecx, ebp
0x4668BA: call    SaveLoad_ValidateCreatedObj??
0x4668BF: mov     ecx, ebp
0x4668C1: call    sub_45C320
0x4668C6: call    sub_57A850
0x4668CB: mov     ecx, offset ActorProcessManager_ptr
0x4668D0: call    sub_675F40
0x4668D5: push    1
0x4668D7: mov     ecx, offset ActorProcessManager_ptr
0x4668DC: call    sub_673BD0
0x4668E1: push    2
0x4668E3: mov     ecx, offset ActorProcessManager_ptr
0x4668E8: call    sub_673BD0
0x4668ED: mov     ecx, ds:0B333A0h
0x4668F3: call    sub_441510
0x4668F8: push    1
0x4668FA: mov     ecx, ebp
0x4668FC: call    sub_461030
0x466901: push    esi
0x466902: mov     ecx, ebp
0x466904: call    sub_45FC60
0x466909: mov     ecx, offset ActorProcessManager_ptr
0x46690E: call    sub_677360
0x466913: mov     ecx, offset ActorProcessManager_ptr
0x466918: call    sub_677A90
0x46691D: mov     ecx, ds:0B33A1Ch
0x466923: call    sub_43BEB0
0x466928: mov     ecx, ebp
0x46692A: call    sub_459A90
0x46692F: mov     edx, ds:0B33398h
0x466935: mov     edi, [edx+10h]
0x466938: call    dword ptr ds:0A2808Ch
0x46693E: cmp     eax, edi
0x466940: jnz     short loc_466948
0x466942: and     dword ptr [ebp+18h], 0FFFFFFFEh
0x466946: jmp     short loc_46694F
0x466948: and     dword ptr [ebp+18h], 0FFFBFFFFh
0x46694F: and     dword ptr [ebp+18h], 0FFFFF7FFh
0x466956: mov     byte ptr [ebp+0A8h], 0
0x46695D: mov     ecx, ds:0B333C4h
0x466963: call    sub_65E800
0x466968: mov     ecx, ds:0B333C4h
0x46696E: call    sub_65E860
0x466973: mov     ecx, ds:0B333C4h
0x466979: push    ecx
0x46697A: call    sub_665260
0x46697F: mov     ecx, ds:0B333C4h
0x466985: call    sub_663F50
0x46698A: mov     ecx, ds:0B33A98h
0x466990: call    sub_447300
0x466995: mov     ecx, [ebp+40h]
0x466998: test    ecx, ecx
0x46699A: mov     byte ptr [ebp+70h], 0
0x46699E: mov     byte ptr [ebp+71h], 7Dh ; '}'
0x4669A2: mov     byte ptr [ebp+7Ch], 7Dh ; '}'
0x4669A6: jz      short loc_4669CF
0x4669A8: lea     eax, [esi+3Ch]
0x4669AB: push    eax; lpString2
0x4669AC: call    TESSaveLoadGame_PrintChangeRecords?
0x4669B1: mov     edi, [ebp+40h]
0x4669B4: test    edi, edi
0x4669B6: jz      short loc_4669C8
0x4669B8: mov     ecx, edi
0x4669BA: call    sub_4530A0
0x4669BF: push    edi
0x4669C0: call    FormHeapFree
0x4669C5: add     esp, 4
0x4669C8: mov     dword ptr [ebp+40h], 0
0x4669CF: mov     ebp, [ebp+6Ch]
0x4669D2: test    ebp, ebp
0x4669D4: jz      short loc_4669DE
0x4669D6: push    esi
0x4669D7: mov     ecx, ebp
0x4669D9: call    BSSimpleList_Remove
0x4669DE: mov     edx, [esi]
0x4669E0: mov     eax, [edx]
0x4669E2: push    1
0x4669E4: mov     ecx, esi
0x4669E6: call    eax
0x4669E8: mov     byte ptr ds:0B33B04h, 1
0x4669EF: call    dword ptr ds:0A280D0h
0x4669F5: sub     eax, [esp+330h+var_2CC]
0x4669F9: test    eax, eax
0x4669FB: mov     [esp+330h+var_2CC], eax
0x4669FF: fild    [esp+330h+var_2CC]
0x466A03: jge     short loc_466A0B
0x466A05: fadd    dword ptr ds:0A2FC78h
0x466A0B: fdiv    qword ptr ds:0A2FC70h
0x466A11: sub     esp, 8
0x466A14: lea     ecx, [esp+338h+var_218]
0x466A1B: fstp    [esp+338h+var_338]
0x466A1E: push    offset aLoadgameTook_2; "LoadGame took %.2f seconds\n"
0x466A23: push    ecx
0x466A24: call    __sprintf
0x466A29: mov     edx, [esp+340h+var_294]
0x466A30: push    edx
0x466A31: call    FormHeapFree
0x466A36: add     esp, 14h
0x466A39: mov     al, 1
0x466A3B: jmp     short loc_466A9C
0x466A3D: test    edi, edi
0x466A3F: jz      short loc_466A53
0x466A41: push    offset aQuicksave; "quicksave"
0x466A46: push    edi; Str
0x466A47: call    _strstr
0x466A4C: add     esp, 8
0x466A4F: test    eax, eax
0x466A51: jnz     short loc_466A6D
0x466A53: test    ebx, ebx
0x466A55: jnz     short loc_466A6D
0x466A57: mov     eax, ds:0B38740h
0x466A5C: push    ebx
0x466A5D: push    offset EmptyString
0x466A62: push    ebx
0x466A63: push    ebx
0x466A64: push    eax
0x466A65: call    ShowUIMessageBox
0x466A6A: add     esp, 14h
0x466A6D: test    esi, esi
0x466A6F: jz      short loc_466A8A
0x466A71: mov     ebp, [ebp+6Ch]
0x466A74: test    ebp, ebp
0x466A76: jz      short loc_466A80
0x466A78: push    esi
0x466A79: mov     ecx, ebp
0x466A7B: call    BSSimpleList_Remove
0x466A80: mov     edx, [esi]
0x466A82: mov     eax, [edx]
0x466A84: push    1
0x466A86: mov     ecx, esi
0x466A88: call    eax
0x466A8A: mov     ecx, [esp+330h+var_294]
0x466A91: push    ecx
0x466A92: call    FormHeapFree
0x466A97: add     esp, 4
0x466A9A: xor     al, al
0x466A9C: mov     ecx, dword ptr [esp+330h+var_C]
0x466AA3: mov     large fs:0, ecx
0x466AAA: pop     ecx
0x466AAB: pop     edi
0x466AAC: pop     esi
0x466AAD: pop     ebp
0x466AAE: pop     ebx
0x466AAF: mov     ecx, [esp+31Ch+var_10]
0x466AB6: xor     ecx, esp
0x466AB8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x466ABD: add     esp, 31Ch
0x466AC3: retn    0Ch
