0x77EC60: sub     esp, 314h
0x77EC66: mov     eax, ds:0B30AACh
0x77EC6B: xor     eax, esp
0x77EC6D: mov     [esp+314h+var_4], eax
0x77EC74: push    ebp
0x77EC75: mov     ebp, [esp+318h+Dst]
0x77EC7C: push    esi; Src
0x77EC7D: mov     esi, [esp+31Ch+Src]
0x77EC84: push    0
0x77EC86: push    esi
0x77EC87: mov     dword ptr [esp+324h+ArgList], esi
0x77EC8B: call    NiFile_CanOpenFileWithMode_Indirect
0x77EC90: add     esp, 8
0x77EC93: test    al, al
0x77EC95: jz      short loc_77ECC2
0x77EC97: mov     eax, [esp+31Ch+SizeInBytes]
0x77EC9E: push    esi; Src
0x77EC9F: push    eax; SizeInBytes
0x77ECA0: push    ebp; Dst
0x77ECA1: call    _strcpy_s
0x77ECA6: add     esp, 0Ch
0x77ECA9: pop     esi
0x77ECAA: mov     al, 1
0x77ECAC: pop     ebp
0x77ECAD: mov     ecx, [esp+314h+var_4]
0x77ECB4: xor     ecx, esp
0x77ECB6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x77ECBB: add     esp, 314h
0x77ECC1: retn
0x77ECC2: cmp     dword ptr ds:0B428A8h, 0
0x77ECC9: jnz     short loc_77ECF5
0x77ECCB: push    offset aNoValidShaderP; "No valid shader program factory\n"
0x77ECD0: push    0; int
0x77ECD2: push    1; int
0x77ECD4: call    sub_738460
0x77ECD9: add     esp, 0Ch
0x77ECDC: pop     esi
0x77ECDD: xor     al, al
0x77ECDF: pop     ebp
0x77ECE0: mov     ecx, [esp+314h+var_4]
0x77ECE7: xor     ecx, esp
0x77ECE9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x77ECEE: add     esp, 314h
0x77ECF4: retn
0x77ECF5: push    ebx
0x77ECF6: push    edi; ArgList
0x77ECF7: lea     ecx, [esp+324h+Ext]
0x77ECFB: push    ecx; Ext
0x77ECFC: lea     edx, [esp+328h+Filename]
0x77ED03: push    edx; Filename
0x77ED04: lea     eax, [esp+32Ch+Dir]
0x77ED0B: push    eax; Dir
0x77ED0C: lea     ecx, [esp+330h+Drive]
0x77ED10: push    ecx; Drive
0x77ED11: push    esi; FullPath
0x77ED12: call    sub_7825B0
0x77ED17: mov     edx, ds:0B428A8h
0x77ED1D: mov     eax, [edx+0Ch]
0x77ED20: add     esp, 14h
0x77ED23: test    eax, eax
0x77ED25: jz      loc_77EDD9
0x77ED2B: mov     esi, [eax+8]
0x77ED2E: test    esi, esi
0x77ED30: mov     edi, [eax]
0x77ED32: lea     ecx, [eax+8]
0x77ED35: jz      loc_77EDD9
0x77ED3B: mov     ebx, [esp+324h+SizeInBytes]
0x77ED42: cmp     byte ptr [esi], 0
0x77ED45: jz      loc_77EE09
0x77ED4B: mov     eax, esi
0x77ED4D: lea     edx, [eax+1]
0x77ED50: mov     cl, [eax]
0x77ED52: add     eax, 1
0x77ED55: test    cl, cl
0x77ED57: jnz     short loc_77ED50
0x77ED59: sub     eax, edx
0x77ED5B: cmp     byte ptr [eax+esi-1], 2Fh ; '/'
0x77ED60: jz      loc_77EDF4
0x77ED66: mov     eax, esi
0x77ED68: lea     edx, [eax+1]
0x77ED6B: jmp     short loc_77ED70
0x77ED6D: align 10h
0x77ED70: mov     cl, [eax]
0x77ED72: add     eax, 1
0x77ED75: test    cl, cl
0x77ED77: jnz     short loc_77ED70
0x77ED79: sub     eax, edx
0x77ED7B: cmp     byte ptr [eax+esi-1], 5Ch ; '\'
0x77ED80: jz      short loc_77EDF4
0x77ED82: lea     eax, [esp+324h+Ext]
0x77ED86: push    eax
0x77ED87: lea     ecx, [esp+328h+Filename]
0x77ED8E: push    ecx
0x77ED8F: push    esi; ArgList
0x77ED90: push    offset aSSS_9; "%s\\%s%s"
0x77ED95: push    ebx; SizeInBytes
0x77ED96: push    ebp; DstBuf
0x77ED97: call    sub_6C5D40
0x77ED9C: add     esp, 18h
0x77ED9F: push    0
0x77EDA1: push    ebp
0x77EDA2: call    NiFile_CanOpenFileWithMode_Indirect
0x77EDA7: add     esp, 8
0x77EDAA: test    al, al
0x77EDAC: jnz     short loc_77EE1C
0x77EDAE: mov     ecx, dword ptr [esp+324h+ArgList]
0x77EDB2: push    esi
0x77EDB3: push    ecx; ArgList
0x77EDB4: push    offset aShaderProgramF; "Shader program file not found %s in dir"...
0x77EDB9: push    1; int
0x77EDBB: push    1; int
0x77EDBD: call    sub_738460
0x77EDC2: add     esp, 14h
0x77EDC5: test    edi, edi
0x77EDC7: jz      short loc_77EDD9
0x77EDC9: mov     esi, [edi+8]
0x77EDCC: test    esi, esi
0x77EDCE: lea     eax, [edi+8]
0x77EDD1: mov     edi, [edi]
0x77EDD3: jnz     loc_77ED42
0x77EDD9: xor     al, al
0x77EDDB: mov     ecx, [esp+324h+var_4]
0x77EDE2: pop     edi
0x77EDE3: pop     ebx
0x77EDE4: pop     esi
0x77EDE5: pop     ebp
0x77EDE6: xor     ecx, esp
0x77EDE8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x77EDED: add     esp, 314h
0x77EDF3: retn
0x77EDF4: lea     edx, [esp+324h+Ext]
0x77EDF8: push    edx
0x77EDF9: lea     eax, [esp+328h+Filename]
0x77EE00: push    eax
0x77EE01: push    esi
0x77EE02: push    offset aSSS; "%s%s%s"
0x77EE07: jmp     short loc_77ED95
0x77EE09: push    offset aInvalidOrNoSha; "Invalid or no shader program directory"...
0x77EE0E: push    0; int
0x77EE10: push    1; int
0x77EE12: call    sub_738460
0x77EE17: add     esp, 0Ch
0x77EE1A: jmp     short loc_77EDC5
0x77EE1C: mov     al, 1
0x77EE1E: jmp     short loc_77EDDB
