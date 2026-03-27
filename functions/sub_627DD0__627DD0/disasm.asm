0x627DD0: push    esi
0x627DD1: mov     esi, [esp+4+arg_0]
0x627DD5: test    esi, esi
0x627DD7: jz      loc_627FDD
0x627DDD: mov     eax, [esi]
0x627DDF: mov     edx, [eax+198h]
0x627DE5: push    0
0x627DE7: mov     ecx, esi
0x627DE9: call    edx
0x627DEB: test    al, al
0x627DED: jnz     loc_627FDD
0x627DF3: mov     eax, [esi+8]
0x627DF6: mov     ecx, eax
0x627DF8: shr     ecx, 5
0x627DFB: test    cl, 1
0x627DFE: jnz     loc_627FDD
0x627E04: mov     edx, eax
0x627E06: shr     edx, 0Eh
0x627E09: test    dl, 1
0x627E0C: jnz     loc_627FDD
0x627E12: shr     eax, 0Bh
0x627E15: test    al, 1
0x627E17: jnz     loc_627FDD
0x627E1D: push    edi
0x627E1E: mov     edi, [esp+8+arg_4]
0x627E22: test    edi, edi
0x627E24: jnz     short loc_627E2B
0x627E26: pop     edi
0x627E27: xor     al, al
0x627E29: pop     esi
0x627E2A: retn
0x627E2B: push    ebx
0x627E2C: push    0; int
0x627E2E: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x627E33: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x627E38: push    0; int
0x627E3A: push    esi; void *
0x627E3B: call    OblivionDynamicCast
0x627E40: mov     esi, eax
0x627E42: add     esp, 14h
0x627E45: xor     bl, bl
0x627E47: test    esi, esi
0x627E49: jz      loc_627F28
0x627E4F: mov     eax, [esi]
0x627E51: mov     edx, [eax+334h]
0x627E57: push    1
0x627E59: mov     ecx, esi
0x627E5B: call    edx
0x627E5D: test    al, al
0x627E5F: jnz     short loc_627E89
0x627E61: mov     eax, [edi]
0x627E63: mov     edx, [eax+330h]
0x627E69: mov     ecx, edi
0x627E6B: call    edx
0x627E6D: test    eax, eax
0x627E6F: jz      short loc_627E8B
0x627E71: mov     eax, [edi]
0x627E73: mov     edx, [eax+330h]
0x627E79: push    esi
0x627E7A: mov     ecx, edi
0x627E7C: call    edx
0x627E7E: mov     ecx, eax
0x627E80: call    sub_613670
0x627E85: test    al, al
0x627E87: jz      short loc_627E8B
0x627E89: mov     bl, 1
0x627E8B: cmp     esi, edi
0x627E8D: jz      loc_627F28
0x627E93: cmp     edi, ds:0B333C4h
0x627E99: jz      loc_627F28
0x627E9F: test    bl, bl
0x627EA1: jnz     loc_627F28
0x627EA7: mov     eax, [esi+8]
0x627EAA: shr     eax, 0Bh
0x627EAD: test    al, 1
0x627EAF: jnz     short loc_627F28
0x627EB1: mov     edx, [esi]
0x627EB3: mov     eax, [edx+198h]
0x627EB9: push    0
0x627EBB: mov     ecx, esi
0x627EBD: call    eax
0x627EBF: test    al, al
0x627EC1: jnz     short loc_627F28
0x627EC3: mov     ecx, [esi+8]
0x627EC6: shr     ecx, 5
0x627EC9: test    cl, 1
0x627ECC: jnz     short loc_627F28
0x627ECE: push    1; a2
0x627ED0: mov     ecx, edi; this
0x627ED2: call    Actor_GetActorBaseForm
0x627ED7: mov     ebx, eax
0x627ED9: lea     ecx, [ebx+3Ch]
0x627EDC: call    BSSimpleList_IsEmpty
0x627EE1: test    al, al
0x627EE3: jz      short loc_627EF0
0x627EE5: push    0; a2
0x627EE7: mov     ecx, edi; this
0x627EE9: call    Actor_GetActorBaseForm
0x627EEE: mov     ebx, eax
0x627EF0: lea     ecx, [ebx+24h]
0x627EF3: call    TESActorBaseData_AllFactionsAreEvil
0x627EF8: test    al, al
0x627EFA: jnz     short loc_627F2E
0x627EFC: mov     edx, [edi]
0x627EFE: mov     eax, [edx+284h]
0x627F04: push    24h ; '$'
0x627F06: mov     ecx, edi
0x627F08: call    eax
0x627F0A: cmp     eax, ds:0B36C30h
0x627F10: jl      short loc_627F2E
0x627F12: mov     ecx, esi; this
0x627F14: call    sub_5E6C60
0x627F19: test    al, al
0x627F1B: jz      short loc_627F28
0x627F1D: mov     ecx, edi; this
0x627F1F: call    Actor_IsCreature
0x627F24: test    al, al
0x627F26: jz      short loc_627F53
0x627F28: pop     ebx
0x627F29: pop     edi
0x627F2A: xor     al, al
0x627F2C: pop     esi
0x627F2D: retn
0x627F2E: mov     edx, [esi]
0x627F30: mov     eax, [edx+224h]
0x627F36: push    edi
0x627F37: mov     ecx, esi
0x627F39: call    eax
0x627F3B: cmp     eax, 46h ; 'F'
0x627F3E: jl      short loc_627F28
0x627F40: mov     edx, [esi]
0x627F42: mov     eax, [edx+284h]
0x627F48: push    21h ; '!'
0x627F4A: mov     ecx, esi
0x627F4C: call    eax
0x627F4E: cmp     eax, 32h ; '2'
0x627F51: jl      short loc_627F28
0x627F53: fld     dword ptr [esi+34h]
0x627F56: mov     ecx, edi; this
0x627F58: fstp    [esp+0Ch+arg_0]
0x627F5C: call    Actor_CanSwim
0x627F61: test    al, al
0x627F63: jz      short loc_627FA7
0x627F65: mov     ecx, edi; this
0x627F67: call    sub_5E3400
0x627F6C: test    al, al
0x627F6E: jz      short loc_627FA7
0x627F70: mov     ecx, edi
0x627F72: call    sub_5E1E90
0x627F77: test    al, al
0x627F79: jz      short loc_627FD1
0x627F7B: mov     ecx, esi; this
0x627F7D: call    TESObjectREFR_GetParentCell
0x627F82: test    eax, eax
0x627F84: jz      short loc_627FD1
0x627F86: mov     ecx, esi; this
0x627F88: call    TESObjectREFR_GetParentCell
0x627F8D: mov     ecx, eax
0x627F8F: call    TESObjectCELL_GetWaterHeight
0x627F94: fld     [esp+0Ch+arg_0]
0x627F98: fcompp
0x627F9A: fnstsw  ax
0x627F9C: test    ah, 41h
0x627F9F: jnz     short loc_627FD1
0x627FA1: pop     ebx
0x627FA2: pop     edi
0x627FA3: xor     al, al
0x627FA5: pop     esi
0x627FA6: retn
0x627FA7: mov     ecx, esi; this
0x627FA9: call    TESObjectREFR_GetParentCell
0x627FAE: test    eax, eax
0x627FB0: jz      short loc_627FD1
0x627FB2: mov     ecx, esi; this
0x627FB4: call    TESObjectREFR_GetParentCell
0x627FB9: mov     ecx, eax
0x627FBB: call    TESObjectCELL_GetWaterHeight
0x627FC0: fld     [esp+0Ch+arg_0]
0x627FC4: fcompp
0x627FC6: fnstsw  ax
0x627FC8: test    ah, 5
0x627FCB: jnp     loc_627F28
0x627FD1: pop     ebx
0x627FD2: pop     edi
0x627FD3: mov     ds:0B3B920h, esi
0x627FD9: mov     al, 1
0x627FDB: pop     esi
0x627FDC: retn
0x627FDD: xor     al, al
0x627FDF: pop     esi
0x627FE0: retn
