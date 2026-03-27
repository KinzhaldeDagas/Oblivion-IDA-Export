0x6C5FC0: sub     esp, 0Ch
0x6C5FC3: push    esi
0x6C5FC4: mov     esi, ecx
0x6C5FC6: fld     dword ptr [esi+38h]
0x6C5FC9: fstp    [esp+10h+var_8]
0x6C5FCD: fld     dword ptr [esi+34h]
0x6C5FD0: fld     dword ptr ds:0A7DEB4h
0x6C5FD6: fchs
0x6C5FD8: fucompp
0x6C5FDA: fnstsw  ax
0x6C5FDC: fldz
0x6C5FDE: test    ah, 44h
0x6C5FE1: jp      short loc_6C5FED
0x6C5FE3: fst     [esp+10h+var_8]
0x6C5FE7: fld     [esp+10h+arg_0]
0x6C5FEB: jmp     short loc_6C5FF4
0x6C5FED: fld     [esp+10h+arg_0]
0x6C5FF1: fsub    dword ptr [esi+34h]
0x6C5FF4: cmp     dword ptr [esi+24h], 0
0x6C5FF8: fstp    [esp+10h+var_C]
0x6C5FFC: fld     dword ptr [esi+28h]
0x6C5FFF: fmul    [esp+10h+var_C]
0x6C6003: fadd    [esp+10h+var_8]
0x6C6007: fstp    [esp+10h+var_8]
0x6C600B: fld     [esp+10h+var_8]
0x6C600F: fst     [esp+10h+var_C]
0x6C6013: jnz     loc_6C60B7
0x6C6019: fld     dword ptr [esi+30h]
0x6C601C: fsub    dword ptr [esi+2Ch]
0x6C601F: fstp    [esp+10h+var_4]
0x6C6023: fld     [esp+10h+var_4]
0x6C6027: fucom   st(2)
0x6C6029: fnstsw  ax
0x6C602B: fstp    st(2)
0x6C602D: test    ah, 44h
0x6C6030: jnp     short loc_6C60B0
0x6C6032: fld     st
0x6C6034: fsub    dword ptr [esi+2Ch]
0x6C6037: fstp    [esp+10h+var_C]
0x6C603B: fld     [esp+10h+var_C]
0x6C603F: fld     st
0x6C6041: fld     st(3)
0x6C6043: fucompp
0x6C6045: fnstsw  ax
0x6C6047: test    ah, 44h
0x6C604A: jp      short loc_6C6057
0x6C604C: fstp    st
0x6C604E: fld     dword ptr [esi+30h]
0x6C6051: fstp    [esp+10h+var_C]
0x6C6055: jmp     short loc_6C6077
0x6C6057: fstp    st(1)
0x6C6059: fxch    st(1)
0x6C605B: call    unknown_libname_14
0x6C6060: fstp    [esp+10h+var_C]
0x6C6064: fld     [esp+10h+var_C]
0x6C6068: fadd    dword ptr [esi+2Ch]
0x6C606B: fstp    [esp+10h+var_C]
0x6C606F: fld     [esp+10h+var_4]
0x6C6073: fld     [esp+10h+var_8]
0x6C6077: fld     [esp+10h+var_C]
0x6C607B: fld     dword ptr [esi+2Ch]
0x6C607E: fcomp   st(1)
0x6C6080: fnstsw  ax
0x6C6082: test    ah, 41h
0x6C6085: jnz     short loc_6C60BB
0x6C6087: faddp   st(2), st
0x6C6089: fxch    st(1)
0x6C608B: fstp    [esp+10h+var_C]
0x6C608F: fld     [esp+10h+var_C]
0x6C6093: fxch    st(1)
0x6C6095: fld     dword ptr [esi+30h]
0x6C6098: fcomp   st(2)
0x6C609A: fnstsw  ax
0x6C609C: test    ah, 5
0x6C609F: jp      short loc_6C60BF
0x6C60A1: fstp    st(1)
0x6C60A3: fld     dword ptr [esi+30h]
0x6C60A6: fstp    [esp+10h+var_C]
0x6C60AA: fld     [esp+10h+var_C]
0x6C60AE: jmp     short loc_6C60DC
0x6C60B0: fstp    st(1)
0x6C60B2: fld     dword ptr [esi+2Ch]
0x6C60B5: jmp     short loc_6C608B
0x6C60B7: fstp    st(1)
0x6C60B9: jmp     short loc_6C608F
0x6C60BB: fstp    st(2)
0x6C60BD: jmp     short loc_6C6095
0x6C60BF: fld     dword ptr [esi+2Ch]
0x6C60C2: fcomp   st(2)
0x6C60C4: fnstsw  ax
0x6C60C6: test    ah, 41h
0x6C60C9: jnz     short loc_6C60DA
0x6C60CB: fstp    st(1)
0x6C60CD: fld     dword ptr [esi+2Ch]
0x6C60D0: fstp    [esp+10h+var_C]
0x6C60D4: fld     [esp+10h+var_C]
0x6C60D8: jmp     short loc_6C60DC
0x6C60DA: fxch    st(1)
0x6C60DC: cmp     [esp+10h+arg_4], 0
0x6C60E1: jz      short loc_6C60F9
0x6C60E3: fxch    st(1)
0x6C60E5: fstp    dword ptr [esi+38h]
0x6C60E8: fld     [esp+10h+arg_0]
0x6C60EC: fstp    dword ptr [esi+34h]
0x6C60EF: fst     dword ptr [esi+3Ch]
0x6C60F2: pop     esi
0x6C60F3: add     esp, 0Ch
0x6C60F6: retn    8
0x6C60F9: fstp    st(1)
0x6C60FB: pop     esi
0x6C60FC: add     esp, 0Ch
0x6C60FF: retn    8
