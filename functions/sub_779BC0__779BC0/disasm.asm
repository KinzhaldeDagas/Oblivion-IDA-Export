0x779BC0: push    esi
0x779BC1: mov     esi, [esp+4+arg_8]
0x779BC5: mov     ecx, [esi+0Ch]
0x779BC8: push    edi
0x779BC9: mov     edi, [esp+8+arg_C]
0x779BCD: push    edi
0x779BCE: push    30000h
0x779BD3: push    0Bh
0x779BD5: call    sub_772FF0
0x779BDA: mov     ecx, [esi+0Ch]
0x779BDD: push    edi
0x779BDE: push    2
0x779BE0: push    18h
0x779BE2: mov     byte ptr [esi+5Ah], 1
0x779BE6: call    sub_772FF0
0x779BEB: mov     ecx, [esp+8+arg_0]
0x779BEF: mov     eax, [esp+8+arg_10]
0x779BF3: fld     dword ptr [ecx+4]
0x779BF6: fmul    dword ptr [eax+0A04h]
0x779BFC: fld     dword ptr [eax+0A00h]
0x779C02: fmul    dword ptr [ecx]
0x779C04: faddp   st(1), st
0x779C06: fld     dword ptr [eax+0A08h]
0x779C0C: fmul    dword ptr [ecx+8]
0x779C0F: faddp   st(1), st
0x779C11: fstp    dword ptr [esi+18h]
0x779C14: fld     dword ptr [ecx]
0x779C16: fmul    dword ptr [eax+0A10h]
0x779C1C: fld     dword ptr [ecx+4]
0x779C1F: fmul    dword ptr [eax+0A14h]
0x779C25: faddp   st(1), st
0x779C27: fld     dword ptr [ecx+8]
0x779C2A: fmul    dword ptr [eax+0A18h]
0x779C30: faddp   st(1), st
0x779C32: fstp    dword ptr [esi+28h]
0x779C35: fld     dword ptr [ecx]
0x779C37: fmul    dword ptr [eax+0A20h]
0x779C3D: fld     dword ptr [ecx+4]
0x779C40: fmul    dword ptr [eax+0A24h]
0x779C46: faddp   st(1), st
0x779C48: fld     dword ptr [ecx+8]
0x779C4B: fmul    dword ptr [eax+0A28h]
0x779C51: faddp   st(1), st
0x779C53: fstp    dword ptr [esi+38h]
0x779C56: fld     dword ptr [ecx+10h]
0x779C59: fmul    dword ptr [eax+0A04h]
0x779C5F: fld     dword ptr [eax+0A00h]
0x779C65: fmul    dword ptr [ecx+0Ch]
0x779C68: faddp   st(1), st
0x779C6A: fld     dword ptr [eax+0A08h]
0x779C70: fmul    dword ptr [ecx+14h]
0x779C73: faddp   st(1), st
0x779C75: fstp    dword ptr [esi+1Ch]
0x779C78: fld     dword ptr [ecx+10h]
0x779C7B: fmul    dword ptr [eax+0A14h]
0x779C81: fld     dword ptr [ecx+0Ch]
0x779C84: fmul    dword ptr [eax+0A10h]
0x779C8A: faddp   st(1), st
0x779C8C: fld     dword ptr [eax+0A18h]
0x779C92: fmul    dword ptr [ecx+14h]
0x779C95: faddp   st(1), st
0x779C97: fstp    dword ptr [esi+2Ch]
0x779C9A: fld     dword ptr [ecx+10h]
0x779C9D: fmul    dword ptr [eax+0A24h]
0x779CA3: fld     dword ptr [ecx+0Ch]
0x779CA6: fmul    dword ptr [eax+0A20h]
0x779CAC: faddp   st(1), st
0x779CAE: fld     dword ptr [eax+0A28h]
0x779CB4: fmul    dword ptr [ecx+14h]
0x779CB7: faddp   st(1), st
0x779CB9: fstp    dword ptr [esi+3Ch]
0x779CBC: fld     dword ptr [eax+0A00h]
0x779CC2: fmul    dword ptr [ecx+18h]
0x779CC5: fld     dword ptr [ecx+1Ch]
0x779CC8: fmul    dword ptr [eax+0A04h]
0x779CCE: faddp   st(1), st
0x779CD0: fld     dword ptr [ecx+20h]
0x779CD3: fmul    dword ptr [eax+0A08h]
0x779CD9: faddp   st(1), st
0x779CDB: fstp    dword ptr [esi+20h]
0x779CDE: fld     dword ptr [eax+0A14h]
0x779CE4: fmul    dword ptr [ecx+1Ch]
0x779CE7: pop     edi
0x779CE8: fld     dword ptr [ecx+18h]
0x779CEB: fmul    dword ptr [eax+0A10h]
0x779CF1: faddp   st(1), st
0x779CF3: fld     dword ptr [ecx+20h]
0x779CF6: fmul    dword ptr [eax+0A18h]
0x779CFC: faddp   st(1), st
0x779CFE: fstp    dword ptr [esi+30h]
0x779D01: fld     dword ptr [eax+0A24h]
0x779D07: fmul    dword ptr [ecx+1Ch]
0x779D0A: fld     dword ptr [ecx+18h]
0x779D0D: fmul    dword ptr [eax+0A20h]
0x779D13: faddp   st(1), st
0x779D15: fld     dword ptr [ecx+20h]
0x779D18: fmul    dword ptr [eax+0A28h]
0x779D1E: mov     eax, [esp+4+arg_4]
0x779D22: faddp   st(1), st
0x779D24: fstp    dword ptr [esi+40h]
0x779D27: fld     dword ptr [eax]
0x779D29: fstp    dword ptr [esi+48h]
0x779D2C: fld     dword ptr [eax+4]
0x779D2F: fstp    dword ptr [esi+4Ch]
0x779D32: fld     dword ptr [eax+8]
0x779D35: fstp    dword ptr [esi+50h]
0x779D38: fldz
0x779D3A: fst     dword ptr [esi+54h]
0x779D3D: fst     dword ptr [esi+44h]
0x779D40: fst     dword ptr [esi+34h]
0x779D43: fstp    dword ptr [esi+24h]
0x779D46: pop     esi
0x779D47: retn
