0x502500: sub     esp, 310h
0x502506: mov     eax, ds:0B30AACh
0x50250B: xor     eax, esp
0x50250D: mov     [esp+310h+var_4], eax
0x502514: mov     edx, [esp+310h+a4]
0x50251B: push    ebx
0x50251C: mov     ebx, [esp+314h+arg_1C]
0x502523: mov     ecx, [esp+314h+arg_4]
0x50252A: push    ebp
0x50252B: mov     ebp, [esp+318h+l]
0x502532: mov     eax, [esp+318h+a1]
0x502539: push    esi
0x50253A: mov     esi, [esp+31Ch+arg_C]
0x502541: push    edi
0x502542: mov     edi, [esp+320h+arg_10]
0x502549: mov     [esp+320h+a3], ebx
0x50254D: lea     ebx, [esp+320h+var_30C]
0x502551: push    ebx
0x502552: lea     ebx, [esp+324h+Str]
0x502559: push    ebx; UInt16
0x50255A: push    ebp; l
0x50255B: push    edi; a6
0x50255C: push    esi; a5
0x50255D: push    edx; a4
0x50255E: mov     edx, [esp+338h+a3]
0x502562: push    edx; a3
0x502563: push    ecx; a2
0x502564: push    eax; a1
0x502565: mov     [esp+344h+var_30C], 0
0x50256D: call    Script_ExtractArgs
0x502572: add     esp, 24h
0x502575: test    al, al
0x502577: jz      loc_502616
0x50257D: push    offset EmptyString; lpString2
0x502582: lea     eax, [esp+324h+String1]
0x502586: push    eax; lpString1
0x502587: call    dword ptr ds:0A28164h
0x50258D: lea     ecx, [esp+320h+Str]
0x502594: push    2Eh ; '.'; Val
0x502596: push    ecx; Str
0x502597: call    _strchr
0x50259C: add     esp, 8
0x50259F: mov     esi, eax
0x5025A1: test    esi, esi
0x5025A3: lea     edx, [esp+320h+Str]
0x5025AA: lea     eax, [esp+320h+String1]
0x5025AE: push    edx; lpString2
0x5025AF: push    eax; lpString1
0x5025B0: jz      short loc_5025CE
0x5025B2: mov     edi, ds:0A28160h
0x5025B8: mov     byte ptr [esi], 0
0x5025BB: call    edi ; lstrcatA
0x5025BD: push    offset a_ess; ".ess"
0x5025C2: lea     ecx, [esp+324h+String1]
0x5025C6: push    ecx; lpString1
0x5025C7: call    edi ; lstrcatA
0x5025C9: mov     byte ptr [esi], 2Eh ; '.'
0x5025CC: jmp     short loc_5025D4
0x5025CE: call    dword ptr ds:0A28160h
0x5025D4: cmp     [esp+320h+var_30C], 0
0x5025D9: mov     byte ptr [esp+320h+a3], 0
0x5025DE: jz      short loc_5025E5
0x5025E0: mov     byte ptr [esp+320h+a3], 1
0x5025E5: mov     ecx, [esp+320h+a3]
0x5025E9: push    ecx
0x5025EA: mov     ecx, ds:0B33B00h
0x5025F0: lea     edx, [esp+324h+String1]
0x5025F4: push    edx
0x5025F5: push    0
0x5025F7: call    TESSaveLoadGame_LoadGame
0x5025FC: test    al, al
0x5025FE: jz      short loc_502607
0x502600: push    offset aGameLoaded; "Game Loaded"
0x502605: jmp     short loc_50260C
0x502607: push    offset aFileNotFound_; "File not found."
0x50260C: call    Interface_ConsolePrint
0x502611: add     esp, 4
0x502614: mov     al, 1
0x502616: mov     ecx, [esp+320h+var_4]
0x50261D: pop     edi
0x50261E: pop     esi
0x50261F: pop     ebp
0x502620: pop     ebx
0x502621: xor     ecx, esp
0x502623: call    @__security_check_cookie@4; __security_check_cookie(x)
0x502628: add     esp, 310h
0x50262E: retn
