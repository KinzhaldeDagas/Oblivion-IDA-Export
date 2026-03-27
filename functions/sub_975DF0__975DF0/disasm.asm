0x975DF0: sub     esp, 1Ch
0x975DF3: mov     eax, [esp+1Ch+arg_4]
0x975DF7: mov     ecx, [esp+1Ch+arg_0]
0x975DFB: fld     dword ptr [eax]
0x975DFD: fsub    dword ptr [ecx]
0x975DFF: fstp    [esp+1Ch+var_C]
0x975E03: fld     dword ptr [eax+4]
0x975E06: fsub    dword ptr [ecx+4]
0x975E09: fstp    [esp+1Ch+var_8]
0x975E0D: fld     dword ptr [eax+8]
0x975E10: fsub    dword ptr [ecx+8]
0x975E13: fstp    [esp+1Ch+var_4]
0x975E17: fld     dword ptr [eax+10h]
0x975E1A: fmul    dword ptr [eax+10h]
0x975E1D: fld     dword ptr [eax+0Ch]
0x975E20: fmul    dword ptr [eax+0Ch]
0x975E23: faddp   st(1), st
0x975E25: fld     dword ptr [eax+14h]
0x975E28: fmul    dword ptr [eax+14h]
0x975E2B: faddp   st(1), st
0x975E2D: fstp    [esp+1Ch+var_18]
0x975E31: fld     dword ptr [eax+1Ch]
0x975E34: fmul    dword ptr [eax+10h]
0x975E37: fld     dword ptr [eax+18h]
0x975E3A: fmul    dword ptr [eax+0Ch]
0x975E3D: faddp   st(1), st
0x975E3F: fld     dword ptr [eax+20h]
0x975E42: fmul    dword ptr [eax+14h]
0x975E45: faddp   st(1), st
0x975E47: fstp    [esp+1Ch+arg_0]
0x975E4B: fld     dword ptr [eax+1Ch]
0x975E4E: fmul    dword ptr [eax+1Ch]
0x975E51: fld     dword ptr [eax+18h]
0x975E54: fmul    dword ptr [eax+18h]
0x975E57: faddp   st(1), st
0x975E59: fld     dword ptr [eax+20h]
0x975E5C: fmul    dword ptr [eax+20h]
0x975E5F: faddp   st(1), st
0x975E61: fstp    [esp+1Ch+var_1C]
0x975E64: fld     dword ptr [eax+10h]
0x975E67: fld     [esp+1Ch+var_8]
0x975E6B: fld     st
0x975E6D: fmulp   st(2), st
0x975E6F: fld     dword ptr [eax+0Ch]
0x975E72: fld     [esp+1Ch+var_C]
0x975E76: fld     st
0x975E78: fmulp   st(2), st
0x975E7A: fxch    st(3)
0x975E7C: faddp   st(1), st
0x975E7E: fld     dword ptr [eax+14h]
0x975E81: fld     [esp+1Ch+var_4]
0x975E85: fld     st
0x975E87: fmulp   st(2), st
0x975E89: fxch    st(2)
0x975E8B: faddp   st(1), st
0x975E8D: fstp    [esp+1Ch+var_10]
0x975E91: fld     dword ptr [eax+1Ch]
0x975E94: fmul    st, st(2)
0x975E96: fld     dword ptr [eax+18h]
0x975E99: fmul    st, st(4)
0x975E9B: faddp   st(1), st
0x975E9D: fld     dword ptr [eax+20h]
0x975EA0: fmul    st, st(2)
0x975EA2: faddp   st(1), st
0x975EA4: fstp    [esp+1Ch+var_14]
0x975EA8: fld     st(2)
0x975EAA: fmulp   st(3), st
0x975EAC: fld     st(1)
0x975EAE: fmulp   st(2), st
0x975EB0: fxch    st(2)
0x975EB2: faddp   st(1), st
0x975EB4: fld     st(1)
0x975EB6: fmulp   st(2), st
0x975EB8: faddp   st(1), st
0x975EBA: fstp    [esp+1Ch+arg_4]
0x975EBE: fld     [esp+1Ch+arg_0]
0x975EC2: fld     st
0x975EC4: fld     [esp+1Ch+var_1C]
0x975EC7: fld     st
0x975EC9: fld     [esp+1Ch+var_18]
0x975ECD: fld     st
0x975ECF: fmulp   st(2), st
0x975ED1: fld     st(3)
0x975ED3: mov     ecx, [esp+1Ch+arg_8]
0x975ED7: fmulp   st(4), st
0x975ED9: mov     edx, [esp+1Ch+arg_C]
0x975EDD: fxch    st(1)
0x975EDF: fsubrp  st(3), st
0x975EE1: fxch    st(2)
0x975EE3: fstp    [esp+1Ch+arg_0]
0x975EE7: fld     [esp+1Ch+arg_0]
0x975EEB: fabs
0x975EED: fstp    [esp+1Ch+arg_0]
0x975EF1: fld     [esp+1Ch+arg_0]
0x975EF5: fstp    [esp+1Ch+arg_0]
0x975EF9: fld     [esp+1Ch+var_14]
0x975EFD: fld     st
0x975EFF: fmul    st, st(4)
0x975F01: fld     [esp+1Ch+var_10]
0x975F05: fld     st
0x975F07: fmul    st, st(4)
0x975F09: fsubp   st(2), st
0x975F0B: fxch    st(1)
0x975F0D: fstp    dword ptr [ecx]
0x975F0F: fld     st
0x975F11: fmul    st, st(5)
0x975F13: fld     st(2)
0x975F15: fmul    st, st(5)
0x975F17: fsubp   st(1), st
0x975F19: fstp    [esp+1Ch+arg_8]
0x975F1D: fld     [esp+1Ch+arg_8]
0x975F21: fst     dword ptr [edx]
0x975F23: fld     st
0x975F25: fadd    dword ptr [ecx]
0x975F27: fld     [esp+1Ch+arg_0]
0x975F2B: fcompp
0x975F2D: fnstsw  ax
0x975F2F: fldz
0x975F31: fcom    dword ptr [ecx]
0x975F33: test    ah, 1
0x975F36: fnstsw  ax
0x975F38: jnz     loc_9761F7
0x975F3E: test    ah, 41h
0x975F41: jnz     loc_9760E6
0x975F47: fstp    st(6)
0x975F49: fcomp   st(5)
0x975F4B: fnstsw  ax
0x975F4D: test    ah, 5
0x975F50: jp      loc_976058
0x975F56: fcom    st(4)
0x975F58: fnstsw  ax
0x975F5A: test    ah, 5
0x975F5D: jp      short loc_975FCA
0x975F5F: fstp    st(1)
0x975F61: fstp    st(1)
0x975F63: fxch    st(2)
0x975F65: fstp    dword ptr [edx]
0x975F67: fld     st(1)
0x975F69: fchs
0x975F6B: fstp    [esp+1Ch+arg_0]
0x975F6F: fld     [esp+1Ch+arg_0]
0x975F73: fcom    st(1)
0x975F75: fnstsw  ax
0x975F77: test    ah, 1
0x975F7A: jnz     short loc_975FA2
0x975F7C: fstp    st
0x975F7E: fld1
0x975F80: fstp    dword ptr [ecx]
0x975F82: fxch    st(1)
0x975F84: fadd    st, st
0x975F86: faddp   st(1), st
0x975F88: fadd    [esp+1Ch+arg_4]
0x975F8C: fstp    [esp+1Ch+arg_4]
0x975F90: fld     [esp+1Ch+arg_4]
0x975F94: fabs
0x975F96: fstp    [esp+1Ch+arg_4]
0x975F9A: fld     [esp+1Ch+arg_4]
0x975F9E: add     esp, 1Ch
0x975FA1: retn
0x975FA2: fdivrp  st(1), st
0x975FA4: fstp    [esp+1Ch+arg_0]
0x975FA8: fld     [esp+1Ch+arg_0]
0x975FAC: fst     dword ptr [ecx]
0x975FAE: fmulp   st(1), st
0x975FB0: fadd    [esp+1Ch+arg_4]
0x975FB4: fstp    [esp+1Ch+arg_4]
0x975FB8: fld     [esp+1Ch+arg_4]
0x975FBC: fabs
0x975FBE: fstp    [esp+1Ch+arg_4]
0x975FC2: fld     [esp+1Ch+arg_4]
0x975FC6: add     esp, 1Ch
0x975FC9: retn
0x975FCA: fstp    st(3)
0x975FCC: fstp    st(2)
0x975FCE: fxch    st(2)
0x975FD0: fst     dword ptr [ecx]
0x975FD2: fcom    st(1)
0x975FD4: fnstsw  ax
0x975FD6: test    ah, 41h
0x975FD9: jp      short loc_975FF3
0x975FDB: fstp    st(1)
0x975FDD: fstp    st(1)
0x975FDF: fstp    dword ptr [edx]
0x975FE1: fld     [esp+1Ch+arg_4]
0x975FE5: fabs
0x975FE7: fstp    [esp+1Ch+arg_4]
0x975FEB: fld     [esp+1Ch+arg_4]
0x975FEF: add     esp, 1Ch
0x975FF2: retn
0x975FF3: fstp    st
0x975FF5: fld     st
0x975FF7: fchs
0x975FF9: fstp    [esp+1Ch+arg_0]
0x975FFD: fld     [esp+1Ch+arg_0]
0x976001: fcom    st(2)
0x976003: fnstsw  ax
0x976005: test    ah, 1
0x976008: jnz     short loc_97602E
0x97600A: fstp    st
0x97600C: fld1
0x97600E: fstp    dword ptr [edx]
0x976010: fadd    st, st
0x976012: faddp   st(1), st
0x976014: fadd    [esp+1Ch+arg_4]
0x976018: fstp    [esp+1Ch+arg_4]
0x97601C: fld     [esp+1Ch+arg_4]
0x976020: fabs
0x976022: fstp    [esp+1Ch+arg_4]
0x976026: fld     [esp+1Ch+arg_4]
0x97602A: add     esp, 1Ch
0x97602D: retn
0x97602E: fdivrp  st(2), st
0x976030: fxch    st(1)
0x976032: fstp    [esp+1Ch+arg_0]
0x976036: fld     [esp+1Ch+arg_0]
0x97603A: fst     dword ptr [edx]
0x97603C: fmulp   st(1), st
0x97603E: fadd    [esp+1Ch+arg_4]
0x976042: fstp    [esp+1Ch+arg_4]
0x976046: fld     [esp+1Ch+arg_4]
0x97604A: fabs
0x97604C: fstp    [esp+1Ch+arg_4]
0x976050: fld     [esp+1Ch+arg_4]
0x976054: add     esp, 1Ch
0x976057: retn
0x976058: fstp    st(3)
0x97605A: fstp    st(2)
0x97605C: fxch    st(2)
0x97605E: fst     dword ptr [ecx]
0x976060: fcom    st(1)
0x976062: fnstsw  ax
0x976064: test    ah, 41h
0x976067: jp      short loc_976081
0x976069: fstp    st(1)
0x97606B: fstp    st(1)
0x97606D: fstp    dword ptr [edx]
0x97606F: fld     [esp+1Ch+arg_4]
0x976073: fabs
0x976075: fstp    [esp+1Ch+arg_4]
0x976079: fld     [esp+1Ch+arg_4]
0x97607D: add     esp, 1Ch
0x976080: retn
0x976081: fstp    st
0x976083: fld     st
0x976085: fchs
0x976087: fstp    [esp+1Ch+arg_0]
0x97608B: fld     [esp+1Ch+arg_0]
0x97608F: fcom    st(2)
0x976091: fnstsw  ax
0x976093: test    ah, 1
0x976096: jnz     short loc_9760BC
0x976098: fstp    st
0x97609A: fld1
0x97609C: fstp    dword ptr [edx]
0x97609E: fadd    st, st
0x9760A0: faddp   st(1), st
0x9760A2: fadd    [esp+1Ch+arg_4]
0x9760A6: fstp    [esp+1Ch+arg_4]
0x9760AA: fld     [esp+1Ch+arg_4]
0x9760AE: fabs
0x9760B0: fstp    [esp+1Ch+arg_4]
0x9760B4: fld     [esp+1Ch+arg_4]
0x9760B8: add     esp, 1Ch
0x9760BB: retn
0x9760BC: fdivrp  st(2), st
0x9760BE: fxch    st(1)
0x9760C0: fstp    [esp+1Ch+arg_0]
0x9760C4: fld     [esp+1Ch+arg_0]
0x9760C8: fst     dword ptr [edx]
0x9760CA: fmulp   st(1), st
0x9760CC: fadd    [esp+1Ch+arg_4]
0x9760D0: fstp    [esp+1Ch+arg_4]
0x9760D4: fld     [esp+1Ch+arg_4]
0x9760D8: fabs
0x9760DA: fstp    [esp+1Ch+arg_4]
0x9760DE: fld     [esp+1Ch+arg_4]
0x9760E2: add     esp, 1Ch
0x9760E5: retn
0x9760E6: fcom    st(1)
0x9760E8: fnstsw  ax
0x9760EA: fstp    st(1)
0x9760EC: test    ah, 41h
0x9760EF: jnz     loc_976185
0x9760F5: fstp    st(2)
0x9760F7: fstp    st(2)
0x9760F9: fstp    st(3)
0x9760FB: fxch    st(2)
0x9760FD: fst     dword ptr [edx]
0x9760FF: fcom    st(2)
0x976101: fnstsw  ax
0x976103: test    ah, 41h
0x976106: jp      short loc_976120
0x976108: fstp    st(1)
0x97610A: fstp    st(1)
0x97610C: fstp    dword ptr [ecx]
0x97610E: fld     [esp+1Ch+arg_4]
0x976112: fabs
0x976114: fstp    [esp+1Ch+arg_4]
0x976118: fld     [esp+1Ch+arg_4]
0x97611C: add     esp, 1Ch
0x97611F: retn
0x976120: fstp    st
0x976122: fld     st(1)
0x976124: fchs
0x976126: fstp    [esp+1Ch+arg_0]
0x97612A: fld     [esp+1Ch+arg_0]
0x97612E: fcom    st(1)
0x976130: fnstsw  ax
0x976132: test    ah, 1
0x976135: jnz     short loc_97615D
0x976137: fstp    st
0x976139: fld1
0x97613B: fstp    dword ptr [ecx]
0x97613D: fxch    st(1)
0x97613F: fadd    st, st
0x976141: faddp   st(1), st
0x976143: fadd    [esp+1Ch+arg_4]
0x976147: fstp    [esp+1Ch+arg_4]
0x97614B: fld     [esp+1Ch+arg_4]
0x97614F: fabs
0x976151: fstp    [esp+1Ch+arg_4]
0x976155: fld     [esp+1Ch+arg_4]
0x976159: add     esp, 1Ch
0x97615C: retn
0x97615D: fdivrp  st(1), st
0x97615F: fstp    [esp+1Ch+arg_0]
0x976163: fld     [esp+1Ch+arg_0]
0x976167: fst     dword ptr [ecx]
0x976169: fmulp   st(1), st
0x97616B: fadd    [esp+1Ch+arg_4]
0x97616F: fstp    [esp+1Ch+arg_4]
0x976173: fld     [esp+1Ch+arg_4]
0x976177: fabs
0x976179: fstp    [esp+1Ch+arg_4]
0x97617D: fld     [esp+1Ch+arg_4]
0x976181: add     esp, 1Ch
0x976184: retn
0x976185: fstp    st
0x976187: fld     [esp+1Ch+arg_0]
0x97618B: fld1
0x97618D: fdivrp  st(1), st
0x97618F: fstp    [esp+1Ch+arg_0]
0x976193: fld     dword ptr [ecx]
0x976195: fld     [esp+1Ch+arg_0]
0x976199: fld     st
0x97619B: fmulp   st(2), st
0x97619D: fxch    st(1)
0x97619F: fstp    dword ptr [ecx]
0x9761A1: fmul    dword ptr [edx]
0x9761A3: fstp    [esp+1Ch+arg_0]
0x9761A7: fld     [esp+1Ch+arg_0]
0x9761AB: fst     dword ptr [edx]
0x9761AD: fld     st
0x9761AF: fmulp   st(4), st
0x9761B1: fld     dword ptr [ecx]
0x9761B3: fmul    st, st(6)
0x9761B5: faddp   st(4), st
0x9761B7: fld     qword ptr ds:0A3D0C0h
0x9761BD: fmul    st(3), st
0x9761BF: fxch    st(4)
0x9761C1: faddp   st(3), st
0x9761C3: fmulp   st(2), st
0x9761C5: fld     dword ptr [ecx]
0x9761C7: fmulp   st(4), st
0x9761C9: fld     dword ptr [edx]
0x9761CB: fmulp   st(5), st
0x9761CD: fxch    st(3)
0x9761CF: faddp   st(4), st
0x9761D1: fxch    st(2)
0x9761D3: fmulp   st(1), st
0x9761D5: faddp   st(2), st
0x9761D7: fld     dword ptr [ecx]
0x9761D9: fmulp   st(2), st
0x9761DB: faddp   st(1), st
0x9761DD: fadd    [esp+1Ch+arg_4]
0x9761E1: fstp    [esp+1Ch+arg_4]
0x9761E5: fld     [esp+1Ch+arg_4]
0x9761E9: fabs
0x9761EB: fstp    [esp+1Ch+arg_4]
0x9761EF: fld     [esp+1Ch+arg_4]
0x9761F3: add     esp, 1Ch
0x9761F6: retn
0x9761F7: test    ah, 41h
0x9761FA: jnz     loc_97634E
0x976200: fstp    st(1)
0x976202: fstp    st
0x976204: fld     st
0x976206: fadd    st, st(5)
0x976208: fstp    [esp+1Ch+arg_0]
0x97620C: fld     st(1)
0x97620E: fadd    st, st(3)
0x976210: fstp    [esp+1Ch+arg_8]
0x976214: fld     [esp+1Ch+arg_8]
0x976218: fld     [esp+1Ch+arg_0]
0x97621C: fcomp   st(1)
0x97621E: fnstsw  ax
0x976220: test    ah, 5
0x976223: jp      loc_9762C4
0x976229: fsub    [esp+1Ch+arg_0]
0x97622D: fstp    [esp+1Ch+arg_8]
0x976231: fld     st(3)
0x976233: fld     qword ptr ds:0A3D0C0h
0x976239: fmul    st(6), st
0x97623B: fxch    st(1)
0x97623D: fsubrp  st(6), st
0x97623F: fld     st(3)
0x976241: faddp   st(6), st
0x976243: fxch    st(5)
0x976245: fstp    [esp+1Ch+arg_0]
0x976249: fld     [esp+1Ch+arg_8]
0x97624D: fld     [esp+1Ch+arg_0]
0x976251: fcomp   st(1)
0x976253: fnstsw  ax
0x976255: test    ah, 41h
0x976258: jp      short loc_976286
0x97625A: fstp    st(2)
0x97625C: fstp    st(2)
0x97625E: fstp    st
0x976260: fld1
0x976262: fstp    dword ptr [ecx]
0x976264: fldz
0x976266: fstp    dword ptr [edx]
0x976268: fmulp   st(2), st
0x97626A: faddp   st(1), st
0x97626C: fadd    [esp+1Ch+arg_4]
0x976270: fstp    [esp+1Ch+arg_4]
0x976274: fld     [esp+1Ch+arg_4]
0x976278: fabs
0x97627A: fstp    [esp+1Ch+arg_4]
0x97627E: fld     [esp+1Ch+arg_4]
0x976282: add     esp, 1Ch
0x976285: retn
0x976286: fstp    st(4)
0x976288: fstp    st
0x97628A: fld     st(2)
0x97628C: fdiv    [esp+1Ch+arg_0]
0x976290: fstp    [esp+1Ch+arg_0]
0x976294: fld     [esp+1Ch+arg_0]
0x976298: fst     dword ptr [ecx]
0x97629A: fld1
0x97629C: fsubrp  st(1), st
0x97629E: fstp    dword ptr [edx]
0x9762A0: fmulp   st(3), st
0x9762A2: faddp   st(2), st
0x9762A4: fld     [esp+1Ch+arg_4]
0x9762A8: faddp   st(2), st
0x9762AA: fmul    dword ptr [ecx]
0x9762AC: fsubp   st(1), st
0x9762AE: fstp    [esp+1Ch+arg_4]
0x9762B2: fld     [esp+1Ch+arg_4]
0x9762B6: fabs
0x9762B8: fstp    [esp+1Ch+arg_4]
0x9762BC: fld     [esp+1Ch+arg_4]
0x9762C0: add     esp, 1Ch
0x9762C3: retn
0x9762C4: fstp    st(5)
0x9762C6: fstp    st(3)
0x9762C8: fstp    st(2)
0x9762CA: fldz
0x9762CC: fst     dword ptr [ecx]
0x9762CE: fcom    st(3)
0x9762D0: fnstsw  ax
0x9762D2: fstp    st(3)
0x9762D4: test    ah, 1
0x9762D7: jnz     short loc_9762FD
0x9762D9: fstp    st(2)
0x9762DB: fld1
0x9762DD: fstp    dword ptr [edx]
0x9762DF: fadd    st, st
0x9762E1: faddp   st(1), st
0x9762E3: fadd    [esp+1Ch+arg_4]
0x9762E7: fstp    [esp+1Ch+arg_4]
0x9762EB: fld     [esp+1Ch+arg_4]
0x9762EF: fabs
0x9762F1: fstp    [esp+1Ch+arg_4]
0x9762F5: fld     [esp+1Ch+arg_4]
0x9762F9: add     esp, 1Ch
0x9762FC: retn
0x9762FD: fxch    st(1)
0x9762FF: fcom    st(2)
0x976301: fnstsw  ax
0x976303: test    ah, 1
0x976306: jnz     short loc_976320
0x976308: fstp    st
0x97630A: fstp    st
0x97630C: fstp    dword ptr [edx]
0x97630E: fld     [esp+1Ch+arg_4]
0x976312: fabs
0x976314: fstp    [esp+1Ch+arg_4]
0x976318: fld     [esp+1Ch+arg_4]
0x97631C: add     esp, 1Ch
0x97631F: retn
0x976320: fstp    st(2)
0x976322: fld     st(1)
0x976324: fchs
0x976326: fdivrp  st(1), st
0x976328: fstp    [esp+1Ch+arg_0]
0x97632C: fld     [esp+1Ch+arg_0]
0x976330: fst     dword ptr [edx]
0x976332: fmulp   st(1), st
0x976334: fadd    [esp+1Ch+arg_4]
0x976338: fstp    [esp+1Ch+arg_4]
0x97633C: fld     [esp+1Ch+arg_4]
0x976340: fabs
0x976342: fstp    [esp+1Ch+arg_4]
0x976346: fld     [esp+1Ch+arg_4]
0x97634A: add     esp, 1Ch
0x97634D: retn
0x97634E: fcompp
0x976350: fnstsw  ax
0x976352: fld     st(1)
0x976354: test    ah, 41h
0x976357: jnz     loc_9764AB
0x97635D: fadd    st, st(5)
0x97635F: fstp    [esp+1Ch+arg_0]
0x976363: fld     st
0x976365: fadd    st, st(4)
0x976367: fstp    [esp+1Ch+arg_8]
0x97636B: fld     [esp+1Ch+arg_8]
0x97636F: fld     [esp+1Ch+arg_0]
0x976373: fcomp   st(1)
0x976375: fnstsw  ax
0x976377: test    ah, 5
0x97637A: jp      loc_976421
0x976380: fsub    [esp+1Ch+arg_0]
0x976384: fstp    [esp+1Ch+arg_8]
0x976388: fld     st(3)
0x97638A: fld     qword ptr ds:0A3D0C0h
0x976390: fmul    st(6), st
0x976392: fxch    st(1)
0x976394: fsubrp  st(6), st
0x976396: fld     st(3)
0x976398: faddp   st(6), st
0x97639A: fxch    st(5)
0x97639C: fstp    [esp+1Ch+arg_0]
0x9763A0: fld     [esp+1Ch+arg_8]
0x9763A4: fld     [esp+1Ch+arg_0]
0x9763A8: fcomp   st(1)
0x9763AA: fnstsw  ax
0x9763AC: test    ah, 41h
0x9763AF: jp      short loc_9763DF
0x9763B1: fstp    st
0x9763B3: fstp    st(3)
0x9763B5: fstp    st(2)
0x9763B7: fld1
0x9763B9: fstp    dword ptr [edx]
0x9763BB: fldz
0x9763BD: fstp    dword ptr [ecx]
0x9763BF: fxch    st(1)
0x9763C1: fmulp   st(2), st
0x9763C3: faddp   st(1), st
0x9763C5: fadd    [esp+1Ch+arg_4]
0x9763C9: fstp    [esp+1Ch+arg_4]
0x9763CD: fld     [esp+1Ch+arg_4]
0x9763D1: fabs
0x9763D3: fstp    [esp+1Ch+arg_4]
0x9763D7: fld     [esp+1Ch+arg_4]
0x9763DB: add     esp, 1Ch
0x9763DE: retn
0x9763DF: fstp    st(2)
0x9763E1: fstp    st(2)
0x9763E3: fld     st
0x9763E5: fdiv    [esp+1Ch+arg_0]
0x9763E9: fstp    [esp+1Ch+arg_0]
0x9763ED: fld     [esp+1Ch+arg_0]
0x9763F1: fst     dword ptr [edx]
0x9763F3: fld1
0x9763F5: fsubrp  st(1), st
0x9763F7: fstp    dword ptr [ecx]
0x9763F9: fxch    st(1)
0x9763FB: fmulp   st(3), st
0x9763FD: fxch    st(2)
0x9763FF: faddp   st(1), st
0x976401: fadd    [esp+1Ch+arg_4]
0x976405: fld     dword ptr [edx]
0x976407: fmulp   st(2), st
0x976409: fsubrp  st(1), st
0x97640B: fstp    [esp+1Ch+arg_4]
0x97640F: fld     [esp+1Ch+arg_4]
0x976413: fabs
0x976415: fstp    [esp+1Ch+arg_4]
0x976419: fld     [esp+1Ch+arg_4]
0x97641D: add     esp, 1Ch
0x976420: retn
0x976421: fstp    st(2)
0x976423: fstp    st(2)
0x976425: fstp    st(3)
0x976427: fldz
0x976429: fst     dword ptr [edx]
0x97642B: fcom    st(3)
0x97642D: fnstsw  ax
0x97642F: fstp    st(3)
0x976431: test    ah, 1
0x976434: jnz     short loc_97645C
0x976436: fstp    st(2)
0x976438: fld1
0x97643A: fstp    dword ptr [ecx]
0x97643C: fxch    st(1)
0x97643E: fadd    st, st
0x976440: faddp   st(1), st
0x976442: fadd    [esp+1Ch+arg_4]
0x976446: fstp    [esp+1Ch+arg_4]
0x97644A: fld     [esp+1Ch+arg_4]
0x97644E: fabs
0x976450: fstp    [esp+1Ch+arg_4]
0x976454: fld     [esp+1Ch+arg_4]
0x976458: add     esp, 1Ch
0x97645B: retn
0x97645C: fcom    st(2)
0x97645E: fnstsw  ax
0x976460: test    ah, 1
0x976463: jnz     short loc_97647D
0x976465: fstp    st(1)
0x976467: fstp    st
0x976469: fstp    dword ptr [ecx]
0x97646B: fld     [esp+1Ch+arg_4]
0x97646F: fabs
0x976471: fstp    [esp+1Ch+arg_4]
0x976475: fld     [esp+1Ch+arg_4]
0x976479: add     esp, 1Ch
0x97647C: retn
0x97647D: fstp    st(2)
0x97647F: fld     st(1)
0x976481: fchs
0x976483: fdivrp  st(1), st
0x976485: fstp    [esp+1Ch+arg_0]
0x976489: fld     [esp+1Ch+arg_0]
0x97648D: fst     dword ptr [ecx]
0x97648F: fmulp   st(1), st
0x976491: fadd    [esp+1Ch+arg_4]
0x976495: fstp    [esp+1Ch+arg_4]
0x976499: fld     [esp+1Ch+arg_4]
0x97649D: fabs
0x97649F: fstp    [esp+1Ch+arg_4]
0x9764A3: fld     [esp+1Ch+arg_4]
0x9764A7: add     esp, 1Ch
0x9764AA: retn
0x9764AB: fadd    st, st(3)
0x9764AD: fld     st(1)
0x9764AF: fadd    st, st(6)
0x9764B1: fsubp   st(1), st
0x9764B3: fstp    [esp+1Ch+arg_8]
0x9764B7: fldz
0x9764B9: fld     [esp+1Ch+arg_8]
0x9764BD: fcom    st(1)
0x9764BF: fnstsw  ax
0x9764C1: test    ah, 41h
0x9764C4: jp      short loc_9764F6
0x9764C6: fstp    st(6)
0x9764C8: fstp    st(4)
0x9764CA: fstp    st
0x9764CC: fstp    st(3)
0x9764CE: fxch    st(1)
0x9764D0: fstp    dword ptr [ecx]
0x9764D2: fld1
0x9764D4: fstp    dword ptr [edx]
0x9764D6: fxch    st(1)
0x9764D8: fadd    st, st
0x9764DA: faddp   st(1), st
0x9764DC: fadd    [esp+1Ch+arg_4]
0x9764E0: fstp    [esp+1Ch+arg_4]
0x9764E4: fld     [esp+1Ch+arg_4]
0x9764E8: fabs
0x9764EA: fstp    [esp+1Ch+arg_4]
0x9764EE: fld     [esp+1Ch+arg_4]
0x9764F2: add     esp, 1Ch
0x9764F5: retn
0x9764F6: fstp    st(1)
0x9764F8: fld     st(4)
0x9764FA: fld     qword ptr ds:0A3D0C0h
0x976500: fmul    st(7), st
0x976502: fxch    st(1)
0x976504: fsubrp  st(7), st
0x976506: fld     st(4)
0x976508: faddp   st(7), st
0x97650A: fxch    st(6)
0x97650C: fstp    [esp+1Ch+arg_0]
0x976510: fld     [esp+1Ch+arg_0]
0x976514: fcomp   st(1)
0x976516: fnstsw  ax
0x976518: test    ah, 41h
0x97651B: jp      short loc_976549
0x97651D: fstp    st(2)
0x97651F: fstp    st(2)
0x976521: fstp    st
0x976523: fld1
0x976525: fstp    dword ptr [ecx]
0x976527: fldz
0x976529: fstp    dword ptr [edx]
0x97652B: fmulp   st(2), st
0x97652D: faddp   st(1), st
0x97652F: fadd    [esp+1Ch+arg_4]
0x976533: fstp    [esp+1Ch+arg_4]
0x976537: fld     [esp+1Ch+arg_4]
0x97653B: fabs
0x97653D: fstp    [esp+1Ch+arg_4]
0x976541: fld     [esp+1Ch+arg_4]
0x976545: add     esp, 1Ch
0x976548: retn
0x976549: fstp    st(4)
0x97654B: fstp    st
0x97654D: fld     st(2)
0x97654F: fdiv    [esp+1Ch+arg_0]
0x976553: fstp    [esp+1Ch+arg_0]
0x976557: fld     [esp+1Ch+arg_0]
0x97655B: fst     dword ptr [ecx]
0x97655D: fld1
0x97655F: fsubrp  st(1), st
0x976561: fstp    dword ptr [edx]
0x976563: fmulp   st(3), st
0x976565: faddp   st(2), st
0x976567: fld     [esp+1Ch+arg_4]
0x97656B: faddp   st(2), st
0x97656D: fmul    dword ptr [ecx]
0x97656F: fsubp   st(1), st
0x976571: fstp    [esp+1Ch+arg_4]
0x976575: fld     [esp+1Ch+arg_4]
0x976579: fabs
0x97657B: fstp    [esp+1Ch+arg_4]
0x97657F: fld     [esp+1Ch+arg_4]
0x976583: add     esp, 1Ch
0x976586: retn
