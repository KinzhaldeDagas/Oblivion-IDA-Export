0x670CA0: sub     esp, 0Ch
0x670CA3: cmp     byte ptr [esp+0Ch+arg_0], 0
0x670CA8: push    ebx
0x670CA9: push    ebp
0x670CAA: push    esi
0x670CAB: push    edi
0x670CAC: mov     esi, ecx
0x670CAE: jnz     loc_670D69
0x670CB4: lea     edi, [esi+44h]
0x670CB7: mov     ecx, edi; this
0x670CB9: call    ExtraDataList_GetContainerChanges
0x670CBE: mov     ebx, eax
0x670CC0: mov     eax, [esi]
0x670CC2: mov     edx, [eax+250h]
0x670CC8: push    0
0x670CCA: mov     ecx, esi
0x670CCC: call    edx
0x670CCE: call    Double_To_SInt32
0x670CD3: push    eax
0x670CD4: push    esi
0x670CD5: mov     ecx, ebx
0x670CD7: call    sub_491700
0x670CDC: mov     eax, [esi]
0x670CDE: mov     edx, [eax+354h]
0x670CE4: mov     ecx, esi
0x670CE6: call    edx
0x670CE8: test    al, al
0x670CEA: jz      short loc_670CF3
0x670CEC: mov     ecx, edi; this
0x670CEE: call    sub_4246F0
0x670CF3: mov     edi, [esi]
0x670CF5: mov     eax, [edi+250h]
0x670CFB: mov     ecx, esi
0x670CFD: call    eax
0x670CFF: fmul    qword ptr ds:0A3D360h
0x670D05: mov     edx, [edi+254h]
0x670D0B: push    ecx
0x670D0C: fstp    [esp+20h+arg_0]
0x670D10: mov     ecx, esi
0x670D12: fld     [esp+20h+arg_0]
0x670D16: fstp    [esp+20h+var_20]
0x670D19: call    edx
0x670D1B: push    0
0x670D1D: push    esi
0x670D1E: mov     ecx, offset ActorProcessManager_ptr
0x670D23: call    sub_675D50
0x670D28: mov     ecx, esi
0x670D2A: mov     byte ptr [esi+12Ch], 1
0x670D31: call    sub_65FDA0
0x670D36: mov     eax, ds:0B3BAD4h
0x670D3B: test    eax, eax
0x670D3D: jz      short loc_670D54
0x670D3F: push    0
0x670D41: push    eax
0x670D42: push    esi
0x670D43: mov     ecx, ebx
0x670D45: call    sub_4919E0
0x670D4A: push    0
0x670D4C: call    sub_57A3B0
0x670D51: add     esp, 4
0x670D54: push    esi
0x670D55: mov     ecx, offset ActorProcessManager_ptr
0x670D5A: call    sub_675E90
0x670D5F: pop     edi
0x670D60: pop     esi
0x670D61: pop     ebp
0x670D62: pop     ebx
0x670D63: add     esp, 0Ch
0x670D66: retn    4
0x670D69: xor     ebp, ebp
0x670D6B: cmp     ds:0B3BAD0h, ebp
0x670D71: mov     byte ptr [esi+12Ch], 0
0x670D78: jz      loc_670F40
0x670D7E: mov     ecx, ds:0B35B90h
0x670D84: cmp     ecx, ebp
0x670D86: jz      short loc_670D8D
0x670D88: call    sub_4BE5A0
0x670D8D: mov     ecx, ds:0B35B8Ch
0x670D93: cmp     ecx, ebp
0x670D95: jz      short loc_670D9C
0x670D97: call    sub_4BD980
0x670D9C: mov     ecx, ds:0B3BAD0h; this
0x670DA2: mov     [esp+1Ch+var_C], ebp
0x670DA6: xor     edi, edi
0x670DA8: call    TESObjectREFR_GetParentCell
0x670DAD: mov     ebx, eax
0x670DAF: test    ebx, ebx
0x670DB1: jnz     short loc_670E2A
0x670DB3: mov     ecx, ds:0B3BAD0h; this
0x670DB9: call    TESObjectREFR_GetWorldSpace
0x670DBE: mov     ebx, eax
0x670DC0: test    ebx, ebx
0x670DC2: mov     [esp+1Ch+var_C], ebx
0x670DC6: jz      loc_670F40
0x670DCC: mov     ecx, ds:0B3BAD0h
0x670DD2: mov     eax, [ecx]
0x670DD4: mov     edx, [eax+174h]
0x670DDA: call    edx
0x670DDC: fld     dword ptr [eax]
0x670DDE: fstp    [esp+1Ch+var_8]
0x670DE2: fld     [esp+1Ch+var_8]
0x670DE6: fistp   [esp+1Ch+arg_0]
0x670DEA: mov     ecx, ds:0B3BAD0h
0x670DF0: mov     eax, [ecx]
0x670DF2: mov     edi, [esp+1Ch+arg_0]
0x670DF6: mov     edx, [eax+174h]
0x670DFC: sar     edi, 0Ch
0x670DFF: call    edx
0x670E01: fld     dword ptr [eax+4]
0x670E04: fstp    [esp+1Ch+var_8]
0x670E08: fld     [esp+1Ch+var_8]
0x670E0C: fistp   [esp+1Ch+arg_0]
0x670E10: mov     ebp, [esp+1Ch+arg_0]
0x670E14: sar     ebp, 0Ch
0x670E17: push    ebp; int
0x670E18: push    edi; ArgList
0x670E19: mov     ecx, ebx
0x670E1B: call    sub_4F1630
0x670E20: mov     ebx, eax
0x670E22: test    ebx, ebx
0x670E24: jz      loc_670F40
0x670E2A: mov     eax, [esi]
0x670E2C: mov     edx, [eax+380h]
0x670E32: mov     ecx, esi
0x670E34: call    edx
0x670E36: test    eax, eax
0x670E38: jnz     short loc_670E4A
0x670E3A: mov     eax, [esi]
0x670E3C: mov     edx, [eax+388h]
0x670E42: mov     ecx, esi
0x670E44: call    edx
0x670E46: test    eax, eax
0x670E48: jz      short loc_670E51
0x670E4A: mov     ecx, esi
0x670E4C: call    sub_5F0410
0x670E51: mov     ecx, esi
0x670E53: call    sub_5E4140
0x670E58: mov     ecx, ds:0B3BAD0h; this
0x670E5E: call    GetTeleportExtraData
0x670E63: mov     ecx, eax
0x670E65: call    sub_42B410
0x670E6A: mov     ecx, eax; this
0x670E6C: call    GetTeleportExtraData
0x670E71: mov     esi, eax
0x670E73: test    esi, esi
0x670E75: jz      loc_670F40
0x670E7B: mov     ecx, esi
0x670E7D: call    sub_42B460
0x670E82: test    eax, eax
0x670E84: mov     ecx, esi
0x670E86: jnz     short loc_670EDC
0x670E88: call    sub_6899C0
0x670E8D: fld     dword ptr [eax]
0x670E8F: fstp    [esp+1Ch+var_8]
0x670E93: fld     [esp+1Ch+var_8]
0x670E97: fistp   [esp+1Ch+arg_0]
0x670E9B: mov     eax, [esp+1Ch+arg_0]
0x670E9F: sar     eax, 0Ch
0x670EA2: mov     ecx, esi
0x670EA4: mov     dword ptr [esp+1Ch+ArgList], eax
0x670EA8: call    sub_6899C0
0x670EAD: fld     dword ptr [eax+4]
0x670EB0: fstp    [esp+1Ch+var_8]
0x670EB4: fld     [esp+1Ch+var_8]
0x670EB8: fistp   [esp+1Ch+arg_0]
0x670EBC: mov     eax, [esp+1Ch+arg_0]
0x670EC0: mov     ecx, dword ptr [esp+1Ch+ArgList]
0x670EC4: sar     eax, 0Ch
0x670EC7: cmp     ecx, edi
0x670EC9: jnz     short loc_670ECF
0x670ECB: cmp     ebp, eax
0x670ECD: jz      short loc_670EE3
0x670ECF: push    eax; int
0x670ED0: push    ecx; ArgList
0x670ED1: mov     ecx, [esp+24h+var_C]
0x670ED5: call    sub_4F1630
0x670EDA: jmp     short loc_670EE1
0x670EDC: call    sub_42B460
0x670EE1: mov     ebx, eax
0x670EE3: mov     ecx, esi
0x670EE5: call    sub_42B430
0x670EEA: mov     ecx, esi
0x670EEC: mov     edi, eax
0x670EEE: call    sub_6899C0
0x670EF3: mov     edx, [edi]
0x670EF5: push    1; char
0x670EF7: push    ebx; int
0x670EF8: sub     esp, 0Ch
0x670EFB: mov     ecx, esp
0x670EFD: mov     [ecx], edx
0x670EFF: mov     edx, [edi+4]
0x670F02: mov     [ecx+4], edx
0x670F05: mov     edx, [edi+8]
0x670F08: mov     [ecx+8], edx
0x670F0B: mov     edx, [eax]
0x670F0D: sub     esp, 0Ch
0x670F10: mov     ecx, esp
0x670F12: mov     [ecx], edx
0x670F14: mov     edx, [eax+4]
0x670F17: mov     eax, [eax+8]
0x670F1A: mov     [ecx+4], edx
0x670F1D: mov     [ecx+8], eax
0x670F20: mov     ecx, ds:0B333C4h; int
0x670F26: call    sub_66EAF0
0x670F2B: mov     ecx, ds:0B3BAD0h
0x670F31: push    0
0x670F33: push    0
0x670F35: push    ecx
0x670F36: mov     ecx, offset ActorProcessManager_ptr
0x670F3B: call    sub_6765F0
0x670F40: pop     edi
0x670F41: pop     esi
0x670F42: pop     ebp
0x670F43: pop     ebx
0x670F44: add     esp, 0Ch
0x670F47: retn    4
