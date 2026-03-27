0x78FEB0: sub     esp, 64h
0x78FEB3: fldz
0x78FEB5: mov     eax, ds:0B429B8h
0x78FEBA: test    eax, eax
0x78FEBC: fstp    [esp+64h+var_64]
0x78FEBF: fild    [esp+64h+arg_C]
0x78FEC3: push    edi
0x78FEC4: fld1
0x78FEC6: mov     edi, ecx
0x78FEC8: fld     st
0x78FECA: fdivrp  st(2), st
0x78FECC: fxch    st(1)
0x78FECE: fstp    [esp+68h+var_60]
0x78FED2: fld1
0x78FED4: fld     [esp+68h+arg_4]
0x78FED8: jz      short loc_78FF14
0x78FEDA: cmp     [esp+68h+arg_24], 0
0x78FEE2: fld     [esp+68h+arg_8]
0x78FEE6: fld     st
0x78FEE8: fsubr   st, st(4)
0x78FEEA: fmul    st, st(2)
0x78FEEC: faddp   st(1), st
0x78FEEE: fstp    [esp+68h+arg_8]
0x78FEF2: jnz     short loc_78FEFE
0x78FEF4: fld     [esp+68h+arg_8]
0x78FEF8: fmul    st, st
0x78FEFA: fstp    [esp+68h+arg_8]
0x78FEFE: fld     dword ptr [eax+8]
0x78FF01: fmul    [esp+68h+arg_8]
0x78FF05: fld     dword ptr [eax+8]
0x78FF08: fsubp   st(4), st
0x78FF0A: faddp   st(3), st
0x78FF0C: fxch    st(2)
0x78FF0E: fstp    [esp+68h+arg_8]
0x78FF12: jmp     short loc_78FF1A
0x78FF14: fstp    st(2)
0x78FF16: fst     [esp+68h+arg_8]
0x78FF1A: fld     [esp+68h+arg_8]
0x78FF1E: mov     eax, [esp+68h+arg_C]
0x78FF22: test    eax, eax
0x78FF24: fst     [esp+68h+var_8]
0x78FF28: fst     [esp+68h+var_C]
0x78FF2C: fstp    [esp+68h+var_10]
0x78FF30: fstp    [esp+68h+var_4]
0x78FF34: jl      loc_7902E5
0x78FF3A: fld     st
0x78FF3C: push    ebx
0x78FF3D: fadd    [esp+6Ch+arg_20]
0x78FF44: push    ebp
0x78FF45: mov     ebp, [esp+70h+arg_10]
0x78FF4C: add     eax, 1
0x78FF4F: push    esi
0x78FF50: fstp    [esp+74h+var_54]
0x78FF54: mov     esi, [esp+74h+arg_0]
0x78FF58: mov     [esp+74h+arg_20], eax
0x78FF5F: jmp     short loc_78FF65
0x78FF61: fld     [esp+74h+arg_4]
0x78FF65: fld     dword ptr ds:0B2B714h
0x78FF6B: mov     eax, [esp+74h+arg_14]
0x78FF72: fld     [esp+74h+var_64]
0x78FF76: push    0FFFFFFFFh; float
0x78FF78: fld     st
0x78FF7A: mov     ecx, ebp
0x78FF7C: fmulp   st(2), st
0x78FF7E: fxch    st(1)
0x78FF80: fstp    [esp+78h+arg_C]
0x78FF87: fmul    dword ptr [eax]
0x78FF89: fstp    [esp+78h+arg_8]
0x78FF90: fld     dword ptr [eax+8]
0x78FF93: fmulp   st(1), st
0x78FF95: fadd    [esp+78h+arg_8]
0x78FF9C: fstp    [esp+78h+var_5C]
0x78FFA0: fld     dword ptr [eax+4]
0x78FFA3: lea     eax, [esp+78h+var_5C]
0x78FFA7: fmul    [esp+78h+var_54]
0x78FFAB: push    eax; int
0x78FFAC: fstp    [esp+7Ch+var_58]
0x78FFB0: call    sub_796320
0x78FFB5: fld     [esp+74h+arg_C]
0x78FFBC: call    __CIcos
0x78FFC1: fstp    [esp+74h+arg_8]
0x78FFC8: fld     [esp+74h+arg_8]
0x78FFCF: fstp    [esp+74h+arg_24]
0x78FFD6: fld     [esp+74h+arg_C]
0x78FFDD: call    __CIsin
0x78FFE2: fstp    [esp+74h+arg_8]
0x78FFE9: fld     [esp+74h+arg_8]
0x78FFF0: fstp    [esp+74h+arg_8]
0x78FFF7: fld     dword ptr [esi+34h]
0x78FFFA: fld     [esp+74h+arg_8]
0x790001: fld     st
0x790003: fmulp   st(2), st
0x790005: fld     [esp+74h+arg_24]
0x79000C: fld     st
0x79000E: fmul    dword ptr [esi+28h]
0x790011: faddp   st(3), st
0x790013: fxch    st(2)
0x790015: fstp    [esp+74h+var_4C]
0x790019: fld     dword ptr [esi+2Ch]
0x79001C: fmul    st, st(2)
0x79001E: fld     st(1)
0x790020: fmul    dword ptr [esi+38h]
0x790023: faddp   st(1), st
0x790025: fstp    [esp+74h+var_48]
0x790029: fld     dword ptr [esi+30h]
0x79002C: fmulp   st(2), st
0x79002E: fmul    dword ptr [esi+3Ch]
0x790031: faddp   st(1), st
0x790033: fstp    [esp+74h+var_44]
0x790037: fld     dword ptr ds:0B2B70Ch
0x79003D: fadd    [esp+74h+arg_C]
0x790044: fstp    [esp+74h+arg_8]
0x79004B: fld     [esp+74h+arg_8]
0x790052: call    __CIcos
0x790057: fstp    [esp+74h+arg_24]
0x79005E: fld     [esp+74h+arg_24]
0x790065: fstp    [esp+74h+arg_24]
0x79006C: fld     [esp+74h+arg_8]
0x790073: call    __CIsin
0x790078: fstp    [esp+74h+arg_8]
0x79007F: fld     [esp+74h+arg_8]
0x790086: fstp    [esp+74h+arg_8]
0x79008D: fld     dword ptr [esi+34h]
0x790090: fld     [esp+74h+arg_8]
0x790097: fld     st
0x790099: fmulp   st(2), st
0x79009B: fld     [esp+74h+arg_24]
0x7900A2: fld     st
0x7900A4: fmul    dword ptr [esi+28h]
0x7900A7: faddp   st(3), st
0x7900A9: fxch    st(2)
0x7900AB: fstp    [esp+74h+var_40]
0x7900AF: fld     dword ptr [esi+2Ch]
0x7900B2: fmul    st, st(2)
0x7900B4: fld     st(1)
0x7900B6: fmul    dword ptr [esi+38h]
0x7900B9: faddp   st(1), st
0x7900BB: fstp    [esp+74h+var_3C]
0x7900BF: fld     dword ptr [esi+30h]
0x7900C2: lea     ecx, [esp+74h+var_40]
0x7900C6: fmulp   st(2), st
0x7900C8: push    ecx
0x7900C9: mov     ecx, ebp
0x7900CB: fmul    dword ptr [esi+3Ch]
0x7900CE: faddp   st(1), st
0x7900D0: fstp    [esp+78h+var_38]
0x7900D4: call    sub_796590
0x7900D9: fld     [esp+74h+var_3C]
0x7900DD: lea     edx, [esp+74h+var_1C]
0x7900E1: fld     st
0x7900E3: push    edx
0x7900E4: fld     [esp+78h+var_44]
0x7900E8: mov     ecx, ebp
0x7900EA: fld     st
0x7900EC: fmulp   st(2), st
0x7900EE: fld     [esp+78h+var_38]
0x7900F2: fld     st
0x7900F4: fld     [esp+78h+var_48]
0x7900F8: fld     st
0x7900FA: fmulp   st(2), st
0x7900FC: fxch    st(4)
0x7900FE: fsubrp  st(1), st
0x790100: fstp    [esp+78h+var_1C]
0x790104: fld     [esp+78h+var_4C]
0x790108: fld     st
0x79010A: fmulp   st(2), st
0x79010C: fld     [esp+78h+var_40]
0x790110: fld     st
0x790112: fmulp   st(4), st
0x790114: fxch    st(2)
0x790116: fsubrp  st(3), st
0x790118: fxch    st(2)
0x79011A: fstp    [esp+78h+var_18]
0x79011E: fmulp   st(2), st
0x790120: fmulp   st(2), st
0x790122: fsubrp  st(1), st
0x790124: fstp    [esp+78h+var_14]
0x790128: call    sub_7965E0
0x79012D: fldz
0x79012F: xor     ebx, ebx
0x790131: mov     [esp+74h+arg_8], ebx
0x790138: mov     eax, [edi+34h]
0x79013B: fstp    [esp+74h+arg_24]
0x790142: test    eax, eax
0x790144: jz      short loc_7901C1
0x790146: mov     ecx, [edi+38h]
0x790149: sub     ecx, eax
0x79014B: mov     eax, 2AAAAAABh
0x790150: imul    ecx
0x790152: sar     edx, 2
0x790155: mov     eax, edx
0x790157: shr     eax, 1Fh
0x79015A: add     eax, edx
0x79015C: cmp     ebx, eax
0x79015E: jnb     short loc_7901C1
0x790160: mov     eax, [edi+34h]
0x790163: test    eax, eax
0x790165: jz      short loc_790181
0x790167: mov     ecx, [edi+38h]
0x79016A: sub     ecx, eax
0x79016C: mov     eax, 2AAAAAABh
0x790171: imul    ecx
0x790173: sar     edx, 2
0x790176: mov     eax, edx
0x790178: shr     eax, 1Fh
0x79017B: add     eax, edx
0x79017D: cmp     ebx, eax
0x79017F: jb      short loc_790186
0x790181: call    __invalid_parameter_noinfo
0x790186: fld     [esp+74h+arg_4]
0x79018A: mov     ecx, [edi+34h]
0x79018D: add     ecx, [esp+74h+arg_8]
0x790194: sub     esp, 8
0x790197: fstp    [esp+7Ch+var_78]; float
0x79019B: fld     [esp+7Ch+arg_C]
0x7901A2: fstp    [esp+7Ch+var_7C]; float
0x7901A5: call    sub_78F2C0
0x7901AA: fadd    [esp+74h+arg_24]
0x7901B1: add     ebx, 1
0x7901B4: add     [esp+74h+arg_8], 18h
0x7901BC: jmp     loc_790138
0x7901C1: fld     [esp+74h+arg_24]
0x7901C8: fadd    qword ptr ds:0A2F928h
0x7901CE: fstp    [esp+74h+arg_C]
0x7901D5: fld     dword ptr [esi+18h]
0x7901D8: fld     [esp+74h+var_4C]
0x7901DC: fld     st
0x7901DE: fmulp   st(2), st
0x7901E0: fld     dword ptr [esi+0Ch]
0x7901E3: faddp   st(2), st
0x7901E5: fxch    st(1)
0x7901E7: fstp    [esp+74h+var_34]
0x7901EB: fld     dword ptr [esi+18h]
0x7901EE: fld     [esp+74h+var_48]
0x7901F2: fld     st
0x7901F4: fmulp   st(2), st
0x7901F6: fld     dword ptr [esi+10h]
0x7901F9: faddp   st(2), st
0x7901FB: fxch    st(1)
0x7901FD: fstp    [esp+74h+var_30]
0x790201: fld     dword ptr [esi+18h]
0x790204: fld     [esp+74h+var_44]
0x790208: fld     st
0x79020A: fmulp   st(2), st
0x79020C: fld     dword ptr [esi+14h]
0x79020F: faddp   st(2), st
0x790211: fxch    st(1)
0x790213: fstp    [esp+74h+var_2C]
0x790217: fld1
0x790219: fld     [esp+74h+arg_C]
0x790220: fucom   st(1)
0x790222: fnstsw  ax
0x790224: fstp    st(1)
0x790226: test    ah, 44h
0x790229: jnp     short loc_790279
0x79022B: fld     dword ptr [esi+18h]
0x79022E: fmulp   st(4), st
0x790230: fld     st
0x790232: fmulp   st(4), st
0x790234: fld     dword ptr [esi+0Ch]
0x790237: faddp   st(4), st
0x790239: fxch    st(3)
0x79023B: fstp    [esp+74h+var_28]
0x79023F: mov     eax, [esp+74h+var_28]
0x790243: fld     dword ptr [esi+18h]
0x790246: mov     [esp+74h+var_34], eax
0x79024A: fmulp   st(2), st
0x79024C: fld     st(2)
0x79024E: fmulp   st(2), st
0x790250: fld     dword ptr [esi+10h]
0x790253: faddp   st(2), st
0x790255: fxch    st(1)
0x790257: fstp    [esp+74h+var_24]
0x79025B: mov     ecx, [esp+74h+var_24]
0x79025F: mov     [esp+74h+var_30], ecx
0x790263: fmul    dword ptr [esi+18h]
0x790266: fmulp   st(1), st
0x790268: fadd    dword ptr [esi+14h]
0x79026B: fstp    [esp+74h+var_20]
0x79026F: mov     edx, [esp+74h+var_20]
0x790273: mov     [esp+74h+var_2C], edx
0x790277: jmp     short loc_790281
0x790279: fstp    st
0x79027B: fstp    st
0x79027D: fstp    st
0x79027F: fstp    st
0x790281: lea     eax, [esp+74h+var_34]
0x790285: push    eax
0x790286: mov     ecx, ebp
0x790288: call    sub_796260
0x79028D: lea     ecx, [esp+74h+var_10]
0x790291: push    ecx
0x790292: mov     ecx, ebp
0x790294: call    sub_796230
0x790299: cmp     byte ptr [ebp+8], 0
0x79029D: jz      short loc_7902B9
0x79029F: mov     edx, [esp+74h+arg_1C]
0x7902A6: fld     [esp+74h+arg_18]
0x7902AD: push    edx
0x7902AE: push    ecx
0x7902AF: mov     ecx, ebp
0x7902B1: fstp    [esp+7Ch+var_7C]
0x7902B4: call    sub_796540
0x7902B9: fld     [esp+74h+var_60]
0x7902BD: mov     eax, 1
0x7902C2: fadd    [esp+74h+var_64]
0x7902C6: add     [ebp+22h], ax
0x7902CA: sub     [esp+74h+arg_20], eax
0x7902D1: fstp    [esp+74h+var_64]
0x7902D5: jnz     loc_78FF61
0x7902DB: pop     esi
0x7902DC: pop     ebp
0x7902DD: pop     ebx
0x7902DE: pop     edi
0x7902DF: add     esp, 64h
0x7902E2: retn    28h ; '('
0x7902E5: fstp    st
0x7902E7: pop     edi
0x7902E8: add     esp, 64h
0x7902EB: retn    28h ; '('
