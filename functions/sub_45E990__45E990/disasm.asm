0x45E990: sub     esp, 24h
0x45E993: push    ebx
0x45E994: push    ebp
0x45E995: push    esi
0x45E996: mov     esi, [esp+30h+arg_0]
0x45E99A: test    esi, esi
0x45E99C: push    edi; a4
0x45E99D: mov     ebp, ecx
0x45E99F: jz      loc_45EC3A
0x45E9A5: mov     eax, [esi]
0x45E9A7: mov     edx, [eax+174h]
0x45E9AD: mov     ecx, esi
0x45E9AF: call    edx
0x45E9B1: mov     ecx, [eax]
0x45E9B3: mov     edx, [eax+4]
0x45E9B6: mov     eax, [eax+8]
0x45E9B9: mov     [esp+34h+var_24], ecx
0x45E9BD: mov     ecx, [esi+20h]
0x45E9C0: mov     [esp+34h+var_C], ecx
0x45E9C4: lea     ecx, [esp+34h+var_24]
0x45E9C8: mov     [esp+34h+var_20], edx
0x45E9CC: mov     edx, [esi+24h]
0x45E9CF: mov     [esp+34h+var_1C], eax
0x45E9D3: mov     eax, [esi+28h]
0x45E9D6: push    ecx
0x45E9D7: mov     ecx, ebp
0x45E9D9: mov     [esp+38h+var_8], edx
0x45E9DD: mov     [esp+38h+var_4], eax
0x45E9E1: call    sub_452430
0x45E9E6: test    al, al
0x45E9E8: jz      loc_45EBF8
0x45E9EE: mov     edx, [esi+0Ch]
0x45E9F1: push    edx; ArgList
0x45E9F2: push    offset aCorruptLocat_1; "Corrupt location found loading referenc"...
0x45E9F7: call    PrintError
0x45E9FC: mov     eax, [esi]
0x45E9FE: mov     edx, [eax+190h]
0x45EA04: add     esp, 8
0x45EA07: mov     ecx, esi
0x45EA09: call    edx
0x45EA0B: test    al, al
0x45EA0D: jz      loc_45EA98
0x45EA13: mov     ecx, esi
0x45EA15: call    sub_5E0260
0x45EA1A: test    al, al
0x45EA1C: jz      short loc_45EA98
0x45EA1E: mov     ecx, esi
0x45EA20: call    sub_5E1F60
0x45EA25: mov     ecx, esi
0x45EA27: mov     edi, eax
0x45EA29: call    sub_5E1F40
0x45EA2E: test    edi, edi
0x45EA30: mov     ebx, eax
0x45EA32: jnz     short loc_45EA3C
0x45EA34: test    ebx, ebx
0x45EA36: jz      loc_45EBF8
0x45EA3C: mov     eax, [esi]
0x45EA3E: mov     edx, [eax+0F4h]
0x45EA44: lea     ecx, [esp+34h+a3]
0x45EA48: push    ecx; a3
0x45EA49: mov     ecx, esi
0x45EA4B: call    edx
0x45EA4D: mov     edx, [eax]
0x45EA4F: sub     esp, 0Ch
0x45EA52: mov     ecx, esp
0x45EA54: mov     [ecx], edx
0x45EA56: mov     edx, [eax+4]
0x45EA59: mov     eax, [eax+8]
0x45EA5C: mov     [ecx+4], edx
0x45EA5F: mov     [ecx+8], eax
0x45EA62: mov     ecx, esi; this
0x45EA64: call    TESObjectREFR_SetPosition
0x45EA69: mov     edx, [esi]
0x45EA6B: mov     edx, [edx+0F0h]
0x45EA71: lea     eax, [esp+30h+var_14]
0x45EA75: push    eax
0x45EA76: mov     ecx, esi
0x45EA78: call    edx
0x45EA7A: fld     dword ptr [eax+8]
0x45EA7D: push    ecx
0x45EA7E: mov     ecx, esi
0x45EA80: fstp    [esp+34h+var_34]; float
0x45EA83: call    sub_4D8A10
0x45EA88: push    ebx; int
0x45EA89: push    edi; int
0x45EA8A: push    esi; Concurrency::details::SchedulerBase *
0x45EA8B: call    sub_4DD4B0
0x45EA90: add     esp, 0Ch
0x45EA93: jmp     loc_45EBF8
0x45EA98: lea     edi, [esi+44h]
0x45EA9B: push    14h; a4
0x45EA9D: mov     ecx, edi; this
0x45EA9F: call    BaseExtraList_GetExtraData
0x45EAA4: test    eax, eax
0x45EAA6: jz      loc_45EB68
0x45EAAC: mov     eax, [esi]
0x45EAAE: mov     edx, [eax+0F4h]
0x45EAB4: lea     ecx, [esp+34h+var_24]
0x45EAB8: push    ecx
0x45EAB9: mov     ecx, esi
0x45EABB: call    edx
0x45EABD: mov     eax, [esi]
0x45EABF: mov     edx, [eax+0F0h]
0x45EAC5: lea     ecx, [esp+34h+a3]
0x45EAC9: push    ecx; a4
0x45EACA: mov     ecx, esi
0x45EACC: call    edx
0x45EACE: mov     ecx, [esp+34h+var_24]
0x45EAD2: mov     edx, [esp+34h+var_20]
0x45EAD6: sub     esp, 0Ch
0x45EAD9: mov     eax, esp
0x45EADB: mov     [eax], ecx
0x45EADD: mov     ecx, [esp+40h+var_1C]
0x45EAE1: mov     [eax+4], edx
0x45EAE4: mov     [eax+8], ecx
0x45EAE7: mov     ecx, esi; this
0x45EAE9: call    TESObjectREFR_SetPosition
0x45EAEE: mov     edx, [esp+34h+a3]
0x45EAF2: mov     ecx, [esp+34h+var_14]
0x45EAF6: sub     esp, 0Ch
0x45EAF9: mov     eax, esp
0x45EAFB: mov     [eax], edx
0x45EAFD: mov     edx, [esp+40h+var_10]
0x45EB01: mov     [eax+4], ecx
0x45EB04: mov     ecx, esi
0x45EB06: mov     [eax+8], edx
0x45EB09: call    sub_4D89A0
0x45EB0E: mov     ecx, edi
0x45EB10: call    sub_41F7F0
0x45EB15: mov     edi, eax
0x45EB17: test    edi, edi
0x45EB19: jz      loc_45EBF8
0x45EB1F: push    0; int
0x45EB21: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x45EB26: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45EB2B: push    0; int
0x45EB2D: push    edi; void *
0x45EB2E: call    OblivionDynamicCast
0x45EB33: push    0; int
0x45EB35: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x45EB3A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45EB3F: push    0; int
0x45EB41: push    edi; void *
0x45EB42: mov     ebx, eax
0x45EB44: call    OblivionDynamicCast
0x45EB49: add     esp, 28h
0x45EB4C: test    ebx, ebx
0x45EB4E: jnz     short loc_45EB58
0x45EB50: test    eax, eax
0x45EB52: jz      loc_45EBF8
0x45EB58: push    eax; int
0x45EB59: push    ebx; int
0x45EB5A: push    esi; Concurrency::details::SchedulerBase *
0x45EB5B: call    sub_4DD4B0
0x45EB60: add     esp, 0Ch
0x45EB63: jmp     loc_45EBF8
0x45EB68: mov     ecx, esi; this
0x45EB6A: call    TESObjectREFR_GetParentCell
0x45EB6F: test    eax, eax
0x45EB71: jz      short loc_45EBD2
0x45EB73: mov     ecx, esi; this
0x45EB75: call    TESObjectREFR_GetParentCell
0x45EB7A: mov     ecx, eax
0x45EB7C: call    sub_4AF170
0x45EB81: test    eax, eax
0x45EB83: jz      short loc_45EBD2
0x45EB85: mov     ecx, esi; this
0x45EB87: call    TESObjectREFR_GetParentCell
0x45EB8C: mov     ecx, eax
0x45EB8E: call    sub_4AF170
0x45EB93: mov     ecx, eax
0x45EB95: call    sub_4E5A10
0x45EB9A: test    eax, eax
0x45EB9C: jz      short loc_45EBD2
0x45EB9E: mov     ecx, eax
0x45EBA0: call    sub_4BEF40
0x45EBA5: mov     ecx, [eax]
0x45EBA7: mov     edx, [eax+4]
0x45EBAA: mov     eax, [eax+8]
0x45EBAD: mov     [esp+34h+var_10], eax
0x45EBB1: fld     [esp+34h+var_10]
0x45EBB5: fadd    qword ptr ds:0A3AA50h
0x45EBBB: sub     esp, 0Ch
0x45EBBE: mov     eax, esp
0x45EBC0: mov     [eax], ecx
0x45EBC2: fstp    [esp+40h+var_10]
0x45EBC6: mov     ecx, [esp+40h+var_10]
0x45EBCA: mov     [eax+4], edx
0x45EBCD: mov     [eax+8], ecx
0x45EBD0: jmp     short loc_45EBF1
0x45EBD2: mov     edx, ds:0B3F9A8h
0x45EBD8: mov     ecx, ds:0B3F9ACh
0x45EBDE: sub     esp, 0Ch
0x45EBE1: mov     eax, esp
0x45EBE3: mov     [eax], edx
0x45EBE5: mov     edx, ds:0B3F9B0h
0x45EBEB: mov     [eax+4], ecx
0x45EBEE: mov     [eax+8], edx
0x45EBF1: mov     ecx, esi; this
0x45EBF3: call    TESObjectREFR_SetPosition
0x45EBF8: lea     eax, [esp+34h+var_C]
0x45EBFC: push    eax
0x45EBFD: mov     ecx, ebp
0x45EBFF: call    sub_452430
0x45EC04: test    al, al
0x45EC06: jz      short loc_45EC3A
0x45EC08: mov     ecx, [esi+0Ch]
0x45EC0B: push    ecx; ArgList
0x45EC0C: push    offset aCorruptAngle_1; "Corrupt angle found loading reference %"...
0x45EC11: call    PrintError
0x45EC16: mov     edx, ds:0B3F9A8h
0x45EC1C: push    ecx
0x45EC1D: mov     ecx, ds:0B3F9ACh
0x45EC23: mov     eax, esp
0x45EC25: mov     [eax], edx
0x45EC27: mov     edx, ds:0B3F9B0h
0x45EC2D: mov     [eax+4], ecx
0x45EC30: mov     ecx, esi
0x45EC32: mov     [eax+8], edx
0x45EC35: call    sub_4D89A0
0x45EC3A: pop     edi
0x45EC3B: pop     esi
0x45EC3C: pop     ebp
0x45EC3D: pop     ebx
0x45EC3E: add     esp, 24h
0x45EC41: retn    4
