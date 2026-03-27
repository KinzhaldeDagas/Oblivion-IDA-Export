0x6920B0: sub     esp, 8
0x6920B3: push    esi
0x6920B4: mov     esi, [esp+0Ch+a1]
0x6920B8: push    esi
0x6920B9: call    ValueModifierEffect_PostLink
0x6920BE: cmp     byte ptr ds:0B42F3Eh, 0
0x6920C5: jz      loc_6921C1
0x6920CB: cmp     byte ptr ds:0B42E84h, 0
0x6920D2: jz      loc_6921C1
0x6920D8: cmp     dword ptr ds:0B42F48h, 2
0x6920DF: jl      loc_6921C1
0x6920E5: mov     eax, [esi]
0x6920E7: mov     edx, [eax+288h]
0x6920ED: push    2Fh ; '/'
0x6920EF: mov     ecx, esi
0x6920F1: call    edx
0x6920F3: fcomp   dword ptr ds:0A2FAA8h
0x6920F9: fnstsw  ax
0x6920FB: test    ah, 44h
0x6920FE: jp      loc_6921C1
0x692104: mov     eax, [esi]
0x692106: fld1
0x692108: mov     edx, [eax+324h]
0x69210E: push    ecx
0x69210F: mov     ecx, esi
0x692111: fstp    [esp+10h+var_10]
0x692114: call    edx
0x692116: mov     eax, [esi]
0x692118: mov     edx, [eax+288h]
0x69211E: push    2Eh ; '.'
0x692120: mov     ecx, esi
0x692122: call    edx
0x692124: fdiv    qword ptr ds:0A309F0h
0x69212A: fstp    [esp+0Ch+a1]
0x69212E: fld     [esp+0Ch+a1]
0x692132: fcom    qword ptr ds:0A2FC68h
0x692138: fnstsw  ax
0x69213A: test    ah, 5
0x69213D: jp      short loc_692143
0x69213F: fstp    st
0x692141: fldz
0x692143: fstp    [esp+0Ch+a1]
0x692147: fld     [esp+0Ch+a1]
0x69214B: fcom    qword ptr ds:0A2F928h
0x692151: fnstsw  ax
0x692153: test    ah, 41h
0x692156: jnz     short loc_69215C
0x692158: fstp    st
0x69215A: fld1
0x69215C: fstp    [esp+0Ch+a1]
0x692160: call    Magic_GetChameleonMinRefraction
0x692165: fstp    [esp+0Ch+var_4]
0x692169: call    Magic_GetChameleonMaxRefraction
0x69216E: fstp    [esp+0Ch+var_8]
0x692172: mov     eax, [esi]
0x692174: fld     [esp+0Ch+a1]
0x692178: mov     edx, [eax+270h]
0x69217E: fld1
0x692180: push    ecx
0x692181: fld     st
0x692183: mov     ecx, esi
0x692185: fsubrp  st(2), st
0x692187: fxch    st(1)
0x692189: fstp    [esp+10h+a1]
0x69218D: fld     [esp+10h+a1]
0x692191: fldz
0x692193: fsub    st(1), st
0x692195: fsubp   st(2), st
0x692197: fdivrp  st(1), st
0x692199: fld     [esp+10h+var_8]
0x69219D: fld     [esp+10h+var_4]
0x6921A1: fld     st
0x6921A3: fsubp   st(2), st
0x6921A5: fxch    st(2)
0x6921A7: fmulp   st(1), st
0x6921A9: faddp   st(1), st
0x6921AB: fstp    [esp+10h+a1]
0x6921AF: fld     [esp+10h+a1]
0x6921B3: fstp    [esp+10h+var_10]
0x6921B6: push    1
0x6921B8: call    edx
0x6921BA: pop     esi
0x6921BB: add     esp, 8
0x6921BE: retn    4
0x6921C1: mov     ecx, esi; a1
0x6921C3: call    sub_5EE1B0
0x6921C8: pop     esi
0x6921C9: add     esp, 8
0x6921CC: retn    4
