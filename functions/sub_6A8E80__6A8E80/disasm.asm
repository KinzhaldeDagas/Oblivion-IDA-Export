0x6A8E80: sub     esp, 248h
0x6A8E86: mov     eax, ds:0B30AACh
0x6A8E8B: xor     eax, esp
0x6A8E8D: mov     [esp+248h+var_4], eax
0x6A8E94: movzx   eax, [esp+248h+arg_4]
0x6A8E9C: cmp     eax, 4; switch 5 cases
0x6A8E9F: push    ebx
0x6A8EA0: push    ebp
0x6A8EA1: push    esi
0x6A8EA2: push    edi
0x6A8EA3: mov     edi, [esp+258h+lpFileName]
0x6A8EAA: ja      short def_6A8EAC; jumptable 006A8EAC default case, case 3
0x6A8EAC: jmp     ds:jpt_6A8EAC[eax*4]; switch jump
0x6A8EB3: push    offset aDataMusicExplo; jumptable 006A8EAC case 0
0x6A8EB8: lea     eax, [esp+25Ch+var_108]
0x6A8EBF: push    eax
0x6A8EC0: jmp     short loc_6A8EF4
0x6A8EC2: push    offset aDataMusicPubli; jumptable 006A8EAC case 1
0x6A8EC7: jmp     short loc_6A8EEC
0x6A8EC9: push    offset aDataMusicDunge; jumptable 006A8EAC case 2
0x6A8ECE: lea     edx, [esp+25Ch+var_108]
0x6A8ED5: push    edx
0x6A8ED6: jmp     short loc_6A8EF4
0x6A8ED8: push    offset aDataMusicBattl; jumptable 006A8EAC case 4
0x6A8EDD: lea     eax, [esp+25Ch+var_108]
0x6A8EE4: push    eax
0x6A8EE5: jmp     short loc_6A8EF4
0x6A8EE7: push    offset aDataMusicExplo; jumptable 006A8EAC default case, case 3
0x6A8EEC: lea     ecx, [esp+25Ch+var_108]
0x6A8EF3: push    ecx
0x6A8EF4: call    __sprintf
0x6A8EF9: add     esp, 8
0x6A8EFC: lea     edx, [esp+258h+var_108]
0x6A8F03: push    edx
0x6A8F04: push    offset aS_mp3; "%s*.mp3"
0x6A8F09: push    edi
0x6A8F0A: call    __sprintf
0x6A8F0F: add     esp, 0Ch
0x6A8F12: lea     eax, [esp+258h+FindFileData]
0x6A8F16: push    eax; lpFindFileData
0x6A8F17: push    edi; lpFileName
0x6A8F18: call    dword ptr ds:0A2812Ch
0x6A8F1E: mov     esi, eax
0x6A8F20: cmp     esi, 0FFFFFFFFh
0x6A8F23: jz      loc_6A8FF5
0x6A8F29: mov     ebp, ds:0A28124h
0x6A8F2F: lea     ecx, [esp+258h+FindFileData]
0x6A8F33: push    ecx; lpFindFileData
0x6A8F34: push    esi; hFindFile
0x6A8F35: mov     ebx, 1
0x6A8F3A: call    ebp ; FindNextFileA
0x6A8F3C: test    eax, eax
0x6A8F3E: jz      short loc_6A8F4F
0x6A8F40: lea     edx, [esp+258h+FindFileData]
0x6A8F44: push    edx; lpFindFileData
0x6A8F45: push    esi; hFindFile
0x6A8F46: add     ebx, 1
0x6A8F49: call    ebp ; FindNextFileA
0x6A8F4B: test    eax, eax
0x6A8F4D: jnz     short loc_6A8F40
0x6A8F4F: push    esi; hFindFile
0x6A8F50: call    dword ptr ds:0A28120h
0x6A8F56: test    ebx, ebx
0x6A8F58: jz      loc_6A8FF5
0x6A8F5E: push    0; Seed
0x6A8F60: call    GetRandomLargeInteger?
0x6A8F65: cdq
0x6A8F66: idiv    ebx
0x6A8F68: add     esp, 4
0x6A8F6B: lea     eax, [esp+258h+FindFileData]
0x6A8F6F: push    eax; lpFindFileData
0x6A8F70: push    edi; lpFileName
0x6A8F71: mov     ebx, edx
0x6A8F73: call    dword ptr ds:0A2812Ch
0x6A8F79: mov     esi, eax
0x6A8F7B: cmp     esi, 0FFFFFFFFh
0x6A8F7E: jz      short loc_6A8FF5
0x6A8F80: test    ebx, ebx
0x6A8F82: jz      short loc_6A8F97
0x6A8F84: lea     ecx, [esp+258h+FindFileData]
0x6A8F88: push    ecx; lpFindFileData
0x6A8F89: push    esi; hFindFile
0x6A8F8A: sub     ebx, 1
0x6A8F8D: call    ebp ; FindNextFileA
0x6A8F8F: test    eax, eax
0x6A8F91: jz      short loc_6A8FEE
0x6A8F93: test    ebx, ebx
0x6A8F95: jnz     short loc_6A8F84
0x6A8F97: push    esi; hFindFile
0x6A8F98: call    dword ptr ds:0A28120h
0x6A8F9E: lea     eax, [esp+258h+var_108]
0x6A8FA5: mov     edx, edi
0x6A8FA7: mov     ecx, eax
0x6A8FA9: sub     edx, ecx
0x6A8FAB: jmp     short loc_6A8FB0
