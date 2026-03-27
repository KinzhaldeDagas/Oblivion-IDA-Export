0x4ADC90: push    esi
0x4ADC91: mov     esi, [esp+4+arg_0]
0x4ADC95: test    esi, esi
0x4ADC97: push    edi
0x4ADC98: mov     edi, ecx
0x4ADC9A: jz      loc_4ADE66
0x4ADCA0: fld     dword ptr [edi+38h]
0x4ADCA3: push    ebx
0x4ADCA4: mov     ebx, [esp+0Ch+arg_10]
0x4ADCA8: sub     esp, 14h
0x4ADCAB: fstp    [esp+20h+var_10]; float
0x4ADCAF: fld     dword ptr [edi+6Ch]
0x4ADCB2: fstp    [esp+20h+var_14]; float
0x4ADCB6: fld     dword ptr [edi+30h]
0x4ADCB9: fstp    [esp+20h+var_18]; float
0x4ADCBD: fld     dword ptr [edi+34h]
0x4ADCC0: fstp    [esp+20h+var_1C]; float
0x4ADCC4: fld     dword ptr [edi+2Ch]
0x4ADCC7: fstp    [esp+20h+var_20]; float
0x4ADCCA: push    ebx; float
0x4ADCCB: fld     [esp+24h+arg_8]
0x4ADCCF: sub     esp, 0Ch
0x4ADCD2: fstp    [esp+30h+var_28]; float
0x4ADCD6: fld     [esp+30h+arg_4]
0x4ADCDA: fstp    [esp+30h+var_2C]; float
0x4ADCDE: fld     dword ptr [esi+38h]
0x4ADCE1: fstp    [esp+30h+var_30]; float
0x4ADCE4: call    sub_4ACE30
0x4ADCE9: fstp    dword ptr [esi+38h]
0x4ADCEC: mov     eax, [esi+2Ch]
0x4ADCEF: mov     ecx, [esi+30h]
0x4ADCF2: fld     [esp+0Ch+arg_C]
0x4ADCF6: mov     edx, [esi+34h]
0x4ADCF9: mov     [esi+0Ch], eax
0x4ADCFC: mov     eax, [esi+38h]
0x4ADCFF: mov     [esi+10h], ecx
0x4ADD02: push    ecx
0x4ADD03: mov     [esi+14h], edx
0x4ADD06: fstp    [esp+10h+var_10]; float
0x4ADD09: mov     ecx, edi
0x4ADD0B: mov     [esi+18h], eax
0x4ADD0E: call    sub_4ACDE0
0x4ADD13: fmul    dword ptr [esi+18h]
0x4ADD16: fadd    dword ptr [esi+18h]
0x4ADD19: fstp    [esp+0Ch+arg_0]
0x4ADD1D: fld     [esp+0Ch+arg_0]
0x4ADD21: fst     dword ptr [esi+18h]
0x4ADD24: fldz
0x4ADD26: fcom    st(1)
0x4ADD28: fnstsw  ax
0x4ADD2A: fldz
0x4ADD2C: test    ah, 41h
0x4ADD2F: jnz     short loc_4ADD37
0x4ADD31: fst     [esp+0Ch+arg_0]
0x4ADD35: jmp     short loc_4ADD3F
0x4ADD37: fxch    st(2)
0x4ADD39: fst     [esp+0Ch+arg_0]
0x4ADD3D: fxch    st(2)
0x4ADD3F: fld     [esp+0Ch+arg_0]
0x4ADD43: fcomp   qword ptr ds:0A2F928h
0x4ADD49: fnstsw  ax
0x4ADD4B: test    ah, 41h
0x4ADD4E: jnz     short loc_4ADD5A
0x4ADD50: fstp    st(2)
0x4ADD52: fstp    st
0x4ADD54: fstp    st
0x4ADD56: fld1
0x4ADD58: jmp     short loc_4ADD6C
0x4ADD5A: fxch    st(1)
0x4ADD5C: fcomp   st(2)
0x4ADD5E: fnstsw  ax
0x4ADD60: fstp    st(1)
0x4ADD62: test    ah, 41h
0x4ADD65: jz      short loc_4ADD6C
0x4ADD67: fstp    st
0x4ADD69: fld     dword ptr [esi+18h]
0x4ADD6C: fstp    [esp+0Ch+arg_0]
0x4ADD70: sub     esp, 14h
0x4ADD73: fld     [esp+20h+arg_0]
0x4ADD77: mov     ecx, edi
0x4ADD79: fstp    dword ptr [esi+18h]
0x4ADD7C: fld     dword ptr [edi+60h]
0x4ADD7F: fstp    [esp+20h+var_10]; float
0x4ADD83: fld     dword ptr [edi+70h]
0x4ADD86: fstp    [esp+20h+var_14]; float
0x4ADD8A: fld     dword ptr [edi+58h]
0x4ADD8D: fstp    [esp+20h+var_18]; float
0x4ADD91: fld     dword ptr [edi+5Ch]
0x4ADD94: fstp    [esp+20h+var_1C]; float
0x4ADD98: fld     dword ptr [edi+54h]
0x4ADD9B: fstp    [esp+20h+var_20]; float
0x4ADD9E: push    ebx; float
0x4ADD9F: fld     [esp+24h+arg_8]
0x4ADDA3: sub     esp, 0Ch
0x4ADDA6: fstp    [esp+30h+var_28]; float
0x4ADDAA: fld     [esp+30h+arg_4]
0x4ADDAE: fstp    [esp+30h+var_2C]; float
0x4ADDB2: fld     dword ptr [esi+48h]
0x4ADDB5: fstp    [esp+30h+var_30]; float
0x4ADDB8: call    sub_4ACE30
0x4ADDBD: fstp    dword ptr [esi+48h]
0x4ADDC0: mov     ecx, [esi+3Ch]
0x4ADDC3: mov     edx, [esi+40h]
0x4ADDC6: fld     [esp+0Ch+arg_C]
0x4ADDCA: mov     eax, [esi+44h]
0x4ADDCD: mov     [esi+1Ch], ecx
0x4ADDD0: mov     ecx, [esi+48h]
0x4ADDD3: mov     [esi+20h], edx
0x4ADDD6: mov     [esi+24h], eax
0x4ADDD9: push    ecx
0x4ADDDA: mov     [esi+28h], ecx
0x4ADDDD: fstp    [esp+10h+var_10]; float
0x4ADDE0: mov     ecx, edi
0x4ADDE2: call    sub_4ACD90
0x4ADDE7: fmul    dword ptr [esi+28h]
0x4ADDEA: pop     ebx
0x4ADDEB: fadd    dword ptr [esi+28h]
0x4ADDEE: fstp    [esp+8+arg_8]
0x4ADDF2: fld     [esp+8+arg_8]
0x4ADDF6: fst     dword ptr [esi+28h]
0x4ADDF9: fldz
0x4ADDFB: fcom    st(1)
0x4ADDFD: fnstsw  ax
0x4ADDFF: test    ah, 41h
0x4ADE02: jnz     short loc_4ADE0C
0x4ADE04: fldz
0x4ADE06: fstp    [esp+8+arg_8]
0x4ADE0A: jmp     short loc_4ADE14
0x4ADE0C: fxch    st(1)
0x4ADE0E: fst     [esp+8+arg_8]
0x4ADE12: fxch    st(1)
0x4ADE14: fld     [esp+8+arg_8]
0x4ADE18: fcomp   qword ptr ds:0A2F928h
0x4ADE1E: fnstsw  ax
0x4ADE20: test    ah, 41h
0x4ADE23: jnz     short loc_4ADE2D
0x4ADE25: fstp    st(1)
0x4ADE27: fstp    st
0x4ADE29: fld1
0x4ADE2B: jmp     short loc_4ADE3D
0x4ADE2D: fcompp
0x4ADE2F: fnstsw  ax
0x4ADE31: test    ah, 41h
0x4ADE34: jnz     short loc_4ADE3A
0x4ADE36: fldz
0x4ADE38: jmp     short loc_4ADE3D
0x4ADE3A: fld     dword ptr [esi+28h]
0x4ADE3D: fstp    [esp+8+arg_8]
0x4ADE41: fld     [esp+8+arg_8]
0x4ADE45: fstp    dword ptr [esi+28h]
0x4ADE48: fld     dword ptr [edi+44h]
0x4ADE4B: fld     [esp+8+arg_4]
0x4ADE4F: fld     st
0x4ADE51: fmulp   st(2), st
0x4ADE53: fld     dword ptr [esi+4Ch]
0x4ADE56: faddp   st(2), st
0x4ADE58: fxch    st(1)
0x4ADE5A: fstp    dword ptr [esi+4Ch]
0x4ADE5D: fmul    dword ptr [edi+48h]
0x4ADE60: fadd    dword ptr [esi+50h]
0x4ADE63: fstp    dword ptr [esi+50h]
0x4ADE66: pop     edi
0x4ADE67: pop     esi
0x4ADE68: retn    14h
