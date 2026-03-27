0x683DF0: sub     esp, 10h
0x683DF3: push    ebx
0x683DF4: push    esi
0x683DF5: mov     esi, ecx
0x683DF7: mov     ebx, [esi+48h]
0x683DFA: push    edi
0x683DFB: mov     edi, [esp+1Ch+arg_0]
0x683DFF: add     ebx, 1
0x683E02: test    edi, edi
0x683E04: jz      loc_683FDC
0x683E0A: lea     ecx, [esi+14h]
0x683E0D: call    sub_42B410
0x683E12: test    eax, eax
0x683E14: jz      loc_683FDC
0x683E1A: mov     eax, ebx
0x683E1C: sub     eax, 1
0x683E1F: push    ebp
0x683E20: jz      loc_683EE5
0x683E26: sub     eax, 1
0x683E29: jnz     loc_683FDB
0x683E2F: cmp     dword ptr [esi+30h], 0
0x683E33: jz      loc_683FDB
0x683E39: mov     eax, [edi]
0x683E3B: mov     edx, [eax+174h]
0x683E41: mov     ecx, edi
0x683E43: call    edx
0x683E45: lea     ecx, [esi+14h]
0x683E48: mov     ebp, eax
0x683E4A: call    sub_42B410
0x683E4F: mov     ecx, eax
0x683E51: call    sub_6899C0
0x683E56: fld     dword ptr [eax]
0x683E58: fsub    dword ptr [ebp+0]
0x683E5B: fstp    [esp+20h+var_C]
0x683E5F: fld     dword ptr [eax+4]
0x683E62: fsub    dword ptr [ebp+4]
0x683E65: fstp    [esp+20h+var_8]
0x683E69: fld     dword ptr [eax+8]
0x683E6C: lea     eax, [esp+20h+var_C]
0x683E70: fsub    dword ptr [ebp+8]
0x683E73: push    eax
0x683E74: fstp    [esp+24h+var_4]
0x683E78: call    sub_683CB0
0x683E7D: fadd    qword ptr ds:0A74C90h
0x683E83: add     esp, 4
0x683E86: mov     ecx, edi
0x683E88: fstp    [esp+20h+var_10]
0x683E8C: fld1
0x683E8E: fstp    [esp+20h+arg_0]
0x683E92: call    Actor_IsSwimming
0x683E97: test    al, al
0x683E99: jz      short loc_683EA5
0x683E9B: fld     dword ptr ds:0A379B4h
0x683EA1: fstp    [esp+20h+arg_0]
0x683EA5: mov     ecx, edi
0x683EA7: call    sub_5E0510
0x683EAC: test    al, al
0x683EAE: jz      short loc_683EBE
0x683EB0: fld     [esp+20h+arg_0]
0x683EB4: fmul    qword ptr ds:0A31C70h
0x683EBA: fstp    [esp+20h+arg_0]
0x683EBE: fld     [esp+20h+var_10]
0x683EC2: push    ecx
0x683EC3: mov     ecx, [esi+30h]
0x683EC6: fstp    [esp+24h+var_24]; float
0x683EC9: call    sub_680E70
0x683ECE: fld     [esp+20h+var_10]
0x683ED2: push    ecx
0x683ED3: mov     ecx, [esi+30h]
0x683ED6: fstp    [esp+24h+var_24]; float
0x683ED9: call    sub_680D20
0x683EDE: push    4
0x683EE0: jmp     loc_683F96
0x683EE5: cmp     dword ptr [esi+30h], 0
0x683EE9: jz      loc_683FDB
0x683EEF: mov     edx, [edi]
0x683EF1: mov     eax, [edx+174h]
0x683EF7: mov     ecx, edi
0x683EF9: call    eax
0x683EFB: lea     ecx, [esi+14h]
0x683EFE: mov     ebp, eax
0x683F00: call    sub_42B410
0x683F05: mov     ecx, eax
0x683F07: call    sub_6899C0
0x683F0C: fld     dword ptr [eax]
0x683F0E: fsub    dword ptr [ebp+0]
0x683F11: lea     ecx, [esp+20h+var_C]
0x683F15: push    ecx
0x683F16: fstp    [esp+24h+var_C]
0x683F1A: fld     dword ptr [eax+4]
0x683F1D: fsub    dword ptr [ebp+4]
0x683F20: fstp    [esp+24h+var_8]
0x683F24: fld     dword ptr [eax+8]
0x683F27: fsub    dword ptr [ebp+8]
0x683F2A: fstp    [esp+24h+var_4]
0x683F2E: call    sub_683CB0
0x683F33: fsub    qword ptr ds:0A74C90h
0x683F39: add     esp, 4
0x683F3C: mov     ecx, edi
0x683F3E: fstp    [esp+20h+var_10]
0x683F42: fld1
0x683F44: fstp    [esp+20h+arg_0]
0x683F48: call    Actor_IsSwimming
0x683F4D: test    al, al
0x683F4F: jz      short loc_683F5B
0x683F51: fld     dword ptr ds:0A379B4h
0x683F57: fstp    [esp+20h+arg_0]
0x683F5B: mov     ecx, edi
0x683F5D: call    sub_5E0510
0x683F62: test    al, al
0x683F64: jz      short loc_683F74
0x683F66: fld     [esp+20h+arg_0]
0x683F6A: fmul    qword ptr ds:0A31C70h
0x683F70: fstp    [esp+20h+arg_0]
0x683F74: fld     [esp+20h+var_10]
0x683F78: push    ecx
0x683F79: mov     ecx, [esi+30h]
0x683F7C: fstp    [esp+24h+var_24]; float
0x683F7F: call    sub_680E70
0x683F84: fld     [esp+20h+var_10]
0x683F88: push    ecx
0x683F89: mov     ecx, [esi+30h]
0x683F8C: fstp    [esp+24h+var_24]; float
0x683F8F: call    sub_680D20
0x683F94: push    3
0x683F96: mov     ecx, [esi+30h]
0x683F99: call    TESLeveledList_SetChanceNone
0x683F9E: fldz
0x683FA0: push    ecx
0x683FA1: fstp    [esp+24h+var_24]; float
0x683FA4: mov     ecx, [esi+30h]
0x683FA7: call    sub_680CD0
0x683FAC: fld     [esp+20h+arg_0]
0x683FB0: push    ecx
0x683FB1: mov     ecx, [esi+30h]
0x683FB4: fstp    [esp+24h+var_24]; float
0x683FB7: call    sub_680CE0
0x683FBC: fldz
0x683FBE: push    ecx
0x683FBF: fstp    [esp+24h+var_24]; float
0x683FC2: mov     ecx, [esi+30h]
0x683FC5: call    sub_680D00
0x683FCA: fld     dword ptr ds:0A32048h
0x683FD0: fstp    dword ptr [esi+1Ch]
0x683FD3: fldz
0x683FD5: fst     dword ptr [esi+24h]
0x683FD8: fstp    dword ptr [esi+20h]
0x683FDB: pop     ebp
0x683FDC: cmp     ebx, 3
0x683FDF: mov     [esi+48h], ebx
0x683FE2: jl      short loc_683FEF
0x683FE4: mov     edx, [esi]
0x683FE6: mov     eax, [edx+30h]
0x683FE9: push    1
0x683FEB: mov     ecx, esi
0x683FED: call    eax
0x683FEF: pop     edi
0x683FF0: pop     esi
0x683FF1: pop     ebx
0x683FF2: add     esp, 10h
0x683FF5: retn    4
