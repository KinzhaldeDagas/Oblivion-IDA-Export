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
0x488F75: push    1Dh; actorValue
0x488F77: mov     ecx, esi; this
0x488F79: call    Actor_GetSkillMasteryLevel; Oblivion skill-mastery accessor. Accept only native skill AVs 0x0C..0x20, compute the actor's base calculated skill, and map it through the five configurable mastery thresholds.
0x488F7E: cmp     eax, 4
0x488F81: jl      short loc_488F8B
0x488F83: fld     [esp+20h+var_C]
0x488F87: fstp    [esp+20h+var_10]
0x488F8B: fld     [esp+20h+var_10]
0x488F99: cmp     [esp+1Ch+var_8], 0
0x488F9E: jz      loc_4890B0
0x488FA4: test    esi, esi
0x488FA6: jz      loc_4890B0
0x488FAC: cmp     dword ptr [esi+34h], 3
0x488FB0: jnz     short loc_48902E
0x488FB2: fild    dword ptr [ebx+4]
0x488FB5: fstp    [esp+1Ch+var_C]
0x488FB9: fldz
0x488FBB: fcomp   [esp+1Ch+var_C]
0x488FBF: fnstsw  ax
0x488FC1: test    ah, 44h
0x488FC4: jnp     loc_488EF4
0x488FCA: add     esi, 24h ; '$'
0x488FCD: jz      loc_488EF4
0x48902E: mov     ecx, [edi+8]
0x489031: push    ecx; a1
0x489032: call    TESForm_GetEnchantableFormCharge
0x489037: movzx   edx, ax
0x48903A: mov     eax, [esi+24h]
0x48903D: mov     [esp+20h+var_8], edx
0x489041: mov     edx, [eax]
0x489043: lea     ecx, [esi+24h]
0x489046: fild    [esp+20h+var_8]
0x48904A: add     esp, 4
0x48904D: push    0
0x48904F: fstp    [esp+20h+var_C]
0x489053: call    edx
0x489055: mov     eax, [edi+8]
0x489058: fstp    [esp+20h+var_C]
0x48905C: cmp     byte ptr [eax+4], 15h
0x489060: jnz     short loc_489082
0x489062: mov     ecx, (offset flt_B37ED0+3A8h)
0x489067: call    GameSetting_GetSafeFloatPointer
0x48906C: fld     dword ptr [eax]
0x48906E: fmul    [esp+20h+var_C]
0x489072: fstp    [esp+20h+var_10]
0x489076: fild    dword ptr [ebx+4]
0x489079: fadd    [esp+20h+var_10]
0x48907D: jmp     loc_488EF0
0x489082: fld     [esp+20h+var_C]
0x489086: mov     ecx, [ebx+4]
0x489089: sub     esp, 0Ch
0x48908C: fstp    [esp+2Ch+var_24]; float
0x489090: mov     [esp+2Ch+var_8], ecx
0x489094: fld     [esp+2Ch+var_10]
0x489098: fstp    [esp+2Ch+var_28]; float
0x48909C: fild    [esp+2Ch+var_8]
0x4890A0: fstp    [esp+2Ch+var_2C]; float
0x4890A3: call    Calc_EnchantedWeaponStaffValue
0x4890A8: add     esp, 0Ch
0x4890AB: jmp     loc_488EF0
0x4890B0: fild    dword ptr [ebx+4]
0x4890B3: jmp     loc_488EF0
0x4890B8: mov     esi, [esp+20h+targetNpc]
0x4890BC: mov     ecx, ds:0B333C4h; this
0x4890C2: push    esi; targetNpc
0x4890C3: call    calculateItemMultiplicationFromDisposition
0x4890C8: fstp    dword ptr [esp+20h]
0x4890CC: mov     ecx, ds:0B333C4h; this
0x4890D2: fild    dword ptr [ecx+11Ch]
0x4890D8: push    1Dh; actorValue
0x4890DA: fmul    qword ptr ds:0A3D8E8h
0x4890E0: fadd    dword ptr [esp+24h]
0x4890E4: fstp    dword ptr [esp+24h]
0x4890E8: fld     dword ptr [esp+24h]
0x4890EC: fmul    [esp+24h+var_10]
0x4890F0: fstp    [esp+24h+var_10]
0x4890F4: call    Actor_GetSkillMasteryLevel; Oblivion skill-mastery accessor. Accept only native skill AVs 0x0C..0x20, compute the actor's base calculated skill, and map it through the five configurable mastery thresholds.
0x4890F9: cmp     eax, 1
0x4890FC: jge     short loc_48912E
0x4890FE: push    1
0x489100: mov     ecx, edi
0x489102: call    ContainerEntryExtraData_GetHealth
0x489107: fstp    dword ptr [esp+20h]
0x48910B: fldz
0x48910D: fld     dword ptr [esp+20h]
0x489111: fcom    st(1)
0x489113: fnstsw  ax
0x489115: fstp    st(1)
0x489117: test    ah, 1
0x48911A: jnz     short loc_48912C
0x48911C: fmul    qword ptr ds:0A3B150h
0x489122: fmul    [esp+20h+var_10]
0x489126: fstp    [esp+20h+var_10]
0x48912A: jmp     short loc_48912E
0x48912C: fstp    st
0x48912E: fld     [esp+20h+var_10]
0x489132: push    ecx
0x489133: fstp    [esp+24h+var_24]; float
0x489136: call    sub_484370
0x48913B: fstp    [esp+24h+var_10]
0x48913F: add     esp, 4
0x489142: fld     [esp+20h+var_10]
0x489146: fld     [esp+20h+var_C]
0x48914A: fcompp
0x48914C: fnstsw  ax
0x48914E: test    ah, 5
0x489151: jnp     short loc_489165
0x489153: mov     ecx, ds:0B333C4h; this
0x489159: push    1Dh; actorValue
0x48915B: call    Actor_GetSkillMasteryLevel; Oblivion skill-mastery accessor. Accept only native skill AVs 0x0C..0x20, compute the actor's base calculated skill, and map it through the five configurable mastery thresholds.
0x489160: cmp     eax, 4
0x489163: jl      short loc_48916D
0x489165: fld     [esp+20h+var_C]
0x489169: fstp    [esp+20h+var_10]
0x48916D: mov     ecx, esi
0x48916F: call    sub_5FAA70
0x489174: test    eax, eax
0x489176: mov     [esp+20h], eax
0x48917A: fild    dword ptr [esp+20h]
0x48917E: jge     short loc_489186
0x489180: fadd    dword ptr ds:0A2FC78h
0x489186: fstp    dword ptr [esp+20h]
0x48918A: fld     [esp+20h+var_10]
0x48918E: fld     dword ptr [esp+20h]
0x489192: fcom    st(1)
0x489194: fnstsw  ax
0x489196: test    ah, 5
0x489199: jp      short loc_4891AF
0x48919B: pop     edi
0x48919C: fstp    st(1)
0x48919E: pop     esi
0x48919F: fstp    [esp+18h+var_10]
0x4891A3: fld     [esp+18h+var_10]
0x4891A7: pop     ebp
0x4891A8: pop     ebx
0x4891A9: add     esp, 0Ch
0x4891AC: retn    0Ch
0x4891AF: pop     edi
0x4891B0: fstp    st
0x4891B2: pop     esi
0x4891B3: pop     ebp
0x4891B4: pop     ebx
0x4891B5: add     esp, 0Ch
0x4891B8: retn    0Ch
