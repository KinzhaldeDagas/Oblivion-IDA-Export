0x80E9A0: push    0FFFFFFFFh
0x80E9A2: push    offset SEH_80E9A0
0x80E9A7: mov     eax, large fs:0
0x80E9AD: push    eax
0x80E9AE: sub     esp, 28h
0x80E9B1: push    ebx
0x80E9B2: push    ebp
0x80E9B3: push    esi
0x80E9B4: push    edi
0x80E9B5: mov     eax, ds:0B30AACh
0x80E9BA: xor     eax, esp
0x80E9BC: push    eax
0x80E9BD: lea     eax, [esp+48h+var_C]
0x80E9C1: mov     large fs:0, eax
0x80E9C7: mov     esi, ecx
0x80E9C9: mov     eax, [esi]
0x80E9CB: mov     edx, [eax+80h]
0x80E9D1: call    edx
0x80E9D3: mov     edi, [esp+48h+arg_C]
0x80E9D7: mov     eax, [edi+8]
0x80E9DA: mov     ecx, [esi+18h]
0x80E9DD: mov     edx, [ecx]
0x80E9DF: push    eax
0x80E9E0: mov     eax, [edx+8]
0x80E9E3: call    eax
0x80E9E5: mov     eax, [edi+1Ch]
0x80E9E8: mov     ecx, [esi+18h]
0x80E9EB: mov     edx, [ecx]
0x80E9ED: push    eax
0x80E9EE: mov     eax, [edx+20h]
0x80E9F1: call    eax
0x80E9F3: mov     eax, [edi+2Ch]
0x80E9F6: mov     ecx, [esi+18h]
0x80E9F9: mov     edx, [ecx]
0x80E9FB: push    eax
0x80E9FC: mov     eax, [edx+28h]
0x80E9FF: call    eax
0x80EA01: mov     eax, [edi+28h]
0x80EA04: mov     ecx, [esi+18h]
0x80EA07: mov     edx, [ecx]
0x80EA09: push    eax
0x80EA0A: mov     eax, [edx+24h]
0x80EA0D: call    eax
0x80EA0F: mov     ebp, [edi+0Ch]
0x80EA12: xor     bl, bl
0x80EA14: test    ebp, ebp
0x80EA16: jz      loc_80EADA
0x80EA1C: fld     dword ptr [ebp+2Ch]
0x80EA1F: mov     eax, [esp+48h+arg_0]
0x80EA23: fstp    [esp+48h+var_30]
0x80EA27: fld     dword ptr [ebp+30h]
0x80EA2A: fstp    [esp+48h+var_2C]
0x80EA2E: fld     dword ptr ds:0B46658h
0x80EA34: fstp    [esp+48h+var_28]
0x80EA38: fld     dword ptr ds:0B4665Ch
0x80EA3E: fstp    [esp+48h+var_24]
0x80EA42: fld     dword ptr ds:0B46660h
0x80EA48: fstp    [esp+48h+var_20]
0x80EA4C: fld     dword ptr [eax+88h]
0x80EA52: fsub    [esp+48h+var_28]
0x80EA56: fstp    [esp+48h+arg_0]
0x80EA5A: fld     dword ptr [eax+8Ch]
0x80EA60: fsub    [esp+48h+var_24]
0x80EA64: fstp    [esp+48h+arg_C]
0x80EA68: fld     dword ptr [eax+90h]
0x80EA6E: fsub    [esp+48h+var_20]
0x80EA72: fstp    [esp+48h+var_34]
0x80EA76: fld     [esp+48h+arg_C]
0x80EA7A: fld     [esp+48h+arg_0]
0x80EA7E: fld     [esp+48h+var_34]
0x80EA82: fld     st(1)
0x80EA84: fmulp   st(2), st
0x80EA86: fld     st(2)
0x80EA88: fmulp   st(3), st
0x80EA8A: fxch    st(1)
0x80EA8C: faddp   st(2), st
0x80EA8E: fmul    st, st
0x80EA90: faddp   st(1), st
0x80EA92: fstp    [esp+48h+arg_C]
0x80EA96: fld     [esp+48h+arg_C]
0x80EA9A: call    __CIsqrt
0x80EA9F: fstp    [esp+48h+arg_C]
0x80EAA3: fld     [esp+48h+arg_C]
0x80EAA7: fstp    [esp+48h+arg_C]
0x80EAAB: fld     [esp+48h+arg_C]
0x80EAAF: fld     [esp+48h+var_30]
0x80EAB3: fcom    st(1)
0x80EAB5: fnstsw  ax
0x80EAB7: test    ah, 5
0x80EABA: jnp     short loc_80EB31
0x80EABC: mov     ecx, [esp+48h+arg_18]
0x80EAC0: fld     dword ptr [ecx+0Ch]
0x80EAC3: fstp    [esp+48h+arg_C]
0x80EAC7: fld     [esp+48h+arg_C]
0x80EACB: faddp   st(2), st
0x80EACD: fcom    st(1)
0x80EACF: fnstsw  ax
0x80EAD1: fstp    st(1)
0x80EAD3: test    ah, 5
0x80EAD6: jnp     short loc_80EB33
0x80EAD8: fstp    st
0x80EADA: cmp     byte ptr ds:0B42E86h, 0
0x80EAE1: jz      short loc_80EB1F
0x80EAE3: fld1
0x80EAE5: sub     esp, 10h
0x80EAE8: mov     eax, esp
0x80EAEA: fst     [esp+58h+var_1C]
0x80EAEE: mov     ecx, [esp+58h+var_1C]
0x80EAF2: fst     [esp+58h+var_18]
0x80EAF6: mov     edx, [esp+58h+var_18]
0x80EAFA: fst     [esp+58h+var_14]
0x80EAFE: mov     [eax], ecx
0x80EB00: fstp    [esp+58h+var_10]
0x80EB04: mov     ecx, [esp+58h+var_14]
0x80EB08: mov     [eax+4], edx
0x80EB0B: mov     edx, [esp+58h+var_10]
0x80EB0F: mov     [eax+8], ecx
0x80EB12: push    0
0x80EB14: mov     [eax+0Ch], edx
0x80EB17: call    sub_7ECAE0
0x80EB1C: add     esp, 14h
0x80EB1F: mov     edi, [edi+18h]
0x80EB22: test    edi, edi
0x80EB24: jnz     loc_80EBDC
0x80EB2A: xor     eax, eax
0x80EB2C: jmp     loc_80EBEF
0x80EB31: fstp    st(1)
0x80EB33: fld     [esp+48h+var_2C]
0x80EB37: mov     edx, [ebp+20h]
0x80EB3A: mov     eax, [ebp+24h]
0x80EB3D: fld     st
0x80EB3F: mov     ecx, [ebp+28h]
0x80EB42: fsubrp  st(2), st
0x80EB44: fxch    st(1)
0x80EB46: mov     [esp+48h+var_28], edx
0x80EB4A: mov     [esp+48h+var_24], eax
0x80EB4E: fstp    [esp+48h+arg_C]
0x80EB52: mov     [esp+48h+var_20], ecx
0x80EB56: mov     bl, 1
0x80EB58: fstp    [esp+48h+var_1C]
0x80EB5C: mov     edx, [esp+48h+var_1C]
0x80EB60: fld     [esp+48h+arg_C]
0x80EB64: mov     ds:0B46638h, edx
0x80EB6A: fstp    [esp+48h+var_18]
0x80EB6E: mov     eax, [esp+48h+var_18]
0x80EB72: fldz
0x80EB74: mov     ds:0B4663Ch, eax
0x80EB79: fst     [esp+48h+var_14]
0x80EB7D: mov     ecx, [esp+48h+var_14]
0x80EB81: fst     [esp+48h+var_10]
0x80EB85: fld     [esp+48h+var_28]
0x80EB89: mov     edx, [esp+48h+var_10]
0x80EB8D: fstp    [esp+48h+var_1C]
0x80EB91: mov     ds:0B46640h, ecx
0x80EB97: fld     [esp+48h+var_24]
0x80EB9B: mov     eax, [esp+48h+var_1C]
0x80EB9F: fstp    [esp+48h+var_18]
0x80EBA3: mov     ds:0B46644h, edx
0x80EBA9: fld     [esp+48h+var_20]
0x80EBAD: mov     ecx, [esp+48h+var_18]
0x80EBB1: fstp    [esp+48h+var_14]
0x80EBB5: mov     ds:0B46648h, eax
0x80EBBA: mov     edx, [esp+48h+var_14]
0x80EBBE: mov     ds:0B4664Ch, ecx
0x80EBC4: fstp    [esp+48h+var_10]
0x80EBC8: mov     eax, [esp+48h+var_10]
0x80EBCC: mov     ds:0B46650h, edx
0x80EBD2: mov     ds:0B46654h, eax
0x80EBD7: jmp     loc_80EADA
0x80EBDC: mov     eax, [edi]
0x80EBDE: mov     edx, [eax+54h]
0x80EBE1: mov     ecx, edi
0x80EBE3: call    edx
0x80EBE5: xor     ecx, ecx
0x80EBE7: cmp     eax, 8
0x80EBEA: setz    cl
0x80EBED: mov     eax, ecx
0x80EBEF: neg     eax
0x80EBF1: sbb     eax, eax
0x80EBF3: and     eax, edi
0x80EBF5: mov     edi, ds:0B43104h
0x80EBFB: test    edi, edi
0x80EBFD: mov     ebp, eax
0x80EBFF: jnz     short loc_80EC05
0x80EC01: xor     eax, eax
0x80EC03: jmp     short loc_80EC28
0x80EC05: mov     edx, [edi]
0x80EC07: mov     eax, [edx+4]
0x80EC0A: mov     ecx, edi
0x80EC0C: call    eax
0x80EC0E: test    eax, eax
0x80EC10: jz      short loc_80EC20
0x80EC12: cmp     eax, offset unk_B42168
0x80EC17: jz      short loc_80EC97
0x80EC19: mov     eax, [eax+4]
0x80EC1C: test    eax, eax
0x80EC1E: jnz     short loc_80EC12
0x80EC20: xor     al, al
0x80EC22: neg     al
0x80EC24: sbb     eax, eax
0x80EC26: and     eax, edi
0x80EC28: test    ebp, ebp
0x80EC2A: jz      loc_80EDF5
0x80EC30: test    eax, eax
0x80EC32: jz      loc_80EDF5
0x80EC38: mov     eax, [esi+94h]
0x80EC3E: mov     ecx, [eax+24h]
0x80EC41: mov     eax, [ecx]
0x80EC43: test    eax, eax
0x80EC45: lea     edi, [esi+94h]
0x80EC4B: mov     [esp+48h+arg_C], eax
0x80EC4F: jz      short loc_80EC55
0x80EC51: add     dword ptr [eax+5Ch], 1
0x80EC55: mov     edx, [ebp+0]
0x80EC58: mov     eax, [edx+78h]
0x80EC5B: mov     ecx, ebp
0x80EC5D: mov     [esp+48h+var_4], 0
0x80EC65: call    eax
0x80EC67: mov     ecx, [esp+48h+arg_C]; this
0x80EC6B: push    eax; a2
0x80EC6C: call    sub_76C910
0x80EC71: mov     ecx, ebp
0x80EC73: call    sub_7ED5D0
0x80EC78: test    ax, ax
0x80EC7B: mov     ecx, [edi]; this
0x80EC7D: jnz     short loc_80ECA0
0x80EC7F: test    bl, bl
0x80EC81: jz      short loc_80EC9B
0x80EC83: mov     eax, [esi+80h]
0x80EC89: push    eax; a2
0x80EC8A: call    sub_7AECB0
0x80EC8F: mov     eax, [esi+90h]
0x80EC95: jmp     short loc_80ECCA
0x80EC97: mov     al, 1
0x80EC99: jmp     short loc_80EC22
0x80EC9B: mov     eax, [esi+7Ch]
0x80EC9E: jmp     short loc_80ECBE
0x80ECA0: test    bl, bl
0x80ECA2: jz      short loc_80ECB8
0x80ECA4: mov     eax, [esi+88h]
0x80ECAA: push    eax; a2
0x80ECAB: call    sub_7AECB0
0x80ECB0: mov     eax, [esi+90h]
0x80ECB6: jmp     short loc_80ECCA
0x80ECB8: mov     eax, [esi+84h]
0x80ECBE: push    eax; a2
0x80ECBF: call    sub_7AECB0
0x80ECC4: mov     eax, [esi+8Ch]
0x80ECCA: mov     ecx, [edi]; this
0x80ECCC: push    eax; a2
0x80ECCD: call    sub_7AEC60
0x80ECD2: cmp     word ptr ds:0B42EACh, 4
0x80ECDA: mov     ebp, [edi]
0x80ECDC: jnz     loc_80ED70
0x80ECE2: cmp     dword ptr [ebp+30h], 0
0x80ECE6: jnz     short loc_80ECF0
0x80ECE8: call    sub_772DF0
0x80ECED: mov     [ebp+30h], eax
0x80ECF0: mov     ecx, [ebp+30h]
0x80ECF3: push    0
0x80ECF5: push    1
0x80ECF7: push    34h ; '4'
0x80ECF9: call    sub_772CD0
0x80ECFE: mov     ebp, [edi]
0x80ED00: cmp     dword ptr [ebp+30h], 0
0x80ED04: jnz     short loc_80ED0E
0x80ED06: call    sub_772DF0
0x80ED0B: mov     [ebp+30h], eax
0x80ED0E: mov     ecx, [ebp+30h]
0x80ED11: push    0
0x80ED13: push    8
0x80ED15: push    38h ; '8'
0x80ED17: call    sub_772CD0
0x80ED1C: mov     ebp, [edi]
0x80ED1E: cmp     dword ptr [ebp+30h], 0
0x80ED22: jnz     short loc_80ED2C
0x80ED24: call    sub_772DF0
0x80ED29: mov     [ebp+30h], eax
0x80ED2C: mov     ecx, [ebp+30h]
0x80ED2F: push    0
0x80ED31: push    7
0x80ED33: push    37h ; '7'
0x80ED35: call    sub_772CD0
0x80ED3A: mov     ebp, [edi]
0x80ED3C: cmp     dword ptr [ebp+30h], 0
0x80ED40: jnz     short loc_80ED4A
0x80ED42: call    sub_772DF0
0x80ED47: mov     [ebp+30h], eax
0x80ED4A: mov     ecx, [ebp+30h]
0x80ED4D: push    0
0x80ED4F: push    1
0x80ED51: push    35h ; '5'
0x80ED53: call    sub_772CD0
0x80ED58: mov     ebp, [edi]
0x80ED5A: cmp     dword ptr [ebp+30h], 0
0x80ED5E: jnz     short loc_80ED68
0x80ED60: call    sub_772DF0
0x80ED65: mov     [ebp+30h], eax
0x80ED68: push    0
0x80ED6A: push    1
0x80ED6C: push    36h ; '6'
0x80ED6E: jmp     short loc_80ED84
0x80ED70: cmp     dword ptr [ebp+30h], 0
0x80ED74: jnz     short loc_80ED7E
0x80ED76: call    sub_772DF0
0x80ED7B: mov     [ebp+30h], eax
0x80ED7E: push    0
0x80ED80: push    0
0x80ED82: push    34h ; '4'
0x80ED84: mov     ecx, [ebp+30h]
0x80ED87: call    sub_772CD0
0x80ED8C: mov     ebp, [edi]
0x80ED8E: cmp     dword ptr [ebp+30h], 0
0x80ED92: jnz     short loc_80ED9C
0x80ED94: call    sub_772DF0
0x80ED99: mov     [ebp+30h], eax
0x80ED9C: mov     ecx, [ebp+30h]
0x80ED9F: push    0
0x80EDA1: push    7
0x80EDA3: push    0A8h ; '¨'
0x80EDA8: call    sub_772CD0
0x80EDAD: mov     ebp, [edi]
0x80EDAF: cmp     dword ptr [ebp+30h], 0
0x80EDB3: jnz     short loc_80EDBD
0x80EDB5: call    sub_772DF0
0x80EDBA: mov     [ebp+30h], eax
0x80EDBD: mov     ecx, [ebp+30h]
0x80EDC0: push    0
0x80EDC2: push    0
0x80EDC4: push    1Ch
0x80EDC6: call    sub_772CD0
0x80EDCB: mov     ecx, [esi+38h]
0x80EDCE: push    edi
0x80EDCF: push    ecx
0x80EDD0: lea     ecx, [esi+40h]
0x80EDD3: call    sub_76CE40
0x80EDD8: mov     ecx, [esp+48h+arg_C]
0x80EDDC: add     dword ptr [esi+38h], 1
0x80EDE0: or      eax, 0FFFFFFFFh
0x80EDE3: test    ecx, ecx
0x80EDE5: mov     [esp+48h+var_4], eax
0x80EDE9: jz      short loc_80EDF5
0x80EDEB: add     [ecx+5Ch], eax
0x80EDEE: jnz     short loc_80EDF5
0x80EDF0: call    sub_772560
0x80EDF5: xor     eax, eax
0x80EDF7: mov     ecx, [esp+48h+var_C]
0x80EDFB: mov     large fs:0, ecx
0x80EE02: pop     ecx
0x80EE03: pop     edi
0x80EE04: pop     esi
0x80EE05: pop     ebp
0x80EE06: pop     ebx
0x80EE07: add     esp, 34h
0x80EE0A: retn    1Ch
