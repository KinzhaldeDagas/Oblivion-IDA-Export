0x6BFF30: sub     esp, 38h
0x6BFF33: mov     eax, [esp+38h+arg_0]
0x6BFF37: fld     dword ptr [ecx+4]
0x6BFF3A: fsub    dword ptr [eax]
0x6BFF3C: fstp    [esp+38h+var_30]
0x6BFF40: fld     dword ptr [ecx+8]
0x6BFF43: fsub    dword ptr [eax+4]
0x6BFF46: fstp    [esp+38h+var_2C]
0x6BFF4A: fld     dword ptr [ecx+0Ch]
0x6BFF4D: fsub    dword ptr [eax+8]
0x6BFF50: mov     eax, [esp+38h+arg_4]
0x6BFF54: fstp    [esp+38h+var_28]
0x6BFF58: fld     dword ptr [eax]
0x6BFF5A: fsub    dword ptr [ecx+4]
0x6BFF5D: fstp    [esp+38h+var_24]
0x6BFF61: fld     dword ptr [eax+4]
0x6BFF64: fsub    dword ptr [ecx+8]
0x6BFF67: fstp    [esp+38h+var_20]
0x6BFF6B: fld     dword ptr [eax+8]
0x6BFF6E: fsub    dword ptr [ecx+0Ch]
0x6BFF71: fstp    [esp+38h+var_1C]
0x6BFF75: fld     dword ptr [ecx+18h]
0x6BFF78: fld1
0x6BFF7A: fadd    st(1), st
0x6BFF7C: fxch    st(1)
0x6BFF7E: fstp    [esp+38h+arg_4]
0x6BFF82: fld     dword ptr [ecx+18h]
0x6BFF85: fsubr   st, st(1)
0x6BFF87: fstp    [esp+38h+var_34]
0x6BFF8B: fld     dword ptr [ecx+10h]
0x6BFF8E: fsubr   st, st(1)
0x6BFF90: fmul    qword ptr ds:0A2FAA0h
0x6BFF96: fstp    [esp+38h+var_38]
0x6BFF99: fld     dword ptr [ecx+14h]
0x6BFF9C: fadd    st, st(1)
0x6BFF9E: fstp    [esp+38h+arg_0]
0x6BFFA2: fld     [esp+38h+arg_0]
0x6BFFA6: fld     [esp+38h+var_38]
0x6BFFA9: fld     st
0x6BFFAB: fmulp   st(2), st
0x6BFFAD: fxch    st(1)
0x6BFFAF: fstp    [esp+38h+var_38]
0x6BFFB2: fld     dword ptr [ecx+14h]
0x6BFFB5: fsubp   st(2), st
0x6BFFB7: fxch    st(1)
0x6BFFB9: fstp    [esp+38h+arg_0]
0x6BFFBD: fmul    [esp+38h+arg_0]
0x6BFFC1: fstp    [esp+38h+arg_0]
0x6BFFC5: fld     [esp+38h+var_38]
0x6BFFC8: fld     st
0x6BFFCA: fld     [esp+38h+var_34]
0x6BFFCE: fld     st
0x6BFFD0: fmulp   st(2), st
0x6BFFD2: fxch    st(1)
0x6BFFD4: fstp    [esp+38h+var_34]
0x6BFFD8: fld     [esp+38h+var_24]
0x6BFFDC: fld     st
0x6BFFDE: fld     [esp+38h+var_34]
0x6BFFE2: fld     st
0x6BFFE4: fmulp   st(2), st
0x6BFFE6: fxch    st(1)
0x6BFFE8: fstp    [esp+38h+var_18]
0x6BFFEC: fld     [esp+38h+var_20]
0x6BFFF0: fld     st
0x6BFFF2: fmul    st, st(2)
0x6BFFF4: fstp    [esp+38h+var_14]
0x6BFFF8: fld     [esp+38h+var_1C]
0x6BFFFC: fld     st
0x6BFFFE: fmulp   st(3), st
0x6C0000: fxch    st(2)
0x6C0002: fstp    [esp+38h+var_10]
0x6C0006: fld     [esp+38h+arg_0]
0x6C000A: fmul    [esp+38h+arg_4]
0x6C000E: fstp    [esp+38h+var_34]
0x6C0012: fld     [esp+38h+var_34]
0x6C0016: fld     st
0x6C0018: fmul    [esp+38h+var_30]
0x6C001C: fstp    [esp+38h+var_24]
0x6C0020: fld     [esp+38h+var_2C]
0x6C0024: fmul    st, st(1)
0x6C0026: fstp    [esp+38h+var_20]
0x6C002A: fld     [esp+38h+var_28]
0x6C002E: fld     st
0x6C0030: fmulp   st(2), st
0x6C0032: fxch    st(1)
0x6C0034: fstp    [esp+38h+var_1C]
0x6C0038: fld     [esp+38h+var_24]
0x6C003C: fadd    [esp+38h+var_18]
0x6C0040: fstp    [esp+38h+var_C]
0x6C0044: mov     eax, [esp+38h+var_C]
0x6C0048: fld     [esp+38h+var_20]
0x6C004C: mov     [ecx+1Ch], eax
0x6C004F: fadd    [esp+38h+var_14]
0x6C0053: fstp    [esp+38h+var_8]
0x6C0057: mov     edx, [esp+38h+var_8]
0x6C005B: fld     [esp+38h+var_1C]
0x6C005F: mov     [ecx+20h], edx
0x6C0062: fadd    [esp+38h+var_10]
0x6C0066: fstp    [esp+38h+var_4]
0x6C006A: mov     eax, [esp+38h+var_4]
0x6C006E: fld     [esp+38h+arg_0]
0x6C0072: mov     [ecx+24h], eax
0x6C0075: fmulp   st(5), st
0x6C0077: fxch    st(4)
0x6C0079: fstp    [esp+38h+arg_0]
0x6C007D: fld     [esp+38h+arg_0]
0x6C0081: fld     st
0x6C0083: fmulp   st(4), st
0x6C0085: fxch    st(3)
0x6C0087: fstp    [esp+38h+var_18]
0x6C008B: fmul    st, st(2)
0x6C008D: fstp    [esp+38h+var_14]
0x6C0091: fmulp   st(1), st
0x6C0093: fstp    [esp+38h+var_10]
0x6C0097: fld     [esp+38h+arg_4]
0x6C009B: fmulp   st(2), st
0x6C009D: fxch    st(1)
0x6C009F: fstp    [esp+38h+arg_0]
0x6C00A3: fld     [esp+38h+var_30]
0x6C00A7: fld     [esp+38h+arg_0]
0x6C00AB: fld     st
0x6C00AD: fmulp   st(2), st
0x6C00AF: fxch    st(1)
0x6C00B1: fstp    [esp+38h+var_C]
0x6C00B5: fld     [esp+38h+var_2C]
0x6C00B9: fmul    st, st(1)
0x6C00BB: fstp    [esp+38h+var_8]
0x6C00BF: fmulp   st(1), st
0x6C00C1: fstp    [esp+38h+var_4]
0x6C00C5: fld     [esp+38h+var_C]
0x6C00C9: fadd    [esp+38h+var_18]
0x6C00CD: fstp    [esp+38h+var_24]
0x6C00D1: mov     edx, [esp+38h+var_24]
0x6C00D5: fld     [esp+38h+var_8]
0x6C00D9: mov     [ecx+28h], edx
0x6C00DC: fadd    [esp+38h+var_14]
0x6C00E0: fstp    [esp+38h+var_20]
0x6C00E4: mov     eax, [esp+38h+var_20]
0x6C00E8: fld     [esp+38h+var_4]
0x6C00EC: mov     [ecx+2Ch], eax
0x6C00EF: fadd    [esp+38h+var_10]
0x6C00F3: fstp    [esp+38h+var_1C]
0x6C00F7: mov     edx, [esp+38h+var_1C]
0x6C00FB: fld     [esp+38h+arg_8]
0x6C00FF: mov     [ecx+30h], edx
0x6C0102: fld     st
0x6C0104: fld     [esp+38h+arg_C]
0x6C0108: fld     st
0x6C010A: faddp   st(2), st
0x6C010C: fld     qword ptr ds:0A3D0C0h
0x6C0112: fdivrp  st(2), st
0x6C0114: fxch    st(1)
0x6C0116: fstp    [esp+38h+arg_0]
0x6C011A: fld     [esp+38h+arg_0]
0x6C011E: fld     st
0x6C0120: fmulp   st(3), st
0x6C0122: fxch    st(2)
0x6C0124: fstp    [esp+38h+arg_0]
0x6C0128: fld     dword ptr [ecx+1Ch]
0x6C012B: fld     [esp+38h+arg_0]
0x6C012F: fld     st
0x6C0131: fmulp   st(2), st
0x6C0133: fxch    st(1)
0x6C0135: fstp    dword ptr [ecx+1Ch]
0x6C0138: fld     dword ptr [ecx+20h]
0x6C013B: fmul    st, st(1)
0x6C013D: fstp    dword ptr [ecx+20h]
0x6C0140: fmul    dword ptr [ecx+24h]
0x6C0143: fstp    dword ptr [ecx+24h]
0x6C0146: fmulp   st(1), st
0x6C0148: fstp    [esp+38h+arg_0]
0x6C014C: fld     dword ptr [ecx+28h]
0x6C014F: fld     [esp+38h+arg_0]
0x6C0153: fld     st
0x6C0155: fmulp   st(2), st
0x6C0157: fxch    st(1)
0x6C0159: fstp    dword ptr [ecx+28h]
0x6C015C: fld     dword ptr [ecx+2Ch]
0x6C015F: fmul    st, st(1)
0x6C0161: fstp    dword ptr [ecx+2Ch]
0x6C0164: fmul    dword ptr [ecx+30h]
0x6C0167: fstp    dword ptr [ecx+30h]
0x6C016A: add     esp, 38h
0x6C016D: retn    10h
