0x6A6DE0: sub     esp, 0Ch
0x6A6DE3: push    esi
0x6A6DE4: mov     esi, ecx
0x6A6DE6: cmp     byte ptr [esi+3Dh], 0
0x6A6DEA: jz      short loc_6A6DF7
0x6A6DEC: mov     byte ptr [esi+3Dh], 0
0x6A6DF0: pop     esi
0x6A6DF1: add     esp, 0Ch
0x6A6DF4: retn    4
0x6A6DF7: mov     ecx, [esi+20h]
0x6A6DFA: test    ecx, ecx
0x6A6DFC: jz      SunDamageEffect_Update___Done
0x6A6E02: mov     eax, [ecx]
0x6A6E04: mov     edx, [eax+4]
0x6A6E07: call    edx
0x6A6E09: test    eax, eax
0x6A6E0B: jz      SunDamageEffect_Update___Done
0x6A6E11: mov     ecx, [esi+20h]
0x6A6E14: mov     eax, [ecx]
0x6A6E16: mov     edx, [eax+4]
0x6A6E19: push    ebx
0x6A6E1A: push    edi
0x6A6E1B: call    edx
0x6A6E1D: mov     edi, eax
0x6A6E1F: mov     ecx, edi; this
0x6A6E21: call    TESObjectREFR_GetParentCell
0x6A6E26: mov     ecx, edi; this
0x6A6E28: mov     ebx, eax
0x6A6E2A: call    sub_4D8B90
0x6A6E2F: test    al, al
0x6A6E31: jz      loc_6A6F54
0x6A6E37: test    ebx, ebx
0x6A6E39: jz      short loc_6A6E4A
0x6A6E3B: mov     ecx, ebx
0x6A6E3D: call    sub_4C9820
0x6A6E42: test    al, al
0x6A6E44: jnz     loc_6A6F54
0x6A6E4A: push    0
0x6A6E4C: mov     ecx, esi
0x6A6E4E: call    sub_6A6920
0x6A6E53: cmp     edi, ds:0B333C4h
0x6A6E59: jnz     SunDamageEffect_Update___Done_
0x6A6E5F: mov     ecx, offset fMagicSunDamagePainInitialDelay
0x6A6E64: call    GameSetting_GetSafeFloatPointer
0x6A6E69: fld     dword ptr [eax]
0x6A6E6B: fstp    dword ptr ds:0B15EB0h
0x6A6E71: fld1
0x6A6E73: fcomp   dword ptr [esi+38h]
0x6A6E76: fnstsw  ax
0x6A6E78: test    ah, 5
0x6A6E7B: jp      SunDamageEffect_Update___Done_
0x6A6E81: fld     dword ptr [esi+38h]
0x6A6E84: mov     ecx, offset fMagicSunDamageScreenGlowRateDown
0x6A6E89: fstp    [esp+18h+var_8]
0x6A6E8D: call    GameSetting_GetSafeFloatPointer
0x6A6E92: fld     dword ptr [eax]
0x6A6E94: sub     esp, 8
0x6A6E97: fmul    [esp+20h+arg_0]
0x6A6E9B: fsubr   [esp+20h+var_8]
0x6A6E9F: fstp    [esp+20h+arg_0]
0x6A6EA3: fld     [esp+20h+arg_0]
0x6A6EA7: fstp    [esp+20h+var_1C]; float
0x6A6EAB: fld1
0x6A6EAD: fstp    [esp+20h+var_20]; float
0x6A6EB0: call    Min_Float
0x6A6EB5: fstp    [esp+20h+arg_0]
0x6A6EB9: fld     [esp+20h+arg_0]
0x6A6EBD: add     esp, 8
0x6A6EC0: fst     dword ptr [esi+38h]
0x6A6EC3: cmp     byte ptr ds:0B43070h, 0
0x6A6ECA: jz      short loc_6A6EFD
0x6A6ECC: fdiv    qword ptr ds:0A563D0h
0x6A6ED2: sub     esp, 8
0x6A6ED5: fstp    [esp+20h+arg_0]
0x6A6ED9: fld     [esp+20h+arg_0]
0x6A6EDD: fstp    [esp+20h+var_1C]; float
0x6A6EE1: fld1
0x6A6EE3: fstp    [esp+20h+var_20]; float
0x6A6EE6: call    Min_Float
0x6A6EEB: fstp    dword ptr ds:0B2C7A4h
0x6A6EF1: add     esp, 8
0x6A6EF4: pop     edi
0x6A6EF5: pop     ebx
0x6A6EF6: pop     esi
0x6A6EF7: add     esp, 0Ch
0x6A6EFA: retn    4
0x6A6EFD: mov     eax, ds:0B06D54h
0x6A6F02: fld     st
0x6A6F04: fmul    dword ptr ds:0B06D64h
0x6A6F0A: mov     ecx, ds:0B06D44h
0x6A6F10: mov     edx, ds:0B06D3Ch
0x6A6F16: push    eax; int
0x6A6F17: fstp    [esp+1Ch+arg_0]
0x6A6F1B: sub     esp, 0Ch
0x6A6F1E: fld     [esp+28h+arg_0]
0x6A6F22: fstp    [esp+28h+var_20]; float
0x6A6F26: fmul    dword ptr ds:0B06D5Ch
0x6A6F2C: fstp    [esp+28h+arg_0]
0x6A6F30: fld     [esp+28h+arg_0]
0x6A6F34: fstp    [esp+28h+var_24]; float
0x6A6F38: fld     dword ptr ds:0B06D4Ch
0x6A6F3E: fstp    [esp+28h+var_28]; float
0x6A6F41: push    ecx; int
0x6A6F42: push    edx; int
0x6A6F43: call    sub_7B4830
0x6A6F48: add     esp, 18h
0x6A6F4B: pop     edi
0x6A6F4C: pop     ebx
0x6A6F4D: pop     esi
0x6A6F4E: add     esp, 0Ch
0x6A6F51: retn    4
0x6A6F54: mov     ecx, esi
0x6A6F56: call    sub_6A6AF0
0x6A6F5B: fstp    [esp+18h+var_C]
0x6A6F5F: fld     dword ptr ds:0A34BA0h
0x6A6F65: fcomp   [esp+18h+var_C]
0x6A6F69: fnstsw  ax
0x6A6F6B: test    ah, 5
0x6A6F6E: jp      short loc_6A6F74
0x6A6F70: mov     al, 1
0x6A6F72: jmp     short loc_6A6F76
0x6A6F74: xor     al, al
0x6A6F76: push    eax
0x6A6F77: mov     ecx, esi
0x6A6F79: call    sub_6A6920
0x6A6F7E: mov     ecx, ds:0B333C4h
0x6A6F84: cmp     edi, ecx
0x6A6F86: jnz     SunDamageEffect_Update___Done_
0x6A6F8C: fld     dword ptr ds:0A34BA0h
0x6A6F92: fld     [esp+18h+var_C]
0x6A6F96: fcom    st(1)
0x6A6F98: fnstsw  ax
0x6A6F9A: fstp    st(1)
0x6A6F9C: test    ah, 41h
0x6A6F9F: fldz
0x6A6FA1: jnz     loc_6A7027
0x6A6FA7: mov     eax, [ecx]
0x6A6FA9: mov     edx, [eax+220h]
0x6A6FAF: push    0
0x6A6FB1: sub     esp, 8
0x6A6FB4: fstp    [esp+24h+var_20]
0x6A6FB8: fmul    [esp+24h+arg_0]
0x6A6FBC: fstp    [esp+24h+var_C]
0x6A6FC0: fld     [esp+24h+var_C]
0x6A6FC4: fstp    [esp+24h+var_24]
0x6A6FC7: call    edx
0x6A6FC9: fldz
0x6A6FCB: fld     dword ptr ds:0B15EB0h
0x6A6FD1: fcom    st(1)
0x6A6FD3: fnstsw  ax
0x6A6FD5: fstp    st(1)
0x6A6FD7: test    ah, 5
0x6A6FDA: jp      short loc_6A6FF4
0x6A6FDC: mov     ecx, ds:0B333C4h
0x6A6FE2: fstp    st
0x6A6FE4: push    1
0x6A6FE6: push    1
0x6A6FE8: call    Actor_PlayPainFX
0x6A6FED: mov     ecx, offset fMagicSunDamagePainTimer
0x6A6FF2: jmp     short loc_6A7006
0x6A6FF4: fcomp   qword ptr ds:0A3A5B0h
0x6A6FFA: fnstsw  ax
0x6A6FFC: test    ah, 44h
0x6A6FFF: jp      short loc_6A7013
0x6A7001: mov     ecx, offset fMagicSunDamagePainInitialDelay
0x6A7006: call    GameSetting_GetSafeFloatPointer
0x6A700B: fld     dword ptr [eax]
0x6A700D: fstp    dword ptr ds:0B15EB0h
0x6A7013: fld     dword ptr ds:0B15EB0h
0x6A7019: fsub    dword ptr [esp+24h+var_8]
0x6A701D: fstp    dword ptr ds:0B15EB0h
0x6A7023: fldz
0x6A7025: jmp     short loc_6A7029
0x6A7027: fstp    st(1)
0x6A7029: mov     eax, ds:0B333A0h
0x6A702E: mov     edi, [eax+5Ch]
0x6A7031: mov     ecx, [edi+10h]
0x6A7034: test    ecx, ecx
0x6A7036: jz      short loc_6A704B
0x6A7038: sub     esp, 8
0x6A703B: fstp    [esp+2Ch+var_28]; float
0x6A703F: fld1
0x6A7041: fstp    [esp+2Ch+var_2C]; float
0x6A7044: push    5; int
0x6A7046: call    sub_499100
0x6A704B: mov     ecx, [edi+14h]
0x6A704E: fstp    [esp+24h+var_18]
0x6A7052: test    ecx, ecx
0x6A7054: fld1
0x6A7056: jz      short loc_6A709D
0x6A7058: fstp    st
0x6A705A: sub     esp, 8
0x6A705D: fld     dword ptr [edi+0D8h]
0x6A7063: fstp    dword ptr [esp+2Ch+var_14]
0x6A7067: fldz
0x6A7069: fstp    [esp+2Ch+var_28]; float
0x6A706D: fld1
0x6A706F: fstp    [esp+2Ch+var_2C]; float
0x6A7072: push    5; int
0x6A7074: call    sub_499100
0x6A7079: fld     dword ptr [esp+24h+var_14]
0x6A707D: fld     st
0x6A707F: fld1
0x6A7081: fld     st
0x6A7083: fsubrp  st(2), st
0x6A7085: fxch    st(3)
0x6A7087: fmulp   st(1), st
0x6A7089: fld     [esp+24h+var_18]
0x6A708D: fmulp   st(2), st
0x6A708F: fxch    st(1)
0x6A7091: fstp    dword ptr [esp+24h+var_14]
0x6A7095: fadd    dword ptr [esp+24h+var_14]
0x6A7099: fstp    [esp+24h+var_18]
0x6A709D: fld     dword ptr ds:0B37FB8h
0x6A70A3: fsub    st, st(1)
0x6A70A5: fmul    [esp+24h+var_18]
0x6A70A9: faddp   st(1), st
0x6A70AB: fstp    [esp+24h+var_18]
0x6A70AF: fld     dword ptr [esi+38h]
0x6A70B2: fld     [esp+24h+var_18]
0x6A70B6: fcom    st(1)
0x6A70B8: fnstsw  ax
0x6A70BA: fstp    st(1)
0x6A70BC: test    ah, 41h
0x6A70BF: jnz     loc_6A716E
0x6A70C5: mov     ecx, offset fMagicSunDamageScreenGlowRateUp
0x6A70CA: fstp    st
0x6A70CC: call    GameSetting_GetSafeFloatPointer
0x6A70D1: fld     dword ptr [esp+24h+var_8]
0x6A70D5: fmul    dword ptr [eax]
0x6A70D7: sub     esp, 8
0x6A70DA: fadd    dword ptr [esi+38h]
0x6A70DD: fstp    dword ptr [esp+2Ch+var_8]
0x6A70E1: fld     dword ptr [esp+2Ch+var_8]
0x6A70E5: fstp    [esp+2Ch+var_28]; float
0x6A70E9: fld     [esp+2Ch+var_18]
0x6A70ED: fstp    [esp+2Ch+var_2C]; float
0x6A70F0: call    sub_4AC760
0x6A70F5: fstp    dword ptr [esp+2Ch+var_8]
0x6A70F9: add     esp, 8
0x6A70FC: fld     dword ptr [esp+24h+var_8]
0x6A7100: fst     dword ptr [esi+38h]
0x6A7103: cmp     byte ptr ds:0B43070h, 0
0x6A710A: jz      short loc_6A713D
0x6A710C: fdiv    qword ptr ds:0A563D0h
0x6A7112: sub     esp, 8
0x6A7115: fstp    dword ptr [esp+2Ch+var_8]
0x6A7119: fld     dword ptr [esp+2Ch+var_8]
0x6A711D: fstp    [esp+2Ch+var_28]; float
0x6A7121: fld1
0x6A7123: fstp    [esp+2Ch+var_2C]; float
0x6A7126: call    Min_Float
0x6A712B: fstp    dword ptr ds:0B2C7A4h
0x6A7131: add     esp, 8
0x6A7134: pop     edi
0x6A7135: pop     ebx
0x6A7136: pop     esi
0x6A7137: add     esp, 0Ch
0x6A713A: retn    4
0x6A713D: mov     ecx, ds:0B06D54h
0x6A7143: fld     st
0x6A7145: fmul    dword ptr ds:0B06D64h
0x6A714B: push    ecx
0x6A714C: sub     esp, 0Ch
0x6A714F: fstp    dword ptr [esp+34h+var_8]
0x6A7153: fld     dword ptr [esp+34h+var_8]
0x6A7157: fstp    [esp+34h+var_2C]
0x6A715B: fmul    dword ptr ds:0B06D5Ch
0x6A7161: fstp    dword ptr [esp+34h+var_8]
0x6A7165: fld     dword ptr [esp+34h+var_8]
0x6A7169: jmp     loc_6A7228
0x6A716E: fld     dword ptr [esi+38h]
0x6A7171: fcompp
0x6A7173: fnstsw  ax
0x6A7175: test    ah, 41h
0x6A7178: jnz     SunDamageEffect_Update___Done_
0x6A717E: fld     dword ptr [esi+38h]
0x6A7181: mov     ecx, offset fMagicSunDamageScreenGlowRateDown
0x6A7186: fstp    [esp+24h+var_14]
0x6A718A: call    GameSetting_GetSafeFloatPointer
0x6A718F: fld     dword ptr [eax]
0x6A7191: sub     esp, 8
0x6A7194: fmul    dword ptr [esp+2Ch+var_8]
0x6A7198: fsubr   [esp+2Ch+var_14]
0x6A719C: fstp    dword ptr [esp+2Ch+var_8]
0x6A71A0: fld     dword ptr [esp+2Ch+var_8]
0x6A71A4: fstp    [esp+2Ch+var_28]; float
0x6A71A8: fld     [esp+2Ch+var_18]
0x6A71AC: fstp    [esp+2Ch+var_2C]; float
0x6A71AF: call    Min_Float
0x6A71B4: fstp    dword ptr [esp+2Ch+var_8]
0x6A71B8: add     esp, 8
0x6A71BB: fld     dword ptr [esp+24h+var_8]
0x6A71BF: fst     dword ptr [esi+38h]
0x6A71C2: cmp     byte ptr ds:0B43070h, 0
0x6A71C9: jz      short loc_6A71FC
0x6A71CB: fdiv    qword ptr ds:0A563D0h
0x6A71D1: sub     esp, 8
0x6A71D4: fstp    dword ptr [esp+2Ch+var_8]
0x6A71D8: fld     dword ptr [esp+2Ch+var_8]
0x6A71DC: fstp    [esp+2Ch+var_28]; float
0x6A71E0: fld1
0x6A71E2: fstp    [esp+2Ch+var_2C]; float
0x6A71E5: call    Min_Float
0x6A71EA: fstp    dword ptr ds:0B2C7A4h
0x6A71F0: add     esp, 8
0x6A71F3: pop     edi
0x6A71F4: pop     ebx
0x6A71F5: pop     esi
0x6A71F6: add     esp, 0Ch
0x6A71F9: retn    4
0x6A71FC: mov     ecx, ds:0B06D54h
0x6A7202: fld     st
0x6A7204: fmul    dword ptr ds:0B06D64h
0x6A720A: push    ecx; int
0x6A720B: sub     esp, 0Ch
0x6A720E: fstp    dword ptr [esp+34h+var_8]
0x6A7212: fld     dword ptr [esp+34h+var_8]
0x6A7216: fstp    [esp+34h+var_2C]; float
0x6A721A: fmul    dword ptr ds:0B06D5Ch
0x6A7220: fstp    dword ptr [esp+34h+var_8]
0x6A7224: fld     dword ptr [esp+34h+var_8]
0x6A7228: mov     edx, ds:0B06D44h
0x6A722E: fstp    [esp+34h+var_30]; float
0x6A7232: fld     dword ptr ds:0B06D4Ch
0x6A7238: mov     eax, ds:0B06D3Ch
0x6A723D: fstp    [esp+34h+var_34]; float
0x6A7240: push    edx; int
0x6A7241: push    eax; int
0x6A7242: call    sub_7B4830
0x6A7247: add     esp, 18h
