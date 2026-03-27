0x440AF0: sub     esp, 10h
0x440AF3: cmp     [esp+10h+arg_0], 0
0x440AF8: push    esi
0x440AF9: mov     esi, ecx
0x440AFB: jz      loc_440C17
0x440B01: push    3EFh
0x440B06: call    Menu_GetOpenMenuTile
0x440B0B: add     esp, 4
0x440B0E: test    eax, eax
0x440B10: jnz     loc_440C33
0x440B16: mov     ecx, [esi+5Ch]
0x440B19: push    ebp
0x440B1A: call    sub_540590
0x440B1F: mov     eax, ds:0B33398h
0x440B24: mov     ebp, [eax+24h]
0x440B27: test    ebp, ebp
0x440B29: jz      short loc_440B39
0x440B2B: mov     ecx, ebp
0x440B2D: call    sub_6A9A10
0x440B32: mov     ecx, ebp
0x440B34: call    sub_6AC3D0
0x440B39: mov     eax, [esi+34h]
0x440B3C: mov     cl, [esp+18h+arg_4]
0x440B40: push    ebx
0x440B41: push    edi
0x440B42: xor     ebx, ebx
0x440B44: xor     edi, edi
0x440B46: test    eax, eax
0x440B48: jnz     short loc_440B96
0x440B4A: test    cl, cl
0x440B4C: jnz     short loc_440B92
0x440B4E: mov     ebx, [esp+20h+arg_8]
0x440B52: test    ebx, ebx
0x440B54: jnz     short loc_440B9C
0x440B56: mov     ecx, [esi+20h]
0x440B59: cmp     ecx, 7FFFFFFFh
0x440B5F: jz      short loc_440B7F
0x440B61: mov     eax, [esi+24h]
0x440B64: cmp     eax, 7FFFFFFFh
0x440B69: jz      short loc_440B7F
0x440B6B: push    eax; signed int
0x440B6C: push    ecx; signed int
0x440B6D: mov     ecx, [esi+74h]; this
0x440B70: call    TESWorldSpace__GetCellAtCellCoord
0x440B75: mov     edi, eax
0x440B77: test    edi, edi
0x440B79: jz      short loc_440B7F
0x440B7B: mov     ebx, edi
0x440B7D: jmp     short loc_440B9C
0x440B7F: mov     ebx, [esi+74h]
0x440B82: test    ebx, ebx
0x440B84: jnz     short loc_440B9C
0x440B86: pop     edi
0x440B87: pop     ebx
0x440B88: pop     ebp
0x440B89: xor     al, al
0x440B8B: pop     esi
0x440B8C: add     esp, 10h
0x440B8F: retn    0Ch
0x440B92: test    eax, eax
0x440B94: jz      short loc_440B9C
0x440B96: test    cl, cl
0x440B98: jnz     short loc_440B9C
0x440B9A: mov     ebx, eax
0x440B9C: call    sub_40FDA0
0x440BA1: test    al, al
0x440BA3: jnz     short loc_440BDA
0x440BA5: test    edi, edi
0x440BA7: jz      short loc_440BB1
0x440BA9: test    ebp, ebp
0x440BAB: jz      short loc_440BB1
0x440BAD: mov     ecx, edi
0x440BAF: jmp     short loc_440BBC
0x440BB1: mov     ecx, [esi+34h]
0x440BB4: test    ecx, ecx
0x440BB6: jz      short loc_440BDA
0x440BB8: test    ebp, ebp
0x440BBA: jz      short loc_440BDA
0x440BBC: push    0
0x440BBE: push    0
0x440BC0: push    0
0x440BC2: call    TESObjectCELL_GetMusicType
0x440BC7: push    eax
0x440BC8: mov     ecx, ebp
0x440BCA: call    SoundManager_OpenMusicFile
0x440BCF: test    al, al
0x440BD1: jz      short loc_440BDA
0x440BD3: mov     ecx, ebp
0x440BD5: call    SoundManager_PlayMusic
0x440BDA: push    ebx
0x440BDB: call    sub_578E10
0x440BE0: fldz
0x440BE2: fst     [esp+24h+var_10]
0x440BE6: lea     ecx, [esp+24h+var_10]
0x440BEA: fld     dword ptr ds:0A2FAACh
0x440BF0: push    ecx
0x440BF1: fstp    [esp+28h+var_C]
0x440BF5: fld     dword ptr ds:0A37450h
0x440BFB: fstp    [esp+28h+var_8]
0x440BFF: fstp    [esp+28h+var_4]
0x440C03: call    sub_578E90
0x440C08: add     esp, 8
0x440C0B: pop     edi
0x440C0C: pop     ebx
0x440C0D: pop     ebp
0x440C0E: mov     al, 1
0x440C10: pop     esi
0x440C11: add     esp, 10h
0x440C14: retn    0Ch
0x440C17: call    sub_578E30
0x440C1C: call    sub_5A9010
0x440C21: mov     edx, ds:0B33398h
0x440C27: mov     ecx, [edx+24h]
0x440C2A: test    ecx, ecx
0x440C2C: jz      short loc_440C33
0x440C2E: call    sub_6A9AA0
0x440C33: xor     al, al
0x440C35: pop     esi
0x440C36: add     esp, 10h
0x440C39: retn    0Ch
