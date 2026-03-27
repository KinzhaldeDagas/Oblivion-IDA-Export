0x6A49F0: push    esi
0x6A49F1: mov     esi, [esp+4+arg_0]
0x6A49F5: test    esi, esi
0x6A49F7: push    edi
0x6A49F8: mov     edi, ecx
0x6A49FA: jz      loc_6A4AC3
0x6A4A00: mov     eax, [edi+3Ch]
0x6A4A03: cmp     eax, 48h ; 'H'
0x6A4A06: jz      loc_6A4AC3
0x6A4A0C: cmp     dword ptr [edi+28h], 4
0x6A4A10: jnz     short loc_6A4A2C
0x6A4A12: fld     [esp+8+arg_4]
0x6A4A16: mov     edx, [esi]
0x6A4A18: push    ecx
0x6A4A19: fstp    [esp+0Ch+var_C]
0x6A4A1C: push    eax
0x6A4A1D: mov     eax, [edx+2ACh]
0x6A4A23: mov     ecx, esi
0x6A4A25: call    eax
0x6A4A27: pop     edi
0x6A4A28: pop     esi
0x6A4A29: retn    8
0x6A4A2C: mov     ecx, [edi+0Ch]
0x6A4A2F: mov     edx, [ecx+1Ch]
0x6A4A32: mov     ecx, [edx+58h]
0x6A4A35: shr     ecx, 1
0x6A4A37: test    cl, 1
0x6A4A3A: jz      short loc_6A4A58
0x6A4A3C: fld     [esp+8+arg_4]
0x6A4A40: mov     edx, [esi]
0x6A4A42: push    0
0x6A4A44: push    ecx
0x6A4A45: fstp    [esp+10h+var_10]
0x6A4A48: push    eax
0x6A4A49: mov     eax, [edx+294h]
0x6A4A4F: mov     ecx, esi
0x6A4A51: call    eax
0x6A4A53: pop     edi
0x6A4A54: pop     esi
0x6A4A55: retn    8
0x6A4A58: fldz
0x6A4A5A: fld     [esp+8+arg_4]
0x6A4A5E: fcom    st(1)
0x6A4A60: fnstsw  ax
0x6A4A62: fstp    st(1)
0x6A4A64: test    ah, 5
0x6A4A67: jp      short loc_6A4AAD
0x6A4A69: mov     eax, [edi+38h]
0x6A4A6C: cmp     eax, 0Ah
0x6A4A6F: jz      short loc_6A4AAD
0x6A4A71: mov     edx, [esi]
0x6A4A73: fstp    st
0x6A4A75: push    eax
0x6A4A76: mov     eax, [edx+288h]
0x6A4A7C: mov     ecx, esi
0x6A4A7E: call    eax
0x6A4A80: fld     [esp+8+arg_4]
0x6A4A84: fld     st
0x6A4A86: faddp   st(2), st
0x6A4A88: fxch    st(1)
0x6A4A8A: fstp    [esp+8+arg_4]
0x6A4A8E: fldz
0x6A4A90: fld     [esp+8+arg_4]
0x6A4A94: fcom    st(1)
0x6A4A96: fnstsw  ax
0x6A4A98: fstp    st(1)
0x6A4A9A: test    ah, 5
0x6A4A9D: jp      short loc_6A4AAB
0x6A4A9F: fsubp   st(1), st
0x6A4AA1: fstp    [esp+8+arg_4]
0x6A4AA5: fld     [esp+8+arg_4]
0x6A4AA9: jmp     short loc_6A4AAD
0x6A4AAB: fstp    st
0x6A4AAD: mov     edx, [esi]
0x6A4AAF: mov     eax, [edi+3Ch]
0x6A4AB2: mov     edx, [edx+2A4h]
0x6A4AB8: push    0
0x6A4ABA: push    ecx
0x6A4ABB: fstp    [esp+10h+var_10]
0x6A4ABE: push    eax
0x6A4ABF: mov     ecx, esi
0x6A4AC1: call    edx
0x6A4AC3: pop     edi
0x6A4AC4: pop     esi
0x6A4AC5: retn    8
