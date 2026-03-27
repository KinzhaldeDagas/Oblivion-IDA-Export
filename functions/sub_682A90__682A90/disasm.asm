0x682A90: sub     esp, 1B0h
0x682A96: mov     eax, ds:0B30AACh
0x682A9B: xor     eax, esp
0x682A9D: mov     [esp+1B0h+var_4], eax
0x682AA4: push    ebx
0x682AA5: push    ebp
0x682AA6: mov     ebp, [esp+1B8h+arg_8]
0x682AAD: push    esi
0x682AAE: mov     esi, [esp+1BCh+arg_4]
0x682AB5: push    edi
0x682AB6: mov     edi, ecx
0x682AB8: mov     ecx, offset stru_B3C000
0x682ABD: mov     [esp+1C0h+var_19C], esi
0x682AC1: mov     [esp+1C0h+var_198], ebp
0x682AC5: call    sub_49F470
0x682ACA: mov     ecx, [edi+2Ch]
0x682ACD: add     ecx, [edi+1Ch]
0x682AD0: mov     ebx, [esi]
0x682AD2: mov     eax, [ebp+0]
0x682AD5: push    ecx
0x682AD6: lea     edx, [esp+1C4h+var_194]
0x682ADA: push    offset aPathsToBuildD; "Paths to build: %d"
0x682ADF: push    edx
0x682AE0: mov     [esp+1CCh+var_1A0], ebx
0x682AE4: mov     [esp+1CCh+var_1A4], eax
0x682AE8: call    __sprintf
0x682AED: fild    [esp+1CCh+var_1A0]
0x682AF1: add     esp, 0Ch
0x682AF4: push    0FFFFFFFFh; int
0x682AF6: push    1; int
0x682AF8: sub     esp, 8
0x682AFB: fstp    [esp+1D0h+var_1CC]; float
0x682AFF: lea     eax, [esp+1D0h+var_194]
0x682B03: fild    dword ptr ds:0B02E24h
0x682B09: fstp    [esp+1D0h+var_1D0]; float
0x682B0C: push    eax; int
0x682B0D: call    InterfaceMgr_DebugTextLine
0x682B12: add     ebx, [esp+1D4h+arg_0]
0x682B19: mov     eax, [edi+14h]
0x682B1C: lea     ebp, [edi+10h]
0x682B1F: xor     esi, esi
0x682B21: add     esp, 14h
0x682B24: xor     ecx, ecx
0x682B26: cmp     eax, esi
0x682B28: mov     [esp+1C0h+var_1A0], ebx
0x682B2C: jbe     short loc_682B3F
0x682B2E: mov     edx, [ebp+8]
0x682B31: cmp     [edx], esi
0x682B33: jnz     short loc_682B4F
0x682B35: add     ecx, 1
0x682B38: add     edx, 4
0x682B3B: cmp     ecx, eax
0x682B3D: jb      short loc_682B31
0x682B3F: xor     ecx, ecx
0x682B41: cmp     ecx, esi
0x682B43: mov     [esp+1C0h+var_1A8], ecx
0x682B47: jz      loc_682BFF
0x682B4D: jmp     short loc_682B59
0x682B4F: mov     eax, [ebp+8]
0x682B52: mov     ecx, [eax+ecx*4]
0x682B55: jmp     short loc_682B41
0x682B57: xor     esi, esi
0x682B59: lea     ecx, [esp+1C0h+var_1B0]
0x682B5D: push    ecx
0x682B5E: lea     edx, [esp+1C4h+var_1AC]
0x682B62: push    edx
0x682B63: lea     eax, [esp+1C8h+var_1A8]
0x682B67: push    eax
0x682B68: mov     ecx, ebp
0x682B6A: mov     [esp+1CCh+var_1AC], esi
0x682B6E: mov     [esp+1CCh+var_1B0], esi
0x682B72: call    sub_452600
0x682B77: mov     esi, [esp+1C0h+var_1AC]
0x682B7B: test    esi, esi
0x682B7D: jz      short loc_682BF2
0x682B7F: cmp     [esp+1C0h+var_1B0], 0
0x682B84: jz      short loc_682BF2
0x682B86: mov     ecx, [esi+58h]
0x682B89: or      eax, 0FFFFFFFFh
0x682B8C: test    ecx, ecx
0x682B8E: jz      short loc_682B97
0x682B90: mov     edx, [ecx]
0x682B92: mov     eax, [edx+8]
0x682B95: call    eax
0x682B97: mov     ecx, [esi+0Ch]
0x682B9A: push    eax
0x682B9B: push    ecx
0x682B9C: mov     ecx, esi; this
0x682B9E: call    TESObjectREFR_GetName
0x682BA3: push    eax
0x682BA4: lea     ecx, [esp+1CCh+var_194]
0x682BA8: push    offset aHighS08xI; "HIGH: \"%s\" (%08x) - %i"
0x682BAD: push    ecx
0x682BAE: call    __sprintf
0x682BB3: fild    [esp+1D4h+var_1A0]
0x682BB7: add     esp, 14h
0x682BBA: push    0FFFFFFFFh; int
0x682BBC: push    1; int
0x682BBE: sub     esp, 8
0x682BC1: fstp    [esp+1D0h+var_1CC]; float
0x682BC5: lea     edx, [esp+1D0h+var_194]
0x682BC9: fild    dword ptr ds:0B02E24h
0x682BCF: fstp    [esp+1D0h+var_1D0]; float
0x682BD2: push    edx; int
0x682BD3: call    InterfaceMgr_DebugTextLine
0x682BD8: add     ebx, [esp+1D4h+arg_0]
0x682BDF: mov     eax, ds:0B06C50h
0x682BE4: add     eax, 0FFFFFFF6h
0x682BE7: add     esp, 14h
0x682BEA: cmp     ebx, eax
0x682BEC: mov     [esp+1C0h+var_1A0], ebx
0x682BF0: jg      short loc_682BFD
0x682BF2: cmp     [esp+1C0h+var_1A8], 0
0x682BF7: jnz     loc_682B57
0x682BFD: xor     esi, esi
0x682BFF: mov     edx, [edi+24h]
0x682C02: xor     eax, eax
0x682C04: cmp     edx, esi
0x682C06: jbe     short loc_682C1E
0x682C08: mov     ebp, [edi+28h]
0x682C0B: mov     ecx, ebp
0x682C0D: lea     ecx, [ecx+0]
0x682C10: cmp     [ecx], esi
0x682C12: jnz     short loc_682C2E
0x682C14: add     eax, 1
0x682C17: add     ecx, 4
0x682C1A: cmp     eax, edx
0x682C1C: jb      short loc_682C10
0x682C1E: xor     eax, eax
0x682C20: cmp     eax, esi
0x682C22: mov     [esp+1C0h+var_1A8], eax
0x682C26: jz      loc_682CDD
0x682C2C: jmp     short loc_682C36
0x682C2E: mov     eax, [ebp+eax*4+0]
0x682C32: jmp     short loc_682C20
0x682C34: xor     esi, esi
0x682C36: lea     ecx, [esp+1C0h+var_1AC]
0x682C3A: push    ecx
0x682C3B: lea     edx, [esp+1C4h+var_1B0]
0x682C3F: push    edx
0x682C40: lea     eax, [esp+1C8h+var_1A8]
0x682C44: push    eax
0x682C45: lea     ecx, [edi+20h]
0x682C48: mov     [esp+1CCh+var_1B0], esi
0x682C4C: mov     [esp+1CCh+var_1AC], esi
0x682C50: call    sub_452600
0x682C55: mov     esi, [esp+1C0h+var_1B0]
0x682C59: test    esi, esi
0x682C5B: jz      short loc_682CD0
0x682C5D: cmp     [esp+1C0h+var_1AC], 0
0x682C62: jz      short loc_682CD0
0x682C64: mov     ecx, [esi+58h]
0x682C67: or      eax, 0FFFFFFFFh
0x682C6A: test    ecx, ecx
0x682C6C: jz      short loc_682C75
0x682C6E: mov     edx, [ecx]
0x682C70: mov     eax, [edx+8]
0x682C73: call    eax
0x682C75: mov     ecx, [esi+0Ch]
0x682C78: push    eax
0x682C79: push    ecx
0x682C7A: mov     ecx, esi; this
0x682C7C: call    TESObjectREFR_GetName
0x682C81: push    eax
0x682C82: lea     ecx, [esp+1CCh+var_194]
0x682C86: push    offset aS08xI_0; "\"%s\" (%08x) - %i"
0x682C8B: push    ecx
0x682C8C: call    __sprintf
0x682C91: fild    [esp+1D4h+var_1A0]
0x682C95: add     esp, 14h
0x682C98: push    0FFFFFFFFh; int
0x682C9A: push    1; int
0x682C9C: sub     esp, 8
0x682C9F: fstp    [esp+1D0h+var_1CC]; float
0x682CA3: lea     edx, [esp+1D0h+var_194]
0x682CA7: fild    dword ptr ds:0B02E24h
0x682CAD: fstp    [esp+1D0h+var_1D0]; float
0x682CB0: push    edx; int
0x682CB1: call    InterfaceMgr_DebugTextLine
0x682CB6: add     ebx, [esp+1D4h+arg_0]
0x682CBD: mov     eax, ds:0B06C50h
0x682CC2: add     eax, 0FFFFFFF6h
0x682CC5: add     esp, 14h
0x682CC8: cmp     ebx, eax
0x682CCA: mov     [esp+1C0h+var_1A0], ebx
0x682CCE: jg      short loc_682CDB
0x682CD0: cmp     [esp+1C0h+var_1A8], 0
0x682CD5: jnz     loc_682C34
0x682CDB: xor     esi, esi
0x682CDD: mov     ecx, [edi+3Ch]
0x682CE0: push    ecx
0x682CE1: lea     edx, [esp+1C4h+var_194]
0x682CE5: push    offset aPathsCompleted; "Paths Completed: %d"
0x682CEA: push    edx
0x682CEB: call    __sprintf
0x682CF0: fild    [esp+1CCh+var_1A4]
0x682CF4: add     esp, 0Ch
0x682CF7: push    0FFFFFFFFh; int
0x682CF9: push    3; int
0x682CFB: mov     eax, 500h
0x682D00: sub     eax, ds:0B02E24h
0x682D06: sub     esp, 8
0x682D09: fstp    [esp+1D0h+var_1CC]; float
0x682D0D: mov     [esp+1D0h+var_1B0], eax
0x682D11: fild    [esp+1D0h+var_1B0]
0x682D15: lea     ecx, [esp+1D0h+var_194]
0x682D19: fstp    [esp+1D0h+var_1D0]; float
0x682D1C: push    ecx; int
0x682D1D: call    InterfaceMgr_DebugTextLine
0x682D22: mov     edx, [esp+1D4h+arg_0]
0x682D29: mov     ecx, [edi+34h]
0x682D2C: add     [esp+1D4h+var_1A4], edx
0x682D30: add     edi, 30h ; '0'
0x682D33: add     esp, 14h
0x682D36: xor     eax, eax
0x682D38: cmp     ecx, esi
0x682D3A: jbe     short loc_682D4F
0x682D3C: mov     ebp, [edi+8]
0x682D3F: mov     edx, ebp
0x682D41: cmp     [edx], esi
0x682D43: jnz     short loc_682D5F
0x682D45: add     eax, 1
0x682D48: add     edx, 4
0x682D4B: cmp     eax, ecx
0x682D4D: jb      short loc_682D41
0x682D4F: xor     eax, eax
0x682D51: cmp     eax, esi
0x682D53: mov     [esp+1C0h+var_1A8], eax
0x682D57: jz      loc_682E21
0x682D5D: jmp     short loc_682D67
0x682D5F: mov     eax, [ebp+eax*4+0]
0x682D63: jmp     short loc_682D51
0x682D65: xor     esi, esi
0x682D67: lea     eax, [esp+1C0h+var_1AC]
0x682D6B: push    eax
0x682D6C: lea     ecx, [esp+1C4h+var_1B0]
0x682D70: push    ecx
0x682D71: lea     edx, [esp+1C8h+var_1A8]
0x682D75: push    edx
0x682D76: mov     ecx, edi
0x682D78: mov     [esp+1CCh+var_1B0], esi
0x682D7C: mov     [esp+1CCh+var_1AC], esi
0x682D80: call    sub_452600
0x682D85: mov     esi, [esp+1C0h+var_1B0]
0x682D89: test    esi, esi
0x682D8B: jz      loc_682E16
0x682D91: cmp     [esp+1C0h+var_1AC], 0
0x682D96: jz      short loc_682E16
0x682D98: mov     ecx, [esi+58h]
0x682D9B: or      eax, 0FFFFFFFFh
0x682D9E: test    ecx, ecx
0x682DA0: jz      short loc_682DA9
0x682DA2: mov     eax, [ecx]
0x682DA4: mov     edx, [eax+8]
0x682DA7: call    edx
0x682DA9: mov     ecx, [esi+0Ch]
0x682DAC: push    eax
0x682DAD: push    ecx
0x682DAE: mov     ecx, esi; this
0x682DB0: call    TESObjectREFR_GetName
0x682DB5: push    eax
0x682DB6: lea     eax, [esp+1CCh+var_194]
0x682DBA: push    offset aS08xI_0; "\"%s\" (%08x) - %i"
0x682DBF: push    eax
0x682DC0: call    __sprintf
0x682DC5: fild    [esp+1D4h+var_1A4]
0x682DC9: add     esp, 14h
0x682DCC: push    0FFFFFFFFh; int
0x682DCE: push    3; int
0x682DD0: mov     ecx, 500h
0x682DD5: sub     ecx, ds:0B02E24h
0x682DDB: sub     esp, 8
0x682DDE: fstp    [esp+1D0h+var_1CC]; float
0x682DE2: mov     [esp+1D0h+var_1B0], ecx
0x682DE6: fild    [esp+1D0h+var_1B0]
0x682DEA: lea     edx, [esp+1D0h+var_194]
0x682DEE: fstp    [esp+1D0h+var_1D0]; float
0x682DF1: push    edx; int
0x682DF2: call    InterfaceMgr_DebugTextLine
0x682DF7: mov     eax, [esp+1D4h+var_1A4]
0x682DFB: add     eax, [esp+1D4h+arg_0]
0x682E02: mov     ecx, ds:0B06C50h
0x682E08: add     ecx, 0FFFFFFF6h
0x682E0B: add     esp, 14h
0x682E0E: cmp     eax, ecx
0x682E10: mov     [esp+1C0h+var_1A4], eax
0x682E14: jg      short loc_682E21
0x682E16: cmp     [esp+1C0h+var_1A8], 0
0x682E1B: jnz     loc_682D65
0x682E21: mov     edx, [esp+1C0h+var_19C]
0x682E25: mov     eax, [esp+1C0h+var_198]
0x682E29: mov     ecx, [esp+1C0h+var_1A4]
0x682E2D: mov     [edx], ebx
0x682E2F: mov     [eax], ecx
0x682E31: mov     ecx, offset stru_B3C000
0x682E36: call    j_NiLeaveCriticalSection_0
0x682E3B: mov     ecx, [esp+1C0h+var_4]
0x682E42: pop     edi
0x682E43: pop     esi
0x682E44: pop     ebp
0x682E45: pop     ebx
0x682E46: xor     ecx, esp
0x682E48: call    @__security_check_cookie@4; __security_check_cookie(x)
0x682E4D: add     esp, 1B0h
0x682E53: retn    0Ch
