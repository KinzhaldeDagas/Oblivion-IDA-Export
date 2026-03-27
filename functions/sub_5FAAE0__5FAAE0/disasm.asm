0x5FAAE0: sub     esp, 0Ch
0x5FAAE3: fld     [esp+0Ch+arg_0]
0x5FAAE7: push    esi
0x5FAAE8: fld     st
0x5FAAEA: mov     esi, ecx
0x5FAAEC: fsub    dword ptr [esi+0BCh]
0x5FAAF2: fstp    [esp+10h+var_8]
0x5FAAF6: fld     dword ptr [esi+0BCh]
0x5FAAFC: fcomp   st(1)
0x5FAAFE: fnstsw  ax
0x5FAB00: fldz
0x5FAB02: test    ah, 41h
0x5FAB05: jz      short loc_5FAB14
0x5FAB07: fcom    dword ptr [esi+0BCh]
0x5FAB0D: fnstsw  ax
0x5FAB0F: test    ah, 41h
0x5FAB12: jnz     short loc_5FAB46
0x5FAB14: fxch    st(1)
0x5FAB16: fst     dword ptr [esi+0BCh]
0x5FAB1C: fxch    st(1)
0x5FAB1E: fst     [esp+10h+var_8]
0x5FAB22: fcom    st(1)
0x5FAB24: fnstsw  ax
0x5FAB26: test    ah, 5
0x5FAB29: jp      short loc_5FAB46
0x5FAB2B: fld     dword ptr ds:0A3744Ch
0x5FAB31: fcomp   st(2)
0x5FAB33: fnstsw  ax
0x5FAB35: test    ah, 41h
0x5FAB38: jnz     short loc_5FAB46
0x5FAB3A: fstp    dword ptr [esi+0BCh]
0x5FAB40: fstp    [esp+10h+var_8]
0x5FAB44: jmp     short loc_5FAB4A
0x5FAB46: fstp    st(1)
0x5FAB48: fstp    st
0x5FAB4A: mov     eax, [esi]
0x5FAB4C: fld     [esp+10h+var_8]
0x5FAB50: mov     edx, [eax+2E4h]
0x5FAB56: push    ecx
0x5FAB57: fstp    [esp+14h+var_14]
0x5FAB5A: call    edx
0x5FAB5C: mov     eax, [esi]
0x5FAB5E: mov     edx, [eax+198h]
0x5FAB64: push    0
0x5FAB66: mov     ecx, esi
0x5FAB68: call    edx
0x5FAB6A: test    al, al
0x5FAB6C: jnz     loc_5FAE7F
0x5FAB72: mov     eax, [esi]
0x5FAB74: mov     edx, [eax+330h]
0x5FAB7A: mov     ecx, esi
0x5FAB7C: call    edx
0x5FAB7E: test    eax, eax
0x5FAB80: jz      short loc_5FABB7
0x5FAB82: mov     ecx, ds:0B333C4h; this
0x5FAB88: cmp     byte ptr [ecx+6E5h], 0
0x5FAB8F: jz      short loc_5FAB9A
0x5FAB91: call    PlayerCharacter__IsSleeping?
0x5FAB96: test    al, al
0x5FAB98: jnz     short loc_5FABB7
0x5FAB9A: mov     eax, [esi]
0x5FAB9C: fld     [esp+0Ch+var_4]
0x5FABA0: mov     edx, [eax+33Ch]
0x5FABA6: push    ecx
0x5FABA7: mov     ecx, esi
0x5FABA9: fstp    [esp+10h+var_10]
0x5FABAC: call    edx
0x5FABAE: push    esi
0x5FABAF: lea     ecx, [esi+44h]
0x5FABB2: call    sub_420E90
0x5FABB7: mov     ecx, [esi+58h]
0x5FABBA: mov     eax, [ecx]
0x5FABBC: mov     edx, [eax+2C0h]
0x5FABC2: call    edx
0x5FABC4: test    ax, 200h
0x5FABC8: jz      loc_5FACC8
0x5FABCE: mov     ecx, [esi+58h]
0x5FABD1: test    ecx, ecx
0x5FABD3: jz      loc_5FACC8
0x5FABD9: mov     eax, [ecx]
0x5FABDB: mov     edx, [eax+2C0h]
0x5FABE1: call    edx
0x5FABE3: test    al, 0Fh
0x5FABE5: jz      loc_5FACC8
0x5FABEB: mov     eax, [esi]
0x5FABED: mov     edx, [eax+288h]
0x5FABF3: push    0
0x5FABF5: mov     ecx, esi
0x5FABF7: call    edx
0x5FABF9: push    ecx
0x5FABFA: fstp    [esp+10h+var_10]; float
0x5FABFD: call    Calc_ActorBaseEncumbrance
0x5FAC02: mov     eax, [esi]
0x5FAC04: fstp    dword ptr [esp+10h]
0x5FAC08: mov     edx, [eax+284h]
0x5FAC0E: add     esp, 4
0x5FAC11: push    0Bh
0x5FAC13: mov     ecx, esi
0x5FAC15: call    edx
0x5FAC17: mov     [esp+0Ch+var_8], eax
0x5FAC1B: fild    [esp+0Ch+var_8]
0x5FAC1F: push    ecx
0x5FAC20: fdiv    dword ptr [esp+10h]
0x5FAC24: fstp    dword ptr [esp+10h]
0x5FAC28: fld     dword ptr [esp+10h]
0x5FAC2C: fstp    [esp+10h+var_10]; float
0x5FAC2F: call    Calc_FatigueRunMultiplier?
0x5FAC34: fmul    [esp+10h+var_4]
0x5FAC38: add     esp, 4
0x5FAC3B: push    0Dh
0x5FAC3D: mov     ecx, esi
0x5FAC3F: fstp    [esp+10h+var_8]; float
0x5FAC43: call    Actor_GetBaseCalcAVi
0x5FAC48: push    eax
0x5FAC49: call    Calc_MasteryFromSkill
0x5FAC4E: add     eax, 0FFFFFFFFh; switch 4 cases
0x5FAC51: add     esp, 4
0x5FAC54: cmp     eax, 3
0x5FAC57: ja      short def_5FAC59
0x5FAC59: jmp     ds:jpt_5FAC59[eax*4]; switch jump
0x5FAC60: mov     ecx, offset unk_B375F8; jumptable 005FAC59 case 1
0x5FAC65: call    GameSetting_GetSafeFloatPointer
0x5FAC6A: fld     dword ptr [eax]
0x5FAC6C: jmp     short loc_5FAC9E
0x5FAC6E: mov     ecx, offset unk_B37600; jumptable 005FAC59 case 2
0x5FAC73: call    GameSetting_GetSafeFloatPointer
0x5FAC78: fld     dword ptr [eax]
0x5FAC7A: jmp     short loc_5FAC9E
0x5FAC7C: mov     ecx, offset fPerkAthleticsExpertFatigueMult; jumptable 005FAC59 case 3
0x5FAC81: call    GameSetting_GetSafeFloatPointer
0x5FAC86: fld     dword ptr [eax]
0x5FAC88: jmp     short loc_5FAC9E
0x5FAC8A: mov     ecx, offset unk_B37610; jumptable 005FAC59 case 4
0x5FAC8F: call    GameSetting_GetSafeFloatPointer
0x5FAC94: fld     dword ptr [eax]
0x5FAC96: jmp     short loc_5FAC9E
