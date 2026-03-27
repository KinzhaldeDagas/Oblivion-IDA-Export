0x779EE0: push    esi
0x779EE1: mov     esi, [esp+4+arg_8]
0x779EE5: mov     ecx, [esi+0Ch]
0x779EE8: push    edi
0x779EE9: mov     edi, [esp+8+arg_C]
0x779EED: push    edi
0x779EEE: push    10000h
0x779EF3: push    0Bh
0x779EF5: call    sub_772FF0
0x779EFA: mov     ecx, [esi+0Ch]
0x779EFD: push    edi
0x779EFE: push    3
0x779F00: push    18h
0x779F02: mov     byte ptr [esi+5Ah], 1
0x779F06: call    sub_772FF0
0x779F0B: mov     ecx, [esp+8+arg_0]
0x779F0F: mov     eax, [esp+8+arg_10]
0x779F13: fld     dword ptr [ecx+4]
0x779F16: fmul    dword ptr [eax+0A04h]
0x779F1C: fld     dword ptr [eax+0A00h]
0x779F22: fmul    dword ptr [ecx]
0x779F24: faddp   st(1), st
0x779F26: fld     dword ptr [eax+0A08h]
0x779F2C: fmul    dword ptr [ecx+8]
0x779F2F: faddp   st(1), st
0x779F31: fstp    dword ptr [esi+18h]
0x779F34: fld     dword ptr [ecx]
0x779F36: fmul    dword ptr [eax+0A10h]
0x779F3C: fld     dword ptr [ecx+4]
0x779F3F: fmul    dword ptr [eax+0A14h]
0x779F45: faddp   st(1), st
0x779F47: fld     dword ptr [ecx+8]
0x779F4A: fmul    dword ptr [eax+0A18h]
0x779F50: faddp   st(1), st
0x779F52: fstp    dword ptr [esi+28h]
0x779F55: fld     dword ptr [ecx]
0x779F57: fmul    dword ptr [eax+0A20h]
0x779F5D: fld     dword ptr [ecx+4]
0x779F60: fmul    dword ptr [eax+0A24h]
0x779F66: faddp   st(1), st
0x779F68: fld     dword ptr [ecx+8]
0x779F6B: fmul    dword ptr [eax+0A28h]
0x779F71: faddp   st(1), st
0x779F73: fstp    dword ptr [esi+38h]
0x779F76: fld     dword ptr [ecx+10h]
0x779F79: fmul    dword ptr [eax+0A04h]
0x779F7F: fld     dword ptr [eax+0A00h]
0x779F85: fmul    dword ptr [ecx+0Ch]
0x779F88: faddp   st(1), st
0x779F8A: fld     dword ptr [eax+0A08h]
0x779F90: fmul    dword ptr [ecx+14h]
0x779F93: faddp   st(1), st
0x779F95: fstp    dword ptr [esi+1Ch]
0x779F98: fld     dword ptr [ecx+10h]
0x779F9B: fmul    dword ptr [eax+0A14h]
0x779FA1: fld     dword ptr [ecx+0Ch]
0x779FA4: fmul    dword ptr [eax+0A10h]
0x779FAA: faddp   st(1), st
0x779FAC: fld     dword ptr [eax+0A18h]
0x779FB2: fmul    dword ptr [ecx+14h]
0x779FB5: faddp   st(1), st
0x779FB7: fstp    dword ptr [esi+2Ch]
0x779FBA: fld     dword ptr [ecx+10h]
0x779FBD: fmul    dword ptr [eax+0A24h]
0x779FC3: fld     dword ptr [ecx+0Ch]
0x779FC6: fmul    dword ptr [eax+0A20h]
0x779FCC: faddp   st(1), st
0x779FCE: fld     dword ptr [eax+0A28h]
0x779FD4: fmul    dword ptr [ecx+14h]
0x779FD7: faddp   st(1), st
0x779FD9: fstp    dword ptr [esi+3Ch]
0x779FDC: fld     dword ptr [eax+0A00h]
0x779FE2: fmul    dword ptr [ecx+18h]
0x779FE5: fld     dword ptr [ecx+1Ch]
0x779FE8: fmul    dword ptr [eax+0A04h]
0x779FEE: faddp   st(1), st
0x779FF0: fld     dword ptr [ecx+20h]
0x779FF3: fmul    dword ptr [eax+0A08h]
0x779FF9: faddp   st(1), st
0x779FFB: fstp    dword ptr [esi+20h]
0x779FFE: fld     dword ptr [eax+0A14h]
0x77A004: fmul    dword ptr [ecx+1Ch]
0x77A007: pop     edi
0x77A008: fld     dword ptr [ecx+18h]
0x77A00B: fmul    dword ptr [eax+0A10h]
0x77A011: faddp   st(1), st
0x77A013: fld     dword ptr [ecx+20h]
0x77A016: fmul    dword ptr [eax+0A18h]
0x77A01C: faddp   st(1), st
0x77A01E: fstp    dword ptr [esi+30h]
0x77A021: fld     dword ptr [eax+0A24h]
0x77A027: fmul    dword ptr [ecx+1Ch]
0x77A02A: fld     dword ptr [ecx+18h]
0x77A02D: fmul    dword ptr [eax+0A20h]
0x77A033: faddp   st(1), st
0x77A035: fld     dword ptr [ecx+20h]
0x77A038: fmul    dword ptr [eax+0A28h]
0x77A03E: mov     eax, [esp+4+arg_4]
0x77A042: faddp   st(1), st
0x77A044: fstp    dword ptr [esi+40h]
0x77A047: fld     dword ptr [eax]
0x77A049: fstp    dword ptr [esi+48h]
0x77A04C: fld     dword ptr [eax+4]
0x77A04F: fstp    dword ptr [esi+4Ch]
0x77A052: fld     dword ptr [eax+8]
0x77A055: fstp    dword ptr [esi+50h]
0x77A058: fldz
0x77A05A: fst     dword ptr [esi+54h]
0x77A05D: fst     dword ptr [esi+44h]
0x77A060: fst     dword ptr [esi+34h]
0x77A063: fstp    dword ptr [esi+24h]
0x77A066: pop     esi
0x77A067: retn
