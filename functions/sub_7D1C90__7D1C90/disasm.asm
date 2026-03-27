0x7D1C90: mov     eax, [esp+arg_4]
0x7D1C94: sub     esp, 20h
0x7D1C97: test    eax, eax
0x7D1C99: jz      loc_7D1E9F
0x7D1C9F: mov     eax, [eax+0E0h]
0x7D1CA5: test    eax, eax
0x7D1CA7: jz      short loc_7D1D14
0x7D1CA9: mov     ecx, [eax+0Ch]
0x7D1CAC: mov     ds:0B44F38h, ecx
0x7D1CB2: mov     edx, [eax+10h]
0x7D1CB5: mov     ds:0B44F3Ch, edx
0x7D1CBB: mov     ecx, [eax+14h]
0x7D1CBE: mov     ds:0B44F40h, ecx
0x7D1CC4: mov     edx, [eax+18h]
0x7D1CC7: mov     ds:0B44F44h, edx
0x7D1CCD: mov     ecx, [eax+1Ch]
0x7D1CD0: mov     ds:0B44F48h, ecx
0x7D1CD6: mov     edx, [eax+20h]
0x7D1CD9: mov     ds:0B44F4Ch, edx
0x7D1CDF: mov     ecx, [eax+24h]
0x7D1CE2: mov     ds:0B44F50h, ecx
0x7D1CE8: mov     edx, [eax+28h]
0x7D1CEB: mov     ds:0B44F54h, edx
0x7D1CF1: fld     dword ptr [eax+4Ch]
0x7D1CF4: fstp    dword ptr ds:0B44ED0h
0x7D1CFA: fld     dword ptr [eax+50h]
0x7D1CFD: fstp    dword ptr ds:0B44ED4h
0x7D1D03: fld     dword ptr [eax+54h]
0x7D1D06: fstp    dword ptr ds:0B44F58h
0x7D1D0C: fld1
0x7D1D0E: fstp    dword ptr ds:0B44F5Ch
0x7D1D14: fldz
0x7D1D16: fst     [esp+20h+var_20]
0x7D1D19: mov     eax, [esp+20h+var_20]
0x7D1D1C: fst     [esp+20h+var_1C]
0x7D1D20: mov     ecx, [esp+20h+var_1C]
0x7D1D24: fst     [esp+20h+var_18]
0x7D1D28: mov     edx, [esp+20h+var_18]
0x7D1D2C: fst     [esp+20h+var_14]
0x7D1D30: fst     [esp+20h+var_20]
0x7D1D33: mov     ds:0B44F6Ch, ecx
0x7D1D39: mov     ecx, [esp+20h+var_20]
0x7D1D3C: fst     [esp+20h+var_1C]
0x7D1D40: mov     ds:0B44F68h, eax
0x7D1D45: fst     [esp+20h+var_18]
0x7D1D49: mov     eax, [esp+20h+var_14]
0x7D1D4D: fstp    [esp+20h+var_14]
0x7D1D51: mov     ds:0B44F78h, ecx
0x7D1D57: mov     ecx, [esp+20h+var_14]
0x7D1D5B: mov     ds:0B44F84h, ecx
0x7D1D61: mov     ecx, [esp+20h+arg_0]
0x7D1D65: test    ecx, ecx
0x7D1D67: mov     ds:0B44F70h, edx
0x7D1D6D: mov     edx, [esp+20h+var_1C]
0x7D1D71: mov     ds:0B44F74h, eax
0x7D1D76: mov     eax, [esp+20h+var_18]
0x7D1D7A: mov     ds:0B44F7Ch, edx
0x7D1D80: mov     ds:0B44F80h, eax
0x7D1D85: jz      loc_7D1E9F
0x7D1D8B: push    edi
0x7D1D8C: lea     edx, [esp+24h+arg_4]
0x7D1D90: push    edx
0x7D1D91: call    sub_405760
0x7D1D96: mov     edi, [eax]
0x7D1D98: mov     eax, [esp+24h+arg_4]
0x7D1D9C: test    eax, eax
0x7D1D9E: jz      short loc_7D1DC0
0x7D1DA0: push    esi
0x7D1DA1: mov     esi, eax
0x7D1DA3: add     eax, 4
0x7D1DA6: push    eax; lpAddend
0x7D1DA7: call    dword ptr ds:0A2807Ch
0x7D1DAD: test    eax, eax
0x7D1DAF: jnz     short loc_7D1DBF
0x7D1DB1: test    esi, esi
0x7D1DB3: jz      short loc_7D1DBF
0x7D1DB5: mov     eax, [esi]
0x7D1DB7: mov     edx, [eax]
0x7D1DB9: push    1
0x7D1DBB: mov     ecx, esi
0x7D1DBD: call    edx
0x7D1DBF: pop     esi
0x7D1DC0: mov     ecx, [edi+0Ch]
0x7D1DC3: test    ecx, ecx
0x7D1DC5: pop     edi
0x7D1DC6: jz      loc_7D1E9F
0x7D1DCC: fld     dword ptr [ecx+2Ch]
0x7D1DCF: fstp    [esp+20h+arg_0]
0x7D1DD3: fld     dword ptr [ecx+30h]
0x7D1DD6: fstp    [esp+20h+arg_4]
0x7D1DDA: fldz
0x7D1DDC: fld     st
0x7D1DDE: fld     [esp+20h+arg_4]
0x7D1DE2: fucom   st(1)
0x7D1DE4: fnstsw  ax
0x7D1DE6: fstp    st(1)
0x7D1DE8: test    ah, 44h
0x7D1DEB: fld     [esp+20h+arg_0]
0x7D1DEF: jp      short loc_7D1E00
0x7D1DF1: fld     st(2)
0x7D1DF3: fucomp  st(1)
0x7D1DF5: fnstsw  ax
0x7D1DF7: test    ah, 44h
0x7D1DFA: jnp     loc_7D1E99
0x7D1E00: mov     eax, [ecx+20h]
0x7D1E03: fxch    st(1)
0x7D1E05: mov     edx, [ecx+24h]
0x7D1E08: fst     [esp+20h+var_10]
0x7D1E0C: fsubrp  st(1), st
0x7D1E0E: mov     [esp+20h+var_20], eax
0x7D1E11: mov     eax, [ecx+28h]
0x7D1E14: mov     ecx, [esp+20h+var_10]
0x7D1E18: fstp    [esp+20h+var_C]
0x7D1E1C: mov     [esp+20h+var_1C], edx
0x7D1E20: fld1
0x7D1E22: mov     edx, [esp+20h+var_C]
0x7D1E26: fstp    [esp+20h+var_8]
0x7D1E2A: mov     [esp+20h+var_18], eax
0x7D1E2E: mov     eax, [esp+20h+var_8]
0x7D1E32: mov     ds:0B44F78h, ecx
0x7D1E38: fst     [esp+20h+var_4]
0x7D1E3C: mov     ecx, [esp+20h+var_4]
0x7D1E40: fld     [esp+20h+var_20]
0x7D1E43: mov     ds:0B44F7Ch, edx
0x7D1E49: fstp    [esp+20h+var_10]
0x7D1E4D: mov     edx, [esp+20h+var_10]
0x7D1E51: fld     [esp+20h+var_1C]
0x7D1E55: mov     ds:0B44F80h, eax
0x7D1E5A: fstp    [esp+20h+var_C]
0x7D1E5E: mov     eax, [esp+20h+var_C]
0x7D1E62: fld     [esp+20h+var_18]
0x7D1E66: mov     ds:0B44F84h, ecx
0x7D1E6C: fstp    [esp+20h+var_8]
0x7D1E70: mov     ecx, [esp+20h+var_8]
0x7D1E74: mov     ds:0B44F68h, edx
0x7D1E7A: fstp    [esp+20h+var_4]
0x7D1E7E: mov     edx, [esp+20h+var_4]
0x7D1E82: mov     ds:0B44F6Ch, eax
0x7D1E87: mov     ds:0B44F70h, ecx
0x7D1E8D: mov     ds:0B44F74h, edx
0x7D1E93: add     esp, 20h
0x7D1E96: retn    8
0x7D1E99: fstp    st(2)
0x7D1E9B: fstp    st
0x7D1E9D: fstp    st
0x7D1E9F: add     esp, 20h
0x7D1EA2: retn    8
