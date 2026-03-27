0x488280: sub     esp, 0Ch
0x488283: fld     dword ptr ds:0A30634h
0x488289: mov     [esp+0Ch+var_4], ecx
0x48828D: fcomp   dword ptr [ecx+0Ch]
0x488290: fnstsw  ax
0x488292: test    ah, 44h
0x488295: jp      loc_4883BC
0x48829B: fldz
0x48829D: push    ebx
0x48829E: mov     ebx, [ecx]
0x4882A0: fstp    [esp+10h+var_8]
0x4882A4: test    ebx, ebx
0x4882A6: jz      loc_4883B4
0x4882AC: push    ebp
0x4882AD: push    esi
0x4882AE: push    edi
0x4882AF: nop
0x4882B0: mov     ebp, [ebx]
0x4882B2: test    ebp, ebp
0x4882B4: jz      loc_4883B1
0x4882BA: mov     esi, [ebp+0]
0x4882BD: test    esi, esi
0x4882BF: mov     edi, [ebp+8]
0x4882C2: jz      loc_4883A2
0x4882C8: jmp     short loc_4882D0
0x4882CA: align 10h
0x4882D0: mov     ecx, [esi]
0x4882D2: test    ecx, ecx
0x4882D4: jz      loc_4883A2
0x4882DA: push    0
0x4882DC: call    ExtraDataList_HasWorn
0x4882E1: test    al, al
0x4882E3: jnz     short loc_4882F1
0x4882E5: mov     esi, [esi+4]
0x4882E8: test    esi, esi
0x4882EA: jnz     short loc_4882D0
0x4882EC: jmp     loc_4883A2
0x4882F1: cmp     byte ptr [edi+4], 22h ; '"'
0x4882F5: jz      loc_4883A2
0x4882FB: push    edi
0x4882FC: call    TESWeightForm_GetWeightForForm_Fast
0x488301: fstp    [esp+20h+var_C]
0x488305: add     esp, 4
0x488308: cmp     byte ptr [edi+4], 14h
0x48830C: jnz     loc_488393
0x488312: push    0; int
0x488314: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x488319: push    offset ??_R0?AVTESObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48831E: push    0; int
0x488320: push    edi; void *
0x488321: call    OblivionDynamicCast
0x488326: mov     esi, eax
0x488328: add     esp, 14h
0x48832B: test    esi, esi
0x48832D: jz      short loc_488393
0x48832F: mov     ecx, esi
0x488331: call    TESObjectARMO_ISHeavyArmor
0x488336: cmp     al, 1
0x488338: jnz     short loc_48836A
0x48833A: mov     esi, [esp+1Ch+arg_0]
0x48833E: push    12h
0x488340: mov     ecx, esi
0x488342: call    Actor_GetSkillMasteryLevel
0x488347: cmp     eax, 3
0x48834A: jnz     short loc_488354
0x48834C: fld     dword ptr ds:0B374D8h
0x488352: jmp     short loc_48838B
0x488354: push    12h
0x488356: mov     ecx, esi
0x488358: call    Actor_GetSkillMasteryLevel
0x48835D: cmp     eax, 4
0x488360: jnz     short loc_488393
0x488362: fld     dword ptr ds:0B374E0h
0x488368: jmp     short loc_48838B
0x48836A: mov     ecx, esi
0x48836C: call    TESObjectARMO_ISHeavyArmor
0x488371: test    al, al
0x488373: jnz     short loc_488393
0x488375: mov     ecx, [esp+1Ch+arg_0]
0x488379: push    1Bh
0x48837B: call    Actor_GetSkillMasteryLevel
0x488380: cmp     eax, 3
0x488383: jl      short loc_488393
0x488385: fld     dword ptr ds:0B374E8h
0x48838B: fmul    [esp+1Ch+var_C]
0x48838F: fstp    [esp+1Ch+var_C]
0x488393: fild    dword ptr [ebp+4]
0x488396: fmul    [esp+1Ch+var_C]
0x48839A: fadd    [esp+1Ch+var_8]
0x48839E: fstp    [esp+1Ch+var_8]
0x4883A2: mov     ebx, [ebx+4]
0x4883A5: test    ebx, ebx
0x4883A7: mov     ecx, [esp+1Ch+var_4]
0x4883AB: jnz     loc_4882B0
0x4883B1: pop     edi
0x4883B2: pop     esi
0x4883B3: pop     ebp
0x4883B4: fld     [esp+10h+var_8]
0x4883B8: pop     ebx
0x4883B9: fstp    dword ptr [ecx+0Ch]
0x4883BC: fld     dword ptr [ecx+0Ch]
0x4883BF: add     esp, 0Ch
0x4883C2: retn    4
