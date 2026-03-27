0x460BC0: sub     esp, 50h
0x460BC3: push    ebx
0x460BC4: push    ebp
0x460BC5: push    esi
0x460BC6: mov     esi, [esp+5Ch+arg_0]
0x460BCA: push    edi; ArgList
0x460BCB: xor     edi, edi
0x460BCD: push    edi; int
0x460BCE: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x460BD3: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x460BD8: push    edi; int
0x460BD9: push    esi; void *
0x460BDA: mov     ebp, ecx
0x460BDC: call    OblivionDynamicCast
0x460BE1: mov     ebx, eax
0x460BE3: add     esp, 14h
0x460BE6: cmp     ebx, edi
0x460BE8: jnz     short loc_460C62
0x460BEA: push    edi; int
0x460BEB: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x460BF0: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x460BF5: push    edi; int
0x460BF6: push    esi; void *
0x460BF7: call    OblivionDynamicCast
0x460BFC: add     esp, 14h
0x460BFF: test    eax, eax
0x460C01: jz      loc_46101E
0x460C07: mov     eax, ds:0B33B00h
0x460C0C: mov     cl, 5Bh ; '['
0x460C0E: cmp     [eax+7Ch], cl
0x460C11: mov     eax, [esp+60h+arg_4]
0x460C15: jb      short loc_460C2F
0x460C17: test    eax, 4000000h
0x460C1C: jz      short loc_460C24
0x460C1E: add     dword ptr [ebp+14h], 4
0x460C22: jmp     short loc_460C2F
0x460C24: test    eax, 2000000h
0x460C29: jz      short loc_460C2F
0x460C2B: add     dword ptr [ebp+14h], 6
0x460C2F: mov     edx, ds:0B33B00h
0x460C35: cmp     [edx+7Ch], cl
0x460C38: jnb     loc_46101E
0x460C3E: test    al, 2
0x460C40: jz      short loc_460C54
0x460C42: test    al, 4
0x460C44: jz      short loc_460C54
0x460C46: add     dword ptr [ebp+14h], 0Ch
0x460C4A: pop     edi
0x460C4B: pop     esi
0x460C4C: pop     ebp
0x460C4D: pop     ebx
0x460C4E: add     esp, 50h
0x460C51: retn    8
0x460C54: add     dword ptr [ebp+14h], 2
0x460C58: pop     edi
0x460C59: pop     esi
0x460C5A: pop     ebp
0x460C5B: pop     ebx
0x460C5C: add     esp, 50h
0x460C5F: retn    8
0x460C62: mov     eax, [esp+60h+arg_4]
0x460C66: test    al, 2
0x460C68: jz      loc_460DD2
0x460C6E: mov     esi, ds:0B33B00h
0x460C74: mov     [esp+60h+Dst], edi
0x460C78: mov     [esp+60h+a1], edi
0x460C7C: mov     [esp+60h+var_48], edi
0x460C80: mov     eax, [esi+14h]
0x460C83: push    24h ; '$'; Size
0x460C85: push    eax; Src
0x460C86: lea     ecx, [esp+68h+Dst]
0x460C8A: push    ecx; Dst
0x460C8B: call    _memcpy
0x460C90: add     dword ptr [esi+14h], 24h ; '$'
0x460C94: mov     edx, [esp+6Ch+a1]
0x460C98: add     esp, 0Ch
0x460C9B: push    edx
0x460C9C: mov     ecx, ebp
0x460C9E: call    sub_459950
0x460CA3: mov     [esp+60h+a1], eax
0x460CA7: mov     eax, [esp+60h+var_48]
0x460CAB: push    eax
0x460CAC: mov     ecx, ebp
0x460CAE: call    sub_459950
0x460CB3: push    eax; a1
0x460CB4: mov     [esp+64h+var_48], eax
0x460CB8: call    TESForm_LookupByFormID
0x460CBD: push    edi; int
0x460CBE: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x460CC3: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x460CC8: mov     esi, eax
0x460CCA: push    edi; int
0x460CCB: push    esi; void *
0x460CCC: call    OblivionDynamicCast
0x460CD1: push    0; int
0x460CD3: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x460CD8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x460CDD: push    0; int
0x460CDF: push    esi; void *
0x460CE0: mov     edi, eax
0x460CE2: call    OblivionDynamicCast
0x460CE7: add     esp, 2Ch
0x460CEA: cmp     [esp+60h+Dst], 2
0x460CEF: mov     esi, eax
0x460CF1: jz      short loc_460D42
0x460CF3: mov     ecx, [esp+60h+a1]
0x460CF7: push    0; int
0x460CF9: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x460CFE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x460D03: push    0; int
0x460D05: push    ecx; a1
0x460D06: call    TESForm_LookupByFormID
0x460D0B: add     esp, 4
0x460D0E: push    eax; void *
0x460D0F: call    OblivionDynamicCast
0x460D14: add     esp, 14h
0x460D17: push    ebx
0x460D18: push    esi
0x460D19: push    edi
0x460D1A: lea     edx, [esp+6Ch+var_38]
0x460D1E: push    edx
0x460D1F: lea     ecx, [esp+70h+var_44]
0x460D23: push    ecx
0x460D24: mov     ecx, ds:0B33A98h
0x460D2A: push    eax
0x460D2B: call    TESDataHandler_PlaceObjectRef
0x460D30: push    ebx
0x460D31: mov     ecx, ebp
0x460D33: call    sub_45E990
0x460D38: pop     edi
0x460D39: pop     esi
0x460D3A: pop     ebp
0x460D3B: pop     ebx
0x460D3C: add     esp, 50h
0x460D3F: retn    8
0x460D42: test    esi, esi
0x460D44: jz      short loc_460D6F
0x460D46: fld     [esp+60h+var_44]
0x460D4A: fistp   [esp+60h+arg_0]
0x460D4E: fld     [esp+60h+var_40]
0x460D52: fistp   [esp+60h+arg_4]
0x460D56: mov     edx, [esp+60h+arg_4]
0x460D5A: mov     eax, [esp+60h+arg_0]
0x460D5E: sar     edx, 0Ch
0x460D61: push    edx; signed int
0x460D62: sar     eax, 0Ch
0x460D65: push    eax; signed int
0x460D66: mov     ecx, esi; this
0x460D68: call    TESWorldSpace__GetCellAtCellCoord
0x460D6D: mov     edi, eax
0x460D6F: test    edi, edi
0x460D71: jz      short loc_460D80
0x460D73: mov     edx, [ebx]
0x460D75: mov     eax, [edx+194h]
0x460D7B: push    edi; a4
0x460D7C: mov     ecx, ebx
0x460D7E: call    eax
0x460D80: mov     ecx, [esp+60h+var_44]
0x460D84: mov     edx, [esp+60h+var_40]
0x460D88: sub     esp, 0Ch
0x460D8B: mov     eax, esp
0x460D8D: mov     [eax], ecx
0x460D8F: mov     ecx, [esp+6Ch+var_3C]
0x460D93: mov     [eax+4], edx
0x460D96: mov     [eax+8], ecx
0x460D99: mov     ecx, ebx; this
0x460D9B: call    TESObjectREFR_SetPosition
0x460DA0: mov     edx, [esp+60h+var_38]
0x460DA4: mov     ecx, [esp+60h+var_34]
0x460DA8: sub     esp, 0Ch
0x460DAB: mov     eax, esp
0x460DAD: mov     [eax], edx
0x460DAF: mov     edx, [esp+6Ch+var_30]
0x460DB3: mov     [eax+4], ecx
0x460DB6: mov     ecx, ebx
0x460DB8: mov     [eax+8], edx
0x460DBB: call    sub_4D89A0
0x460DC0: push    ebx
0x460DC1: mov     ecx, ebp
0x460DC3: call    sub_45E990
0x460DC8: pop     edi
0x460DC9: pop     esi
0x460DCA: pop     ebp
0x460DCB: pop     ebx
0x460DCC: add     esp, 50h
0x460DCF: retn    8
0x460DD2: test    al, 0Ch
0x460DD4: jz      loc_461013
0x460DDA: test    eax, eax
0x460DDC: mov     edi, ds:0B33B00h
0x460DE2: mov     esi, [edi+14h]
0x460DE5: jns     short loc_460E2A
0x460DE7: push    2Ch ; ','; Size
0x460DE9: lea     eax, [esp+64h+var_2C]
0x460DED: push    esi; Src
0x460DEE: push    eax; Dst
0x460DEF: call    _memcpy
0x460DF4: mov     ecx, [esp+6Ch+var_2C]
0x460DF8: add     esp, 0Ch
0x460DFB: push    ecx
0x460DFC: add     esi, 2Ch ; ','
0x460DFF: mov     ecx, ebp
0x460E01: mov     [edi+14h], esi
0x460E04: call    sub_459950
0x460E09: mov     edx, [esp+60h+var_1C]
0x460E0D: push    edx
0x460E0E: mov     ecx, ebp
0x460E10: call    sub_459950
0x460E15: mov     ecx, 7
0x460E1A: lea     esi, [esp+60h+var_1C]
0x460E1E: lea     edi, [esp+60h+Dst]
0x460E22: mov     [esp+60h+var_1C], eax
0x460E26: rep movsd
0x460E28: jmp     short loc_460E50
0x460E2A: push    1Ch; Size
0x460E2C: lea     eax, [esp+64h+Dst]
0x460E30: push    esi; a3
0x460E31: push    eax; a2
0x460E32: call    _memcpy
0x460E37: mov     ecx, [esp+6Ch+Dst]
0x460E3B: add     esp, 0Ch
0x460E3E: add     esi, 1Ch
0x460E41: push    ecx; a4
0x460E42: mov     ecx, ebp
0x460E44: mov     [edi+14h], esi
0x460E47: call    sub_459950
0x460E4C: mov     [esp+60h+Dst], eax
0x460E50: mov     edx, [esp+60h+var_40]
0x460E54: mov     ecx, [esp+60h+var_3C]
0x460E58: sub     esp, 0Ch
0x460E5B: mov     eax, esp
0x460E5D: mov     [eax], edx
0x460E5F: mov     edx, [esp+6Ch+var_38]
0x460E63: mov     [eax+4], ecx
0x460E66: mov     ecx, ebx
0x460E68: mov     [eax+8], edx
0x460E6B: call    sub_4D89A0
0x460E70: cmp     ebx, ds:0B333C4h
0x460E76: jz      loc_46101E
0x460E7C: mov     ecx, [esp+60h+a1]
0x460E80: mov     edx, [esp+60h+var_48]
0x460E84: sub     esp, 0Ch
0x460E87: mov     eax, esp
0x460E89: mov     [eax], ecx
0x460E8B: mov     ecx, [esp+6Ch+var_44]
0x460E8F: mov     [eax+4], edx
0x460E92: mov     [eax+8], ecx
0x460E95: mov     ecx, ebx; this
0x460E97: call    TESObjectREFR_SetPosition
0x460E9C: push    ebx
0x460E9D: mov     ecx, ebp
0x460E9F: call    sub_45E990
0x460EA4: mov     edx, [esp+60h+Dst]
0x460EA8: push    edx; a1
0x460EA9: call    TESForm_LookupByFormID
0x460EAE: push    0; int
0x460EB0: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x460EB5: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x460EBA: mov     esi, eax
0x460EBC: push    0; int
0x460EBE: push    esi; void *
0x460EBF: call    OblivionDynamicCast
0x460EC4: push    0; int
0x460EC6: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x460ECB: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x460ED0: push    0; int
0x460ED2: push    esi; void *
0x460ED3: mov     ebp, eax
0x460ED5: call    OblivionDynamicCast
0x460EDA: add     esp, 2Ch
0x460EDD: test    ebp, ebp
0x460EDF: mov     esi, eax
0x460EE1: jz      short loc_460F08
0x460EE3: mov     ecx, ebx; this
0x460EE5: call    TESObjectREFR_GetParentCell
0x460EEA: cmp     ebp, eax
0x460EEC: jz      loc_46101E
0x460EF2: push    0; int
0x460EF4: push    ebp; int
0x460EF5: push    ebx; Concurrency::details::SchedulerBase *
0x460EF6: call    sub_4DD4B0
0x460EFB: add     esp, 0Ch
0x460EFE: pop     edi
0x460EFF: pop     esi
0x460F00: pop     ebp
0x460F01: pop     ebx
0x460F02: add     esp, 50h
0x460F05: retn    8
0x460F08: test    esi, esi
0x460F0A: jz      loc_460FA5
0x460F10: fld     [esp+60h+a1]
0x460F14: fistp   [esp+60h+arg_0]
0x460F18: fld     [esp+60h+var_48]
0x460F1C: fistp   [esp+60h+arg_4]
0x460F20: mov     eax, [esp+60h+arg_4]
0x460F24: mov     ecx, [esp+60h+arg_0]
0x460F28: sar     eax, 0Ch
0x460F2B: sar     ecx, 0Ch
0x460F2E: push    eax; signed int
0x460F2F: push    ecx; signed int
0x460F30: mov     ecx, esi; this
0x460F32: call    TESWorldSpace__GetCellAtCellCoord
0x460F37: mov     ecx, ebx; this
0x460F39: mov     edi, eax
0x460F3B: call    TESObjectREFR_GetParentCell
0x460F40: test    eax, eax
0x460F42: jz      short loc_460F56
0x460F44: mov     ecx, ebx; this
0x460F46: call    TESObjectREFR_GetParentCell
0x460F4B: mov     ecx, eax; this
0x460F4D: call    TESObjectCELL_IsInterior
0x460F52: test    al, al
0x460F54: jnz     short loc_460F61
0x460F56: mov     ecx, ebx; this
0x460F58: call    TESObjectREFR_GetParentCell
0x460F5D: cmp     eax, edi
0x460F5F: jz      short loc_460F77
0x460F61: push    esi; int
0x460F62: push    0; int
0x460F64: push    ebx; Concurrency::details::SchedulerBase *
0x460F65: call    sub_4DD4B0
0x460F6A: add     esp, 0Ch
0x460F6D: pop     edi
0x460F6E: pop     esi
0x460F6F: pop     ebp
0x460F70: pop     ebx
0x460F71: add     esp, 50h
0x460F74: retn    8
0x460F77: test    edi, edi
0x460F79: jnz     loc_46101E
0x460F7F: mov     ecx, ebx; this
0x460F81: call    TESObjectREFR_IsPersistent?
0x460F86: test    al, al
0x460F88: jnz     loc_46101E
0x460F8E: push    offset aTryingToLoadNo; "Trying to load non-persistent ref into "...
0x460F93: call    PrintError
0x460F98: add     esp, 4
0x460F9B: pop     edi
0x460F9C: pop     esi
0x460F9D: pop     ebp
0x460F9E: pop     ebx
0x460F9F: add     esp, 50h
0x460FA2: retn    8
0x460FA5: mov     ecx, ebx; this
0x460FA7: call    TESObjectREFR_IsPersistent?
0x460FAC: test    al, al
0x460FAE: jnz     short loc_460FC7
0x460FB0: push    offset aTryingToPutNon; "Trying to put non-persistent reference "...
0x460FB5: call    PrintError
0x460FBA: add     esp, 4
0x460FBD: pop     edi
0x460FBE: pop     esi
0x460FBF: pop     ebp
0x460FC0: pop     ebx
0x460FC1: add     esp, 50h
0x460FC4: retn    8
0x460FC7: mov     ecx, ebx; this
0x460FC9: call    TESObjectREFR_GetParentCell
0x460FCE: test    eax, eax
0x460FD0: jz      short loc_460FE1
0x460FD2: push    ebx
0x460FD3: mov     ecx, ebx; this
0x460FD5: call    TESObjectREFR_GetParentCell
0x460FDA: mov     ecx, eax
0x460FDC: call    sub_4CECD0
0x460FE1: mov     edx, [ebx]
0x460FE3: mov     eax, [edx+194h]
0x460FE9: push    0
0x460FEB: mov     ecx, ebx
0x460FED: call    eax
0x460FEF: mov     ecx, ds:0B33A1Ch
0x460FF5: push    ebx
0x460FF6: call    sub_439DC0
0x460FFB: mov     edx, [ebx]
0x460FFD: mov     eax, [edx+150h]
0x461003: push    0
0x461005: mov     ecx, ebx
0x461007: call    eax
0x461009: pop     edi
0x46100A: pop     esi
0x46100B: pop     ebp
0x46100C: pop     ebx
0x46100D: add     esp, 50h
0x461010: retn    8
0x461013: test    eax, offset loc_800000
0x461018: jz      short loc_46101E
0x46101A: add     dword ptr [ebp+14h], 4
0x46101E: pop     edi
0x46101F: pop     esi
0x461020: pop     ebp
0x461021: pop     ebx
0x461022: add     esp, 50h
0x461025: retn    8
