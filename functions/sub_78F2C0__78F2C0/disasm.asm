0x78F2C0: sub     esp, 0Ch
0x78F2C3: fldz
0x78F2C5: push    esi
0x78F2C6: fst     [esp+10h+var_C]
0x78F2CA: mov     esi, ecx
0x78F2CC: fld     dword ptr [esi]
0x78F2CE: fstp    dword ptr [esp+10h+var_8]
0x78F2D2: fld     [esp+10h+arg_0]
0x78F2D6: fld     st
0x78F2D8: fld     dword ptr [esp+10h+var_8]
0x78F2DC: fld     st
0x78F2DE: fsubp   st(2), st
0x78F2E0: fxch    st(1)
0x78F2E2: fstp    [esp+10h+arg_0]
0x78F2E6: fld     [esp+10h+arg_0]
0x78F2EA: fabs
0x78F2EC: fstp    [esp+10h+arg_0]
0x78F2F0: fld     [esp+10h+arg_0]
0x78F2F4: fcomp   qword ptr ds:0A3D5B8h
0x78F2FA: fnstsw  ax
0x78F2FC: test    ah, 41h
0x78F2FF: jnz     short loc_78F322
0x78F301: fcom    st(1)
0x78F303: fnstsw  ax
0x78F305: test    ah, 41h
0x78F308: jnz     loc_78F3BC
0x78F30E: fld     dword ptr ds:0B2B714h
0x78F314: faddp   st(2), st
0x78F316: fxch    st(1)
0x78F318: fstp    [esp+10h+arg_0]
0x78F31C: fld     [esp+10h+arg_0]
0x78F320: fxch    st(1)
0x78F322: fsubp   st(1), st
0x78F324: fstp    [esp+10h+arg_0]
0x78F328: fld     [esp+10h+arg_0]
0x78F32C: fabs
0x78F32E: fstp    [esp+10h+arg_0]
0x78F332: fld     [esp+10h+arg_0]
0x78F336: fstp    [esp+10h+arg_0]
0x78F33A: fld     [esp+10h+arg_0]
0x78F33E: fld     dword ptr [esi+4]
0x78F341: fcomp   st(1)
0x78F343: fnstsw  ax
0x78F345: test    ah, 41h
0x78F348: jnz     loc_78F3CF
0x78F34E: fld     dword ptr [esi+0Ch]
0x78F351: fsub    [esp+10h+arg_4]
0x78F355: fstp    [esp+10h+arg_0]
0x78F359: fxch    st(1)
0x78F35B: fcomp   [esp+10h+arg_0]
0x78F35F: fnstsw  ax
0x78F361: test    ah, 5
0x78F364: jp      short loc_78F3D1
0x78F366: fdiv    dword ptr [esi+4]
0x78F369: fld1
0x78F36B: fsubrp  st(1), st
0x78F36D: fstp    [esp+10h+arg_4]
0x78F371: fld     [esp+10h+arg_4]
0x78F375: fld     dword ptr [esi+8]
0x78F378: call    __CIpow
0x78F37D: fstp    [esp+10h+arg_4]
0x78F381: fld     [esp+10h+arg_4]
0x78F385: fmul    dword ptr [esi+14h]
0x78F388: fstp    [esp+10h+var_8]
0x78F38C: fld     [esp+10h+arg_0]
0x78F390: fdiv    dword ptr [esi+0Ch]
0x78F393: fstp    [esp+10h+arg_0]
0x78F397: fld     [esp+10h+arg_0]
0x78F39B: fld     dword ptr [esi+10h]
0x78F39E: call    __CIpow
0x78F3A3: fstp    [esp+10h+arg_0]
0x78F3A7: fld     [esp+10h+arg_0]
0x78F3AB: pop     esi
0x78F3AC: fmul    [esp+0Ch+var_8]
0x78F3B0: fstp    [esp+0Ch+var_C]
0x78F3B3: fld     [esp+0Ch+var_C]
0x78F3B6: add     esp, 0Ch
0x78F3B9: retn    8
0x78F3BC: fadd    dword ptr ds:0B2B714h
0x78F3C2: fstp    dword ptr [esp+10h+var_8]
0x78F3C6: fld     dword ptr [esp+10h+var_8]
0x78F3CA: jmp     loc_78F322
0x78F3CF: fstp    st
0x78F3D1: fstp    st
0x78F3D3: pop     esi
0x78F3D4: fld     [esp+0Ch+var_C]
0x78F3D7: add     esp, 0Ch
0x78F3DA: retn    8
