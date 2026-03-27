0x6B1EA0: push    ebp
0x6B1EA1: mov     ebp, esp
0x6B1EA3: and     esp, 0FFFFFFF8h
0x6B1EA6: mov     ecx, [ebp+arg_8]
0x6B1EA9: sub     esp, 0D8h
0x6B1EAF: cmp     ecx, 2
0x6B1EB2: jnz     loc_6B21E6
0x6B1EB8: mov     eax, [ebp+arg_4]
0x6B1EBB: fldz
0x6B1EBD: add     eax, 1Ch
0x6B1EC0: mov     ecx, eax
0x6B1EC2: mov     edx, 4
0x6B1EC7: fst     dword ptr [ecx+4]
0x6B1ECA: add     ecx, 24h ; '$'
0x6B1ECD: sub     edx, 1
0x6B1ED0: fst     dword ptr [ecx-24h]
0x6B1ED3: fst     dword ptr [ecx-28h]
0x6B1ED6: fst     dword ptr [ecx-2Ch]
0x6B1ED9: fst     dword ptr [ecx-30h]
0x6B1EDC: fst     dword ptr [ecx-34h]
0x6B1EDF: fst     dword ptr [ecx-38h]
0x6B1EE2: fst     dword ptr [ecx-3Ch]
0x6B1EE5: fst     dword ptr [ecx-40h]
0x6B1EE8: jnz     short loc_6B1EC7
0x6B1EEA: mov     ecx, [ebp+arg_0]
0x6B1EED: fstp    st
0x6B1EEF: fld     qword ptr ds:0A77BF0h
0x6B1EF5: add     ecx, 24h ; '$'
0x6B1EF8: fld     qword ptr ds:0A2FAA0h
0x6B1EFE: mov     edx, 3
0x6B1F03: fld     qword ptr ds:0A77BE8h
0x6B1F09: fld     dword ptr [ecx+0Ch]
0x6B1F0C: fld     dword ptr [ecx+18h]
0x6B1F0F: fadd    st, st(1)
0x6B1F11: fstp    dword ptr [ecx+18h]
0x6B1F14: fld     dword ptr [ecx]
0x6B1F16: fadd    st(1), st
0x6B1F18: fxch    st(1)
0x6B1F1A: fstp    dword ptr [ecx+0Ch]
0x6B1F1D: fld     dword ptr [ecx-0Ch]
0x6B1F20: fld     st
0x6B1F22: faddp   st(2), st
0x6B1F24: fxch    st(1)
0x6B1F26: fstp    dword ptr [ecx]
0x6B1F28: fld     dword ptr [ecx-18h]
0x6B1F2B: fld     st
0x6B1F2D: faddp   st(2), st
0x6B1F2F: fxch    st(1)
0x6B1F31: fstp    dword ptr [ecx-0Ch]
0x6B1F34: fld     dword ptr [ecx-24h]
0x6B1F37: fld     st
0x6B1F39: faddp   st(2), st
0x6B1F3B: fxch    st(1)
0x6B1F3D: fstp    dword ptr [esp+0D8h+var_D0]
0x6B1F41: fld     dword ptr [esp+0D8h+var_D0]
0x6B1F45: fst     dword ptr [ecx-18h]
0x6B1F48: fld     dword ptr [ecx]
0x6B1F4A: fld     dword ptr [ecx+18h]
0x6B1F4D: fadd    st, st(1)
0x6B1F4F: fstp    dword ptr [ecx+18h]
0x6B1F52: fadd    st, st(1)
0x6B1F54: fstp    dword ptr [esp+0D8h+var_D0]
0x6B1F58: fld     dword ptr [esp+0D8h+var_D0]
0x6B1F5C: fst     dword ptr [ecx]
0x6B1F5E: fld     dword ptr [ecx-0Ch]
0x6B1F61: fmul    st, st(6)
0x6B1F63: fstp    [esp+0D8h+var_D4]
0x6B1F67: fld     dword ptr [ecx+0Ch]
0x6B1F6A: fld     st
0x6B1F6C: fmul    st, st(6)
0x6B1F6E: fstp    dword ptr [esp+0D8h+var_D0]
0x6B1F72: fld     dword ptr [esp+0D8h+var_D0]
0x6B1F76: fadd    st, st(4)
0x6B1F78: fstp    dword ptr [esp+0D8h+var_D0]
0x6B1F7C: fsubp   st(3), st
0x6B1F7E: fxch    st(2)
0x6B1F80: fstp    [esp+0D8h+var_9C]
0x6B1F84: fld     dword ptr [esp+0D8h+var_D0]
0x6B1F88: fld     [esp+0D8h+var_D4]
0x6B1F8C: fld     st
0x6B1F8E: fadd    st, st(2)
0x6B1F90: fstp    [esp+0D8h+var_A0]
0x6B1F94: fsubp   st(1), st
0x6B1F96: fstp    [esp+0D8h+var_98]
0x6B1F9A: fxch    st(1)
0x6B1F9C: fmul    st, st(4)
0x6B1F9E: fstp    [esp+0D8h+var_D4]
0x6B1FA2: fld     dword ptr [ecx+18h]
0x6B1FA5: fld     st
0x6B1FA7: fmul    st, st(4)
0x6B1FA9: fstp    dword ptr [esp+0D8h+var_D0]
0x6B1FAD: fld     dword ptr [esp+0D8h+var_D0]
0x6B1FB1: fadd    st, st(2)
0x6B1FB3: fstp    dword ptr [esp+0D8h+var_D0]
0x6B1FB7: fsubp   st(1), st
0x6B1FB9: fstp    [esp+0D8h+var_90]
0x6B1FBD: fld     dword ptr [esp+0D8h+var_D0]
0x6B1FC1: fld     [esp+0D8h+var_D4]
0x6B1FC5: fld     st
0x6B1FC7: fadd    st, st(2)
0x6B1FC9: fstp    [esp+0D8h+var_8C]
0x6B1FCD: fsubp   st(1), st
0x6B1FCF: fstp    dword ptr [esp+0D8h+var_D0]
0x6B1FD3: fld     dword ptr [esp+0D8h+var_D0]
0x6B1FD7: fmul    qword ptr ds:0A77BE0h
0x6B1FDD: fstp    [esp+0D8h+var_94]
0x6B1FE1: fld     [esp+0D8h+var_90]
0x6B1FE5: fmul    qword ptr ds:0A77BD8h
0x6B1FEB: fstp    [esp+0D8h+var_90]
0x6B1FEF: fld     [esp+0D8h+var_8C]
0x6B1FF3: fmul    qword ptr ds:0A77BD0h
0x6B1FF9: fstp    [esp+0D8h+var_8C]
0x6B1FFD: fld     [esp+0D8h+var_A0]
0x6B2001: fst     dword ptr [esp+0D8h+var_D0]
0x6B2005: fld     [esp+0D8h+var_8C]
0x6B2009: fadd    st(1), st
0x6B200B: fxch    st(1)
0x6B200D: fstp    [esp+0D8h+var_A0]
0x6B2011: fsubr   dword ptr [esp+0D8h+var_D0]
0x6B2015: fstp    [esp+0D8h+var_8C]
0x6B2019: fld     [esp+0D8h+var_9C]
0x6B201D: fst     dword ptr [esp+0D8h+var_D0]
0x6B2021: fld     [esp+0D8h+var_90]
0x6B2025: fadd    st(1), st
0x6B2027: fxch    st(1)
0x6B2029: fstp    [esp+0D8h+var_9C]
0x6B202D: fsubr   dword ptr [esp+0D8h+var_D0]
0x6B2031: fstp    [esp+0D8h+var_90]
0x6B2035: fld     [esp+0D8h+var_98]
0x6B2039: fst     dword ptr [esp+0D8h+var_D0]
0x6B203D: fld     [esp+0D8h+var_94]
0x6B2041: fadd    st(1), st
0x6B2043: fxch    st(1)
0x6B2045: fstp    [esp+0D8h+var_98]
0x6B2049: fsubr   dword ptr [esp+0D8h+var_D0]
0x6B204D: fstp    [esp+0D8h+var_94]
0x6B2051: fld     [esp+0D8h+var_A0]
0x6B2055: fmul    qword ptr ds:0A77BC8h
0x6B205B: fstp    [esp+0D8h+var_A0]
0x6B205F: fld     [esp+0D8h+var_9C]
0x6B2063: fmul    qword ptr ds:0A77BC0h
0x6B2069: fstp    [esp+0D8h+var_9C]
0x6B206D: fld     [esp+0D8h+var_98]
0x6B2071: fmul    qword ptr ds:0A77BB8h
0x6B2077: fstp    [esp+0D8h+var_98]
0x6B207B: fld     [esp+0D8h+var_94]
0x6B207F: fmul    qword ptr ds:0A77BB0h
0x6B2085: fstp    [esp+0D8h+var_94]
0x6B2089: fld     [esp+0D8h+var_90]
0x6B208D: fmul    qword ptr ds:0A77BA8h
0x6B2093: fstp    [esp+0D8h+var_90]
0x6B2097: fld     [esp+0D8h+var_8C]
0x6B209B: fmul    qword ptr ds:0A77BA0h
0x6B20A1: fstp    [esp+0D8h+var_8C]
0x6B20A5: fld     [esp+0D8h+var_A0]
0x6B20A9: fchs
0x6B20AB: fld     st
0x6B20AD: fmul    st, st(2)
0x6B20AF: fstp    [esp+0D8h+var_80]
0x6B20B3: fld     qword ptr ds:0A77B98h
0x6B20B9: fmul    st(1), st
0x6B20BB: fxch    st(1)
0x6B20BD: fstp    [esp+0D8h+var_7C]
0x6B20C1: fld     [esp+0D8h+var_9C]
0x6B20C5: fchs
0x6B20C7: fld     st
0x6B20C9: fld     qword ptr ds:0A77B90h
0x6B20CF: fmul    st(1), st
0x6B20D1: fxch    st(1)
0x6B20D3: fstp    [esp+0D8h+var_84]
0x6B20D7: fxch    st(1)
0x6B20D9: fmul    qword ptr ds:0A77B88h
0x6B20DF: fstp    [esp+0D8h+var_78]
0x6B20E3: fld     [esp+0D8h+var_98]
0x6B20E7: fchs
0x6B20E9: fld     qword ptr ds:0A77B80h
0x6B20EF: fmul    st, st(1)
0x6B20F1: fstp    [esp+0D8h+var_88]
0x6B20F5: fmul    qword ptr ds:0A77B78h
0x6B20FB: fstp    [esp+0D8h+var_74]
0x6B20FF: fld     [esp+0D8h+var_94]
0x6B2103: fstp    [esp+0D8h+var_A0]
0x6B2107: fld     [esp+0D8h+var_90]
0x6B210B: fld     qword ptr ds:0A77B88h
0x6B2111: fmul    st, st(1)
0x6B2113: fstp    [esp+0D8h+var_9C]
0x6B2117: fld     [esp+0D8h+var_8C]
0x6B211B: fld     st
0x6B211D: fmulp   st(4), st
0x6B211F: fxch    st(3)
0x6B2121: fstp    [esp+0D8h+var_98]
0x6B2125: fxch    st(2)
0x6B2127: fchs
0x6B2129: fmul    st, st(3)
0x6B212B: add     eax, 18h
0x6B212E: add     ecx, 4
0x6B2131: sub     edx, 1
0x6B2134: fstp    [esp+0D8h+var_94]
0x6B2138: fxch    st(1)
0x6B213A: fchs
0x6B213C: fmulp   st(1), st
0x6B213E: fstp    [esp+0D8h+var_90]
0x6B2142: fld     [esp+0D8h+var_A0]
0x6B2146: fld     st
0x6B2148: fchs
0x6B214A: fmul    qword ptr ds:0A77B80h
0x6B2150: fstp    [esp+0D8h+var_8C]
0x6B2154: fmul    qword ptr ds:0A77B78h
0x6B215A: fstp    [esp+0D8h+var_A0]
0x6B215E: fld     dword ptr [eax-1Ch]
0x6B2161: fadd    [esp+0D8h+var_A0]
0x6B2165: fstp    dword ptr [eax-1Ch]
0x6B2168: fld     dword ptr [eax-18h]
0x6B216B: fadd    [esp+0D8h+var_9C]
0x6B216F: fstp    dword ptr [eax-18h]
0x6B2172: fld     [esp+0D8h+var_98]
0x6B2176: fadd    dword ptr [eax-14h]
0x6B2179: fstp    dword ptr [eax-14h]
0x6B217C: fld     dword ptr [eax-10h]
0x6B217F: fadd    [esp+0D8h+var_94]
0x6B2183: fstp    dword ptr [eax-10h]
0x6B2186: fld     dword ptr [eax-0Ch]
0x6B2189: fadd    [esp+0D8h+var_90]
0x6B218D: fstp    dword ptr [eax-0Ch]
0x6B2190: fld     dword ptr [eax-8]
0x6B2193: fadd    [esp+0D8h+var_8C]
0x6B2197: fstp    dword ptr [eax-8]
0x6B219A: fld     [esp+0D8h+var_88]
0x6B219E: fadd    dword ptr [eax-4]
0x6B21A1: fstp    dword ptr [eax-4]
0x6B21A4: fld     dword ptr [eax]
0x6B21A6: fadd    [esp+0D8h+var_84]
0x6B21AA: fstp    dword ptr [eax]
0x6B21AC: fld     dword ptr [eax+4]
0x6B21AF: fadd    [esp+0D8h+var_80]
0x6B21B3: fstp    dword ptr [eax+4]
0x6B21B6: fld     dword ptr [eax+8]
0x6B21B9: fadd    [esp+0D8h+var_7C]
0x6B21BD: fstp    dword ptr [eax+8]
0x6B21C0: fld     [esp+0D8h+var_78]
0x6B21C4: fadd    dword ptr [eax+0Ch]
0x6B21C7: fstp    dword ptr [eax+0Ch]
0x6B21CA: fld     dword ptr [eax+10h]
0x6B21CD: fadd    [esp+0D8h+var_74]
0x6B21D1: fstp    dword ptr [eax+10h]
0x6B21D4: jnz     loc_6B1F09
0x6B21DA: fstp    st(2)
0x6B21DC: fstp    st
0x6B21DE: fstp    st
0x6B21E0: mov     esp, ebp
0x6B21E2: pop     ebp
0x6B21E3: retn    0Ch
0x6B21E6: mov     eax, [ebp+arg_0]
0x6B21E9: fld     dword ptr [eax+40h]
0x6B21EC: fld     dword ptr [eax+44h]
0x6B21EF: fadd    st, st(1)
0x6B21F1: fstp    dword ptr [eax+44h]
0x6B21F4: fld     dword ptr [eax+3Ch]
0x6B21F7: fld     st
0x6B21F9: faddp   st(2), st
0x6B21FB: fxch    st(1)
0x6B21FD: fstp    dword ptr [eax+40h]
0x6B2200: fld     dword ptr [eax+38h]
0x6B2203: fld     st
0x6B2205: faddp   st(2), st
0x6B2207: fxch    st(1)
0x6B2209: fstp    dword ptr [eax+3Ch]
0x6B220C: fld     dword ptr [eax+34h]
0x6B220F: fld     st
0x6B2211: faddp   st(2), st
0x6B2213: fxch    st(1)
0x6B2215: fstp    dword ptr [eax+38h]
0x6B2218: fld     dword ptr [eax+30h]
0x6B221B: fld     st
0x6B221D: faddp   st(2), st
0x6B221F: fxch    st(1)
0x6B2221: fstp    dword ptr [eax+34h]
0x6B2224: fld     dword ptr [eax+2Ch]
0x6B2227: fld     st
0x6B2229: faddp   st(2), st
0x6B222B: fxch    st(1)
0x6B222D: fstp    dword ptr [eax+30h]
0x6B2230: fld     dword ptr [eax+28h]
0x6B2233: fld     st
0x6B2235: faddp   st(2), st
0x6B2237: fxch    st(1)
0x6B2239: fstp    dword ptr [eax+2Ch]
0x6B223C: fld     dword ptr [eax+24h]
0x6B223F: fld     st
0x6B2241: faddp   st(2), st
0x6B2243: fxch    st(1)
0x6B2245: fstp    dword ptr [eax+28h]
0x6B2248: fld     dword ptr [eax+20h]
0x6B224B: fld     st
0x6B224D: faddp   st(2), st
0x6B224F: fxch    st(1)
0x6B2251: fstp    dword ptr [eax+24h]
0x6B2254: fld     dword ptr [eax+1Ch]
0x6B2257: fld     st
0x6B2259: faddp   st(2), st
0x6B225B: fxch    st(1)
0x6B225D: fstp    dword ptr [eax+20h]
0x6B2260: fld     dword ptr [eax+18h]
0x6B2263: fld     st
0x6B2265: faddp   st(2), st
0x6B2267: fxch    st(1)
0x6B2269: fstp    dword ptr [eax+1Ch]
0x6B226C: fld     dword ptr [eax+14h]
0x6B226F: fld     st
0x6B2271: faddp   st(2), st
0x6B2273: fxch    st(1)
0x6B2275: fstp    dword ptr [eax+18h]
0x6B2278: fld     dword ptr [eax+10h]
0x6B227B: fld     st
0x6B227D: faddp   st(2), st
0x6B227F: fxch    st(1)
0x6B2281: fstp    dword ptr [eax+14h]
0x6B2284: fld     dword ptr [eax+0Ch]
0x6B2287: fld     st
0x6B2289: faddp   st(2), st
0x6B228B: fxch    st(1)
0x6B228D: fstp    dword ptr [eax+10h]
0x6B2290: fld     dword ptr [eax+8]
0x6B2293: fld     st
0x6B2295: faddp   st(2), st
0x6B2297: fxch    st(1)
0x6B2299: fstp    dword ptr [eax+0Ch]
0x6B229C: fld     dword ptr [eax+4]
0x6B229F: fld     st
0x6B22A1: faddp   st(2), st
0x6B22A3: fxch    st(1)
0x6B22A5: fstp    dword ptr [eax+8]
0x6B22A8: fld     dword ptr [eax]
0x6B22AA: fst     [esp+0D8h+var_B8]
0x6B22AE: fld     st
0x6B22B0: faddp   st(2), st
0x6B22B2: fxch    st(1)
0x6B22B4: fstp    dword ptr [esp+0D8h+var_D0]
0x6B22B8: fld     dword ptr [esp+0D8h+var_D0]
0x6B22BC: fst     dword ptr [eax+4]
0x6B22BF: fld     dword ptr [eax+3Ch]
0x6B22C2: fld     dword ptr [eax+44h]
0x6B22C5: fadd    st, st(1)
0x6B22C7: fstp    dword ptr [eax+44h]
0x6B22CA: fld     dword ptr [eax+34h]
0x6B22CD: fld     st
0x6B22CF: faddp   st(2), st
0x6B22D1: fxch    st(1)
0x6B22D3: fstp    dword ptr [eax+3Ch]
0x6B22D6: fld     dword ptr [eax+2Ch]
0x6B22D9: fld     st
0x6B22DB: faddp   st(2), st
0x6B22DD: fxch    st(1)
0x6B22DF: fstp    dword ptr [eax+34h]
0x6B22E2: fld     dword ptr [eax+24h]
0x6B22E5: fld     st
0x6B22E7: faddp   st(2), st
0x6B22E9: fxch    st(1)
0x6B22EB: fstp    dword ptr [eax+2Ch]
0x6B22EE: fld     dword ptr [eax+1Ch]
0x6B22F1: fld     st
0x6B22F3: faddp   st(2), st
0x6B22F5: fxch    st(1)
0x6B22F7: fstp    dword ptr [eax+24h]
0x6B22FA: fld     dword ptr [eax+14h]
0x6B22FD: fld     st
0x6B22FF: faddp   st(2), st
0x6B2301: fxch    st(1)
0x6B2303: fstp    dword ptr [eax+1Ch]
0x6B2306: fld     dword ptr [eax+0Ch]
0x6B2309: fld     st
0x6B230B: faddp   st(2), st
0x6B230D: fxch    st(1)
0x6B230F: fstp    dword ptr [eax+14h]
0x6B2312: faddp   st(1), st
0x6B2314: fstp    [esp+0D8h+var_D4]
0x6B2318: fld     [esp+0D8h+var_D4]
0x6B231C: fstp    dword ptr [eax+0Ch]
0x6B231F: fadd    st, st
0x6B2321: fstp    [esp+0D8h+var_C4]
0x6B2325: fld     dword ptr [eax+30h]
0x6B2328: fst     [esp+0D8h+var_C0]
0x6B232C: fld     [esp+0D8h+var_C4]
0x6B2330: fst     [esp+0D8h+var_B0]
0x6B2334: faddp   st(1), st
0x6B2336: fstp    [esp+0D8h+var_C4]
0x6B233A: fld     dword ptr [eax+10h]
0x6B233D: fld     [esp+0D8h+var_C4]
0x6B2341: fst     [esp+0D8h+var_58]
0x6B2348: fld     dword ptr [eax+20h]
0x6B234B: fld     dword ptr [eax+40h]
0x6B234E: fld     st(3)
0x6B2350: fld     qword ptr ds:0A77B70h
0x6B2356: fmul    st(1), st
0x6B2358: fxch    st(1)
0x6B235A: faddp   st(4), st
0x6B235C: fld     st(2)
0x6B235E: fld     qword ptr ds:0A77B68h
0x6B2364: fmul    st(1), st
0x6B2366: fxch    st(5)
0x6B2368: faddp   st(1), st
0x6B236A: fld     st(2)
0x6B236C: fld     qword ptr ds:0A77B60h
0x6B2372: fmul    st(1), st
0x6B2374: fxch    st(2)
0x6B2376: faddp   st(1), st
0x6B2378: fstp    [esp+0D8h+var_18]
0x6B237F: fld     [esp+0D8h+var_B0]
0x6B2383: fadd    st, st(6)
0x6B2385: fsub    st, st(4)
0x6B2387: fld     [esp+0D8h+var_C0]
0x6B238B: fsub    st(1), st
0x6B238D: fsubp   st(1), st
0x6B238F: fsub    st, st(3)
0x6B2391: fstp    dword ptr [esp+0D8h+var_8]
0x6B2398: fld     st(5)
0x6B239A: fmul    st, st(1)
0x6B239C: fsubr   [esp+0D8h+var_58]
0x6B23A3: fld     st(4)
0x6B23A5: fmul    st, st(3)
0x6B23A7: fsubp   st(1), st
0x6B23A9: fld     st(3)
0x6B23AB: fmul    st, st(6)
0x6B23AD: faddp   st(1), st
0x6B23AF: fstp    dword ptr [esp+0D8h+var_20]
0x6B23B6: fld     st(5)
0x6B23B8: fmul    st, st(5)
0x6B23BA: fsubr   [esp+0D8h+var_58]
0x6B23C1: fld     st(4)
0x6B23C3: fmul    st, st(2)
0x6B23C5: faddp   st(1), st
0x6B23C7: fld     st(3)
0x6B23C9: fmul    st, st(3)
0x6B23CB: fsubp   st(1), st
0x6B23CD: fstp    dword ptr [esp+0D8h+var_10]
0x6B23D4: fld     [esp+0D8h+var_B8]
0x6B23D8: fsubrp  st(6), st
0x6B23DA: fxch    st(5)
0x6B23DC: faddp   st(3), st
0x6B23DE: fxch    st(2)
0x6B23E0: fsub    [esp+0D8h+var_C0]
0x6B23E4: faddp   st(1), st
0x6B23E6: fstp    dword ptr [esp+0D8h+var_58]
0x6B23ED: fld     dword ptr [eax+18h]
0x6B23F0: fmul    qword ptr ds:0A77B58h
0x6B23F6: fstp    [esp+0D8h+var_C4]
0x6B23FA: fld     dword ptr [eax+8]
0x6B23FD: fst     [esp+0D8h+var_C0]
0x6B2401: fld     [esp+0D8h+var_C4]
0x6B2405: fst     [esp+0D8h+var_B8]
0x6B2409: fld     dword ptr [eax+28h]
0x6B240C: fst     [esp+0D8h+var_48]
0x6B2413: fld     dword ptr [eax+38h]
0x6B2416: fst     [esp+0D8h+var_B0]
0x6B241A: fld     qword ptr ds:0A77B50h
0x6B2420: fmul    st(4), st
0x6B2422: fxch    st(4)
0x6B2424: faddp   st(3), st
0x6B2426: fld     qword ptr ds:0A77B48h
0x6B242C: fmul    st(2), st
0x6B242E: fxch    st(3)
0x6B2430: faddp   st(2), st
0x6B2432: fld     qword ptr ds:0A77B40h
0x6B2438: fmul    st(1), st
0x6B243A: fxch    st(2)
0x6B243C: faddp   st(1), st
0x6B243E: fstp    [esp+0D8h+var_24]
0x6B2445: fld     [esp+0D8h+var_C0]
0x6B2449: fld     [esp+0D8h+var_48]
0x6B2450: fsub    st(1), st
0x6B2452: fxch    st(1)
0x6B2454: fsub    [esp+0D8h+var_B0]
0x6B2458: fmul    qword ptr ds:0A77B58h
0x6B245E: fstp    [esp+0D8h+var_14]
0x6B2465: fld     [esp+0D8h+var_C0]
0x6B2469: fmul    st, st(3)
0x6B246B: fsub    [esp+0D8h+var_B8]
0x6B246F: fxch    st(1)
0x6B2471: fmul    st, st(2)
0x6B2473: fsubp   st(1), st
0x6B2475: fld     [esp+0D8h+var_B0]
0x6B2479: fmul    st, st(4)
0x6B247B: faddp   st(1), st
0x6B247D: fstp    dword ptr [esp+0D8h+var_30]
0x6B2484: fld     [esp+0D8h+var_C0]
0x6B2488: fmul    st, st(1)
0x6B248A: fsub    [esp+0D8h+var_B8]
0x6B248E: fld     [esp+0D8h+var_48]
0x6B2495: fmul    st, st(4)
0x6B2497: faddp   st(1), st
0x6B2499: fld     [esp+0D8h+var_B0]
0x6B249D: fmul    st, st(3)
0x6B249F: fsubp   st(1), st
0x6B24A1: fstp    dword ptr [esp+0D8h+var_48]
0x6B24A8: fld     dword ptr [esp+0D8h+var_D0]
0x6B24AC: fst     [esp+0D8h+var_D0]
0x6B24B0: fadd    st, st
0x6B24B2: fstp    [esp+0D8h+var_C4]
0x6B24B6: fld     dword ptr [eax+34h]
0x6B24B9: fst     [esp+0D8h+var_40]
0x6B24C0: fld     [esp+0D8h+var_C4]
0x6B24C4: fst     [esp+0D8h+var_38]
0x6B24CB: faddp   st(1), st
0x6B24CD: fstp    [esp+0D8h+var_C4]
0x6B24D1: fld     dword ptr [eax+14h]
0x6B24D4: fst     [esp+0D8h+var_B8]
0x6B24D8: fld     [esp+0D8h+var_C4]
0x6B24DC: fstp    [esp+0D8h+var_50]
0x6B24E3: fld     dword ptr [eax+24h]
0x6B24E6: fstp    [esp+0D8h+var_C0]
0x6B24EA: fld     dword ptr [eax+44h]
0x6B24ED: fstp    [esp+0D8h+var_B0]
0x6B24F1: fmul    st, st(4)
0x6B24F3: fadd    [esp+0D8h+var_50]
0x6B24FA: fld     [esp+0D8h+var_C0]
0x6B24FE: fmul    st, st(6)
0x6B2500: faddp   st(1), st
0x6B2502: fld     [esp+0D8h+var_B0]
0x6B2506: fmul    st, st(7)
0x6B2508: faddp   st(1), st
0x6B250A: fstp    [esp+0D8h+var_28]
0x6B2511: fld     [esp+0D8h+var_38]
0x6B2518: fadd    [esp+0D8h+var_B8]
0x6B251C: fsub    [esp+0D8h+var_C0]
0x6B2520: fld     [esp+0D8h+var_40]
0x6B2527: fsub    st(1), st
0x6B2529: fsubp   st(1), st
0x6B252B: fsub    [esp+0D8h+var_B0]
0x6B252F: fstp    dword ptr [esp+0D8h+var_A8]
0x6B2533: fld     [esp+0D8h+var_B8]
0x6B2537: fmul    st, st(6)
0x6B2539: fsubr   [esp+0D8h+var_50]
0x6B2540: fld     [esp+0D8h+var_C0]
0x6B2544: fmul    st, st(5)
0x6B2546: fsubp   st(1), st
0x6B2548: fld     [esp+0D8h+var_B0]
0x6B254C: fmul    st, st(6)
0x6B254E: faddp   st(1), st
0x6B2550: fstp    dword ptr [esp+0D8h+var_38]
0x6B2557: fld     [esp+0D8h+var_B8]
0x6B255B: fld     st
0x6B255D: fmulp   st(6), st
0x6B255F: fld     [esp+0D8h+var_50]
0x6B2566: fsubrp  st(6), st
0x6B2568: fld     [esp+0D8h+var_C0]
0x6B256C: fmulp   st(7), st
0x6B256E: fxch    st(5)
0x6B2570: faddp   st(6), st
0x6B2572: fld     [esp+0D8h+var_B0]
0x6B2576: fld     st
0x6B2578: fmulp   st(5), st
0x6B257A: fxch    st(6)
0x6B257C: fsubrp  st(4), st
0x6B257E: fxch    st(3)
0x6B2580: fstp    dword ptr [esp+0D8h+var_B0]
0x6B2584: fld     [esp+0D8h+var_D0]
0x6B2588: fsubrp  st(4), st
0x6B258A: fxch    st(3)
0x6B258C: fadd    [esp+0D8h+var_C0]
0x6B2590: fsub    [esp+0D8h+var_40]
0x6B2597: faddp   st(4), st
0x6B2599: fxch    st(3)
0x6B259B: fmul    qword ptr ds:0A77BD8h
0x6B25A1: fstp    dword ptr [esp+0D8h+var_C0]
0x6B25A5: fld     dword ptr [eax+1Ch]
0x6B25A8: fmul    qword ptr ds:0A77B58h
0x6B25AE: fstp    [esp+0D8h+var_C4]
0x6B25B2: fld     [esp+0D8h+var_C4]
0x6B25B6: fld     dword ptr [eax+2Ch]
0x6B25B9: fld     dword ptr [eax+3Ch]
0x6B25BC: fld     [esp+0D8h+var_D4]
0x6B25C0: fmul    st, st(6)
0x6B25C2: fadd    st, st(3)
0x6B25C4: fld     st(2)
0x6B25C6: fmul    st, st(6)
0x6B25C8: faddp   st(1), st
0x6B25CA: fld     st(1)
0x6B25CC: fmul    st, st(5)
0x6B25CE: faddp   st(1), st
0x6B25D0: fstp    [esp+0D8h+var_C4]
0x6B25D4: fld     dword ptr [eax+0Ch]
0x6B25D7: fst     [esp+0D8h+var_B8]
0x6B25DB: fsub    st, st(2)
0x6B25DD: fsub    st, st(1)
0x6B25DF: fmul    qword ptr ds:0A77B58h
0x6B25E5: fstp    dword ptr [esp+0D8h+var_40]
0x6B25EC: fld     [esp+0D8h+var_B8]
0x6B25F0: fmul    st, st(5)
0x6B25F2: fsub    st, st(3)
0x6B25F4: fld     st(2)
0x6B25F6: fmul    st, st(5)
0x6B25F8: fsubp   st(1), st
0x6B25FA: fld     st(1)
0x6B25FC: fmul    st, st(7)
0x6B25FE: faddp   st(1), st
0x6B2600: fstp    dword ptr [esp+0D8h+var_50]
0x6B2607: fld     [esp+0D8h+var_B8]
0x6B260B: fmulp   st(4), st
0x6B260D: fxch    st(3)
0x6B260F: fsubrp  st(2), st
0x6B2611: fmulp   st(4), st
0x6B2613: faddp   st(3), st
0x6B2615: fmulp   st(1), st
0x6B2617: fsubp   st(1), st
0x6B2619: fstp    dword ptr [esp+0D8h+var_B8]
0x6B261D: fld     [esp+0D8h+var_24]
0x6B2624: fld     [esp+0D8h+var_18]
0x6B262B: fld     st
0x6B262D: fadd    st, st(2)
0x6B262F: fstp    dword ptr [esp+0D8h+var_D0]
0x6B2633: fld     [esp+0D8h+var_C4]
0x6B2637: fld     [esp+0D8h+var_28]
0x6B263E: fld     st
0x6B2640: fadd    st, st(2)
0x6B2642: fmul    qword ptr ds:0A77B38h
0x6B2648: fstp    [esp+0D8h+var_D4]
0x6B264C: fld     [esp+0D8h+var_D4]
0x6B2650: fld     dword ptr [esp+0D8h+var_D0]
0x6B2654: fld     st
0x6B2656: fadd    st, st(2)
0x6B2658: fstp    [esp+0D8h+var_A0]
0x6B265C: fsubrp  st(1), st
0x6B265E: fstp    [esp+0D8h+var_5C]
0x6B2662: fld     [esp+0D8h+var_14]
0x6B2669: fld     dword ptr [esp+0D8h+var_8]
0x6B2670: fld     st
0x6B2672: fadd    st, st(2)
0x6B2674: fstp    dword ptr [esp+0D8h+var_D0]
0x6B2678: fld     dword ptr [esp+0D8h+var_40]
0x6B267F: fst     [esp+0D8h+var_8]
0x6B2686: fld     dword ptr [esp+0D8h+var_A8]
0x6B268A: fst     [esp+0D8h+var_40]
0x6B2691: faddp   st(1), st
0x6B2693: fmul    qword ptr ds:0A77BD0h
0x6B2699: fstp    [esp+0D8h+var_D4]
0x6B269D: fld     [esp+0D8h+var_D4]
0x6B26A1: fld     dword ptr [esp+0D8h+var_D0]
0x6B26A5: fst     [esp+0D8h+var_A8]
0x6B26A9: fadd    st, st(1)
0x6B26AB: fstp    [esp+0D8h+var_9C]
0x6B26AF: fsubr   [esp+0D8h+var_A8]
0x6B26B3: fstp    [esp+0D8h+var_60]
0x6B26B7: fld     dword ptr [esp+0D8h+var_30]
0x6B26BE: fst     [esp+0D8h+var_30]
0x6B26C5: fld     dword ptr [esp+0D8h+var_20]
0x6B26CC: fst     [esp+0D8h+var_20]
0x6B26D3: faddp   st(1), st
0x6B26D5: fstp    dword ptr [esp+0D8h+var_D0]
0x6B26D9: fld     dword ptr [esp+0D8h+var_50]
0x6B26E0: fst     [esp+0D8h+var_50]
0x6B26E7: fld     dword ptr [esp+0D8h+var_38]
0x6B26EE: fst     [esp+0D8h+var_38]
0x6B26F5: faddp   st(1), st
0x6B26F7: fmul    qword ptr ds:0A77B30h
0x6B26FD: fstp    [esp+0D8h+var_D4]
0x6B2701: fld     [esp+0D8h+var_D4]
0x6B2705: fld     dword ptr [esp+0D8h+var_D0]
0x6B2709: fst     [esp+0D8h+var_A8]
0x6B270D: fadd    st, st(1)
0x6B270F: fstp    [esp+0D8h+var_98]
0x6B2713: fsubr   [esp+0D8h+var_A8]
0x6B2717: fstp    [esp+0D8h+var_64]
0x6B271B: fld     dword ptr [esp+0D8h+var_48]
0x6B2722: fst     [esp+0D8h+var_48]
0x6B2729: fld     dword ptr [esp+0D8h+var_10]
0x6B2730: fst     [esp+0D8h+var_10]
0x6B2737: faddp   st(1), st
0x6B2739: fstp    dword ptr [esp+0D8h+var_D0]
0x6B273D: fld     dword ptr [esp+0D8h+var_B8]
0x6B2741: fst     [esp+0D8h+var_B8]
0x6B2745: fld     dword ptr [esp+0D8h+var_B0]
0x6B2749: fst     [esp+0D8h+var_B0]
0x6B274D: faddp   st(1), st
0x6B274F: fmul    qword ptr ds:0A77B28h
0x6B2755: fstp    [esp+0D8h+var_D4]
0x6B2759: fld     [esp+0D8h+var_D4]
0x6B275D: fld     dword ptr [esp+0D8h+var_D0]
0x6B2761: fst     [esp+0D8h+var_A8]
0x6B2765: fadd    st, st(1)
0x6B2767: fstp    [esp+0D8h+var_94]
0x6B276B: fsubr   [esp+0D8h+var_A8]
0x6B276F: fstp    [esp+0D8h+var_68]
0x6B2773: fld     dword ptr [esp+0D8h+var_C0]
0x6B2777: fld     dword ptr [esp+0D8h+var_58]
0x6B277E: fst     [esp+0D8h+var_58]
0x6B2785: fadd    st, st(1)
0x6B2787: fstp    [esp+0D8h+var_90]
0x6B278B: fsubr   [esp+0D8h+var_58]
0x6B2792: fstp    [esp+0D8h+var_6C]
0x6B2796: fld     [esp+0D8h+var_10]
0x6B279D: fsub    [esp+0D8h+var_48]
0x6B27A4: fstp    dword ptr [esp+0D8h+var_D0]
0x6B27A8: fld     [esp+0D8h+var_B0]
0x6B27AC: fsub    [esp+0D8h+var_B8]
0x6B27B0: fmul    qword ptr ds:0A77B20h
0x6B27B6: fstp    [esp+0D8h+var_D4]
0x6B27BA: fld     [esp+0D8h+var_D4]
0x6B27BE: fld     dword ptr [esp+0D8h+var_D0]
0x6B27C2: fst     [esp+0D8h+var_A8]
0x6B27C6: fadd    st, st(1)
0x6B27C8: fstp    [esp+0D8h+var_8C]
0x6B27CC: fsubr   [esp+0D8h+var_A8]
0x6B27D0: fstp    [esp+0D8h+var_70]
0x6B27D4: fld     [esp+0D8h+var_20]
0x6B27DB: fsub    [esp+0D8h+var_30]
0x6B27E2: fstp    dword ptr [esp+0D8h+var_D0]
0x6B27E6: fld     [esp+0D8h+var_38]
0x6B27ED: fsub    [esp+0D8h+var_50]
0x6B27F4: fmul    qword ptr ds:0A77B18h
0x6B27FA: fstp    [esp+0D8h+var_D4]
0x6B27FE: fld     [esp+0D8h+var_D4]
0x6B2802: fld     dword ptr [esp+0D8h+var_D0]
0x6B2806: fst     [esp+0D8h+var_A8]
0x6B280A: fadd    st, st(1)
0x6B280C: fstp    [esp+0D8h+var_88]
0x6B2810: fsubr   [esp+0D8h+var_A8]
0x6B2814: fstp    [esp+0D8h+var_74]
0x6B2818: fsubrp  st(1), st
0x6B281A: fstp    dword ptr [esp+0D8h+var_D0]
0x6B281E: fld     [esp+0D8h+var_40]
0x6B2825: fsub    [esp+0D8h+var_8]
0x6B282C: fmul    qword ptr ds:0A77BE0h
0x6B2832: fstp    [esp+0D8h+var_D4]
0x6B2836: fld     [esp+0D8h+var_D4]
0x6B283A: fld     dword ptr [esp+0D8h+var_D0]
0x6B283E: fld     st
0x6B2840: fadd    st, st(2)
0x6B2842: fstp    [esp+0D8h+var_84]
0x6B2846: fsubrp  st(1), st
0x6B2848: fstp    [esp+0D8h+var_78]
0x6B284C: fxch    st(2)
0x6B284E: fsubrp  st(3), st
0x6B2850: fxch    st(2)
0x6B2852: fstp    dword ptr [esp+0D8h+var_D0]
0x6B2856: fsubrp  st(1), st
0x6B2858: fmul    qword ptr ds:0A77B10h
0x6B285E: fstp    [esp+0D8h+var_D4]
0x6B2862: fld     [esp+0D8h+var_D4]
0x6B2866: fld     dword ptr [esp+0D8h+var_D0]
0x6B286A: lea     eax, [ecx+ecx*8]
0x6B286D: fld     st
0x6B286F: mov     ecx, [ebp+arg_4]
0x6B2872: fadd    st, st(2)
0x6B2874: shl     eax, 4
0x6B2877: add     eax, offset unk_B183D0
0x6B287C: fstp    [esp+0D8h+var_80]
0x6B2880: fsubrp  st(1), st
0x6B2882: fstp    [esp+0D8h+var_7C]
0x6B2886: fld     [esp+0D8h+var_7C]
0x6B288A: fld     st
0x6B288C: fchs
0x6B288E: fmul    dword ptr [eax]
0x6B2890: fstp    dword ptr [ecx]
0x6B2892: fld     dword ptr [eax+4]
0x6B2895: fld     [esp+0D8h+var_78]
0x6B2899: fld     st
0x6B289B: fchs
0x6B289D: fmulp   st(2), st
0x6B289F: fxch    st(1)
0x6B28A1: fstp    dword ptr [ecx+4]
0x6B28A4: fld     dword ptr [eax+8]
0x6B28A7: fld     [esp+0D8h+var_74]
0x6B28AB: fld     st
0x6B28AD: fchs
0x6B28AF: fmulp   st(2), st
0x6B28B1: fxch    st(1)
0x6B28B3: fstp    dword ptr [ecx+8]
0x6B28B6: fld     dword ptr [eax+0Ch]
0x6B28B9: fld     [esp+0D8h+var_70]
0x6B28BD: fld     st
0x6B28BF: fchs
0x6B28C1: fmulp   st(2), st
0x6B28C3: fxch    st(1)
0x6B28C5: fstp    dword ptr [ecx+0Ch]
0x6B28C8: fld     dword ptr [eax+10h]
0x6B28CB: fld     [esp+0D8h+var_6C]
0x6B28CF: fld     st
0x6B28D1: fchs
0x6B28D3: fmulp   st(2), st
0x6B28D5: fxch    st(1)
0x6B28D7: fstp    dword ptr [ecx+10h]
0x6B28DA: fld     dword ptr [eax+14h]
0x6B28DD: fld     [esp+0D8h+var_68]
0x6B28E1: fld     st
0x6B28E3: fchs
0x6B28E5: fmulp   st(2), st
0x6B28E7: fxch    st(1)
0x6B28E9: fstp    dword ptr [ecx+14h]
0x6B28EC: fld     dword ptr [eax+18h]
0x6B28EF: fld     [esp+0D8h+var_64]
0x6B28F3: fchs
0x6B28F5: fmulp   st(1), st
0x6B28F7: fstp    dword ptr [ecx+18h]
0x6B28FA: fld     dword ptr [eax+1Ch]
0x6B28FD: fld     [esp+0D8h+var_60]
0x6B2901: fchs
0x6B2903: fmulp   st(1), st
0x6B2905: fstp    dword ptr [ecx+1Ch]
0x6B2908: fld     dword ptr [eax+20h]
0x6B290B: fld     [esp+0D8h+var_5C]
0x6B290F: fchs
0x6B2911: fmulp   st(1), st
0x6B2913: fstp    dword ptr [ecx+20h]
0x6B2916: fld     dword ptr [eax+24h]
0x6B2919: fmul    [esp+0D8h+var_5C]
0x6B291D: fstp    dword ptr [ecx+24h]
0x6B2920: fld     dword ptr [eax+28h]
0x6B2923: fmul    [esp+0D8h+var_60]
0x6B2927: fstp    dword ptr [ecx+28h]
0x6B292A: fld     dword ptr [eax+2Ch]
0x6B292D: fmul    [esp+0D8h+var_64]
0x6B2931: fstp    dword ptr [ecx+2Ch]
0x6B2934: fmul    dword ptr [eax+30h]
0x6B2937: fstp    dword ptr [ecx+30h]
0x6B293A: fmul    dword ptr [eax+34h]
0x6B293D: fstp    dword ptr [ecx+34h]
0x6B2940: fmul    dword ptr [eax+38h]
0x6B2943: fstp    dword ptr [ecx+38h]
0x6B2946: fmul    dword ptr [eax+3Ch]
0x6B2949: fstp    dword ptr [ecx+3Ch]
0x6B294C: fmul    dword ptr [eax+40h]
0x6B294F: fstp    dword ptr [ecx+40h]
0x6B2952: fmul    dword ptr [eax+44h]
0x6B2955: fstp    dword ptr [ecx+44h]
0x6B2958: fld     [esp+0D8h+var_80]
0x6B295C: fld     dword ptr [eax+48h]
0x6B295F: fmul    st, st(1)
0x6B2961: fstp    dword ptr [ecx+48h]
0x6B2964: fld     [esp+0D8h+var_84]
0x6B2968: fld     dword ptr [eax+4Ch]
0x6B296B: fmul    st, st(1)
0x6B296D: fstp    dword ptr [ecx+4Ch]
0x6B2970: fld     [esp+0D8h+var_88]
0x6B2974: fld     dword ptr [eax+50h]
0x6B2977: fmul    st, st(1)
0x6B2979: fstp    dword ptr [ecx+50h]
0x6B297C: fld     [esp+0D8h+var_8C]
0x6B2980: fld     dword ptr [eax+54h]
0x6B2983: fmul    st, st(1)
0x6B2985: fstp    dword ptr [ecx+54h]
0x6B2988: fld     [esp+0D8h+var_90]
0x6B298C: fld     dword ptr [eax+58h]
0x6B298F: fmul    st, st(1)
0x6B2991: fstp    dword ptr [ecx+58h]
0x6B2994: fld     [esp+0D8h+var_94]
0x6B2998: fld     dword ptr [eax+5Ch]
0x6B299B: fmul    st, st(1)
0x6B299D: fstp    dword ptr [ecx+5Ch]
0x6B29A0: fld     [esp+0D8h+var_98]
0x6B29A4: fst     [esp+0D8h+var_C0]
0x6B29A8: fmul    dword ptr [eax+60h]
0x6B29AB: fstp    dword ptr [ecx+60h]
0x6B29AE: fld     [esp+0D8h+var_9C]
0x6B29B2: fst     [esp+0D8h+var_58]
0x6B29B9: fmul    dword ptr [eax+64h]
0x6B29BC: fstp    dword ptr [ecx+64h]
0x6B29BF: fld     [esp+0D8h+var_A0]
0x6B29C3: fld     dword ptr [eax+68h]
0x6B29C6: fmul    st, st(1)
0x6B29C8: fstp    dword ptr [ecx+68h]
0x6B29CB: fmul    dword ptr [eax+6Ch]
0x6B29CE: fstp    dword ptr [ecx+6Ch]
0x6B29D1: fld     dword ptr [eax+70h]
0x6B29D4: fmul    [esp+0D8h+var_58]
0x6B29DB: fstp    dword ptr [ecx+70h]
0x6B29DE: fld     dword ptr [eax+74h]
0x6B29E1: fmul    [esp+0D8h+var_C0]
0x6B29E5: fstp    dword ptr [ecx+74h]
0x6B29E8: fmul    dword ptr [eax+78h]
0x6B29EB: fstp    dword ptr [ecx+78h]
0x6B29EE: fmul    dword ptr [eax+7Ch]
0x6B29F1: fstp    dword ptr [ecx+7Ch]
0x6B29F4: fmul    dword ptr [eax+80h]
0x6B29FA: fstp    dword ptr [ecx+80h]
0x6B2A00: fmul    dword ptr [eax+84h]
0x6B2A06: fstp    dword ptr [ecx+84h]
0x6B2A0C: fmul    dword ptr [eax+88h]
0x6B2A12: fstp    dword ptr [ecx+88h]
0x6B2A18: fmul    dword ptr [eax+8Ch]
0x6B2A1E: fstp    dword ptr [ecx+8Ch]
0x6B2A24: mov     esp, ebp
0x6B2A26: pop     ebp
0x6B2A27: retn    0Ch
