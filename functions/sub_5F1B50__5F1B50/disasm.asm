0x5F1B50: push    0FFFFFFFFh
0x5F1B52: push    offset SEH_6C2790
0x5F1B57: mov     eax, large fs:0
0x5F1B5D: push    eax
0x5F1B5E: sub     esp, 14h
0x5F1B61: push    ebx
0x5F1B62: push    ebp
0x5F1B63: push    esi
0x5F1B64: push    edi
0x5F1B65: mov     eax, ds:0B30AACh
0x5F1B6A: xor     eax, esp
0x5F1B6C: push    eax; int
0x5F1B6D: lea     eax, [esp+34h+var_C]
0x5F1B71: mov     large fs:0, eax
0x5F1B77: mov     esi, ecx
0x5F1B79: push    esi; a1
0x5F1B7A: mov     ecx, offset ActorProcessManager_ptr; this
0x5F1B7F: call    sub_674850
0x5F1B84: mov     ecx, [esi+58h]
0x5F1B87: test    ecx, ecx
0x5F1B89: jz      short loc_5F1B9B
0x5F1B8B: mov     eax, [ecx]
0x5F1B8D: mov     edx, [eax+8]
0x5F1B90: call    edx
0x5F1B92: cmp     eax, 1
0x5F1B95: jz      loc_5F2395
0x5F1B9B: mov     ecx, [esi+58h]
0x5F1B9E: test    ecx, ecx
0x5F1BA0: jz      short loc_5F1BC1
0x5F1BA2: mov     eax, [ecx]
0x5F1BA4: mov     edx, [eax+8]
0x5F1BA7: call    edx
0x5F1BA9: test    eax, eax
0x5F1BAB: jnz     short loc_5F1BC1
0x5F1BAD: call    InitBSShaderAccumulator
0x5F1BB2: test    eax, eax
0x5F1BB4: jz      short loc_5F1BC1
0x5F1BB6: mov     ecx, [esi+0Ch]
0x5F1BB9: push    ecx
0x5F1BBA: mov     ecx, eax
0x5F1BBC: call    sub_7AD1E0
0x5F1BC1: mov     ecx, [esi+58h]
0x5F1BC4: test    ecx, ecx
0x5F1BC6: mov     bl, 12h
0x5F1BC8: jz      short loc_5F1C21
0x5F1BCA: mov     edi, [ecx+8]
0x5F1BCD: test    edi, edi
0x5F1BCF: jz      short loc_5F1C21
0x5F1BD1: mov     eax, [ecx]
0x5F1BD3: mov     edx, [eax+180h]
0x5F1BD9: mov     ebp, [edi+18h]
0x5F1BDC: call    edx
0x5F1BDE: mov     ecx, ds:0B152B0h[ebp*4]
0x5F1BE5: cmp     dword ptr [ecx+eax*4], 2Bh ; '+'
0x5F1BE9: jnz     short loc_5F1C00
0x5F1BEB: mov     ecx, [esi+58h]
0x5F1BEE: mov     edx, [ecx]
0x5F1BF0: mov     eax, [edx+0CCh]
0x5F1BF6: call    eax
0x5F1BF8: cmp     eax, ds:0B333C4h
0x5F1BFE: jz      short loc_5F1C1A
0x5F1C00: cmp     [edi+20h], bl
0x5F1C03: jnz     short loc_5F1C21
0x5F1C05: mov     ecx, [esi+58h]
0x5F1C08: mov     edx, [ecx]
0x5F1C0A: mov     eax, [edx+0CCh]
0x5F1C10: call    eax
0x5F1C12: cmp     eax, ds:0B333C4h
0x5F1C18: jz      short loc_5F1C21
0x5F1C1A: mov     ecx, esi; int
0x5F1C1C: call    sub_5EAE70
0x5F1C21: mov     ecx, [esi+58h]
0x5F1C24: test    ecx, ecx
0x5F1C26: jz      short loc_5F1C53
0x5F1C28: mov     edx, [ecx]
0x5F1C2A: mov     eax, [edx+184h]
0x5F1C30: call    eax
0x5F1C32: test    eax, eax
0x5F1C34: jz      short loc_5F1C53
0x5F1C36: cmp     [eax+20h], bl
0x5F1C39: jnz     short loc_5F1C53
0x5F1C3B: mov     ecx, [esi+58h]
0x5F1C3E: mov     edx, [ecx]
0x5F1C40: mov     eax, [edx+1CCh]
0x5F1C46: call    eax
0x5F1C48: test    al, al
0x5F1C4A: jz      short loc_5F1C53
0x5F1C4C: mov     ecx, esi; int
0x5F1C4E: call    sub_5EAE70
0x5F1C53: mov     ecx, [esi+58h]
0x5F1C56: mov     edx, [ecx]
0x5F1C58: mov     eax, [edx+174h]
0x5F1C5E: call    eax
0x5F1C60: test    eax, eax
0x5F1C62: jz      short loc_5F1CB5
0x5F1C64: mov     ecx, eax
0x5F1C66: call    sub_5660A0
0x5F1C6B: test    al, al
0x5F1C6D: jz      short loc_5F1CB5
0x5F1C6F: mov     ecx, [esi+58h]
0x5F1C72: mov     eax, [ecx+8]
0x5F1C75: test    eax, eax
0x5F1C77: jz      short loc_5F1CB5
0x5F1C79: cmp     byte ptr [eax+20h], 0Fh
0x5F1C7D: jz      short loc_5F1CB5
0x5F1C7F: mov     edx, [eax+1Ch]
0x5F1C82: shr     edx, 9
0x5F1C85: test    dl, 1
0x5F1C88: jz      short loc_5F1CB5
0x5F1C8A: test    byte ptr [eax+1Ch], 1
0x5F1C8E: jz      short loc_5F1CB5
0x5F1C90: mov     ecx, esi; this
0x5F1C92: call    TESObjectREFR_GetParentCell
0x5F1C97: test    eax, eax
0x5F1C99: jz      short loc_5F1CB5
0x5F1C9B: push    esi
0x5F1C9C: mov     ecx, esi; this
0x5F1C9E: call    TESObjectREFR_GetParentCell
0x5F1CA3: mov     ecx, eax
0x5F1CA5: call    sub_4CAAC0
0x5F1CAA: test    al, al
0x5F1CAC: jz      short loc_5F1CB5
0x5F1CAE: mov     ecx, esi; int
0x5F1CB0: call    sub_5EAE70
0x5F1CB5: mov     ecx, [esi+58h]
0x5F1CB8: mov     eax, [ecx]
0x5F1CBA: mov     edx, [eax+8]
0x5F1CBD: call    edx
0x5F1CBF: mov     ebp, eax
0x5F1CC1: mov     eax, [esi]
0x5F1CC3: mov     edx, [eax+1F8h]
0x5F1CC9: mov     ecx, esi
0x5F1CCB: mov     [esp+34h+var_20], ebp
0x5F1CCF: call    edx
0x5F1CD1: test    al, al
0x5F1CD3: mov     ecx, esi
0x5F1CD5: jz      short loc_5F1CF3
0x5F1CD7: call    sub_5E9E70
0x5F1CDC: mov     ecx, [esi+58h]
0x5F1CDF: mov     eax, [ecx]
0x5F1CE1: mov     edx, [eax+23Ch]
0x5F1CE7: push    esi
0x5F1CE8: call    edx
0x5F1CEA: mov     ecx, esi
0x5F1CEC: call    RunScripts
0x5F1CF1: jmp     short loc_5F1D1F
0x5F1CF3: mov     eax, [esi]
0x5F1CF5: mov     edx, [eax+198h]
0x5F1CFB: push    0
0x5F1CFD: call    edx
0x5F1CFF: test    al, al
0x5F1D01: jz      short loc_5F1D1F
0x5F1D03: mov     ecx, [esi+58h]
0x5F1D06: mov     eax, [ecx]
0x5F1D08: mov     edx, [eax+8]
0x5F1D0B: call    edx
0x5F1D0D: test    eax, eax
0x5F1D0F: jnz     short loc_5F1D1F
0x5F1D11: mov     eax, [esi]
0x5F1D13: mov     edx, [eax+9Ch]
0x5F1D19: push    1
0x5F1D1B: mov     ecx, esi
0x5F1D1D: call    edx
0x5F1D1F: mov     eax, [esi]
0x5F1D21: mov     edx, [eax+380h]
0x5F1D27: mov     ecx, esi
0x5F1D29: call    edx
0x5F1D2B: test    eax, eax
0x5F1D2D: jnz     short loc_5F1D91
0x5F1D2F: nop
0x5F1D30: mov     eax, [esi]
0x5F1D32: mov     edx, [eax+18Ch]
0x5F1D38: mov     ecx, esi
0x5F1D3A: call    edx
0x5F1D3C: test    eax, eax
0x5F1D3E: jz      short loc_5F1D91
0x5F1D40: mov     eax, [esi]
0x5F1D42: mov     edx, [eax+18Ch]
0x5F1D48: mov     ecx, esi
0x5F1D4A: call    edx
0x5F1D4C: cmp     eax, 4
0x5F1D4F: jz      short loc_5F1D91
0x5F1D51: mov     eax, [esi]
0x5F1D53: mov     edx, [eax+18Ch]
0x5F1D59: mov     ecx, esi
0x5F1D5B: call    edx
0x5F1D5D: cmp     eax, 9
0x5F1D60: jz      short loc_5F1D91
0x5F1D62: mov     ecx, [esi+58h]
0x5F1D65: mov     eax, [ecx]
0x5F1D67: mov     edx, [eax+378h]
0x5F1D6D: call    edx
0x5F1D6F: test    eax, eax
0x5F1D71: jz      short loc_5F1D91
0x5F1D73: mov     ecx, [esi+58h]
0x5F1D76: mov     eax, [ecx]
0x5F1D78: mov     edx, [eax+1B0h]
0x5F1D7E: push    esi
0x5F1D7F: call    edx
0x5F1D81: mov     eax, [esi]
0x5F1D83: mov     edx, [eax+380h]
0x5F1D89: mov     ecx, esi
0x5F1D8B: call    edx
0x5F1D8D: test    eax, eax
0x5F1D8F: jz      short loc_5F1D30
0x5F1D91: mov     eax, [esi]
0x5F1D93: mov     edx, [eax+380h]
0x5F1D99: mov     ecx, esi
0x5F1D9B: call    edx
0x5F1D9D: test    eax, eax
0x5F1D9F: jnz     short loc_5F1DF8
0x5F1DA1: mov     eax, [esi]
0x5F1DA3: mov     edx, [eax+18Ch]
0x5F1DA9: mov     ecx, esi
0x5F1DAB: call    edx
0x5F1DAD: test    eax, eax
0x5F1DAF: jz      short loc_5F1DF8
0x5F1DB1: mov     eax, [esi]
0x5F1DB3: mov     edx, [eax+18Ch]
0x5F1DB9: mov     ecx, esi
0x5F1DBB: call    edx
0x5F1DBD: cmp     eax, 4
0x5F1DC0: jz      short loc_5F1DF8
0x5F1DC2: mov     eax, [esi]
0x5F1DC4: mov     edx, [eax+18Ch]
0x5F1DCA: mov     ecx, esi
0x5F1DCC: call    edx
0x5F1DCE: cmp     eax, 9
0x5F1DD1: jz      short loc_5F1DF8
0x5F1DD3: mov     ecx, [esi+58h]
0x5F1DD6: mov     eax, [ecx]
0x5F1DD8: mov     edx, [eax+378h]
0x5F1DDE: call    edx
0x5F1DE0: test    eax, eax
0x5F1DE2: jnz     short loc_5F1DF8
0x5F1DE4: mov     ecx, [esi+58h]
0x5F1DE7: mov     eax, [ecx]
0x5F1DE9: mov     edx, [eax+370h]
0x5F1DEF: push    7Fh
0x5F1DF1: push    0
0x5F1DF3: push    0
0x5F1DF5: push    esi
0x5F1DF6: call    edx
0x5F1DF8: mov     eax, ds:0B33A98h
0x5F1DFD: cmp     byte ptr [eax+0CD4h], 0
0x5F1E04: jnz     short loc_5F1E20
0x5F1E06: mov     ecx, ds:0B33B00h
0x5F1E0C: call    sub_45A500
0x5F1E11: test    al, al
0x5F1E13: jnz     short loc_5F1E20
0x5F1E15: push    esi
0x5F1E16: mov     ecx, offset ActorProcessManager_ptr
0x5F1E1B: call    sub_6765A0
0x5F1E20: push    ebp
0x5F1E21: push    esi
0x5F1E22: mov     ecx, offset ActorProcessManager_ptr
0x5F1E27: call    sub_674550
0x5F1E2C: cmp     dword ptr [esi+0B0h], 6
0x5F1E33: jnz     short loc_5F1E51
0x5F1E35: push    0; newDeadState
0x5F1E37: mov     ecx, esi; this
0x5F1E39: call    Actor_HandleDeathSTate????
0x5F1E3E: fldz
0x5F1E40: mov     ecx, [esi+58h]
0x5F1E43: mov     edx, [ecx]
0x5F1E45: mov     eax, [edx+0A0h]
0x5F1E4B: push    ecx
0x5F1E4C: fstp    [esp+38h+var_38]
0x5F1E4F: call    eax
0x5F1E51: mov     ecx, [esi+58h]
0x5F1E54: test    ecx, ecx
0x5F1E56: jz      short loc_5F1E66
0x5F1E58: mov     edx, [ecx]
0x5F1E5A: mov     eax, [edx+388h]
0x5F1E60: call    eax
0x5F1E62: mov     bl, al
0x5F1E64: jmp     short loc_5F1E68
0x5F1E66: xor     bl, bl
0x5F1E68: push    18Ch; Size
0x5F1E6D: call    FormHeapAlloc
0x5F1E72: add     esp, 4
0x5F1E75: mov     [esp+34h+var_1C], eax
0x5F1E79: test    eax, eax
0x5F1E7B: mov     [esp+34h+var_4], 0
0x5F1E83: jz      short loc_5F1E90
0x5F1E85: mov     ecx, eax; this
0x5F1E87: call    ??0MiddleHighProcess@@QAE@XZ; MiddleHighProcess::MiddleHighProcess(void)
0x5F1E8C: mov     edi, eax
0x5F1E8E: jmp     short loc_5F1E92
0x5F1E90: xor     edi, edi
0x5F1E92: mov     edx, [edi]
0x5F1E94: mov     eax, [esi+58h]
0x5F1E97: mov     edx, [edx+4]
0x5F1E9A: push    eax
0x5F1E9B: mov     ecx, edi
0x5F1E9D: mov     [esp+38h+var_4], 0FFFFFFFFh
0x5F1EA5: call    edx
0x5F1EA7: mov     ecx, [esi+58h]
0x5F1EAA: test    ecx, ecx
0x5F1EAC: jz      short loc_5F1EB6
0x5F1EAE: mov     eax, [ecx]
0x5F1EB0: mov     edx, [eax]
0x5F1EB2: push    1
0x5F1EB4: call    edx
0x5F1EB6: mov     [esi+58h], edi
0x5F1EB9: mov     eax, [edi]
0x5F1EBB: mov     edx, [eax+210h]
0x5F1EC1: mov     ecx, edi
0x5F1EC3: call    edx
0x5F1EC5: test    al, al
0x5F1EC7: jz      short loc_5F1EDC
0x5F1EC9: mov     ecx, [esi+58h]
0x5F1ECC: test    ecx, ecx
0x5F1ECE: jz      short loc_5F1EDC
0x5F1ED0: mov     eax, [ecx]
0x5F1ED2: mov     edx, [eax+300h]
0x5F1ED8: push    1
0x5F1EDA: call    edx
0x5F1EDC: mov     eax, [esi]
0x5F1EDE: mov     edx, [eax+154h]
0x5F1EE4: mov     ecx, esi
0x5F1EE6: call    edx
0x5F1EE8: mov     edi, eax
0x5F1EEA: test    edi, edi
0x5F1EEC: jz      short loc_5F1F20
0x5F1EEE: cmp     ebp, 1
0x5F1EF1: jnz     short loc_5F1F20
0x5F1EF3: mov     ecx, [esi+58h]
0x5F1EF6: mov     eax, [ecx]
0x5F1EF8: mov     edx, [eax+36Ch]
0x5F1EFE: call    edx
0x5F1F00: test    eax, eax
0x5F1F02: jz      short loc_5F1F20
0x5F1F04: mov     eax, [esi]
0x5F1F06: mov     edx, [eax+380h]
0x5F1F0C: mov     ecx, esi
0x5F1F0E: call    edx
0x5F1F10: test    eax, eax
0x5F1F12: jnz     short loc_5F1F20
0x5F1F14: push    eax
0x5F1F15: push    ebp
0x5F1F16: push    eax
0x5F1F17: push    edi
0x5F1F18: call    sub_88CE30
0x5F1F1D: add     esp, 10h
0x5F1F20: push    0
0x5F1F22: push    0
0x5F1F24: push    1
0x5F1F26: push    1
0x5F1F28: push    esi
0x5F1F29: mov     ecx, offset ActorProcessManager_ptr
0x5F1F2E: call    sub_673A90
0x5F1F33: lea     ecx, [esi+44h]; this
0x5F1F36: call    ExtraDataList_GetContainerChanges
0x5F1F3B: mov     edi, eax
0x5F1F3D: test    edi, edi
0x5F1F3F: jz      loc_5F2013
0x5F1F45: test    ebp, ebp
0x5F1F47: jz      loc_5F2013
0x5F1F4D: mov     eax, [esi+58h]
0x5F1F50: mov     ebp, [eax]
0x5F1F52: push    0
0x5F1F54: push    0
0x5F1F56: push    9
0x5F1F58: mov     ecx, edi
0x5F1F5A: add     ebp, 104h
0x5F1F60: call    ContainerExtraData_GetEquippedInstance
0x5F1F65: mov     ecx, [esi+58h]
0x5F1F68: mov     edx, [ebp+0]
0x5F1F6B: push    eax
0x5F1F6C: call    edx
0x5F1F6E: mov     eax, [esi+58h]
0x5F1F71: mov     ebp, [eax]
0x5F1F73: push    0
0x5F1F75: push    0Ch
0x5F1F77: mov     ecx, edi
0x5F1F79: add     ebp, 10Ch
0x5F1F7F: call    ContainerExtraData_GetEquippedInstance
0x5F1F84: mov     ecx, [esi+58h]
0x5F1F87: mov     edx, [ebp+0]
0x5F1F8A: push    eax
0x5F1F8B: call    edx
0x5F1F8D: mov     eax, [esi+58h]
0x5F1F90: mov     ebp, [eax]
0x5F1F92: push    0
0x5F1F94: push    0Dh
0x5F1F96: mov     ecx, edi
0x5F1F98: add     ebp, 110h
0x5F1F9E: call    ContainerExtraData_GetEquippedInstance
0x5F1FA3: mov     ecx, [esi+58h]
0x5F1FA6: mov     edx, [ebp+0]
0x5F1FA9: push    eax
0x5F1FAA: call    edx
0x5F1FAC: mov     eax, [esi+58h]
0x5F1FAF: mov     ebp, [eax]
0x5F1FB1: push    0
0x5F1FB3: push    0Eh
0x5F1FB5: mov     ecx, edi
0x5F1FB7: add     ebp, 108h
0x5F1FBD: call    ContainerExtraData_GetEquippedInstance
0x5F1FC2: mov     ecx, [esi+58h]
0x5F1FC5: mov     edx, [ebp+0]
0x5F1FC8: push    eax
0x5F1FC9: call    edx
0x5F1FCB: push    0
0x5F1FCD: push    9
0x5F1FCF: mov     ecx, edi
0x5F1FD1: call    ContainerExtraData_GetEquippedInstance
0x5F1FD6: mov     edi, eax
0x5F1FD8: push    edi
0x5F1FD9: push    esi
0x5F1FDA: call    sub_612A90
0x5F1FDF: fstp    [esp+3Ch+var_1C]
0x5F1FE3: mov     ecx, [esi+58h]
0x5F1FE6: fld     [esp+3Ch+var_1C]
0x5F1FEA: mov     eax, [ecx]
0x5F1FEC: fstp    [esp+3Ch+var_38]
0x5F1FF0: mov     edx, [eax+328h]
0x5F1FF6: add     esp, 4
0x5F1FF9: call    edx
0x5F1FFB: test    edi, edi
0x5F1FFD: jz      short loc_5F200F
0x5F1FFF: mov     ecx, edi
0x5F2001: call    ContainerEntryExtraData_DestroyDataTable
0x5F2006: push    edi
0x5F2007: call    FormHeapFree
0x5F200C: add     esp, 4
0x5F200F: mov     ebp, [esp+34h+var_20]
0x5F2013: mov     eax, ds:0B33A98h
0x5F2018: test    eax, eax
0x5F201A: jz      loc_5F2370
0x5F2020: cmp     byte ptr [eax+0CD4h], 0
0x5F2027: jnz     loc_5F2370
0x5F202D: test    bl, bl
0x5F202F: jz      short loc_5F203E
0x5F2031: mov     ecx, [esi+58h]
0x5F2034: mov     eax, [ecx]
0x5F2036: mov     edx, [eax+18h]
0x5F2039: push    0
0x5F203B: push    esi
0x5F203C: call    edx
0x5F203E: mov     eax, [esi]
0x5F2040: mov     edx, [eax+334h]
0x5F2046: push    1
0x5F2048: mov     ecx, esi
0x5F204A: call    edx
0x5F204C: test    al, al
0x5F204E: jz      loc_5F2242
0x5F2054: mov     ecx, [esi+58h]
0x5F2057: mov     eax, [ecx]
0x5F2059: mov     edx, [eax+3D0h]
0x5F205F: call    edx
0x5F2061: cmp     eax, ds:0B333C4h
0x5F2067: jnz     short loc_5F2099
0x5F2069: mov     eax, [esi+58h]
0x5F206C: mov     edi, [eax]
0x5F206E: mov     ecx, offset TimeGlobals
0x5F2073: add     edi, 1Ch
0x5F2076: call    TimeGlobals_GetGameHour
0x5F207B: fsub    qword ptr ds:0A2FAA0h
0x5F2081: mov     edx, [edi]
0x5F2083: push    ecx
0x5F2084: mov     ecx, [esi+58h]
0x5F2087: fstp    [esp+38h+var_1C]
0x5F208B: fld     [esp+38h+var_1C]
0x5F208F: fstp    [esp+38h+var_38]
0x5F2092: call    edx
0x5F2094: jmp     loc_5F22D4
0x5F2099: push    0
0x5F209B: mov     ecx, esi
0x5F209D: call    sub_5E6CD0
0x5F20A2: test    al, al
0x5F20A4: jnz     loc_5F22D4
0x5F20AA: mov     eax, [esi]
0x5F20AC: mov     edx, [eax+350h]
0x5F20B2: mov     ecx, esi
0x5F20B4: call    edx
0x5F20B6: test    al, al
0x5F20B8: jnz     loc_5F22D4
0x5F20BE: mov     eax, [esi]
0x5F20C0: mov     edx, [eax+338h]
0x5F20C6: mov     ecx, esi
0x5F20C8: call    edx
0x5F20CA: test    eax, eax
0x5F20CC: jz      loc_5F22D4
0x5F20D2: mov     eax, [esi]
0x5F20D4: mov     edx, [eax+338h]
0x5F20DA: mov     ecx, esi
0x5F20DC: call    edx
0x5F20DE: cmp     dword ptr [eax+58h], 0
0x5F20E2: jz      loc_5F220F
0x5F20E8: mov     eax, [esi]
0x5F20EA: mov     edx, [eax+338h]
0x5F20F0: mov     ecx, esi
0x5F20F2: call    edx
0x5F20F4: mov     ecx, eax; this
0x5F20F6: call    Actor__GetProcessLevel
0x5F20FB: test    eax, eax
0x5F20FD: jnz     loc_5F220F
0x5F2103: mov     eax, [esi]
0x5F2105: mov     edx, [eax+338h]
0x5F210B: mov     ecx, esi
0x5F210D: call    edx
0x5F210F: mov     ecx, ds:0B333C4h
0x5F2115: cmp     eax, ecx
0x5F2117: jnz     loc_5F21F5
0x5F211D: mov     eax, [ecx+110h]
0x5F2123: cmp     eax, ds:0B37D18h
0x5F2129: jge     loc_5F21F5
0x5F212F: push    esi
0x5F2130: call    Actor__CanUSeDoor?
0x5F2135: add     esp, 4
0x5F2138: test    al, al
0x5F213A: jz      loc_5F21F5
0x5F2140: mov     ecx, [esi+58h]
0x5F2143: mov     edx, [ecx]
0x5F2145: mov     eax, [edx+194h]
0x5F214B: push    esi
0x5F214C: call    eax
0x5F214E: mov     ecx, [esi+58h]
0x5F2151: mov     edi, [ecx]
0x5F2153: mov     ecx, offset TimeGlobals
0x5F2158: add     edi, 1Ch
0x5F215B: call    TimeGlobals_GetGameHour
0x5F2160: fsub    qword ptr ds:0A432F0h
0x5F2166: mov     edx, [edi]
0x5F2168: push    ecx
0x5F2169: mov     ecx, [esi+58h]
0x5F216C: fstp    [esp+38h+var_1C]
0x5F2170: fld     [esp+38h+var_1C]
0x5F2174: fstp    [esp+38h+var_38]
0x5F2177: call    edx
0x5F2179: mov     eax, ds:0B333C4h
0x5F217E: fld     dword ptr ds:0A46C30h
0x5F2184: add     dword ptr [eax+110h], 1
0x5F218B: fstp    [esp+34h+var_20]
0x5F218F: mov     eax, ds:0B333C4h
0x5F2194: cmp     dword ptr [eax+570h], 0
0x5F219B: jz      short loc_5F21DB
0x5F219D: mov     eax, [eax+570h]
0x5F21A3: mov     edx, [eax]
0x5F21A5: mov     ecx, eax
0x5F21A7: mov     eax, [edx+174h]
0x5F21AD: call    eax
0x5F21AF: mov     edx, [esi]
0x5F21B1: push    eax
0x5F21B2: mov     eax, [edx+174h]
0x5F21B8: lea     ecx, [esp+38h+var_18]
0x5F21BC: push    ecx
0x5F21BD: mov     ecx, esi
0x5F21BF: call    eax
0x5F21C1: mov     ecx, eax
0x5F21C3: call    sub_4121A0
0x5F21C8: lea     ecx, [esp+34h+var_18]
0x5F21CC: call    sub_404C90
0x5F21D1: fdiv    qword ptr ds:0A3DDE0h
0x5F21D7: fstp    [esp+34h+var_20]
0x5F21DB: mov     ecx, [esi+58h]
0x5F21DE: fld     [esp+34h+var_20]
0x5F21E2: mov     edx, [ecx]
0x5F21E4: mov     eax, [edx+164h]
0x5F21EA: push    ecx
0x5F21EB: fstp    [esp+38h+var_38]
0x5F21EE: call    eax
0x5F21F0: jmp     loc_5F22D4
0x5F21F5: mov     edx, [esi]
0x5F21F7: mov     eax, [edx+340h]
0x5F21FD: push    0
0x5F21FF: mov     ecx, esi
0x5F2201: call    eax
0x5F2203: mov     ecx, esi; int
0x5F2205: call    sub_5EAE70
0x5F220A: jmp     loc_5F22D4
0x5F220F: mov     edx, [esi]
0x5F2211: mov     eax, [edx+330h]
0x5F2217: mov     ecx, esi
0x5F2219: call    eax
0x5F221B: test    eax, eax
0x5F221D: jz      loc_5F22D4
0x5F2223: mov     ecx, ds:0B333C4h
0x5F2229: mov     edx, [esi]
0x5F222B: mov     eax, [edx+330h]
0x5F2231: push    ecx
0x5F2232: mov     ecx, esi
0x5F2234: call    eax
0x5F2236: mov     ecx, eax
0x5F2238: call    sub_6162D0
0x5F223D: jmp     loc_5F22D4
0x5F2242: mov     edx, [esi]
0x5F2244: mov     eax, [edx+78h]
0x5F2247: mov     ecx, esi
0x5F2249: call    eax
0x5F224B: test    al, al
0x5F224D: jz      short loc_5F2258
0x5F224F: cmp     byte ptr [esi+0CAh], 0
0x5F2256: jnz     short loc_5F2283
0x5F2258: mov     ecx, esi
0x5F225A: call    sub_5E3220
0x5F225F: test    al, al
0x5F2261: jnz     short loc_5F226E
0x5F2263: mov     ecx, esi
0x5F2265: call    sub_5E30A0
0x5F226A: test    al, al
0x5F226C: jz      short loc_5F22D4
0x5F226E: mov     ecx, [esi+58h]
0x5F2271: mov     edx, [ecx]
0x5F2273: mov     eax, [edx+0CCh]
0x5F2279: call    eax
0x5F227B: cmp     eax, ds:0B333C4h
0x5F2281: jnz     short loc_5F22D4
0x5F2283: mov     ecx, [esi+58h]
0x5F2286: mov     edi, [ecx]
0x5F2288: mov     ecx, offset TimeGlobals
0x5F228D: add     edi, 1Ch
0x5F2290: call    TimeGlobals_GetGameHour
0x5F2295: fsub    qword ptr ds:0A30E48h
0x5F229B: mov     edx, [edi]
0x5F229D: push    ecx
0x5F229E: mov     ecx, [esi+58h]
0x5F22A1: fstp    [esp+38h+var_1C]
0x5F22A5: fld     [esp+38h+var_1C]
0x5F22A9: fstp    [esp+38h+var_38]
0x5F22AC: call    edx
0x5F22AE: push    1
0x5F22B0: push    esi
0x5F22B1: mov     ecx, offset ActorProcessManager_ptr
0x5F22B6: call    sub_674550
0x5F22BB: push    0
0x5F22BD: push    0
0x5F22BF: push    0
0x5F22C1: mov     ecx, esi; this
0x5F22C3: call    Actor__GetProcessLevel
0x5F22C8: push    eax
0x5F22C9: push    esi
0x5F22CA: mov     ecx, offset ActorProcessManager_ptr
0x5F22CF: call    sub_673A90
0x5F22D4: mov     eax, [esi]
0x5F22D6: mov     edx, [eax+35Ch]
0x5F22DC: mov     ecx, esi
0x5F22DE: mov     byte ptr [esi+0CAh], 1
0x5F22E5: call    edx
0x5F22E7: test    al, al
0x5F22E9: jz      loc_5F2370
0x5F22EF: mov     ecx, [esi+58h]
0x5F22F2: mov     eax, [ecx]
0x5F22F4: mov     edx, [eax+0CCh]
0x5F22FA: call    edx
0x5F22FC: mov     edi, eax
0x5F22FE: test    edi, edi
0x5F2300: jz      short loc_5F2370
0x5F2302: mov     eax, [edi]
0x5F2304: mov     edx, [eax+190h]
0x5F230A: mov     ecx, edi
0x5F230C: call    edx
0x5F230E: test    al, al
0x5F2310: jz      short loc_5F2370
0x5F2312: mov     eax, [edi]
0x5F2314: mov     edx, [eax+354h]
0x5F231A: mov     ecx, edi
0x5F231C: call    edx
0x5F231E: test    al, al
0x5F2320: jnz     short loc_5F2370
0x5F2322: mov     ecx, esi; int
0x5F2324: call    sub_5EAE70
0x5F2329: fld     dword ptr ds:0A5B6C0h
0x5F232F: mov     eax, [esi]
0x5F2331: mov     edx, [eax+174h]
0x5F2337: push    esi; a7
0x5F2338: push    offset sub_645A30; a6
0x5F233D: push    ecx
0x5F233E: mov     ecx, esi
0x5F2340: fstp    [esp+40h+a5]; a5
0x5F2343: call    edx
0x5F2345: fld     dword ptr ds:0A5B6C0h
0x5F234B: push    eax; a4
0x5F234C: mov     eax, [esi]
0x5F234E: mov     edx, [eax+174h]
0x5F2354: push    ecx
0x5F2355: mov     ecx, esi
0x5F2357: fstp    [esp+48h+a3]; a3
0x5F235A: call    edx
0x5F235C: push    eax; a2
0x5F235D: mov     ecx, esi; this
0x5F235F: call    TESObjectREFR_GetParentCell
0x5F2364: mov     ecx, ds:0B33A98h
0x5F236A: push    eax; a1
0x5F236B: call    sub_446B90
0x5F2370: mov     eax, [esi]
0x5F2372: mov     edx, [eax+198h]
0x5F2378: push    0
0x5F237A: mov     ecx, esi
0x5F237C: call    edx
0x5F237E: test    al, al
0x5F2380: jnz     short loc_5F2395
0x5F2382: cmp     ebp, 3
0x5F2385: jz      short loc_5F238C
0x5F2387: cmp     ebp, 2
0x5F238A: jnz     short loc_5F2395
0x5F238C: push    0
0x5F238E: mov     ecx, esi
0x5F2390: call    sub_5EDA20
0x5F2395: mov     al, 1
0x5F2397: mov     ecx, dword ptr [esp+34h+var_C]
0x5F239B: mov     large fs:0, ecx
0x5F23A2: pop     ecx
0x5F23A3: pop     edi
0x5F23A4: pop     esi
0x5F23A5: pop     ebp
0x5F23A6: pop     ebx
0x5F23A7: add     esp, 20h
0x5F23AA: retn
