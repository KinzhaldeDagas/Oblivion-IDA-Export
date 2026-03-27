0x6B6C60: sub     esp, 8
0x6B6C63: push    esi
0x6B6C64: mov     esi, ecx
0x6B6C66: mov     eax, [esi]
0x6B6C68: test    al, 1
0x6B6C6A: jnz     loc_6B6D36
0x6B6C70: test    al, 2
0x6B6C72: jz      loc_6B6D36
0x6B6C78: mov     ecx, [esi+54h]
0x6B6C7B: test    ecx, ecx
0x6B6C7D: jz      loc_6B6D36
0x6B6C83: fldz
0x6B6C85: push    0
0x6B6C87: fld     [esp+10h+arg_0]
0x6B6C8B: push    ecx
0x6B6C8C: fcom    st(1)
0x6B6C8E: fnstsw  ax
0x6B6C90: fstp    st(1)
0x6B6C92: test    ah, 41h
0x6B6C95: jnz     short loc_6B6CB2
0x6B6C97: fdiv    qword ptr ds:0A77238h
0x6B6C9D: mov     eax, [ecx]
0x6B6C9F: fstp    [esp+14h+arg_0]
0x6B6CA3: fld     [esp+14h+arg_0]
0x6B6CA7: fstp    [esp+14h+var_14]
0x6B6CAA: push    ecx
0x6B6CAB: mov     ecx, [eax+44h]
0x6B6CAE: call    ecx
0x6B6CB0: jmp     short loc_6B6CC1
0x6B6CB2: mov     edx, [ecx]
0x6B6CB4: fstp    st
0x6B6CB6: fld1
0x6B6CB8: mov     eax, [edx+44h]
0x6B6CBB: fstp    [esp+14h+var_14]
0x6B6CBE: push    ecx
0x6B6CBF: call    eax
0x6B6CC1: fldz
0x6B6CC3: push    0
0x6B6CC5: fld     [esp+10h+arg_4]
0x6B6CC9: fcom    st(1)
0x6B6CCB: fnstsw  ax
0x6B6CCD: fstp    st(1)
0x6B6CCF: test    ah, 41h
0x6B6CD2: mov     eax, [esi+54h]
0x6B6CD5: mov     ecx, [eax]
0x6B6CD7: mov     edx, [ecx+40h]
0x6B6CDA: push    ecx
0x6B6CDB: jnz     short loc_6B6D21
0x6B6CDD: fdiv    qword ptr ds:0A77238h
0x6B6CE3: fstp    [esp+14h+arg_0]
0x6B6CE7: fld     [esp+14h+arg_0]
0x6B6CEB: fstp    [esp+14h+var_14]
0x6B6CEE: push    eax
0x6B6CEF: call    edx
0x6B6CF1: fld     [esp+0Ch+arg_4]
0x6B6CF5: fnstcw  word ptr [esp+0Ch+arg_4]
0x6B6CF9: movzx   eax, word ptr [esp+0Ch+arg_4]
0x6B6CFE: or      eax, 0C00h
0x6B6D03: mov     [esp+0Ch+arg_0], eax
0x6B6D07: fldcw   word ptr [esp+0Ch+arg_0]
0x6B6D0B: fistp   qword ptr [esp+0Ch+var_8]
0x6B6D0F: mov     eax, [esp+0Ch+var_8]
0x6B6D13: mov     [esi+38h], eax
0x6B6D16: pop     esi
0x6B6D17: fldcw   word ptr [esp+8+arg_4]
0x6B6D1B: add     esp, 8
0x6B6D1E: retn    8
0x6B6D21: fstp    st
0x6B6D23: fld     dword ptr ds:0A6D1E8h
0x6B6D29: fstp    [esp+14h+var_14]
0x6B6D2C: push    eax
0x6B6D2D: call    edx
0x6B6D2F: mov     dword ptr [esi+38h], 3B9ACA00h
0x6B6D36: pop     esi
0x6B6D37: add     esp, 8
0x6B6D3A: retn    8
