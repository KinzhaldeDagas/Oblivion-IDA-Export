0x7799C0: push    esi
0x7799C1: mov     esi, [esp+4+arg_8]
0x7799C5: mov     ecx, [esi+0Ch]
0x7799C8: push    edi
0x7799C9: mov     edi, [esp+8+arg_C]
0x7799CD: push    edi
0x7799CE: push    20000h
0x7799D3: push    0Bh
0x7799D5: call    sub_772FF0
0x7799DA: mov     eax, ds:0B4215Ch
0x7799DF: test    eax, eax
0x7799E1: jz      short loc_7799F0
0x7799E3: cmp     eax, 100h
0x7799E8: jz      short loc_7799F0
0x7799EA: mov     byte ptr [esi+5Ah], 1
0x7799EE: jmp     short loc_7799F4
0x7799F0: mov     byte ptr [esi+5Ah], 0
0x7799F4: mov     ecx, [esi+0Ch]
0x7799F7: push    edi
0x7799F8: push    eax
0x7799F9: push    18h
0x7799FB: call    sub_772FF0
0x779A00: mov     eax, [esp+8+arg_10]
0x779A04: mov     ecx, [esp+8+arg_0]
0x779A08: fld     dword ptr [eax+0A00h]
0x779A0E: fmul    dword ptr [ecx]
0x779A10: fld     dword ptr [eax+0A04h]
0x779A16: fmul    dword ptr [ecx+4]
0x779A19: faddp   st(1), st
0x779A1B: fld     dword ptr [eax+0A08h]
0x779A21: fmul    dword ptr [ecx+8]
0x779A24: faddp   st(1), st
0x779A26: fstp    dword ptr [esi+18h]
0x779A29: fld     dword ptr [ecx+4]
0x779A2C: fmul    dword ptr [eax+0A14h]
0x779A32: fld     dword ptr [ecx]
0x779A34: fmul    dword ptr [eax+0A10h]
0x779A3A: faddp   st(1), st
0x779A3C: fld     dword ptr [ecx+8]
0x779A3F: fmul    dword ptr [eax+0A18h]
0x779A45: faddp   st(1), st
0x779A47: fstp    dword ptr [esi+28h]
0x779A4A: fld     dword ptr [ecx+4]
0x779A4D: fmul    dword ptr [eax+0A24h]
0x779A53: fld     dword ptr [ecx]
0x779A55: fmul    dword ptr [eax+0A20h]
0x779A5B: faddp   st(1), st
0x779A5D: fld     dword ptr [ecx+8]
0x779A60: fmul    dword ptr [eax+0A28h]
0x779A66: faddp   st(1), st
0x779A68: fstp    dword ptr [esi+38h]
0x779A6B: fld     dword ptr [eax+0A00h]
0x779A71: fmul    dword ptr [ecx+0Ch]
0x779A74: fld     dword ptr [eax+0A04h]
0x779A7A: fmul    dword ptr [ecx+10h]
0x779A7D: faddp   st(1), st
0x779A7F: fld     dword ptr [ecx+14h]
0x779A82: fmul    dword ptr [eax+0A08h]
0x779A88: faddp   st(1), st
0x779A8A: fstp    dword ptr [esi+1Ch]
0x779A8D: fld     dword ptr [ecx+10h]
0x779A90: fmul    dword ptr [eax+0A14h]
0x779A96: fld     dword ptr [ecx+0Ch]
0x779A99: fmul    dword ptr [eax+0A10h]
0x779A9F: faddp   st(1), st
0x779AA1: fld     dword ptr [ecx+14h]
0x779AA4: fmul    dword ptr [eax+0A18h]
0x779AAA: faddp   st(1), st
0x779AAC: fstp    dword ptr [esi+2Ch]
0x779AAF: fld     dword ptr [ecx+10h]
0x779AB2: fmul    dword ptr [eax+0A24h]
0x779AB8: fld     dword ptr [ecx+0Ch]
0x779ABB: fmul    dword ptr [eax+0A20h]
0x779AC1: faddp   st(1), st
0x779AC3: fld     dword ptr [ecx+14h]
0x779AC6: fmul    dword ptr [eax+0A28h]
0x779ACC: faddp   st(1), st
0x779ACE: fstp    dword ptr [esi+3Ch]
0x779AD1: fld     dword ptr [eax+0A00h]
0x779AD7: fmul    dword ptr [ecx+18h]
0x779ADA: fld     dword ptr [eax+0A04h]
0x779AE0: fmul    dword ptr [ecx+1Ch]
0x779AE3: faddp   st(1), st
0x779AE5: fld     dword ptr [ecx+20h]
0x779AE8: fmul    dword ptr [eax+0A08h]
0x779AEE: faddp   st(1), st
0x779AF0: fstp    dword ptr [esi+20h]
0x779AF3: fld     dword ptr [ecx+18h]
0x779AF6: fmul    dword ptr [eax+0A10h]
0x779AFC: fld     dword ptr [eax+0A14h]
0x779B02: fmul    dword ptr [ecx+1Ch]
0x779B05: faddp   st(1), st
0x779B07: fld     dword ptr [ecx+20h]
0x779B0A: fmul    dword ptr [eax+0A18h]
0x779B10: faddp   st(1), st
0x779B12: fstp    dword ptr [esi+30h]
0x779B15: fld     dword ptr [ecx+18h]
0x779B18: fmul    dword ptr [eax+0A20h]
0x779B1E: fld     dword ptr [eax+0A24h]
0x779B24: mov     edx, [esp+8+arg_4]
0x779B28: fmul    dword ptr [ecx+1Ch]
0x779B2B: pop     edi
0x779B2C: faddp   st(1), st
0x779B2E: fld     dword ptr [ecx+20h]
0x779B31: fmul    dword ptr [eax+0A28h]
0x779B37: faddp   st(1), st
0x779B39: fstp    dword ptr [esi+40h]
0x779B3C: fld     dword ptr [ecx]
0x779B3E: fmul    dword ptr [eax+0A30h]
0x779B44: fld     dword ptr [eax+0A34h]
0x779B4A: fmul    dword ptr [ecx+4]
0x779B4D: faddp   st(1), st
0x779B4F: fld     dword ptr [eax+0A38h]
0x779B55: fmul    dword ptr [ecx+8]
0x779B58: faddp   st(1), st
0x779B5A: fadd    dword ptr [edx]
0x779B5C: fstp    dword ptr [esi+48h]
0x779B5F: fld     dword ptr [ecx+0Ch]
0x779B62: fmul    dword ptr [eax+0A30h]
0x779B68: fld     dword ptr [eax+0A34h]
0x779B6E: fmul    dword ptr [ecx+10h]
0x779B71: faddp   st(1), st
0x779B73: fld     dword ptr [ecx+14h]
0x779B76: fmul    dword ptr [eax+0A38h]
0x779B7C: faddp   st(1), st
0x779B7E: fadd    dword ptr [edx+4]
0x779B81: fstp    dword ptr [esi+4Ch]
0x779B84: fld     dword ptr [eax+0A34h]
0x779B8A: fmul    dword ptr [ecx+1Ch]
0x779B8D: fld     dword ptr [ecx+18h]
0x779B90: fmul    dword ptr [eax+0A30h]
0x779B96: faddp   st(1), st
0x779B98: fld     dword ptr [eax+0A38h]
0x779B9E: fmul    dword ptr [ecx+20h]
0x779BA1: faddp   st(1), st
0x779BA3: fadd    dword ptr [edx+8]
0x779BA6: fstp    dword ptr [esi+50h]
0x779BA9: fldz
0x779BAB: fst     dword ptr [esi+54h]
0x779BAE: fst     dword ptr [esi+44h]
0x779BB1: fst     dword ptr [esi+34h]
0x779BB4: fstp    dword ptr [esi+24h]
0x779BB7: pop     esi
0x779BB8: retn
