0x487E40: sub     esp, 14h
0x487E43: push    ebp
0x487E44: mov     ebp, ecx
0x487E46: mov     ecx, [ebp+4]
0x487E49: mov     eax, [ecx]
0x487E4B: mov     edx, [eax+190h]
0x487E51: mov     [esp+18h+var_4], ebp
0x487E55: mov     [esp+18h+var_C], 0
0x487E5D: call    edx
0x487E5F: test    al, al
0x487E61: jz      short loc_487E6A
0x487E63: mov     eax, [ebp+4]
0x487E66: mov     [esp+18h+var_C], eax
0x487E6A: fld     dword ptr ds:0A30634h
0x487E70: fcomp   dword ptr [ebp+8]
0x487E73: fnstsw  ax
0x487E75: test    ah, 44h
0x487E78: jp      loc_4880F3
0x487E7E: fldz
0x487E80: mov     ecx, [ebp+4]; this
0x487E83: test    ecx, ecx
0x487E85: fstp    [esp+18h+var_10]
0x487E89: jz      short loc_487E92
0x487E8B: call    TESObjectREFR_GetContainer
0x487E90: jmp     short loc_487E94
0x487E92: xor     eax, eax
0x487E94: push    ebx
0x487E95: push    esi
0x487E96: lea     esi, [eax+8]
0x487E99: test    esi, esi
0x487E9B: push    edi
0x487E9C: jz      loc_487F68
0x487EA2: cmp     dword ptr [esi+4], 0
0x487EA6: jnz     short loc_487EB1
0x487EA8: cmp     dword ptr [esi], 0
0x487EAB: jz      loc_487F68
0x487EB1: mov     ecx, [esi]
0x487EB3: mov     edi, [ecx+4]
0x487EB6: mov     edx, [edi]
0x487EB8: mov     eax, [edx+78h]
0x487EBB: mov     ecx, edi
0x487EBD: call    eax
0x487EBF: test    al, al
0x487EC1: jnz     loc_487F5D
0x487EC7: push    edi
0x487EC8: call    TESWeightForm_GetWeightForForm_Fast
0x487ECD: fstp    [esp+28h+var_14]
0x487ED1: fld     dword ptr ds:0A30634h
0x487ED7: add     esp, 4
0x487EDA: fld     [esp+24h+var_14]
0x487EDE: fucom   st(1)
0x487EE0: fnstsw  ax
0x487EE2: fstp    st(1)
0x487EE4: test    ah, 44h
0x487EE7: jp      short loc_487EF5
0x487EE9: fstp    st
0x487EEB: fldz
0x487EED: fstp    [esp+24h+var_14]
0x487EF1: fld     [esp+24h+var_14]
0x487EF5: mov     eax, [ebp+0]
0x487EF8: test    eax, eax
0x487EFA: mov     dl, 1
0x487EFC: jz      short loc_487F30
0x487EFE: test    dl, dl
0x487F00: jz      short loc_487F26
0x487F02: mov     ecx, [eax]
0x487F04: test    ecx, ecx
0x487F06: jz      short loc_487F11
0x487F08: cmp     [ecx+8], edi
0x487F0B: jnz     short loc_487F11
0x487F0D: xor     dl, dl
0x487F0F: jmp     short loc_487F14
0x487F11: mov     eax, [eax+4]
0x487F14: test    eax, eax
0x487F16: jnz     short loc_487EFE
0x487F18: mov     ecx, [esi]
0x487F1A: fimul   dword ptr [ecx]
0x487F1C: fadd    [esp+24h+var_10]
0x487F20: fstp    [esp+24h+var_10]
0x487F24: jmp     short loc_487F5D
0x487F26: test    eax, eax
0x487F28: jz      short loc_487F30
0x487F2A: mov     eax, [eax]
0x487F2C: test    eax, eax
0x487F2E: jnz     short loc_487F3E
0x487F30: mov     ecx, [esi]
0x487F32: fimul   dword ptr [ecx]
0x487F34: fadd    [esp+24h+var_10]
0x487F38: fstp    [esp+24h+var_10]
0x487F3C: jmp     short loc_487F5D
0x487F3E: mov     edx, [esi]
0x487F40: mov     eax, [eax+4]
0x487F43: mov     ecx, [edx]
0x487F45: add     eax, ecx
0x487F47: mov     [esp+24h+var_8], eax
0x487F4B: jz      short loc_487F5B
0x487F4D: fimul   [esp+24h+var_8]
0x487F51: fadd    [esp+24h+var_10]
0x487F55: fstp    [esp+24h+var_10]
0x487F59: jmp     short loc_487F5D
0x487F5B: fstp    st
0x487F5D: mov     esi, [esi+4]
0x487F60: test    esi, esi
0x487F62: jnz     loc_487EA2
0x487F68: mov     ebx, [ebp+0]
0x487F6B: test    ebx, ebx
0x487F6D: jz      loc_4880C0
0x487F73: mov     edi, [ebx]
0x487F75: test    edi, edi
0x487F77: jz      loc_4880C0
0x487F7D: mov     esi, [edi+8]
0x487F80: test    esi, esi
0x487F82: jz      loc_4880B5
0x487F88: mov     ecx, [ebp+4]; this
0x487F8B: test    ecx, ecx
0x487F8D: jz      short loc_487FB8
0x487F8F: call    TESObjectREFR_GetContainer
0x487F94: test    eax, eax
0x487F96: jz      short loc_487FB8
0x487F98: mov     ecx, [ebp+4]; this
0x487F9B: test    ecx, ecx
0x487F9D: jz      short loc_487FA6
0x487F9F: call    TESObjectREFR_GetContainer
0x487FA4: jmp     short loc_487FA8
0x487FA6: xor     eax, eax
0x487FA8: push    esi; a2
0x487FA9: mov     ecx, eax; this
0x487FAB: call    TESContainer_HasForm
0x487FB0: test    al, al
0x487FB2: jnz     loc_4880B5
0x487FB8: mov     edx, [esi]
0x487FBA: mov     eax, [edx+78h]
0x487FBD: mov     ecx, esi
0x487FBF: call    eax
0x487FC1: test    al, al
0x487FC3: jnz     loc_4880B5
0x487FC9: push    esi
0x487FCA: call    TESWeightForm_GetWeightForForm_Fast
0x487FCF: fstp    [esp+28h+var_14]
0x487FD3: add     esp, 4
0x487FD6: xor     ebp, ebp
0x487FD8: cmp     byte ptr [esi+4], 14h
0x487FDC: jnz     short loc_487FE0
0x487FDE: mov     ebp, esi
0x487FE0: cmp     [esp+24h+var_C], 0
0x487FE5: mov     esi, [edi+4]
0x487FE8: mov     [esp+24h+var_8], esi
0x487FEC: jz      loc_48809D
0x487FF2: test    ebp, ebp
0x487FF4: jz      loc_48809D
0x487FFA: push    0
0x487FFC: mov     ecx, edi
0x487FFE: call    ContainerEntryExtraData_HasWorn
0x488003: test    al, al
0x488005: jz      loc_48809D
0x48800B: fld     [esp+24h+var_14]
0x48800F: mov     ecx, ebp
0x488011: fstp    [esp+24h+var_8]
0x488015: call    TESObjectARMO_ISHeavyArmor
0x48801A: cmp     al, 1
0x48801C: jnz     short loc_488057
0x48801E: mov     edi, [esp+24h+var_C]
0x488022: push    12h
0x488024: mov     ecx, edi
0x488026: call    Actor_GetSkillMasteryLevel
0x48802B: cmp     eax, 3
0x48802E: jnz     short loc_488037
0x488030: mov     ecx, offset fPerkHeavyArmorExpertSpeedMult
0x488035: jmp     short loc_488077
0x488037: push    12h
0x488039: mov     ecx, edi
0x48803B: call    Actor_GetSkillMasteryLevel
0x488040: cmp     eax, 4
0x488043: jnz     short loc_488086
0x488045: mov     ecx, offset fPerkHeavyArmorMasterSpeedMult
0x48804A: call    GameSetting_GetSafeFloatPointer
0x48804F: fld     dword ptr [eax]
0x488051: fmul    [esp+24h+var_14]
0x488055: jmp     short loc_488082
0x488057: mov     ecx, ebp
0x488059: call    TESObjectARMO_ISHeavyArmor
0x48805E: test    al, al
0x488060: jnz     short loc_488086
0x488062: mov     ecx, [esp+24h+var_C]
0x488066: push    1Bh
0x488068: call    Actor_GetSkillMasteryLevel
0x48806D: cmp     eax, 3
0x488070: jl      short loc_488086
0x488072: mov     ecx, offset fPerkLightArmorExpertSpeedMult
0x488077: call    GameSetting_GetSafeFloatPointer
0x48807C: fld     [esp+24h+var_14]
0x488080: fmul    dword ptr [eax]
0x488082: fstp    [esp+24h+var_8]
0x488086: test    esi, esi
0x488088: jle     short loc_4880B1
0x48808A: fld     [esp+24h+var_8]
0x48808E: sub     esi, 1
0x488091: fadd    [esp+24h+var_10]
0x488095: mov     [esp+24h+var_8], esi
0x488099: fstp    [esp+24h+var_10]
0x48809D: test    esi, esi
0x48809F: jle     short loc_4880B1
0x4880A1: fild    [esp+24h+var_8]
0x4880A5: fmul    [esp+24h+var_14]
0x4880A9: fadd    [esp+24h+var_10]
0x4880AD: fstp    [esp+24h+var_10]
0x4880B1: mov     ebp, [esp+24h+var_4]
0x4880B5: mov     ebx, [ebx+4]
0x4880B8: test    ebx, ebx
0x4880BA: jnz     loc_487F73
0x4880C0: fld     [esp+24h+var_10]
0x4880C4: mov     ecx, [ebp+4]
0x4880C7: fstp    dword ptr [ebp+8]
0x4880CA: mov     edx, [ecx]
0x4880CC: mov     eax, [edx+190h]
0x4880D2: call    eax
0x4880D4: test    al, al
0x4880D6: pop     edi
0x4880D7: pop     esi
0x4880D8: pop     ebx
0x4880D9: jz      short loc_4880F3
0x4880DB: mov     eax, [ebp+4]
0x4880DE: test    eax, eax
0x4880E0: jz      short loc_4880F3
0x4880E2: mov     ecx, [eax+58h]
0x4880E5: test    ecx, ecx
0x4880E7: jz      short loc_4880F3
0x4880E9: mov     edx, [ecx]
0x4880EB: mov     eax, [edx+290h]
0x4880F1: call    eax
0x4880F3: fld     dword ptr [ebp+8]
0x4880F6: pop     ebp
0x4880F7: add     esp, 14h
0x4880FA: retn
