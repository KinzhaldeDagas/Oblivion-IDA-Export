0x5E8B80: sub     esp, 20h
0x5E8B83: push    esi
0x5E8B84: mov     esi, ecx
0x5E8B86: mov     eax, [esi]
0x5E8B88: mov     edx, [eax+164h]
0x5E8B8E: push    21h ; '!'
0x5E8B90: call    edx
0x5E8B92: mov     ecx, eax
0x5E8B94: call    sub_470D00
0x5E8B99: test    al, al
0x5E8B9B: jnz     short loc_5E8BA2
0x5E8B9D: pop     esi
0x5E8B9E: add     esp, 20h
0x5E8BA1: retn
0x5E8BA2: mov     eax, [esi]
0x5E8BA4: mov     edx, [eax+334h]
0x5E8BAA: push    ebx
0x5E8BAB: xor     bl, bl
0x5E8BAD: push    1
0x5E8BAF: mov     ecx, esi
0x5E8BB1: mov     [esp+2Ch+var_1D], bl
0x5E8BB5: call    edx
0x5E8BB7: test    al, al
0x5E8BB9: jz      short loc_5E8BD5
0x5E8BBB: mov     ecx, [esi+58h]
0x5E8BBE: mov     eax, [ecx]
0x5E8BC0: mov     edx, [eax+0F0h]
0x5E8BC6: push    1
0x5E8BC8: call    edx
0x5E8BCA: test    eax, eax
0x5E8BCC: pop     ebx
0x5E8BCD: setnz   al
0x5E8BD0: pop     esi
0x5E8BD1: add     esp, 20h
0x5E8BD4: retn
0x5E8BD5: mov     ecx, offset TimeGlobals
0x5E8BDA: call    TimeGlobals_GetGameHour
0x5E8BDF: fstp    [esp+24h+var_10]
0x5E8BE3: mov     eax, [esi]
0x5E8BE5: mov     edx, [eax+284h]
0x5E8BEB: push    29h ; ')'
0x5E8BED: mov     ecx, esi
0x5E8BEF: call    edx
0x5E8BF1: test    eax, eax
0x5E8BF3: jle     short loc_5E8BFD
0x5E8BF5: fld     dword ptr ds:0B37A50h
0x5E8BFB: jmp     short loc_5E8BFF
0x5E8BFD: fldz
0x5E8BFF: push    edi
0x5E8C00: fstp    dword ptr [esp+2Ch+var_1C]
0x5E8C04: mov     ecx, esi; this
0x5E8C06: call    TESObjectREFR_GetParentCell
0x5E8C0B: mov     edi, eax
0x5E8C0D: test    edi, edi
0x5E8C0F: jz      loc_5E8CE2
0x5E8C15: mov     ecx, edi; this
0x5E8C17: call    TESObjectCELL_IsInterior
0x5E8C1C: test    al, al
0x5E8C1E: jz      loc_5E8CE2
0x5E8C24: push    0
0x5E8C26: mov     ecx, edi
0x5E8C28: call    TESObjectCELL_GetMusicType
0x5E8C2D: cmp     eax, 2
0x5E8C30: jnz     loc_5E8D39
0x5E8C36: mov     ecx, [esi+58h]
0x5E8C39: mov     eax, [ecx]
0x5E8C3B: mov     edx, [eax+3ACh]
0x5E8C41: push    1
0x5E8C43: push    esi
0x5E8C44: call    edx
0x5E8C46: fstp    [esp+2Ch+var_14]
0x5E8C4A: fld     [esp+2Ch+var_14]
0x5E8C4E: fcomp   qword ptr ds:0A309F0h
0x5E8C54: fnstsw  ax
0x5E8C56: test    ah, 41h
0x5E8C59: jnz     short loc_5E8C65
0x5E8C5B: fld     dword ptr ds:0A2FE7Ch
0x5E8C61: fstp    [esp+2Ch+var_14]
0x5E8C65: fld     [esp+2Ch+var_14]
0x5E8C69: mov     ecx, offset fTorchLightLevelInterior
0x5E8C6E: fsub    dword ptr [esp+2Ch+var_1C]
0x5E8C72: fstp    qword ptr [esp+2Ch+var_14]
0x5E8C76: call    GameSetting_GetSafeFloatPointer
0x5E8C7B: fld     dword ptr [eax]
0x5E8C7D: fcomp   qword ptr [esp+2Ch+var_14]
0x5E8C81: fnstsw  ax
0x5E8C83: test    ah, 41h
0x5E8C86: jz      loc_5E8D37
0x5E8C8C: mov     ecx, [esi+58h]
0x5E8C8F: mov     eax, [ecx]
0x5E8C91: mov     edx, [eax+0F0h]
0x5E8C97: push    1
0x5E8C99: call    edx
0x5E8C9B: test    eax, eax
0x5E8C9D: jz      loc_5E8D39
0x5E8CA3: mov     ecx, offset fTorchLightLevelInterior
0x5E8CA8: call    GameSetting_GetSafeFloatPointer
0x5E8CAD: fld     dword ptr [eax]
0x5E8CAF: fadd    st, st
0x5E8CB1: mov     ecx, offset fTorchLightLevelInterior
0x5E8CB6: fstp    [esp+2Ch+var_1C]
0x5E8CBA: call    GameSetting_GetSafeFloatPointer
0x5E8CBF: fld     qword ptr [esp+2Ch+var_14]
0x5E8CC3: fstp    [esp+2Ch+var_14]
0x5E8CC7: fld     [esp+2Ch+var_14]
0x5E8CCB: fld     dword ptr [eax]
0x5E8CCD: fadd    [esp+2Ch+var_1C]
0x5E8CD1: fcompp
0x5E8CD3: fnstsw  ax
0x5E8CD5: test    ah, 41h
0x5E8CD8: jnz     short loc_5E8D39
0x5E8CDA: mov     bl, 1
0x5E8CDC: mov     [esp+2Ch+var_1D], bl
0x5E8CE0: jmp     short loc_5E8D39
0x5E8CE2: mov     eax, ds:0B333A0h
0x5E8CE7: fld     dword ptr ds:0A417B4h
0x5E8CED: mov     eax, [eax+5Ch]
0x5E8CF0: fcomp   [esp+2Ch+var_14]
0x5E8CF4: mov     ecx, [eax+60h]
0x5E8CF7: mov     edx, [eax+64h]
0x5E8CFA: mov     eax, [eax+68h]
0x5E8CFD: mov     [esp+2Ch+var_4], eax
0x5E8D01: fnstsw  ax
0x5E8D03: mov     [esp+2Ch+var_8], edx
0x5E8D07: fld     [esp+2Ch+var_8]
0x5E8D0B: test    ah, 5
0x5E8D0E: mov     [esp+2Ch+var_C], ecx
0x5E8D12: fadd    [esp+2Ch+var_C]
0x5E8D16: fadd    [esp+2Ch+var_4]
0x5E8D1A: fsub    dword ptr [esp+2Ch+var_1C]
0x5E8D1E: jp      short loc_5E8D28
0x5E8D20: fld     dword ptr ds:0B37738h
0x5E8D26: jmp     short loc_5E8D2E
0x5E8D28: fld     dword ptr ds:0B37730h
0x5E8D2E: fcompp
0x5E8D30: fnstsw  ax
0x5E8D32: test    ah, 41h
0x5E8D35: jnz     short loc_5E8D39
0x5E8D37: mov     bl, 1
0x5E8D39: mov     ecx, [esi+58h]
0x5E8D3C: test    ecx, ecx
0x5E8D3E: pop     edi
0x5E8D3F: jz      short loc_5E8D81
0x5E8D41: mov     edx, [ecx]
0x5E8D43: mov     eax, [edx+8]
0x5E8D46: call    eax
0x5E8D48: cmp     eax, 1
0x5E8D4B: ja      short loc_5E8D81
0x5E8D4D: mov     esi, [esi+58h]
0x5E8D50: test    esi, esi
0x5E8D52: jz      short loc_5E8D81
0x5E8D54: cmp     [esp+28h+var_1D], 0
0x5E8D59: jz      short loc_5E8D75
0x5E8D5B: fld     dword ptr ds:0B37A58h
0x5E8D61: mov     al, bl
0x5E8D63: fmul    qword ptr ds:0A3F3F0h
0x5E8D69: pop     ebx
0x5E8D6A: fstp    dword ptr [esi+0BCh]
0x5E8D70: pop     esi
0x5E8D71: add     esp, 20h
0x5E8D74: retn
0x5E8D75: fld     dword ptr ds:0B37A58h
0x5E8D7B: fstp    dword ptr [esi+0BCh]
0x5E8D81: mov     al, bl
0x5E8D83: pop     ebx
0x5E8D84: pop     esi
0x5E8D85: add     esp, 20h
0x5E8D88: retn
