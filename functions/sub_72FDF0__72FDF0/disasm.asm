0x72FDF0: sub     esp, 8
0x72FDF3: push    esi
0x72FDF4: mov     esi, ecx
0x72FDF6: fld     dword ptr [esi+8]
0x72FDF9: call    __CIcos
0x72FDFE: fstp    [esp+0Ch+var_4]
0x72FE02: fld     [esp+0Ch+var_4]
0x72FE06: fstp    [esp+0Ch+var_4]
0x72FE0A: fld     dword ptr [esi+8]
0x72FE0D: call    __CIsin
0x72FE12: fstp    [esp+0Ch+var_8]
0x72FE16: mov     eax, [esi+44h]
0x72FE19: fld     [esp+0Ch+var_8]
0x72FE1D: xor     ecx, ecx
0x72FE1F: fstp    [esp+0Ch+var_8]
0x72FE23: sub     eax, ecx
0x72FE25: jz      short loc_72FEA2
0x72FE27: sub     eax, 1
0x72FE2A: jnz     loc_72FF32
0x72FE30: fld     [esp+0Ch+var_8]
0x72FE34: fld     st
0x72FE36: fchs
0x72FE38: fmul    dword ptr [esi+10h]
0x72FE3B: fstp    [esp+0Ch+var_8]
0x72FE3F: fld     dword ptr [esi+0Ch]
0x72FE42: fld     [esp+0Ch+var_4]
0x72FE46: fld     st
0x72FE48: fmulp   st(2), st
0x72FE4A: fxch    st(1)
0x72FE4C: fstp    dword ptr [esi+20h]
0x72FE4F: fld     [esp+0Ch+var_8]
0x72FE53: fstp    dword ptr [esi+2Ch]
0x72FE56: fldz
0x72FE58: fst     dword ptr [esi+38h]
0x72FE5B: fld     dword ptr [esi+10h]
0x72FE5E: fmul    st, st(2)
0x72FE60: fstp    [esp+0Ch+var_4]
0x72FE64: fld     dword ptr [esi+0Ch]
0x72FE67: fmul    st, st(3)
0x72FE69: fstp    dword ptr [esi+24h]
0x72FE6C: fld     [esp+0Ch+var_4]
0x72FE70: fstp    dword ptr [esi+30h]
0x72FE73: fstp    dword ptr [esi+3Ch]
0x72FE76: fld     dword ptr [esi+4]
0x72FE79: fsub    dword ptr [esi+18h]
0x72FE7C: fld     dword ptr [esi+14h]
0x72FE7F: fchs
0x72FE81: fsub    dword ptr [esi]
0x72FE83: fld     st(2)
0x72FE85: fmul    st, st(2)
0x72FE87: fld     st(4)
0x72FE89: fmul    st, st(2)
0x72FE8B: fsubp   st(1), st
0x72FE8D: fmul    dword ptr [esi+10h]
0x72FE90: fadd    dword ptr [esi+18h]
0x72FE93: fstp    [esp+0Ch+var_4]
0x72FE97: fmulp   st(2), st
0x72FE99: fmulp   st(2), st
0x72FE9B: faddp   st(1), st
0x72FE9D: fmul    dword ptr [esi+0Ch]
0x72FEA0: jmp     short loc_72FF20
0x72FEA2: fld     dword ptr [esi+0Ch]
0x72FEA5: fld     [esp+0Ch+var_8]
0x72FEA9: fld     st
0x72FEAB: fmulp   st(2), st
0x72FEAD: fxch    st(1)
0x72FEAF: fstp    [esp+0Ch+var_8]
0x72FEB3: fld     dword ptr [esi+0Ch]
0x72FEB6: fld     [esp+0Ch+var_4]
0x72FEBA: fld     st
0x72FEBC: fmulp   st(2), st
0x72FEBE: fxch    st(1)
0x72FEC0: fstp    dword ptr [esi+20h]
0x72FEC3: fld     [esp+0Ch+var_8]
0x72FEC7: fstp    dword ptr [esi+2Ch]
0x72FECA: fldz
0x72FECC: fst     dword ptr [esi+38h]
0x72FECF: fld     dword ptr [esi+10h]
0x72FED2: fmul    st, st(2)
0x72FED4: fstp    [esp+0Ch+var_8]
0x72FED8: fld     st(2)
0x72FEDA: fchs
0x72FEDC: fstp    [esp+0Ch+var_4]
0x72FEE0: fld     [esp+0Ch+var_4]
0x72FEE4: fld     st
0x72FEE6: fmul    dword ptr [esi+10h]
0x72FEE9: fstp    dword ptr [esi+24h]
0x72FEEC: fld     [esp+0Ch+var_8]
0x72FEF0: fstp    dword ptr [esi+30h]
0x72FEF3: fxch    st(1)
0x72FEF5: fstp    dword ptr [esi+3Ch]
0x72FEF8: fld     dword ptr [esi+4]
0x72FEFB: fsub    dword ptr [esi+18h]
0x72FEFE: fld     dword ptr [esi]
0x72FF00: fsub    dword ptr [esi+14h]
0x72FF03: fld     st(3)
0x72FF05: fmul    st, st(2)
0x72FF07: fxch    st(5)
0x72FF09: fmul    st, st(1)
0x72FF0B: faddp   st(5), st
0x72FF0D: fld     dword ptr [esi+18h]
0x72FF10: faddp   st(5), st
0x72FF12: fxch    st(4)
0x72FF14: fstp    [esp+0Ch+var_4]
0x72FF18: fmulp   st(1), st
0x72FF1A: fxch    st(1)
0x72FF1C: fmulp   st(2), st
0x72FF1E: faddp   st(1), st
0x72FF20: fadd    dword ptr [esi+14h]
0x72FF23: fstp    dword ptr [esi+28h]
0x72FF26: fld     [esp+0Ch+var_4]
0x72FF2A: fstp    dword ptr [esi+34h]
0x72FF2D: fld1
0x72FF2F: fstp    dword ptr [esi+40h]
0x72FF32: mov     [esi+1Ch], cl
0x72FF35: pop     esi
0x72FF36: add     esp, 8
0x72FF39: retn
