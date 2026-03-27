0x4710B0: push    ecx
0x4710B1: fld1
0x4710B3: push    esi
0x4710B4: mov     esi, [esp+8+arg_0]
0x4710B8: fstp    [esp+8+var_4]
0x4710BC: test    esi, esi
0x4710BE: push    edi
0x4710BF: mov     edi, ecx
0x4710C1: jz      short loc_471116
0x4710C3: push    0
0x4710C5: push    esi
0x4710C6: call    sub_88F1B0
0x4710CB: fstp    [esp+14h+arg_0]
0x4710CF: fld1
0x4710D1: add     esp, 8
0x4710D4: fld     [esp+0Ch+arg_0]
0x4710D8: fcom    st(1)
0x4710DA: fnstsw  ax
0x4710DC: fstp    st(1)
0x4710DE: test    ah, 5
0x4710E1: jp      short loc_4710E9
0x4710E3: fstp    [esp+0Ch+var_4]
0x4710E7: jmp     short loc_4710EB
0x4710E9: fstp    st
0x4710EB: cmp     esi, [edi+8]
0x4710EE: jz      short loc_471116
0x4710F0: mov     esi, [esi+1Ch]
0x4710F3: push    esi
0x4710F4: mov     ecx, edi
0x4710F6: call    sub_4710B0
0x4710FB: fstp    [esp+0Ch+arg_0]
0x4710FF: fld     [esp+0Ch+arg_0]
0x471103: fld     [esp+0Ch+var_4]
0x471107: fcom    st(1)
0x471109: fnstsw  ax
0x47110B: test    ah, 41h
0x47110E: jnz     short loc_471120
0x471110: fstp    st
0x471112: fstp    [esp+0Ch+var_4]
0x471116: fld     [esp+0Ch+var_4]
0x47111A: pop     edi
0x47111B: pop     esi
0x47111C: pop     ecx
0x47111D: retn    4
0x471120: pop     edi
0x471121: fstp    st(1)
0x471123: pop     esi
0x471124: pop     ecx
0x471125: retn    4
