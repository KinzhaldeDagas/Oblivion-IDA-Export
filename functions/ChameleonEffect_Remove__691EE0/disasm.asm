0x691EE0: sub     esp, 0Ch
0x691EE3: push    esi
0x691EE4: mov     esi, ecx
0x691EE6: call    ValueModifierEffect_Remove
0x691EEB: mov     ecx, [esi+20h]; this
0x691EEE: test    ecx, ecx
0x691EF0: jz      loc_692010
0x691EF6: call    MagicTarget_GetParentActor
0x691EFB: mov     esi, eax
0x691EFD: test    esi, esi
0x691EFF: jz      loc_692010
0x691F05: cmp     byte ptr ds:0B42F3Eh, 0
0x691F0C: jz      loc_692027
0x691F12: cmp     byte ptr ds:0B42E84h, 0
0x691F19: jz      loc_692027
0x691F1F: cmp     dword ptr ds:0B42F48h, 2
0x691F26: jl      loc_692027
0x691F2C: mov     eax, [esi]
0x691F2E: mov     edx, [eax+288h]
0x691F34: push    2Fh ; '/'
0x691F36: mov     ecx, esi
0x691F38: call    edx
0x691F3A: fcomp   dword ptr ds:0A2FAA8h
0x691F40: fnstsw  ax
0x691F42: test    ah, 44h
0x691F45: jp      loc_692027
0x691F4B: mov     eax, [esi]
0x691F4D: mov     edx, [eax+288h]
0x691F53: push    2Eh ; '.'
0x691F55: mov     ecx, esi
0x691F57: call    edx
0x691F59: fdiv    qword ptr ds:0A309F0h
0x691F5F: fstp    [esp+10h+var_C]
0x691F63: fld     [esp+10h+var_C]
0x691F67: fcom    qword ptr ds:0A2FC68h
0x691F6D: fnstsw  ax
0x691F6F: test    ah, 5
0x691F72: jp      short loc_691F7E
0x691F74: fstp    st
0x691F76: fldz
0x691F78: fst     [esp+10h+var_C]
0x691F7C: jmp     short loc_691F84
0x691F7E: fstp    [esp+10h+var_C]
0x691F82: fldz
0x691F84: fld     [esp+10h+var_C]
0x691F88: fcom    qword ptr ds:0A2F928h
0x691F8E: fnstsw  ax
0x691F90: test    ah, 41h
0x691F93: jnz     short loc_691FA1
0x691F95: fstp    st
0x691F97: fstp    st
0x691F99: fld1
0x691F9B: fstp    [esp+10h+var_C]
0x691F9F: jmp     short loc_691FB0
0x691FA1: fst     [esp+10h+var_C]
0x691FA5: fcomp   st(1)
0x691FA7: fnstsw  ax
0x691FA9: test    ah, 41h
0x691FAC: jnz     short loc_692015
0x691FAE: fstp    st
0x691FB0: call    Magic_GetChameleonMinRefraction
0x691FB5: fstp    [esp+10h+var_4]
0x691FB9: call    Magic_GetChameleonMaxRefraction
0x691FBE: fstp    [esp+10h+var_8]
0x691FC2: fld     [esp+10h+var_C]
0x691FC6: mov     eax, [esi]
0x691FC8: fdiv    qword ptr ds:0A309F0h
0x691FCE: mov     edx, [eax+270h]
0x691FD4: push    ecx
0x691FD5: mov     ecx, esi
0x691FD7: fld1
0x691FD9: fld     st
0x691FDB: fsubrp  st(2), st
0x691FDD: fxch    st(1)
0x691FDF: fstp    [esp+14h+var_C]
0x691FE3: fld     [esp+14h+var_C]
0x691FE7: fldz
0x691FE9: fsub    st(1), st
0x691FEB: fsubp   st(2), st
0x691FED: fdivrp  st(1), st
0x691FEF: fld     [esp+14h+var_8]
0x691FF3: fld     [esp+14h+var_4]
0x691FF7: fld     st
0x691FF9: fsubp   st(2), st
0x691FFB: fxch    st(2)
0x691FFD: fmulp   st(1), st
0x691FFF: faddp   st(1), st
0x692001: fstp    [esp+14h+var_4]
0x692005: fld     [esp+14h+var_4]
0x692009: fstp    [esp+14h+var_14]
0x69200C: push    1
0x69200E: call    edx
0x692010: pop     esi
0x692011: add     esp, 0Ch
0x692014: retn
0x692015: mov     eax, [esi]
0x692017: mov     edx, [eax+270h]
0x69201D: push    ecx
0x69201E: fstp    [esp+14h+var_14]
0x692021: push    1
0x692023: mov     ecx, esi
0x692025: call    edx
0x692027: mov     ecx, esi; a1
0x692029: pop     esi
0x69202A: add     esp, 0Ch
0x69202D: jmp     sub_5EE1B0
