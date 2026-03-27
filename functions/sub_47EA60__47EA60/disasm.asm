0x47EA60: push    0FFFFFFFFh
0x47EA62: push    offset SEH_47FD30
0x47EA67: mov     eax, large fs:0
0x47EA6D: push    eax
0x47EA6E: sub     esp, 0Ch
0x47EA71: push    ebx
0x47EA72: push    ebp
0x47EA73: push    esi
0x47EA74: push    edi
0x47EA75: mov     eax, ds:0B30AACh
0x47EA7A: xor     eax, esp
0x47EA7C: push    eax
0x47EA7D: lea     eax, [esp+2Ch+var_C]
0x47EA81: mov     large fs:0, eax
0x47EA87: fld     [esp+2Ch+arg_0]
0x47EA8B: push    60h ; '`'; Size
0x47EA8D: fld     qword ptr ds:0A2FAA0h
0x47EA93: fmul    st(1), st
0x47EA95: fxch    st(1)
0x47EA97: fstp    [esp+30h+arg_0]
0x47EA9B: fld     [esp+30h+arg_4]
0x47EA9F: fmul    st, st(1)
0x47EAA1: fstp    [esp+30h+arg_4]
0x47EAA5: fmul    [esp+30h+arg_8]
0x47EAA9: fstp    [esp+30h+arg_8]
0x47EAAD: call    FormHeapAlloc
0x47EAB2: fld     [esp+30h+arg_0]
0x47EAB6: mov     ebx, eax
0x47EAB8: fld     st
0x47EABA: fchs
0x47EABC: fstp    [esp+30h+arg_0]
0x47EAC0: fld     [esp+30h+arg_0]
0x47EAC4: fst     [esp+30h+var_18]
0x47EAC8: mov     eax, [esp+30h+var_18]
0x47EACC: fld     [esp+30h+arg_4]
0x47EAD0: mov     [ebx], eax
0x47EAD2: fst     [esp+30h+var_14]
0x47EAD6: mov     ecx, [esp+30h+var_14]
0x47EADA: fld     [esp+30h+arg_8]
0x47EADE: mov     [ebx+4], ecx
0x47EAE1: fst     [esp+30h+var_10]
0x47EAE5: mov     edx, [esp+30h+var_10]
0x47EAE9: fxch    st(3)
0x47EAEB: mov     [ebx+8], edx
0x47EAEE: fst     [esp+30h+var_18]
0x47EAF2: mov     eax, [esp+30h+var_18]
0x47EAF6: fxch    st(1)
0x47EAF8: mov     [ebx+0Ch], eax
0x47EAFB: fst     [esp+30h+var_14]
0x47EAFF: mov     ecx, [esp+30h+var_14]
0x47EB03: fxch    st(3)
0x47EB05: mov     [ebx+10h], ecx
0x47EB08: fst     [esp+30h+var_10]
0x47EB0C: mov     edx, [esp+30h+var_10]
0x47EB10: fxch    st(1)
0x47EB12: mov     [ebx+14h], edx
0x47EB15: fst     [esp+30h+var_18]
0x47EB19: mov     eax, [esp+30h+var_18]
0x47EB1D: fld     st(3)
0x47EB1F: mov     [ebx+18h], eax
0x47EB22: fchs
0x47EB24: fstp    [esp+30h+arg_0]
0x47EB28: fld     [esp+30h+arg_0]
0x47EB2C: fst     [esp+30h+var_14]
0x47EB30: mov     ecx, [esp+30h+var_14]
0x47EB34: fxch    st(2)
0x47EB36: mov     [ebx+1Ch], ecx
0x47EB39: fst     [esp+30h+var_10]
0x47EB3D: mov     edx, [esp+30h+var_10]
0x47EB41: fxch    st(3)
0x47EB43: mov     [ebx+20h], edx
0x47EB46: fst     [esp+30h+var_18]
0x47EB4A: mov     eax, [esp+30h+var_18]
0x47EB4E: fxch    st(2)
0x47EB50: mov     [ebx+24h], eax
0x47EB53: fst     [esp+30h+var_14]
0x47EB57: mov     ecx, [esp+30h+var_14]
0x47EB5B: fxch    st(3)
0x47EB5D: mov     [ebx+28h], ecx
0x47EB60: fst     [esp+30h+var_10]
0x47EB64: mov     edx, [esp+30h+var_10]
0x47EB68: fxch    st(2)
0x47EB6A: mov     [ebx+2Ch], edx
0x47EB6D: fst     [esp+30h+var_18]
0x47EB71: mov     eax, [esp+30h+var_18]
0x47EB75: fxch    st(4)
0x47EB77: mov     [ebx+30h], eax
0x47EB7A: fst     [esp+30h+var_14]
0x47EB7E: mov     ecx, [esp+30h+var_14]
0x47EB82: fxch    st(2)
0x47EB84: mov     [ebx+34h], ecx
0x47EB87: fchs
0x47EB89: fstp    [esp+30h+arg_0]
0x47EB8D: fld     [esp+30h+arg_0]
0x47EB91: fst     [esp+30h+var_10]
0x47EB95: mov     edx, [esp+30h+var_10]
0x47EB99: fxch    st(1)
0x47EB9B: fst     [esp+30h+var_18]
0x47EB9F: mov     eax, [esp+30h+var_18]
0x47EBA3: fxch    st(2)
0x47EBA5: mov     [ebx+38h], edx
0x47EBA8: fstp    [esp+30h+var_14]
0x47EBAC: mov     ecx, [esp+30h+var_14]
0x47EBB0: mov     [ebx+3Ch], eax
0x47EBB3: fst     [esp+30h+var_10]
0x47EBB7: mov     edx, [esp+30h+var_10]
0x47EBBB: fxch    st(1)
0x47EBBD: mov     [ebx+40h], ecx
0x47EBC0: fstp    [esp+30h+var_18]
0x47EBC4: mov     eax, [esp+30h+var_18]
0x47EBC8: fxch    st(1)
0x47EBCA: mov     [ebx+44h], edx
0x47EBCD: fst     [esp+30h+var_14]
0x47EBD1: mov     ecx, [esp+30h+var_14]
0x47EBD5: fxch    st(1)
0x47EBD7: mov     [ebx+48h], eax
0x47EBDA: fst     [esp+30h+var_10]
0x47EBDE: mov     edx, [esp+30h+var_10]
0x47EBE2: fxch    st(2)
0x47EBE4: mov     [ebx+4Ch], ecx
0x47EBE7: fstp    [esp+30h+var_18]
0x47EBEB: mov     eax, [esp+30h+var_18]
0x47EBEF: mov     [ebx+50h], edx
0x47EBF2: fstp    [esp+30h+var_14]
0x47EBF6: mov     ecx, [esp+30h+var_14]
0x47EBFA: mov     [ebx+54h], eax
0x47EBFD: fstp    [esp+30h+var_10]
0x47EC01: mov     edx, [esp+30h+var_10]
0x47EC05: mov     [ebx+58h], ecx
0x47EC08: push    80h ; '€'; Size
0x47EC0D: mov     [ebx+5Ch], edx
0x47EC10: call    FormHeapAlloc
0x47EC15: mov     edi, eax
0x47EC17: add     esp, 8
0x47EC1A: mov     [esp+2Ch+arg_0], edi
0x47EC1E: xor     ebp, ebp
0x47EC20: cmp     edi, ebp
0x47EC22: mov     [esp+2Ch+var_4], ebp
0x47EC26: jz      short loc_47EC39
0x47EC28: push    offset sub_47EA50
0x47EC2D: push    8
0x47EC2F: push    10h
0x47EC31: push    edi
0x47EC32: call    sub_401080
0x47EC37: jmp     short loc_47EC3B
0x47EC39: xor     edi, edi
0x47EC3B: mov     eax, [esp+2Ch+arg_C]
0x47EC3F: mov     ecx, [eax]
0x47EC41: mov     [edi], ecx
0x47EC43: mov     edx, [eax+4]
0x47EC46: mov     [edi+4], edx
0x47EC49: mov     ecx, [eax+8]
0x47EC4C: mov     [edi+8], ecx
0x47EC4F: mov     edx, [eax+0Ch]
0x47EC52: mov     [edi+0Ch], edx
0x47EC55: mov     ecx, [eax]
0x47EC57: mov     [edi+10h], ecx
0x47EC5A: mov     edx, [eax+4]
0x47EC5D: mov     [edi+14h], edx
0x47EC60: mov     ecx, [eax+8]
0x47EC63: mov     [edi+18h], ecx
0x47EC66: mov     edx, [eax+0Ch]
0x47EC69: mov     [edi+1Ch], edx
0x47EC6C: mov     ecx, [eax]
0x47EC6E: mov     [edi+20h], ecx
0x47EC71: mov     edx, [eax+4]
0x47EC74: mov     [edi+24h], edx
0x47EC77: mov     ecx, [eax+8]
0x47EC7A: mov     [edi+28h], ecx
0x47EC7D: mov     edx, [eax+0Ch]
0x47EC80: mov     [edi+2Ch], edx
0x47EC83: mov     ecx, [eax]
0x47EC85: mov     [edi+30h], ecx
0x47EC88: mov     edx, [eax+4]
0x47EC8B: mov     [edi+34h], edx
0x47EC8E: mov     ecx, [eax+8]
0x47EC91: mov     [edi+38h], ecx
0x47EC94: mov     edx, [eax+0Ch]
0x47EC97: mov     [edi+3Ch], edx
0x47EC9A: mov     ecx, [eax]
0x47EC9C: mov     [edi+40h], ecx
0x47EC9F: mov     edx, [eax+4]
0x47ECA2: mov     [edi+44h], edx
0x47ECA5: mov     ecx, [eax+8]
0x47ECA8: mov     [edi+48h], ecx
0x47ECAB: mov     edx, [eax+0Ch]
0x47ECAE: mov     [edi+4Ch], edx
0x47ECB1: mov     ecx, [eax]
0x47ECB3: mov     [edi+50h], ecx
0x47ECB6: mov     edx, [eax+4]
0x47ECB9: mov     [edi+54h], edx
0x47ECBC: mov     ecx, [eax+8]
0x47ECBF: mov     [edi+58h], ecx
0x47ECC2: mov     edx, [eax+0Ch]
0x47ECC5: mov     [edi+5Ch], edx
0x47ECC8: mov     ecx, [eax]
0x47ECCA: mov     [edi+60h], ecx
0x47ECCD: mov     edx, [eax+4]
0x47ECD0: mov     [edi+64h], edx
0x47ECD3: mov     ecx, [eax+8]
0x47ECD6: mov     [edi+68h], ecx
0x47ECD9: mov     edx, [eax+0Ch]
0x47ECDC: mov     [edi+6Ch], edx
0x47ECDF: mov     ecx, [eax]
0x47ECE1: mov     [edi+70h], ecx
0x47ECE4: mov     edx, [eax+4]
0x47ECE7: mov     [edi+74h], edx
0x47ECEA: mov     ecx, [eax+8]
0x47ECED: mov     [edi+78h], ecx
0x47ECF0: mov     edx, [eax+0Ch]
0x47ECF3: push    90h; Size
0x47ECF8: mov     [esp+30h+var_4], 0FFFFFFFFh
0x47ED00: mov     [edi+7Ch], edx
0x47ED03: call    FormHeapAlloc
0x47ED08: mov     esi, eax
0x47ED0A: mov     edx, 2
0x47ED0F: mov     ecx, 3
0x47ED14: mov     eax, 1
0x47ED19: mov     [esi], bp
0x47ED1C: mov     [esi+2], dx
0x47ED20: mov     [esi+4], ax
0x47ED24: mov     [esi+6], bp
0x47ED28: mov     [esi+8], cx
0x47ED2C: mov     [esi+0Ah], dx
0x47ED30: mov     [esi+0Ch], bp
0x47ED34: mov     word ptr [esi+0Eh], 7
0x47ED3A: mov     [esi+10h], cx
0x47ED3E: mov     ecx, 4
0x47ED43: mov     [esi+18h], ax
0x47ED47: mov     [esi+1Eh], ax
0x47ED4B: mov     [esi+24h], dx
0x47ED4F: mov     [esi+28h], ax
0x47ED53: mov     eax, 6
0x47ED58: mov     [esi+2Ah], dx
0x47ED5C: mov     [esi+34h], dx
0x47ED60: mov     [esi+4Ch], dx
0x47ED64: mov     [esi+50h], dx
0x47ED68: mov     [esi+6Ch], dx
0x47ED6C: mov     [esi+72h], dx
0x47ED70: mov     [esi+7Ah], dx
0x47ED74: mov     edx, 7
0x47ED79: push    0C0h ; 'À'; Size
0x47ED7E: mov     [esi+12h], bp
0x47ED82: mov     [esi+14h], cx
0x47ED86: mov     word ptr [esi+16h], 7
0x47ED8C: mov     [esi+1Ah], cx
0x47ED90: mov     [esi+1Ch], bp
0x47ED94: mov     word ptr [esi+20h], 5
0x47ED9A: mov     [esi+22h], cx
0x47ED9E: mov     word ptr [esi+26h], 5
0x47EDA4: mov     [esi+2Ch], ax
0x47EDA8: mov     word ptr [esi+2Eh], 5
0x47EDAE: mov     word ptr [esi+30h], 3
0x47EDB4: mov     [esi+32h], ax
0x47EDB8: mov     word ptr [esi+36h], 3
0x47EDBE: mov     word ptr [esi+38h], 7
0x47EDC4: mov     [esi+3Ah], ax
0x47EDC8: mov     [esi+3Ch], cx
0x47EDCC: mov     word ptr [esi+3Eh], 7
0x47EDD2: mov     [esi+40h], ax
0x47EDD6: mov     [esi+42h], cx
0x47EDDA: mov     [esi+44h], ax
0x47EDDE: mov     word ptr [esi+46h], 5
0x47EDE4: mov     [esi+48h], bp
0x47EDE8: mov     word ptr [esi+4Ah], 1
0x47EDEE: mov     [esi+4Eh], bp
0x47EDF2: mov     word ptr [esi+52h], 3
0x47EDF8: mov     [esi+54h], bp
0x47EDFC: mov     word ptr [esi+56h], 3
0x47EE02: mov     word ptr [esi+58h], 7
0x47EE08: mov     [esi+5Ah], bp
0x47EE0C: mov     word ptr [esi+5Ch], 7
0x47EE12: mov     [esi+5Eh], cx
0x47EE16: mov     word ptr [esi+60h], 1
0x47EE1C: mov     [esi+62h], bp
0x47EE20: mov     [esi+64h], cx
0x47EE24: mov     word ptr [esi+66h], 1
0x47EE2A: mov     [esi+68h], cx
0x47EE2E: mov     word ptr [esi+6Ah], 5
0x47EE34: mov     word ptr [esi+6Eh], 1
0x47EE3A: mov     word ptr [esi+70h], 5
0x47EE40: mov     word ptr [esi+74h], 5
0x47EE46: mov     [esi+76h], ax
0x47EE4A: mov     word ptr [esi+78h], 3
0x47EE50: mov     [esi+7Ch], ax
0x47EE54: mov     word ptr [esi+7Eh], 3
0x47EE5A: mov     [esi+80h], ax
0x47EE61: mov     [esi+82h], dx
0x47EE68: mov     [esi+84h], cx
0x47EE6F: mov     [esi+86h], ax
0x47EE76: mov     [esi+88h], dx
0x47EE7D: mov     [esi+8Ah], cx
0x47EE84: mov     word ptr [esi+8Ch], 5
0x47EE8D: mov     [esi+8Eh], ax
0x47EE94: call    FormHeapAlloc
0x47EE99: add     esp, 8
0x47EE9C: mov     [esp+2Ch+arg_0], eax
0x47EEA0: cmp     eax, ebp
0x47EEA2: mov     [esp+2Ch+var_4], 1
0x47EEAA: jz      short loc_47EED2
0x47EEAC: push    esi
0x47EEAD: push    18h
0x47EEAF: push    ebp
0x47EEB0: push    ebp
0x47EEB1: push    ebp
0x47EEB2: push    edi
0x47EEB3: push    ebp
0x47EEB4: push    ebx
0x47EEB5: push    8
0x47EEB7: mov     ecx, eax
0x47EEB9: call    sub_7174B0
0x47EEBE: mov     ecx, [esp+2Ch+var_C]
0x47EEC2: mov     large fs:0, ecx
0x47EEC9: pop     ecx
0x47EECA: pop     edi
0x47EECB: pop     esi
0x47EECC: pop     ebp
0x47EECD: pop     ebx
0x47EECE: add     esp, 18h
0x47EED1: retn
0x47EED2: xor     eax, eax
0x47EED4: mov     ecx, [esp+2Ch+var_C]
0x47EED8: mov     large fs:0, ecx
0x47EEDF: pop     ecx
0x47EEE0: pop     edi
0x47EEE1: pop     esi
0x47EEE2: pop     ebp
0x47EEE3: pop     ebx
0x47EEE4: add     esp, 18h
0x47EEE7: retn
