0x779D50: push    esi
0x779D51: mov     esi, [esp+4+arg_8]
0x779D55: mov     ecx, [esi+0Ch]
0x779D58: push    edi
0x779D59: mov     edi, [esp+8+arg_C]
0x779D5D: push    edi
0x779D5E: push    30000h
0x779D63: push    0Bh
0x779D65: call    sub_772FF0
0x779D6A: mov     ecx, [esi+0Ch]
0x779D6D: push    edi
0x779D6E: push    3
0x779D70: push    18h
0x779D72: mov     byte ptr [esi+5Ah], 1
0x779D76: call    sub_772FF0
0x779D7B: mov     ecx, [esp+8+arg_0]
0x779D7F: mov     eax, [esp+8+arg_10]
0x779D83: fld     dword ptr [ecx+4]
0x779D86: fmul    dword ptr [eax+0A04h]
0x779D8C: fld     dword ptr [eax+0A00h]
0x779D92: fmul    dword ptr [ecx]
0x779D94: faddp   st(1), st
0x779D96: fld     dword ptr [eax+0A08h]
0x779D9C: fmul    dword ptr [ecx+8]
0x779D9F: faddp   st(1), st
0x779DA1: fstp    dword ptr [esi+18h]
0x779DA4: fld     dword ptr [ecx]
0x779DA6: fmul    dword ptr [eax+0A10h]
0x779DAC: fld     dword ptr [ecx+4]
0x779DAF: fmul    dword ptr [eax+0A14h]
0x779DB5: faddp   st(1), st
0x779DB7: fld     dword ptr [ecx+8]
0x779DBA: fmul    dword ptr [eax+0A18h]
0x779DC0: faddp   st(1), st
0x779DC2: fstp    dword ptr [esi+28h]
0x779DC5: fld     dword ptr [ecx]
0x779DC7: fmul    dword ptr [eax+0A20h]
0x779DCD: fld     dword ptr [ecx+4]
0x779DD0: fmul    dword ptr [eax+0A24h]
0x779DD6: faddp   st(1), st
0x779DD8: fld     dword ptr [ecx+8]
0x779DDB: fmul    dword ptr [eax+0A28h]
0x779DE1: faddp   st(1), st
0x779DE3: fstp    dword ptr [esi+38h]
0x779DE6: fld     dword ptr [ecx+10h]
0x779DE9: fmul    dword ptr [eax+0A04h]
0x779DEF: fld     dword ptr [eax+0A00h]
0x779DF5: fmul    dword ptr [ecx+0Ch]
0x779DF8: faddp   st(1), st
0x779DFA: fld     dword ptr [eax+0A08h]
0x779E00: fmul    dword ptr [ecx+14h]
0x779E03: faddp   st(1), st
0x779E05: fstp    dword ptr [esi+1Ch]
0x779E08: fld     dword ptr [ecx+10h]
0x779E0B: fmul    dword ptr [eax+0A14h]
0x779E11: fld     dword ptr [ecx+0Ch]
0x779E14: fmul    dword ptr [eax+0A10h]
0x779E1A: faddp   st(1), st
0x779E1C: fld     dword ptr [eax+0A18h]
0x779E22: fmul    dword ptr [ecx+14h]
0x779E25: faddp   st(1), st
0x779E27: fstp    dword ptr [esi+2Ch]
0x779E2A: fld     dword ptr [ecx+10h]
0x779E2D: fmul    dword ptr [eax+0A24h]
0x779E33: fld     dword ptr [ecx+0Ch]
0x779E36: fmul    dword ptr [eax+0A20h]
0x779E3C: faddp   st(1), st
0x779E3E: fld     dword ptr [eax+0A28h]
0x779E44: fmul    dword ptr [ecx+14h]
0x779E47: faddp   st(1), st
0x779E49: fstp    dword ptr [esi+3Ch]
0x779E4C: fld     dword ptr [eax+0A00h]
0x779E52: fmul    dword ptr [ecx+18h]
0x779E55: fld     dword ptr [ecx+1Ch]
0x779E58: fmul    dword ptr [eax+0A04h]
0x779E5E: faddp   st(1), st
0x779E60: fld     dword ptr [ecx+20h]
0x779E63: fmul    dword ptr [eax+0A08h]
0x779E69: faddp   st(1), st
0x779E6B: fstp    dword ptr [esi+20h]
0x779E6E: fld     dword ptr [eax+0A14h]
0x779E74: fmul    dword ptr [ecx+1Ch]
0x779E77: pop     edi
0x779E78: fld     dword ptr [ecx+18h]
0x779E7B: fmul    dword ptr [eax+0A10h]
0x779E81: faddp   st(1), st
0x779E83: fld     dword ptr [ecx+20h]
0x779E86: fmul    dword ptr [eax+0A18h]
0x779E8C: faddp   st(1), st
0x779E8E: fstp    dword ptr [esi+30h]
0x779E91: fld     dword ptr [eax+0A24h]
0x779E97: fmul    dword ptr [ecx+1Ch]
0x779E9A: fld     dword ptr [ecx+18h]
0x779E9D: fmul    dword ptr [eax+0A20h]
0x779EA3: faddp   st(1), st
0x779EA5: fld     dword ptr [ecx+20h]
0x779EA8: fmul    dword ptr [eax+0A28h]
0x779EAE: mov     eax, [esp+4+arg_4]
0x779EB2: faddp   st(1), st
0x779EB4: fstp    dword ptr [esi+40h]
0x779EB7: fld     dword ptr [eax]
0x779EB9: fstp    dword ptr [esi+48h]
0x779EBC: fld     dword ptr [eax+4]
0x779EBF: fstp    dword ptr [esi+4Ch]
0x779EC2: fld     dword ptr [eax+8]
0x779EC5: fstp    dword ptr [esi+50h]
0x779EC8: fldz
0x779ECA: fst     dword ptr [esi+54h]
0x779ECD: fst     dword ptr [esi+44h]
0x779ED0: fst     dword ptr [esi+34h]
0x779ED3: fstp    dword ptr [esi+24h]
0x779ED6: pop     esi
0x779ED7: retn
