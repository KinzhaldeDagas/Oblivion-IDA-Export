0x507E60: sub     esp, 8
0x507E63: cmp     byte ptr ds:0B42F3Eh, 0
0x507E6A: push    edi
0x507E6B: jz      loc_507FE8
0x507E71: cmp     byte ptr ds:0B42E84h, 0
0x507E78: jz      loc_507FE8
0x507E7E: cmp     dword ptr ds:0B42F48h, 2
0x507E85: jl      loc_507FE8
0x507E8B: mov     ecx, [esp+0Ch+l]
0x507E8F: fldz
0x507E91: mov     edx, [esp+0Ch+arg_10]
0x507E95: fstp    dword ptr [esp+0Ch+var_8]
0x507E99: mov     edi, [esp+0Ch+arg_8]
0x507E9D: lea     eax, [esp+0Ch+var_8]
0x507EA1: push    eax; UInt16
0x507EA2: mov     eax, [esp+10h+arg_C]
0x507EA6: push    ecx; l
0x507EA7: mov     ecx, [esp+14h+a3]
0x507EAB: push    edx; a6
0x507EAC: mov     edx, [esp+18h+arg_4]
0x507EB0: push    eax; a5
0x507EB1: mov     eax, [esp+1Ch+a1]
0x507EB5: push    edi; a4
0x507EB6: push    ecx; a3
0x507EB7: push    edx; a2
0x507EB8: push    eax; a1
0x507EB9: call    Script_ExtractArgs
0x507EBE: add     esp, 20h
0x507EC1: test    al, al
0x507EC3: jnz     short loc_507ECA
0x507EC5: pop     edi
0x507EC6: add     esp, 8
0x507EC9: retn
0x507ECA: test    edi, edi
0x507ECC: jnz     short loc_507ED4
0x507ECE: mov     edi, ds:0B333C4h
0x507ED4: fld     dword ptr ds:0A31C80h
0x507EDA: fld     dword ptr [esp+0Ch+var_8]
0x507EDE: fcom    st(1)
0x507EE0: fnstsw  ax
0x507EE2: fldz
0x507EE4: test    ah, 5
0x507EE7: jp      short loc_507EF2
0x507EE9: fcom    st(1)
0x507EEB: fnstsw  ax
0x507EED: test    ah, 5
0x507EF0: jp      short loc_507F0C
0x507EF2: fxch    st(1)
0x507EF4: fcom    st(2)
0x507EF6: fnstsw  ax
0x507EF8: test    ah, 5
0x507EFB: jnp     short loc_507F4F
0x507EFD: fstp    st
0x507EFF: mov     byte ptr [esp+0Ch+a2], 1
0x507F04: fstp    st
0x507F06: fstp    dword ptr [esp+0Ch+var_8]
0x507F0A: jmp     short loc_507F19
0x507F0C: fstp    st(1)
0x507F0E: fstp    st(1)
0x507F10: fstp    dword ptr [esp+0Ch+var_8]
0x507F14: mov     byte ptr [esp+0Ch+a2], 0
0x507F19: push    0; int
0x507F1B: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x507F20: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x507F25: push    0; int
0x507F27: push    edi; void *
0x507F28: call    OblivionDynamicCast
0x507F2D: add     esp, 14h
0x507F30: test    eax, eax
0x507F32: jz      short loc_507F61
0x507F34: fld     dword ptr [esp+0Ch+var_8]
0x507F38: mov     edx, [eax]
0x507F3A: mov     edx, [edx+270h]
0x507F40: push    ecx
0x507F41: mov     ecx, [esp+10h+a2]
0x507F45: fstp    [esp+10h+a5+4]
0x507F48: push    ecx
0x507F49: mov     ecx, eax
0x507F4B: call    edx
0x507F4D: jmp     short loc_507FC0
0x507F4F: fstp    st(2)
0x507F51: fcompp
0x507F53: fnstsw  ax
0x507F55: test    ah, 5
0x507F58: jp      short loc_507F14
0x507F5A: mov     byte ptr [esp+0Ch+a2], 1
0x507F5F: jmp     short loc_507F19
0x507F61: mov     eax, [edi]
0x507F63: mov     edx, [eax+154h]
0x507F69: push    esi
0x507F6A: mov     ecx, edi
0x507F6C: call    edx
0x507F6E: mov     esi, eax
0x507F70: test    esi, esi
0x507F72: jz      short loc_507FBF
0x507F74: fldz
0x507F76: push    ecx
0x507F77: fst     [esp+14h+a5]; a5
0x507F7A: push    0; a4
0x507F7C: push    ecx
0x507F7D: fstp    [esp+1Ch+var_1C]; a3
0x507F80: push    0; a2
0x507F82: push    esi; a1
0x507F83: call    sub_7D92C0
0x507F88: fldz
0x507F8A: add     esp, 10h
0x507F8D: fst     [esp+14h+a5]; a5
0x507F90: push    1; a4
0x507F92: push    ecx
0x507F93: fstp    [esp+1Ch+var_1C]; a3
0x507F96: push    0; a2
0x507F98: push    esi; a1
0x507F99: call    sub_7D92C0
0x507F9E: fldz
0x507FA0: mov     eax, [esp+24h+a2]
0x507FA4: fstp    [esp+24h+a5]; a5
0x507FA8: fld     dword ptr [esp+24h+var_8]
0x507FAC: add     esp, 10h
0x507FAF: push    0; a4
0x507FB1: push    ecx
0x507FB2: fstp    [esp+1Ch+var_1C]; a3
0x507FB5: push    eax; a2
0x507FB6: push    esi; a1
0x507FB7: call    sub_7D92C0
0x507FBC: add     esp, 14h
0x507FBF: pop     esi
0x507FC0: cmp     byte ptr ds:0B361ACh, 0
0x507FC7: jz      short loc_507FE8
0x507FC9: fld     dword ptr [esp+0Ch+var_8]
0x507FCD: sub     esp, 8
0x507FD0: mov     ecx, edi; this
0x507FD2: fstp    qword ptr [esp+14h+a5]
0x507FD5: call    TESObjectREFR_GetName
0x507FDA: push    eax
0x507FDB: push    offset aSRefractionHas; "%s refraction has been set to %f"
0x507FE0: call    Interface_ConsolePrint
0x507FE5: add     esp, 10h
0x507FE8: mov     al, 1
0x507FEA: pop     edi
0x507FEB: add     esp, 8
0x507FEE: retn
