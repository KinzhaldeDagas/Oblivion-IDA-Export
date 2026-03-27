0x55E060: sub     esp, 14h
0x55E063: test    byte ptr ds:0B39F14h, 1
0x55E06A: push    esi
0x55E06B: push    edi
0x55E06C: mov     edi, ecx
0x55E06E: jnz     short loc_55E080
0x55E070: fld     dword ptr [edi+1Ch]
0x55E073: or      dword ptr ds:0B39F14h, 1
0x55E07A: fstp    dword ptr ds:0B39F10h
0x55E080: fld     dword ptr [edi+1Ch]
0x55E083: xor     esi, esi
0x55E085: fmul    qword ptr ds:0A65198h
0x55E08B: fstp    [esp+1Ch+var_4]
0x55E08F: fldz
0x55E091: fstp    [esp+1Ch+var_14]
0x55E095: jmp     short loc_55E0A0
0x55E097: align 10h
0x55E0A0: fld     dword ptr ds:0B39F00h[esi*4]
0x55E0A7: fadd    dword ptr ds:0B33E9Ch
0x55E0AD: fstp    [esp+1Ch+var_10]
0x55E0B1: fld     [esp+1Ch+var_10]
0x55E0B5: fst     dword ptr ds:0B39F00h[esi*4]
0x55E0BC: fldz
0x55E0BE: fcomp   dword ptr [edi+1Ch]
0x55E0C1: fnstsw  ax
0x55E0C3: test    ah, 44h
0x55E0C6: jnp     short loc_55E0DA
0x55E0C8: fmul    dword ptr ds:0B39F10h
0x55E0CE: fdiv    dword ptr [edi+1Ch]
0x55E0D1: fstp    dword ptr ds:0B39F00h[esi*4]
0x55E0D8: jmp     short loc_55E0DC
0x55E0DA: fstp    st
0x55E0DC: fld     dword ptr [edi+1Ch]
0x55E0DF: fmul    qword ptr ds:0A46E48h
0x55E0E5: fstp    [esp+1Ch+var_10]
0x55E0E9: fld     dword ptr ds:0B12538h[esi*8]
0x55E0F0: fmul    [esp+1Ch+var_10]
0x55E0F4: fmul    dword ptr ds:0B39F00h[esi*4]
0x55E0FB: fstp    [esp+1Ch+var_C]
0x55E0FF: fld     [esp+1Ch+var_C]
0x55E103: call    __CIsin
0x55E108: fstp    [esp+1Ch+var_C]
0x55E10C: fld     [esp+1Ch+var_C]
0x55E110: fstp    [esp+1Ch+var_8]
0x55E114: fld     dword ptr ds:0B1253Ch[esi*8]
0x55E11B: fmul    [esp+1Ch+var_10]
0x55E11F: fmul    dword ptr ds:0B39F00h[esi*4]
0x55E126: fstp    [esp+1Ch+var_C]
0x55E12A: fld     [esp+1Ch+var_C]
0x55E12E: call    __CIcos
0x55E133: fstp    [esp+1Ch+var_C]
0x55E137: cmp     esi, 2
0x55E13A: fld     [esp+1Ch+var_C]
0x55E13E: fstp    [esp+1Ch+var_C]
0x55E142: fld     [esp+1Ch+var_8]
0x55E146: fld     [esp+1Ch+var_C]
0x55E14A: jnz     short loc_55E174
0x55E14C: fld     st(1)
0x55E14E: fabs
0x55E150: fstp    [esp+1Ch+var_8]
0x55E154: fld     [esp+1Ch+var_8]
0x55E158: fadd    [esp+1Ch+var_14]
0x55E15C: fstp    [esp+1Ch+var_8]
0x55E160: fld     [esp+1Ch+var_8]
0x55E164: fld     st(1)
0x55E166: fabs
0x55E168: fstp    [esp+1Ch+var_8]
0x55E16C: fadd    [esp+1Ch+var_8]
0x55E170: fstp    [esp+1Ch+var_14]
0x55E174: fld     [esp+1Ch+var_4]
0x55E178: sub     esp, 8
0x55E17B: fld     st
0x55E17D: fmulp   st(2), st
0x55E17F: fxch    st(1)
0x55E181: fstp    [esp+24h+var_8]
0x55E185: fld     [esp+24h+var_8]
0x55E189: fstp    [esp+24h+var_20]; float
0x55E18D: fmulp   st(1), st
0x55E18F: fstp    [esp+24h+var_8]
0x55E193: fld     [esp+24h+var_8]
0x55E197: fstp    [esp+24h+var_24]; float
0x55E19A: push    esi; int
0x55E19B: call    sub_7F1760
0x55E1A0: add     esi, 1
0x55E1A3: add     esp, 0Ch
0x55E1A6: cmp     esi, 4
0x55E1A9: jl      loc_55E0A0
0x55E1AF: fld     dword ptr ds:0B39E40h
0x55E1B5: sub     esp, 10h
0x55E1B8: fld     st
0x55E1BA: fld     [esp+2Ch+var_14]
0x55E1BE: fld     st
0x55E1C0: fmulp   st(2), st
0x55E1C2: fld     qword ptr ds:0A2FAA0h
0x55E1C8: fmul    st(2), st
0x55E1CA: fld1
0x55E1CC: fld     st
0x55E1CE: fsubrp  st(5), st
0x55E1D0: fxch    st(3)
0x55E1D2: faddp   st(4), st
0x55E1D4: fxch    st(3)
0x55E1D6: fstp    [esp+2Ch+var_4]
0x55E1DA: fld     dword ptr ds:0B39E30h
0x55E1E0: fld     dword ptr ds:0B33E9Ch
0x55E1E6: fld     st
0x55E1E8: fmulp   st(2), st
0x55E1EA: fxch    st(1)
0x55E1EC: fmul    [esp+2Ch+var_4]
0x55E1F0: fstp    [esp+2Ch+var_4]
0x55E1F4: fld     [esp+2Ch+var_4]
0x55E1F8: fstp    [esp+2Ch+var_20]; float
0x55E1FC: fld     dword ptr ds:0B39E38h
0x55E202: fld     st
0x55E204: fmul    st, st(3)
0x55E206: fmul    st, st(5)
0x55E208: fld     st(4)
0x55E20A: fsubrp  st(2), st
0x55E20C: faddp   st(1), st
0x55E20E: fstp    [esp+2Ch+var_4]
0x55E212: fld     dword ptr ds:0B39E28h
0x55E218: fmulp   st(1), st
0x55E21A: fmul    [esp+2Ch+var_4]
0x55E21E: fstp    [esp+2Ch+var_4]
0x55E222: fld     [esp+2Ch+var_4]
0x55E226: fstp    [esp+2Ch+var_24]; float
0x55E22A: fld     dword ptr ds:0B39E50h
0x55E230: fld     st
0x55E232: fmul    st, st(2)
0x55E234: fmul    st, st(4)
0x55E236: fld     st(3)
0x55E238: fsubrp  st(2), st
0x55E23A: faddp   st(1), st
0x55E23C: fstp    [esp+2Ch+var_4]
0x55E240: fld     [esp+2Ch+var_4]
0x55E244: fmul    dword ptr [edi+1Ch]
0x55E247: fstp    [esp+2Ch+var_4]
0x55E24B: fld     [esp+2Ch+var_4]
0x55E24F: fstp    [esp+2Ch+var_28]; float
0x55E253: fld     dword ptr ds:0B39E48h
0x55E259: fld     st
0x55E25B: fmulp   st(2), st
0x55E25D: fxch    st(1)
0x55E25F: fmulp   st(3), st
0x55E261: fsubp   st(1), st
0x55E263: faddp   st(1), st
0x55E265: fstp    [esp+2Ch+var_4]
0x55E269: fld     [esp+2Ch+var_4]
0x55E26D: fmul    dword ptr [edi+1Ch]
0x55E270: fstp    [esp+2Ch+var_4]
0x55E274: fld     [esp+2Ch+var_4]
0x55E278: fstp    [esp+2Ch+var_2C]; float
0x55E27B: call    sub_7F0210
0x55E280: fld     dword ptr [edi+1Ch]
0x55E283: add     esp, 10h
0x55E286: pop     edi
0x55E287: fstp    dword ptr ds:0B39F10h
0x55E28D: pop     esi
0x55E28E: add     esp, 14h
0x55E291: retn
