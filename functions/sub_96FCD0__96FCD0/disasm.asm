0x96FCD0: sub     esp, 1Ch
0x96FCD3: mov     eax, [esp+1Ch+arg_0]
0x96FCD7: mov     ecx, [esp+1Ch+arg_4]
0x96FCDB: fld     dword ptr [eax]
0x96FCDD: fsub    dword ptr [ecx]
0x96FCDF: fstp    [esp+1Ch+var_C]
0x96FCE3: fld     dword ptr [eax+4]
0x96FCE6: fsub    dword ptr [ecx+4]
0x96FCE9: fstp    [esp+1Ch+var_8]
0x96FCED: fld     dword ptr [eax+8]
0x96FCF0: fsub    dword ptr [ecx+8]
0x96FCF3: fstp    [esp+1Ch+var_4]
0x96FCF7: fld     dword ptr [eax+10h]
0x96FCFA: fmul    dword ptr [eax+10h]
0x96FCFD: fld     dword ptr [eax+0Ch]
0x96FD00: fmul    dword ptr [eax+0Ch]
0x96FD03: faddp   st(1), st
0x96FD05: fld     dword ptr [eax+14h]
0x96FD08: fmul    dword ptr [eax+14h]
0x96FD0B: faddp   st(1), st
0x96FD0D: fstp    [esp+1Ch+var_10]
0x96FD11: fld     dword ptr [ecx+10h]
0x96FD14: fmul    dword ptr [eax+10h]
0x96FD17: fld     dword ptr [ecx+0Ch]
0x96FD1A: fmul    dword ptr [eax+0Ch]
0x96FD1D: faddp   st(1), st
0x96FD1F: fld     dword ptr [ecx+14h]
0x96FD22: fmul    dword ptr [eax+14h]
0x96FD25: faddp   st(1), st
0x96FD27: fstp    [esp+1Ch+arg_0]
0x96FD2B: fld     [esp+1Ch+arg_0]
0x96FD2F: fchs
0x96FD31: fstp    [esp+1Ch+arg_4]
0x96FD35: fld     dword ptr [ecx+10h]
0x96FD38: fmul    dword ptr [ecx+10h]
0x96FD3B: fld     dword ptr [ecx+0Ch]
0x96FD3E: fmul    dword ptr [ecx+0Ch]
0x96FD41: faddp   st(1), st
0x96FD43: fld     dword ptr [ecx+14h]
0x96FD46: fmul    dword ptr [ecx+14h]
0x96FD49: faddp   st(1), st
0x96FD4B: fstp    [esp+1Ch+var_14]
0x96FD4F: fld     dword ptr [eax+10h]
0x96FD52: fld     [esp+1Ch+var_8]
0x96FD56: fld     st
0x96FD58: fmulp   st(2), st
0x96FD5A: fld     dword ptr [eax+0Ch]
0x96FD5D: fld     [esp+1Ch+var_C]
0x96FD61: fld     st
0x96FD63: fmulp   st(2), st
0x96FD65: fxch    st(3)
0x96FD67: faddp   st(1), st
0x96FD69: fld     dword ptr [eax+14h]
0x96FD6C: fld     [esp+1Ch+var_4]
0x96FD70: fld     st
0x96FD72: fmulp   st(2), st
0x96FD74: fxch    st(2)
0x96FD76: faddp   st(1), st
0x96FD78: fstp    [esp+1Ch+var_1C]
0x96FD7B: fld     dword ptr [ecx+10h]
0x96FD7E: fmul    st, st(2)
0x96FD80: fld     dword ptr [ecx+0Ch]
0x96FD83: fmul    st, st(4)
0x96FD85: faddp   st(1), st
0x96FD87: fld     dword ptr [ecx+14h]
0x96FD8A: fmul    st, st(2)
0x96FD8C: faddp   st(1), st
0x96FD8E: fstp    [esp+1Ch+arg_0]
0x96FD92: fld     [esp+1Ch+arg_0]
0x96FD96: fchs
0x96FD98: fstp    [esp+1Ch+var_18]
0x96FD9C: fld     st(2)
0x96FD9E: fmulp   st(3), st
0x96FDA0: fld     st(1)
0x96FDA2: fmulp   st(2), st
0x96FDA4: fxch    st(2)
0x96FDA6: faddp   st(1), st
0x96FDA8: fld     st(1)
0x96FDAA: fmulp   st(2), st
0x96FDAC: faddp   st(1), st
0x96FDAE: fstp    [esp+1Ch+arg_0]
0x96FDB2: fld     [esp+1Ch+arg_4]
0x96FDB6: fld     st
0x96FDB8: fld     [esp+1Ch+var_14]
0x96FDBC: fld     st
0x96FDBE: fld     [esp+1Ch+var_10]
0x96FDC2: fld     st
0x96FDC4: fmulp   st(2), st
0x96FDC6: fld     st(3)
0x96FDC8: fmulp   st(4), st
0x96FDCA: fxch    st(1)
0x96FDCC: fsubrp  st(3), st
0x96FDCE: fxch    st(2)
0x96FDD0: fstp    [esp+1Ch+arg_4]
0x96FDD4: fld     [esp+1Ch+arg_4]
0x96FDD8: fabs
0x96FDDA: fstp    [esp+1Ch+arg_4]
0x96FDDE: fld     [esp+1Ch+arg_4]
0x96FDE2: fstp    [esp+1Ch+arg_4]
0x96FDE6: fld     dword ptr [eax+10h]
0x96FDE9: fmul    dword ptr [ecx+14h]
0x96FDEC: fld     dword ptr [eax+14h]
0x96FDEF: fmul    dword ptr [ecx+10h]
0x96FDF2: fsubp   st(1), st
0x96FDF4: fstp    [esp+1Ch+var_C]
0x96FDF8: fld     dword ptr [ecx+0Ch]
0x96FDFB: fmul    dword ptr [eax+14h]
0x96FDFE: fld     dword ptr [eax+0Ch]
0x96FE01: fmul    dword ptr [ecx+14h]
0x96FE04: fsubp   st(1), st
0x96FE06: fstp    [esp+1Ch+var_8]
0x96FE0A: fld     dword ptr [eax+0Ch]
0x96FE0D: fmul    dword ptr [ecx+10h]
0x96FE10: fld     dword ptr [ecx+0Ch]
0x96FE13: fmul    dword ptr [eax+10h]
0x96FE16: fsubp   st(1), st
0x96FE18: fstp    [esp+1Ch+var_4]
0x96FE1C: fld     [esp+1Ch+var_8]
0x96FE20: fld     [esp+1Ch+var_C]
0x96FE24: fld     [esp+1Ch+var_4]
0x96FE28: fld     st(1)
0x96FE2A: fmulp   st(2), st
0x96FE2C: fld     st(2)
0x96FE2E: fmulp   st(3), st
0x96FE30: fxch    st(1)
0x96FE32: faddp   st(2), st
0x96FE34: fmul    st, st
0x96FE36: faddp   st(1), st
0x96FE38: fstp    [esp+1Ch+var_10]
0x96FE3C: fld     [esp+1Ch+var_10]
0x96FE40: fcomp   dword ptr ds:0A372CCh
0x96FE46: fnstsw  ax
0x96FE48: test    ah, 41h
0x96FE4B: jnz     loc_9706A9
0x96FE51: fld     [esp+1Ch+var_18]
0x96FE55: mov     ecx, [esp+1Ch+arg_8]
0x96FE59: fld     st
0x96FE5B: mov     edx, [esp+1Ch+arg_C]
0x96FE5F: fmul    st, st(4)
0x96FE61: fld     [esp+1Ch+var_1C]
0x96FE64: fld     st
0x96FE66: fmul    st, st(4)
0x96FE68: fsubp   st(2), st
0x96FE6A: fxch    st(1)
0x96FE6C: fstp    dword ptr [ecx]
0x96FE6E: fld     st
0x96FE70: fmul    st, st(5)
0x96FE72: fld     st(2)
0x96FE74: fmul    st, st(5)
0x96FE76: fsubp   st(1), st
0x96FE78: fstp    [esp+1Ch+var_18]
0x96FE7C: fld     [esp+1Ch+var_18]
0x96FE80: fst     dword ptr [edx]
0x96FE82: fldz
0x96FE84: fcom    dword ptr [ecx]
0x96FE86: fnstsw  ax
0x96FE88: test    ah, 41h
0x96FE8B: jp      loc_9703D3
0x96FE91: fstp    st(1)
0x96FE93: fld     dword ptr [ecx]
0x96FE95: fld     [esp+1Ch+arg_4]
0x96FE99: fcompp
0x96FE9B: fnstsw  ax
0x96FE9D: fld     [esp+1Ch+var_18]
0x96FEA1: fcom    st(1)
0x96FEA3: test    ah, 1
0x96FEA6: fnstsw  ax
0x96FEA8: jnz     loc_97007E
0x96FEAE: test    ah, 1
0x96FEB1: jnz     loc_96FFEC
0x96FEB7: fld     [esp+1Ch+arg_4]
0x96FEBB: fcompp
0x96FEBD: fnstsw  ax
0x96FEBF: test    ah, 1
0x96FEC2: jnz     short loc_96FF36
0x96FEC4: fstp    st
0x96FEC6: fld     [esp+1Ch+arg_4]
0x96FECA: fld1
0x96FECC: fdivrp  st(1), st
0x96FECE: fstp    [esp+1Ch+arg_4]
0x96FED2: fld     dword ptr [ecx]
0x96FED4: fld     [esp+1Ch+arg_4]
0x96FED8: fld     st
0x96FEDA: fmulp   st(2), st
0x96FEDC: fxch    st(1)
0x96FEDE: fstp    dword ptr [ecx]
0x96FEE0: fmul    dword ptr [edx]
0x96FEE2: fstp    [esp+1Ch+arg_4]
0x96FEE6: fld     [esp+1Ch+arg_4]
0x96FEEA: fst     dword ptr [edx]
0x96FEEC: fld     st
0x96FEEE: fmulp   st(4), st
0x96FEF0: fld     dword ptr [ecx]
0x96FEF2: fmul    st, st(6)
0x96FEF4: faddp   st(4), st
0x96FEF6: fld     qword ptr ds:0A3D0C0h
0x96FEFC: fmul    st(3), st
0x96FEFE: fxch    st(4)
0x96FF00: faddp   st(3), st
0x96FF02: fmulp   st(2), st
0x96FF04: fld     dword ptr [ecx]
0x96FF06: fmulp   st(4), st
0x96FF08: fld     dword ptr [edx]
0x96FF0A: fmulp   st(5), st
0x96FF0C: fxch    st(3)
0x96FF0E: faddp   st(4), st
0x96FF10: fxch    st(2)
0x96FF12: fmulp   st(1), st
0x96FF14: faddp   st(2), st
0x96FF16: fld     dword ptr [ecx]
0x96FF18: fmulp   st(2), st
0x96FF1A: faddp   st(1), st
0x96FF1C: fadd    [esp+1Ch+arg_0]
0x96FF20: fstp    [esp+1Ch+arg_0]
0x96FF24: fld     [esp+1Ch+arg_0]
0x96FF28: fabs
0x96FF2A: fstp    [esp+1Ch+arg_0]
0x96FF2E: fld     [esp+1Ch+arg_0]
0x96FF32: add     esp, 1Ch
0x96FF35: retn
0x96FF36: fld1
0x96FF38: fst     dword ptr [edx]
0x96FF3A: fxch    st(2)
0x96FF3C: faddp   st(6), st
0x96FF3E: fxch    st(5)
0x96FF40: fstp    [esp+1Ch+var_1C]
0x96FF43: fld     [esp+1Ch+var_1C]
0x96FF46: fcom    st(5)
0x96FF48: fnstsw  ax
0x96FF4A: test    ah, 1
0x96FF4D: jnz     short loc_96FF77
0x96FF4F: fstp    st
0x96FF51: fstp    st(3)
0x96FF53: fstp    st(2)
0x96FF55: fxch    st(2)
0x96FF57: fstp    dword ptr [ecx]
0x96FF59: fadd    st, st
0x96FF5B: faddp   st(1), st
0x96FF5D: fadd    [esp+1Ch+arg_0]
0x96FF61: fstp    [esp+1Ch+arg_0]
0x96FF65: fld     [esp+1Ch+arg_0]
0x96FF69: fabs
0x96FF6B: fstp    [esp+1Ch+arg_0]
0x96FF6F: fld     [esp+1Ch+arg_0]
0x96FF73: add     esp, 1Ch
0x96FF76: retn
0x96FF77: fstp    st(5)
0x96FF79: fld     st(4)
0x96FF7B: fchs
0x96FF7D: fstp    [esp+1Ch+arg_4]
0x96FF81: fld     [esp+1Ch+arg_4]
0x96FF85: fcom    st(4)
0x96FF87: fnstsw  ax
0x96FF89: test    ah, 1
0x96FF8C: jnz     short loc_96FFBA
0x96FF8E: fstp    st
0x96FF90: fstp    dword ptr [ecx]
0x96FF92: fxch    st(1)
0x96FF94: faddp   st(2), st
0x96FF96: fld     [esp+1Ch+arg_0]
0x96FF9A: faddp   st(2), st
0x96FF9C: faddp   st(2), st
0x96FF9E: fxch    st(1)
0x96FFA0: fadd    st, st
0x96FFA2: faddp   st(1), st
0x96FFA4: fstp    [esp+1Ch+arg_0]
0x96FFA8: fld     [esp+1Ch+arg_0]
0x96FFAC: fabs
0x96FFAE: fstp    [esp+1Ch+arg_0]
0x96FFB2: fld     [esp+1Ch+arg_0]
0x96FFB6: add     esp, 1Ch
0x96FFB9: retn
0x96FFBA: fstp    st(1)
0x96FFBC: fdivrp  st(3), st
0x96FFBE: fxch    st(2)
0x96FFC0: fstp    [esp+1Ch+arg_4]
0x96FFC4: fld     [esp+1Ch+arg_4]
0x96FFC8: fst     dword ptr [ecx]
0x96FFCA: fmulp   st(3), st
0x96FFCC: faddp   st(2), st
0x96FFCE: fadd    st, st
0x96FFD0: faddp   st(1), st
0x96FFD2: fadd    [esp+1Ch+arg_0]
0x96FFD6: fstp    [esp+1Ch+arg_0]
0x96FFDA: fld     [esp+1Ch+arg_0]
0x96FFDE: fabs
0x96FFE0: fstp    [esp+1Ch+arg_0]
0x96FFE4: fld     [esp+1Ch+arg_0]
0x96FFE8: add     esp, 1Ch
0x96FFEB: retn
0x96FFEC: fstp    st(4)
0x96FFEE: fstp    st(5)
0x96FFF0: fstp    st(1)
0x96FFF2: fstp    st(1)
0x96FFF4: fxch    st(2)
0x96FFF6: fst     dword ptr [edx]
0x96FFF8: fcom    st(2)
0x96FFFA: fnstsw  ax
0x96FFFC: test    ah, 41h
0x96FFFF: jp      short loc_970019
0x970001: fstp    st(2)
0x970003: fstp    st
0x970005: fstp    dword ptr [ecx]
0x970007: fld     [esp+1Ch+arg_0]
0x97000B: fabs
0x97000D: fstp    [esp+1Ch+arg_0]
0x970011: fld     [esp+1Ch+arg_0]
0x970015: add     esp, 1Ch
0x970018: retn
0x970019: fstp    st
0x97001B: fld     st(1)
0x97001D: fchs
0x97001F: fstp    [esp+1Ch+arg_4]
0x970023: fld     [esp+1Ch+arg_4]
0x970027: fcom    st(1)
0x970029: fnstsw  ax
0x97002B: test    ah, 1
0x97002E: jnz     short loc_970056
0x970030: fstp    st
0x970032: fld1
0x970034: fstp    dword ptr [ecx]
0x970036: fxch    st(1)
0x970038: fadd    st, st
0x97003A: faddp   st(1), st
0x97003C: fadd    [esp+1Ch+arg_0]
0x970040: fstp    [esp+1Ch+arg_0]
0x970044: fld     [esp+1Ch+arg_0]
0x970048: fabs
0x97004A: fstp    [esp+1Ch+arg_0]
0x97004E: fld     [esp+1Ch+arg_0]
0x970052: add     esp, 1Ch
0x970055: retn
0x970056: fdivrp  st(1), st
0x970058: fstp    [esp+1Ch+arg_4]
0x97005C: fld     [esp+1Ch+arg_4]
0x970060: fst     dword ptr [ecx]
0x970062: fmulp   st(1), st
0x970064: fadd    [esp+1Ch+arg_0]
0x970068: fstp    [esp+1Ch+arg_0]
0x97006C: fld     [esp+1Ch+arg_0]
0x970070: fabs
0x970072: fstp    [esp+1Ch+arg_0]
0x970076: fld     [esp+1Ch+arg_0]
0x97007A: add     esp, 1Ch
0x97007D: retn
0x97007E: test    ah, 1
0x970081: jnz     loc_9702A7
0x970087: fld     [esp+1Ch+arg_4]
0x97008B: fcompp
0x97008D: fnstsw  ax
0x97008F: test    ah, 1
0x970092: jnz     loc_970158
0x970098: fld1
0x97009A: fst     dword ptr [ecx]
0x97009C: fxch    st(3)
0x97009E: faddp   st(6), st
0x9700A0: fxch    st(5)
0x9700A2: fstp    [esp+1Ch+var_1C]
0x9700A5: fld     [esp+1Ch+var_1C]
0x9700A8: fcom    st(5)
0x9700AA: fnstsw  ax
0x9700AC: test    ah, 1
0x9700AF: jnz     short loc_9700DB
0x9700B1: fstp    st(3)
0x9700B3: fstp    st(2)
0x9700B5: fstp    st
0x9700B7: fxch    st(2)
0x9700B9: fstp    dword ptr [edx]
0x9700BB: fxch    st(1)
0x9700BD: fadd    st, st
0x9700BF: faddp   st(1), st
0x9700C1: fadd    [esp+1Ch+arg_0]
0x9700C5: fstp    [esp+1Ch+arg_0]
0x9700C9: fld     [esp+1Ch+arg_0]
0x9700CD: fabs
0x9700CF: fstp    [esp+1Ch+arg_0]
0x9700D3: fld     [esp+1Ch+arg_0]
0x9700D7: add     esp, 1Ch
0x9700DA: retn
0x9700DB: fstp    st(5)
0x9700DD: fld     st(4)
0x9700DF: fchs
0x9700E1: fstp    [esp+1Ch+arg_4]
0x9700E5: fld     [esp+1Ch+arg_4]
0x9700E9: fcom    st(3)
0x9700EB: fnstsw  ax
0x9700ED: test    ah, 1
0x9700F0: jnz     short loc_970120
0x9700F2: fstp    st
0x9700F4: fxch    st(1)
0x9700F6: fstp    dword ptr [edx]
0x9700F8: fxch    st(1)
0x9700FA: faddp   st(2), st
0x9700FC: fld     [esp+1Ch+arg_0]
0x970100: faddp   st(2), st
0x970102: faddp   st(2), st
0x970104: fxch    st(1)
0x970106: fadd    st, st
0x970108: faddp   st(1), st
0x97010A: fstp    [esp+1Ch+arg_0]
0x97010E: fld     [esp+1Ch+arg_0]
0x970112: fabs
0x970114: fstp    [esp+1Ch+arg_0]
0x970118: fld     [esp+1Ch+arg_0]
0x97011C: add     esp, 1Ch
0x97011F: retn
0x970120: fstp    st(2)
0x970122: fxch    st(1)
0x970124: fdivrp  st(2), st
0x970126: fxch    st(1)
0x970128: fstp    [esp+1Ch+arg_4]
0x97012C: fld     [esp+1Ch+arg_4]
0x970130: fst     dword ptr [edx]
0x970132: fmulp   st(3), st
0x970134: fxch    st(2)
0x970136: faddp   st(1), st
0x970138: fxch    st(1)
0x97013A: fadd    st, st
0x97013C: faddp   st(1), st
0x97013E: fadd    [esp+1Ch+arg_0]
0x970142: fstp    [esp+1Ch+arg_0]
0x970146: fld     [esp+1Ch+arg_0]
0x97014A: fabs
0x97014C: fstp    [esp+1Ch+arg_0]
0x970150: fld     [esp+1Ch+arg_0]
0x970154: add     esp, 1Ch
0x970157: retn
0x970158: fld     st(1)
0x97015A: fadd    st, st(6)
0x97015C: fstp    [esp+1Ch+var_1C]
0x97015F: fld     [esp+1Ch+var_1C]
0x970162: fchs
0x970164: fstp    [esp+1Ch+arg_4]
0x970168: fld     [esp+1Ch+arg_4]
0x97016C: fcomp   st(5)
0x97016E: fnstsw  ax
0x970170: test    ah, 41h
0x970173: jp      short loc_9701E5
0x970175: fstp    st(1)
0x970177: fstp    st(4)
0x970179: fld1
0x97017B: fstp    dword ptr [edx]
0x97017D: fld     [esp+1Ch+var_1C]
0x970180: fcom    st(4)
0x970182: fnstsw  ax
0x970184: test    ah, 1
0x970187: jnz     short loc_9701AF
0x970189: fstp    st(3)
0x97018B: fstp    st(2)
0x97018D: fxch    st(2)
0x97018F: fstp    dword ptr [ecx]
0x970191: fadd    st, st
0x970193: faddp   st(1), st
0x970195: fadd    [esp+1Ch+arg_0]
0x970199: fstp    [esp+1Ch+arg_0]
0x97019D: fld     [esp+1Ch+arg_0]
0x9701A1: fabs
0x9701A3: fstp    [esp+1Ch+arg_0]
0x9701A7: fld     [esp+1Ch+arg_0]
0x9701AB: add     esp, 1Ch
0x9701AE: retn
0x9701AF: fstp    st(4)
0x9701B1: fld     [esp+1Ch+arg_4]
0x9701B5: fdivrp  st(3), st
0x9701B7: fxch    st(2)
0x9701B9: fstp    [esp+1Ch+arg_4]
0x9701BD: fld     [esp+1Ch+arg_4]
0x9701C1: fst     dword ptr [ecx]
0x9701C3: fmulp   st(3), st
0x9701C5: faddp   st(2), st
0x9701C7: fadd    st, st
0x9701C9: faddp   st(1), st
0x9701CB: fadd    [esp+1Ch+arg_0]
0x9701CF: fstp    [esp+1Ch+arg_0]
0x9701D3: fld     [esp+1Ch+arg_0]
0x9701D7: fabs
0x9701D9: fstp    [esp+1Ch+arg_0]
0x9701DD: fld     [esp+1Ch+arg_0]
0x9701E1: add     esp, 1Ch
0x9701E4: retn
0x9701E5: fld1
0x9701E7: fst     dword ptr [ecx]
0x9701E9: fxch    st(3)
0x9701EB: faddp   st(6), st
0x9701ED: fxch    st(5)
0x9701EF: fstp    [esp+1Ch+var_1C]
0x9701F2: fld     [esp+1Ch+var_1C]
0x9701F5: fld     st
0x9701F7: fchs
0x9701F9: fstp    [esp+1Ch+arg_4]
0x9701FD: fld     [esp+1Ch+arg_4]
0x970201: fcomp   st(4)
0x970203: fnstsw  ax
0x970205: test    ah, 1
0x970208: jnz     short loc_970238
0x97020A: fstp    st(5)
0x97020C: fxch    st(1)
0x97020E: fstp    dword ptr [edx]
0x970210: fxch    st(1)
0x970212: faddp   st(2), st
0x970214: fld     [esp+1Ch+arg_0]
0x970218: faddp   st(2), st
0x97021A: faddp   st(2), st
0x97021C: fxch    st(1)
0x97021E: fadd    st, st
0x970220: faddp   st(1), st
0x970222: fstp    [esp+1Ch+arg_0]
0x970226: fld     [esp+1Ch+arg_0]
0x97022A: fabs
0x97022C: fstp    [esp+1Ch+arg_0]
0x970230: fld     [esp+1Ch+arg_0]
0x970234: add     esp, 1Ch
0x970237: retn
0x970238: fstp    st(2)
0x97023A: fxch    st(1)
0x97023C: fcom    st(4)
0x97023E: fnstsw  ax
0x970240: test    ah, 41h
0x970243: jnz     short loc_97026D
0x970245: fstp    st(2)
0x970247: fstp    st(1)
0x970249: fxch    st(2)
0x97024B: fstp    dword ptr [edx]
0x97024D: fxch    st(1)
0x97024F: fadd    st, st
0x970251: faddp   st(1), st
0x970253: fadd    [esp+1Ch+arg_0]
0x970257: fstp    [esp+1Ch+arg_0]
0x97025B: fld     [esp+1Ch+arg_0]
0x97025F: fabs
0x970261: fstp    [esp+1Ch+arg_0]
0x970265: fld     [esp+1Ch+arg_0]
0x970269: add     esp, 1Ch
0x97026C: retn
0x97026D: fstp    st(4)
0x97026F: fld     [esp+1Ch+arg_4]
0x970273: fdivrp  st(2), st
0x970275: fxch    st(1)
0x970277: fstp    [esp+1Ch+arg_4]
0x97027B: fld     [esp+1Ch+arg_4]
0x97027F: fst     dword ptr [edx]
0x970281: fmulp   st(3), st
0x970283: fxch    st(2)
0x970285: faddp   st(1), st
0x970287: fxch    st(1)
0x970289: fadd    st, st
0x97028B: faddp   st(1), st
0x97028D: fadd    [esp+1Ch+arg_0]
0x970291: fstp    [esp+1Ch+arg_0]
0x970295: fld     [esp+1Ch+arg_0]
0x970299: fabs
0x97029B: fstp    [esp+1Ch+arg_0]
0x97029F: fld     [esp+1Ch+arg_0]
0x9702A3: add     esp, 1Ch
0x9702A6: retn
0x9702A7: fstp    st
0x9702A9: fld     st(1)
0x9702AB: fchs
0x9702AD: fstp    [esp+1Ch+arg_4]
0x9702B1: fld     [esp+1Ch+arg_4]
0x9702B5: fcomp   st(5)
0x9702B7: fnstsw  ax
0x9702B9: test    ah, 5
0x9702BC: jp      short loc_970313
0x9702BE: fstp    st(3)
0x9702C0: fstp    st(4)
0x9702C2: fstp    st
0x9702C4: fst     dword ptr [edx]
0x9702C6: fcom    st(2)
0x9702C8: fnstsw  ax
0x9702CA: test    ah, 41h
0x9702CD: jp      short loc_9702E7
0x9702CF: fstp    st(2)
0x9702D1: fstp    st
0x9702D3: fstp    dword ptr [ecx]
0x9702D5: fld     [esp+1Ch+arg_0]
0x9702D9: fabs
0x9702DB: fstp    [esp+1Ch+arg_0]
0x9702DF: fld     [esp+1Ch+arg_0]
0x9702E3: add     esp, 1Ch
0x9702E6: retn
0x9702E7: fstp    st
0x9702E9: fdivr   [esp+1Ch+arg_4]
0x9702ED: fstp    [esp+1Ch+arg_4]
0x9702F1: fld     [esp+1Ch+arg_4]
0x9702F5: fst     dword ptr [ecx]
0x9702F7: fmulp   st(1), st
0x9702F9: fadd    [esp+1Ch+arg_0]
0x9702FD: fstp    [esp+1Ch+arg_0]
0x970301: fld     [esp+1Ch+arg_0]
0x970305: fabs
0x970307: fstp    [esp+1Ch+arg_0]
0x97030B: fld     [esp+1Ch+arg_0]
0x97030F: add     esp, 1Ch
0x970312: retn
0x970313: fld1
0x970315: fst     dword ptr [ecx]
0x970317: fxch    st(3)
0x970319: faddp   st(6), st
0x97031B: fxch    st(5)
0x97031D: fstp    [esp+1Ch+var_1C]
0x970320: fld     [esp+1Ch+var_1C]
0x970323: fcom    st(5)
0x970325: fnstsw  ax
0x970327: test    ah, 1
0x97032A: jnz     short loc_970356
0x97032C: fstp    st(3)
0x97032E: fstp    st(2)
0x970330: fstp    st
0x970332: fxch    st(2)
0x970334: fstp    dword ptr [edx]
0x970336: fxch    st(1)
0x970338: fadd    st, st
0x97033A: faddp   st(1), st
0x97033C: fadd    [esp+1Ch+arg_0]
0x970340: fstp    [esp+1Ch+arg_0]
0x970344: fld     [esp+1Ch+arg_0]
0x970348: fabs
0x97034A: fstp    [esp+1Ch+arg_0]
0x97034E: fld     [esp+1Ch+arg_0]
0x970352: add     esp, 1Ch
0x970355: retn
0x970356: fstp    st(5)
0x970358: fld     st(4)
0x97035A: fchs
0x97035C: fstp    [esp+1Ch+arg_4]
0x970360: fld     [esp+1Ch+arg_4]
0x970364: fcom    st(3)
0x970366: fnstsw  ax
0x970368: test    ah, 1
0x97036B: jnz     short loc_97039B
0x97036D: fstp    st
0x97036F: fxch    st(1)
0x970371: fstp    dword ptr [edx]
0x970373: fxch    st(1)
0x970375: faddp   st(2), st
0x970377: fld     [esp+1Ch+arg_0]
0x97037B: faddp   st(2), st
0x97037D: faddp   st(2), st
0x97037F: fxch    st(1)
0x970381: fadd    st, st
0x970383: faddp   st(1), st
0x970385: fstp    [esp+1Ch+arg_0]
0x970389: fld     [esp+1Ch+arg_0]
0x97038D: fabs
0x97038F: fstp    [esp+1Ch+arg_0]
0x970393: fld     [esp+1Ch+arg_0]
0x970397: add     esp, 1Ch
0x97039A: retn
0x97039B: fstp    st(2)
0x97039D: fxch    st(1)
0x97039F: fdivrp  st(2), st
0x9703A1: fxch    st(1)
0x9703A3: fstp    [esp+1Ch+arg_4]
0x9703A7: fld     [esp+1Ch+arg_4]
0x9703AB: fst     dword ptr [edx]
0x9703AD: fmulp   st(3), st
0x9703AF: fxch    st(2)
0x9703B1: faddp   st(1), st
0x9703B3: fxch    st(1)
0x9703B5: fadd    st, st
0x9703B7: faddp   st(1), st
0x9703B9: fadd    [esp+1Ch+arg_0]
0x9703BD: fstp    [esp+1Ch+arg_0]
0x9703C1: fld     [esp+1Ch+arg_0]
0x9703C5: fabs
0x9703C7: fstp    [esp+1Ch+arg_0]
0x9703CB: fld     [esp+1Ch+arg_0]
0x9703CF: add     esp, 1Ch
0x9703D2: retn
0x9703D3: fcom    st(1)
0x9703D5: fnstsw  ax
0x9703D7: test    ah, 41h
0x9703DA: jp      loc_9705A3
0x9703E0: fld     [esp+1Ch+arg_4]
0x9703E4: fcomp   st(2)
0x9703E6: fnstsw  ax
0x9703E8: fstp    st(1)
0x9703EA: test    ah, 1
0x9703ED: jnz     loc_970483
0x9703F3: fstp    st(1)
0x9703F5: fstp    st(3)
0x9703F7: fstp    st(3)
0x9703F9: fxch    st(1)
0x9703FB: fst     dword ptr [ecx]
0x9703FD: fcom    st(2)
0x9703FF: fnstsw  ax
0x970401: test    ah, 41h
0x970404: jp      short loc_97041E
0x970406: fstp    st(1)
0x970408: fstp    st(1)
0x97040A: fstp    dword ptr [edx]
0x97040C: fld     [esp+1Ch+arg_0]
0x970410: fabs
0x970412: fstp    [esp+1Ch+arg_0]
0x970416: fld     [esp+1Ch+arg_0]
0x97041A: add     esp, 1Ch
0x97041D: retn
0x97041E: fstp    st
0x970420: fld     st(1)
0x970422: fchs
0x970424: fstp    [esp+1Ch+arg_4]
0x970428: fld     [esp+1Ch+arg_4]
0x97042C: fcom    st(1)
0x97042E: fnstsw  ax
0x970430: test    ah, 1
0x970433: jnz     short loc_97045B
0x970435: fstp    st
0x970437: fld1
0x970439: fstp    dword ptr [edx]
0x97043B: fxch    st(1)
0x97043D: fadd    st, st
0x97043F: faddp   st(1), st
0x970441: fadd    [esp+1Ch+arg_0]
0x970445: fstp    [esp+1Ch+arg_0]
0x970449: fld     [esp+1Ch+arg_0]
0x97044D: fabs
0x97044F: fstp    [esp+1Ch+arg_0]
0x970453: fld     [esp+1Ch+arg_0]
0x970457: add     esp, 1Ch
0x97045A: retn
0x97045B: fdivrp  st(1), st
0x97045D: fstp    [esp+1Ch+arg_4]
0x970461: fld     [esp+1Ch+arg_4]
0x970465: fst     dword ptr [edx]
0x970467: fmulp   st(1), st
0x970469: fadd    [esp+1Ch+arg_0]
0x97046D: fstp    [esp+1Ch+arg_0]
0x970471: fld     [esp+1Ch+arg_0]
0x970475: fabs
0x970477: fstp    [esp+1Ch+arg_0]
0x97047B: fld     [esp+1Ch+arg_0]
0x97047F: add     esp, 1Ch
0x970482: retn
0x970483: fxch    st(1)
0x970485: faddp   st(5), st
0x970487: fxch    st(4)
0x970489: fstp    [esp+1Ch+var_1C]
0x97048C: fld     [esp+1Ch+var_1C]
0x97048F: fcom    st(4)
0x970491: fnstsw  ax
0x970493: test    ah, 5
0x970496: jp      short loc_970511
0x970498: fstp    st(4)
0x97049A: fld1
0x97049C: fst     dword ptr [edx]
0x97049E: fld     st(4)
0x9704A0: fchs
0x9704A2: fstp    [esp+1Ch+arg_4]
0x9704A6: fld     [esp+1Ch+arg_4]
0x9704AA: fcom    st(4)
0x9704AC: fnstsw  ax
0x9704AE: test    ah, 1
0x9704B1: jnz     short loc_9704DF
0x9704B3: fstp    st
0x9704B5: fstp    dword ptr [ecx]
0x9704B7: fxch    st(1)
0x9704B9: faddp   st(2), st
0x9704BB: fld     [esp+1Ch+arg_0]
0x9704BF: faddp   st(2), st
0x9704C1: faddp   st(2), st
0x9704C3: fxch    st(1)
0x9704C5: fadd    st, st
0x9704C7: faddp   st(1), st
0x9704C9: fstp    [esp+1Ch+arg_0]
0x9704CD: fld     [esp+1Ch+arg_0]
0x9704D1: fabs
0x9704D3: fstp    [esp+1Ch+arg_0]
0x9704D7: fld     [esp+1Ch+arg_0]
0x9704DB: add     esp, 1Ch
0x9704DE: retn
0x9704DF: fstp    st(1)
0x9704E1: fdivrp  st(3), st
0x9704E3: fxch    st(2)
0x9704E5: fstp    [esp+1Ch+arg_4]
0x9704E9: fld     [esp+1Ch+arg_4]
0x9704ED: fst     dword ptr [ecx]
0x9704EF: fmulp   st(3), st
0x9704F1: faddp   st(2), st
0x9704F3: fadd    st, st
0x9704F5: faddp   st(1), st
0x9704F7: fadd    [esp+1Ch+arg_0]
0x9704FB: fstp    [esp+1Ch+arg_0]
0x9704FF: fld     [esp+1Ch+arg_0]
0x970503: fabs
0x970505: fstp    [esp+1Ch+arg_0]
0x970509: fld     [esp+1Ch+arg_0]
0x97050D: add     esp, 1Ch
0x970510: retn
0x970511: fstp    st
0x970513: fstp    st(2)
0x970515: fxch    st(2)
0x970517: fst     dword ptr [ecx]
0x970519: fld     st(1)
0x97051B: fadd    st, st(3)
0x97051D: fstp    [esp+1Ch+arg_4]
0x970521: fld     [esp+1Ch+arg_4]
0x970525: fcomp   st(1)
0x970527: fnstsw  ax
0x970529: test    ah, 41h
0x97052C: jp      short loc_970552
0x97052E: fstp    st
0x970530: fld1
0x970532: fstp    dword ptr [edx]
0x970534: fadd    st, st
0x970536: faddp   st(1), st
0x970538: fadd    [esp+1Ch+arg_0]
0x97053C: fstp    [esp+1Ch+arg_0]
0x970540: fld     [esp+1Ch+arg_0]
0x970544: fabs
0x970546: fstp    [esp+1Ch+arg_0]
0x97054A: fld     [esp+1Ch+arg_0]
0x97054E: add     esp, 1Ch
0x970551: retn
0x970552: fcom    st(1)
0x970554: fnstsw  ax
0x970556: test    ah, 41h
0x970559: jp      short loc_970573
0x97055B: fstp    st(2)
0x97055D: fstp    st
0x97055F: fstp    dword ptr [edx]
0x970561: fld     [esp+1Ch+arg_0]
0x970565: fabs
0x970567: fstp    [esp+1Ch+arg_0]
0x97056B: fld     [esp+1Ch+arg_0]
0x97056F: add     esp, 1Ch
0x970572: retn
0x970573: fstp    st
0x970575: fld     st
0x970577: fchs
0x970579: fdivrp  st(2), st
0x97057B: fxch    st(1)
0x97057D: fstp    [esp+1Ch+arg_4]
0x970581: fld     [esp+1Ch+arg_4]
0x970585: fst     dword ptr [edx]
0x970587: fmulp   st(1), st
0x970589: fadd    [esp+1Ch+arg_0]
0x97058D: fstp    [esp+1Ch+arg_0]
0x970591: fld     [esp+1Ch+arg_0]
0x970595: fabs
0x970597: fstp    [esp+1Ch+arg_0]
0x97059B: fld     [esp+1Ch+arg_0]
0x97059F: add     esp, 1Ch
0x9705A2: retn
0x9705A3: fstp    st(6)
0x9705A5: fstp    st
0x9705A7: fcom    st(4)
0x9705A9: fnstsw  ax
0x9705AB: test    ah, 5
0x9705AE: jp      short loc_97061B
0x9705B0: fstp    st(2)
0x9705B2: fstp    st
0x9705B4: fxch    st(2)
0x9705B6: fstp    dword ptr [edx]
0x9705B8: fld     st(1)
0x9705BA: fchs
0x9705BC: fstp    [esp+1Ch+arg_4]
0x9705C0: fld     [esp+1Ch+arg_4]
0x9705C4: fcom    st(1)
0x9705C6: fnstsw  ax
0x9705C8: test    ah, 1
0x9705CB: jnz     short loc_9705F3
0x9705CD: fstp    st
0x9705CF: fld1
0x9705D1: fstp    dword ptr [ecx]
0x9705D3: fxch    st(1)
0x9705D5: fadd    st, st
0x9705D7: faddp   st(1), st
0x9705D9: fadd    [esp+1Ch+arg_0]
0x9705DD: fstp    [esp+1Ch+arg_0]
0x9705E1: fld     [esp+1Ch+arg_0]
0x9705E5: fabs
0x9705E7: fstp    [esp+1Ch+arg_0]
0x9705EB: fld     [esp+1Ch+arg_0]
0x9705EF: add     esp, 1Ch
0x9705F2: retn
0x9705F3: fdivrp  st(1), st
0x9705F5: fstp    [esp+1Ch+arg_4]
0x9705F9: fld     [esp+1Ch+arg_4]
0x9705FD: fst     dword ptr [ecx]
0x9705FF: fmulp   st(1), st
0x970601: fadd    [esp+1Ch+arg_0]
0x970605: fstp    [esp+1Ch+arg_0]
0x970609: fld     [esp+1Ch+arg_0]
0x97060D: fabs
0x97060F: fstp    [esp+1Ch+arg_0]
0x970613: fld     [esp+1Ch+arg_0]
0x970617: add     esp, 1Ch
0x97061A: retn
0x97061B: fstp    st
0x97061D: fstp    st(2)
0x97061F: fxch    st(2)
0x970621: fst     dword ptr [ecx]
0x970623: fcom    st(1)
0x970625: fnstsw  ax
0x970627: test    ah, 41h
0x97062A: jp      short loc_970644
0x97062C: fstp    st(2)
0x97062E: fstp    st
0x970630: fstp    dword ptr [edx]
0x970632: fld     [esp+1Ch+arg_0]
0x970636: fabs
0x970638: fstp    [esp+1Ch+arg_0]
0x97063C: fld     [esp+1Ch+arg_0]
0x970640: add     esp, 1Ch
0x970643: retn
0x970644: fstp    st
0x970646: fld     st
0x970648: fchs
0x97064A: fstp    [esp+1Ch+arg_4]
0x97064E: fld     [esp+1Ch+arg_4]
0x970652: fcom    st(2)
0x970654: fnstsw  ax
0x970656: test    ah, 1
0x970659: jnz     short loc_97067F
0x97065B: fstp    st
0x97065D: fld1
0x97065F: fstp    dword ptr [edx]
0x970661: fadd    st, st
0x970663: faddp   st(1), st
0x970665: fadd    [esp+1Ch+arg_0]
0x970669: fstp    [esp+1Ch+arg_0]
0x97066D: fld     [esp+1Ch+arg_0]
0x970671: fabs
0x970673: fstp    [esp+1Ch+arg_0]
0x970677: fld     [esp+1Ch+arg_0]
0x97067B: add     esp, 1Ch
0x97067E: retn
0x97067F: fdivrp  st(2), st
0x970681: fxch    st(1)
0x970683: fstp    [esp+1Ch+arg_4]
0x970687: fld     [esp+1Ch+arg_4]
0x97068B: fst     dword ptr [edx]
0x97068D: fmulp   st(1), st
0x97068F: fadd    [esp+1Ch+arg_0]
0x970693: fstp    [esp+1Ch+arg_0]
0x970697: fld     [esp+1Ch+arg_0]
0x97069B: fabs
0x97069D: fstp    [esp+1Ch+arg_0]
0x9706A1: fld     [esp+1Ch+arg_0]
0x9706A5: add     esp, 1Ch
0x9706A8: retn
0x9706A9: fldz
0x9706AB: fcom    st(3)
0x9706AD: fnstsw  ax
0x9706AF: fld     [esp+1Ch+var_1C]
0x9706B2: test    ah, 5
0x9706B5: jp      loc_9707D6
0x9706BB: fcom    st(1)
0x9706BD: fnstsw  ax
0x9706BF: test    ah, 1
0x9706C2: jnz     short loc_9706EA
0x9706C4: mov     eax, [esp+1Ch+arg_8]
0x9706C8: fstp    st
0x9706CA: mov     ecx, [esp+1Ch+arg_C]
0x9706CE: fstp    st(2)
0x9706D0: fstp    st
0x9706D2: fstp    st(1)
0x9706D4: fst     dword ptr [eax]
0x9706D6: fstp    dword ptr [ecx]
0x9706D8: fld     [esp+1Ch+arg_0]
0x9706DC: fabs
0x9706DE: fstp    [esp+1Ch+arg_0]
0x9706E2: fld     [esp+1Ch+arg_0]
0x9706E6: add     esp, 1Ch
0x9706E9: retn
0x9706EA: fld     st
0x9706EC: fchs
0x9706EE: fstp    [esp+1Ch+arg_4]
0x9706F2: fld     [esp+1Ch+arg_4]
0x9706F6: fcom    st(4)
0x9706F8: fnstsw  ax
0x9706FA: test    ah, 41h
0x9706FD: mov     eax, [esp+1Ch+arg_8]
0x970701: jp      short loc_970731
0x970703: fstp    st(3)
0x970705: mov     edx, [esp+1Ch+arg_C]
0x970709: fstp    st(4)
0x97070B: fxch    st(1)
0x97070D: fdivrp  st(2), st
0x97070F: fxch    st(1)
0x970711: fstp    dword ptr [eax]
0x970713: fstp    dword ptr [edx]
0x970715: fmul    dword ptr [eax]
0x970717: fadd    [esp+1Ch+arg_0]
0x97071B: fstp    [esp+1Ch+arg_0]
0x97071F: fld     [esp+1Ch+arg_0]
0x970723: fabs
0x970725: fstp    [esp+1Ch+arg_0]
0x970729: fld     [esp+1Ch+arg_0]
0x97072D: add     esp, 1Ch
0x970730: retn
0x970731: fstp    st(2)
0x970733: fstp    st(1)
0x970735: fld1
0x970737: fst     dword ptr [eax]
0x970739: fld     st(1)
0x97073B: fadd    st, st(4)
0x97073D: fstp    [esp+1Ch+var_1C]
0x970740: fld     [esp+1Ch+var_1C]
0x970743: fchs
0x970745: fstp    [esp+1Ch+arg_4]
0x970749: fld     [esp+1Ch+arg_4]
0x97074D: fcom    st(5)
0x97074F: fnstsw  ax
0x970751: test    ah, 1
0x970754: jnz     short loc_97078A
0x970756: mov     ecx, [esp+1Ch+arg_C]
0x97075A: fstp    st
0x97075C: fstp    dword ptr [ecx]
0x97075E: faddp   st(3), st
0x970760: fld     [esp+1Ch+var_18]
0x970764: faddp   st(3), st
0x970766: fxch    st(2)
0x970768: fadd    st, st
0x97076A: fxch    st(2)
0x97076C: faddp   st(1), st
0x97076E: fadd    [esp+1Ch+arg_0]
0x970772: faddp   st(1), st
0x970774: fstp    [esp+1Ch+arg_0]
0x970778: fld     [esp+1Ch+arg_0]
0x97077C: fabs
0x97077E: fstp    [esp+1Ch+arg_0]
0x970782: fld     [esp+1Ch+arg_0]
0x970786: add     esp, 1Ch
0x970789: retn
0x97078A: fstp    st(1)
0x97078C: mov     edx, [esp+1Ch+arg_C]
0x970790: fdiv    st, st(4)
0x970792: fstp    [esp+1Ch+arg_4]
0x970796: fld     [esp+1Ch+arg_4]
0x97079A: fst     dword ptr [edx]
0x97079C: fld     [esp+1Ch+var_18]
0x9707A0: faddp   st(5), st
0x9707A2: fld     qword ptr ds:0A3D0C0h
0x9707A8: fmul    st(5), st
0x9707AA: fld     st(1)
0x9707AC: fmulp   st(4), st
0x9707AE: fxch    st(5)
0x9707B0: faddp   st(3), st
0x9707B2: fmulp   st(2), st
0x9707B4: fmulp   st(3), st
0x9707B6: fxch    st(2)
0x9707B8: faddp   st(1), st
0x9707BA: fadd    [esp+1Ch+arg_0]
0x9707BE: faddp   st(1), st
0x9707C0: fstp    [esp+1Ch+arg_0]
0x9707C4: fld     [esp+1Ch+arg_0]
0x9707C8: fabs
0x9707CA: fstp    [esp+1Ch+arg_0]
0x9707CE: fld     [esp+1Ch+arg_0]
0x9707D2: add     esp, 1Ch
0x9707D5: retn
0x9707D6: fld     st
0x9707D8: fchs
0x9707DA: fstp    [esp+1Ch+arg_4]
0x9707DE: fld     [esp+1Ch+arg_4]
0x9707E2: fcom    st(4)
0x9707E4: fnstsw  ax
0x9707E6: test    ah, 1
0x9707E9: jnz     short loc_97081F
0x9707EB: mov     eax, [esp+1Ch+arg_8]
0x9707EF: fstp    st(3)
0x9707F1: mov     ecx, [esp+1Ch+arg_C]
0x9707F5: fstp    st(4)
0x9707F7: fstp    st(1)
0x9707F9: fld1
0x9707FB: fstp    dword ptr [eax]
0x9707FD: fstp    dword ptr [ecx]
0x9707FF: fxch    st(1)
0x970801: fadd    st, st
0x970803: faddp   st(1), st
0x970805: fadd    [esp+1Ch+arg_0]
0x970809: fstp    [esp+1Ch+arg_0]
0x97080D: fld     [esp+1Ch+arg_0]
0x970811: fabs
0x970813: fstp    [esp+1Ch+arg_0]
0x970817: fld     [esp+1Ch+arg_0]
0x97081B: add     esp, 1Ch
0x97081E: retn
0x97081F: fxch    st(1)
0x970821: fcom    st(2)
0x970823: fnstsw  ax
0x970825: test    ah, 41h
0x970828: mov     eax, [esp+1Ch+arg_8]
0x97082C: jp      short loc_97085E
0x97082E: fstp    st(3)
0x970830: mov     edx, [esp+1Ch+arg_C]
0x970834: fstp    st(4)
0x970836: fxch    st(3)
0x970838: fdivrp  st(2), st
0x97083A: fxch    st(1)
0x97083C: fstp    dword ptr [eax]
0x97083E: fxch    st(1)
0x970840: fstp    dword ptr [edx]
0x970842: fmul    dword ptr [eax]
0x970844: fadd    [esp+1Ch+arg_0]
0x970848: fstp    [esp+1Ch+arg_0]
0x97084C: fld     [esp+1Ch+arg_0]
0x970850: fabs
0x970852: fstp    [esp+1Ch+arg_0]
0x970856: fld     [esp+1Ch+arg_0]
0x97085A: add     esp, 1Ch
0x97085D: retn
0x97085E: fstp    st(4)
0x970860: fxch    st(1)
0x970862: fstp    dword ptr [eax]
0x970864: fld     st(3)
0x970866: fchs
0x970868: fcomp   st(3)
0x97086A: fnstsw  ax
0x97086C: fstp    st(2)
0x97086E: test    ah, 41h
0x970871: jp      short loc_9708A1
0x970873: mov     ecx, [esp+1Ch+arg_C]
0x970877: fstp    st(2)
0x970879: fstp    st
0x97087B: fld1
0x97087D: fstp    dword ptr [ecx]
0x97087F: fld     [esp+1Ch+var_18]
0x970883: fadd    st, st
0x970885: faddp   st(1), st
0x970887: fadd    [esp+1Ch+arg_0]
0x97088B: fstp    [esp+1Ch+arg_0]
0x97088F: fld     [esp+1Ch+arg_0]
0x970893: fabs
0x970895: fstp    [esp+1Ch+arg_0]
0x970899: fld     [esp+1Ch+arg_0]
0x97089D: add     esp, 1Ch
0x9708A0: retn
0x9708A1: fxch    st(1)
0x9708A3: mov     edx, [esp+1Ch+arg_C]
0x9708A7: fdivrp  st(2), st
0x9708A9: fxch    st(1)
0x9708AB: fstp    [esp+1Ch+arg_4]
0x9708AF: fld     [esp+1Ch+arg_4]
0x9708B3: fst     dword ptr [edx]
0x9708B5: fld     st
0x9708B7: fmulp   st(2), st
0x9708B9: fld     [esp+1Ch+var_18]
0x9708BD: fadd    st, st
0x9708BF: faddp   st(2), st
0x9708C1: fmulp   st(1), st
0x9708C3: fadd    [esp+1Ch+arg_0]
0x9708C7: fstp    [esp+1Ch+arg_0]
0x9708CB: fld     [esp+1Ch+arg_0]
0x9708CF: fabs
0x9708D1: fstp    [esp+1Ch+arg_0]
0x9708D5: fld     [esp+1Ch+arg_0]
0x9708D9: add     esp, 1Ch
0x9708DC: retn
