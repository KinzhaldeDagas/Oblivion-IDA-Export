0x488E50: sub     esp, 0Ch
0x488E53: fld     dword ptr ds:0A30634h
0x488E59: push    ebx
0x488E5A: push    ebp
0x488E5B: fstp    [esp+14h+var_C]
0x488E5F: push    esi
0x488E60: push    edi
0x488E61: push    0; int
0x488E63: push    offset ??_R0?AVTESValueForm@@@8; struct TypeDescriptor *
0x488E68: mov     edi, ecx
0x488E6A: mov     eax, [edi+8]
0x488E6D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x488E72: push    0; int
0x488E74: push    eax; void *
0x488E75: call    OblivionDynamicCast
0x488E7A: mov     ecx, [edi+8]
0x488E7D: push    0; int
0x488E7F: push    offset ??_R0?AVMagicItem@@@8; struct TypeDescriptor *
0x488E84: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x488E89: push    0; int
0x488E8B: push    ecx; void *
0x488E8C: mov     ebx, eax
0x488E8E: call    OblivionDynamicCast
0x488E93: mov     edx, [edi+8]
0x488E96: push    0; int
0x488E98: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x488E9D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x488EA2: push    0; int
0x488EA4: push    edx; void *
0x488EA5: mov     ebp, eax
0x488EA7: call    OblivionDynamicCast
0x488EAC: push    0; int
0x488EAE: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x488EB3: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x488EB8: mov     [esp+64h+var_8], eax
0x488EBC: mov     eax, [edi+8]
0x488EBF: push    0; int
0x488EC1: push    eax; void *
0x488EC2: call    OblivionDynamicCast
0x488EC7: add     esp, 50h
0x488ECA: test    eax, eax
0x488ECC: jz      short loc_488ED3
0x488ECE: mov     esi, [eax+4]
0x488ED1: jmp     short loc_488ED5
0x488ED3: xor     esi, esi
0x488ED5: test    ebx, ebx
0x488ED7: jnz     loc_488F99
0x488EDD: test    ebp, ebp
0x488EDF: jz      loc_488F8B
0x488EE5: mov     edx, [ebp+0Ch]
0x488EE8: mov     eax, [edx]
0x488EEA: lea     ecx, [ebp+0Ch]
0x488EED: push    ebx
0x488EEE: call    eax
0x488EF0: fstp    [esp+20h+var_10]
0x488EF4: cmp     byte ptr [esp+20h], 0
0x488EF9: fld     [esp+20h+var_10]
0x488EFD: fst     [esp+20h+var_C]
0x488F01: jz      sub_488F8F
0x488F07: cmp     [esp+20h+arg_4], 0
0x488F0C: fstp    st
0x488F0E: jz      loc_4890B8
0x488F14: mov     ecx, [esp+20h+targetNpc]
0x488F18: push    ecx
0x488F19: mov     ecx, ds:0B333C4h
0x488F1F: call    Player_GetActorBarterFactor?
0x488F24: fstp    dword ptr [esp+20h]
0x488F28: fld     dword ptr [esp+20h]
0x488F2C: mov     esi, ds:0B333C4h
0x488F32: fild    dword ptr [esi+11Ch]
0x488F38: push    ecx
0x488F39: fmul    qword ptr ds:0A3D8E8h
0x488F3F: fsubp   st(1), st
0x488F41: fstp    dword ptr [esp+24h]
0x488F45: fld     dword ptr [esp+24h]
0x488F49: fmul    [esp+24h+var_10]
0x488F4D: fstp    dword ptr [esp+24h]
0x488F51: fld     dword ptr [esp+24h]
0x488F55: fstp    [esp+24h+var_24]; float
0x488F58: call    sub_484370
0x488F5D: fstp    [esp+24h+var_10]
0x488F61: add     esp, 4
0x488F64: fld     [esp+20h+var_10]
0x488F68: fld     [esp+20h+var_C]
0x488F6C: fcompp
0x488F6E: fnstsw  ax
0x488F70: test    ah, 41h
0x488F73: jz      short loc_488F83
0x488F75: push    1Dh
0x488F77: mov     ecx, esi
0x488F79: call    Actor_GetSkillMasteryLevel
0x488F7E: cmp     eax, 4
0x488F81: jl      short loc_488F8B
0x488F83: fld     [esp+20h+var_C]
0x488F87: fstp    [esp+20h+var_10]
0x488F8B: fld     [esp+20h+var_10]
