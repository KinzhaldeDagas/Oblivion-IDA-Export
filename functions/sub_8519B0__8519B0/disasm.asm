0x8519B0: push    0FFFFFFFFh
0x8519B2: push    offset SEH_850F60
0x8519B7: mov     eax, large fs:0
0x8519BD: push    eax
0x8519BE: sub     esp, 24h
0x8519C1: push    ebx
0x8519C2: push    ebp
0x8519C3: push    esi
0x8519C4: push    edi
0x8519C5: mov     eax, ds:0B30AACh
0x8519CA: xor     eax, esp
0x8519CC: push    eax
0x8519CD: lea     eax, [esp+44h+var_C]
0x8519D1: mov     large fs:0, eax
0x8519D7: mov     [esp+44h+var_20], ecx
0x8519DB: mov     eax, ds:0B45B64h
0x8519E0: mov     ecx, ds:0B42EB8h
0x8519E6: movzx   ecx, byte ptr [ecx+9]
0x8519EA: mov     edx, [eax+24h]
0x8519ED: mov     edi, [esp+44h+arg_C]
0x8519F1: mov     ebp, [edx]
0x8519F3: mov     [esp+44h+var_24], eax
0x8519F7: mov     eax, [edi]
0x8519F9: mov     edx, [eax+88h]
0x8519FF: mov     [esp+44h+var_28], ecx
0x851A03: push    ecx
0x851A04: mov     ecx, edi
0x851A06: call    edx
0x851A08: mov     esi, [ebp+4]
0x851A0B: mov     ebx, eax
0x851A0D: cmp     esi, ebx
0x851A0F: jz      short loc_851A42
0x851A11: test    esi, esi
0x851A13: jz      short loc_851A31
0x851A15: lea     eax, [esi+4]
0x851A18: push    eax; lpAddend
0x851A19: call    dword ptr ds:0A2807Ch
0x851A1F: test    eax, eax
0x851A21: jnz     short loc_851A31
0x851A23: test    esi, esi
0x851A25: jz      short loc_851A31
0x851A27: mov     edx, [esi]
0x851A29: mov     eax, [edx]
0x851A2B: push    1
0x851A2D: mov     ecx, esi
0x851A2F: call    eax
0x851A31: test    ebx, ebx
0x851A33: mov     [ebp+4], ebx
0x851A36: jz      short loc_851A42
0x851A38: add     ebx, 4
0x851A3B: push    ebx; lpAddend
0x851A3C: call    dword ptr ds:0A28078h
0x851A42: test    ebp, ebp
0x851A44: jz      short loc_851A60
0x851A46: cmp     byte ptr ds:0B42CDDh, 0
0x851A4D: jz      short loc_851A60
0x851A4F: mov     edx, [edi]
0x851A51: mov     eax, [edx+78h]
0x851A54: mov     ecx, edi
0x851A56: call    eax
0x851A58: push    eax
0x851A59: mov     ecx, ebp
0x851A5B: call    sub_7715E0
0x851A60: mov     ecx, [esp+44h+var_24]
0x851A64: mov     edx, [ecx+24h]
0x851A67: mov     esi, [edx+4]
0x851A6A: mov     eax, [edi]
0x851A6C: mov     ebp, [esp+44h+var_28]
0x851A70: mov     edx, [eax+8Ch]
0x851A76: push    ebp
0x851A77: mov     ecx, edi
0x851A79: mov     [esp+48h+arg_C], esi
0x851A7D: call    edx
0x851A7F: test    eax, eax
0x851A81: jz      short loc_851A94
0x851A83: mov     eax, [edi]
0x851A85: mov     edx, [eax+8Ch]
0x851A8B: push    ebp
0x851A8C: mov     ecx, edi
0x851A8E: call    edx
0x851A90: mov     ebx, eax
0x851A92: jmp     short loc_851AA9
0x851A94: test    dword ptr [edi+1Ch], 80h
0x851A9B: mov     ebx, ds:0B430F0h
0x851AA1: ja      short loc_851AA9
0x851AA3: mov     ebx, ds:0B430DCh
0x851AA9: mov     esi, [esi+4]
0x851AAC: cmp     esi, ebx
0x851AAE: jz      short loc_851AE7
0x851AB0: test    esi, esi
0x851AB2: jz      short loc_851AD0
0x851AB4: lea     eax, [esi+4]
0x851AB7: push    eax; lpAddend
0x851AB8: call    dword ptr ds:0A2807Ch
0x851ABE: test    eax, eax
0x851AC0: jnz     short loc_851AD0
0x851AC2: test    esi, esi
0x851AC4: jz      short loc_851AD0
0x851AC6: mov     edx, [esi]
0x851AC8: mov     eax, [edx]
0x851ACA: push    1
0x851ACC: mov     ecx, esi
0x851ACE: call    eax
0x851AD0: test    ebx, ebx
0x851AD2: mov     esi, [esp+44h+arg_C]
0x851AD6: mov     [esi+4], ebx
0x851AD9: jz      short loc_851AEB
0x851ADB: add     ebx, 4
0x851ADE: push    ebx; lpAddend
0x851ADF: call    dword ptr ds:0A28078h
0x851AE5: jmp     short loc_851AEB
0x851AE7: mov     esi, [esp+44h+arg_C]
0x851AEB: test    esi, esi
0x851AED: jz      short loc_851B09
0x851AEF: cmp     byte ptr ds:0B42CDDh, 0
0x851AF6: jz      short loc_851B09
0x851AF8: mov     edx, [edi]
0x851AFA: mov     eax, [edx+78h]
0x851AFD: mov     ecx, edi
0x851AFF: call    eax
0x851B01: push    eax
0x851B02: mov     ecx, esi
0x851B04: call    sub_7715E0
0x851B09: cmp     ebp, 4
0x851B0C: fld1
0x851B0E: fldz
0x851B10: jnz     short loc_851B1A
0x851B12: fxch    st(1)
0x851B14: fst     [esp+44h+var_28]
0x851B18: jmp     short loc_851B3C
0x851B1A: cmp     ebp, 3
0x851B1D: fst     [esp+44h+var_28]
0x851B21: jnz     short loc_851B3A
0x851B23: fstp    st(1)
0x851B25: fld1
0x851B27: fst     [esp+44h+var_2C]
0x851B2B: fxch    st(1)
0x851B2D: cmp     ebp, 1
0x851B30: fst     [esp+44h+var_30]
0x851B34: jnz     short loc_851B4F
0x851B36: fstp    st
0x851B38: jmp     short loc_851B51
0x851B3A: fxch    st(1)
0x851B3C: cmp     ebp, 2
0x851B3F: fxch    st(1)
0x851B41: fst     [esp+44h+var_2C]
0x851B45: jnz     short loc_851B2D
0x851B47: fxch    st(1)
0x851B49: fstp    [esp+44h+var_30]
0x851B4D: jmp     short loc_851B51
0x851B4F: fstp    st(1)
0x851B51: fstp    [esp+44h+arg_C]
0x851B55: sub     esp, 10h
0x851B58: fld     [esp+54h+arg_C]
0x851B5C: mov     eax, esp
0x851B5E: fstp    [esp+54h+var_1C]
0x851B62: mov     ecx, [esp+54h+var_1C]
0x851B66: fld     [esp+54h+var_30]
0x851B6A: mov     [eax], ecx
0x851B6C: fstp    [esp+54h+var_18]
0x851B70: mov     edx, [esp+54h+var_18]
0x851B74: fld     [esp+54h+var_2C]
0x851B78: mov     [eax+4], edx
0x851B7B: fstp    [esp+54h+var_14]
0x851B7F: mov     ecx, [esp+54h+var_14]
0x851B83: fld     [esp+54h+var_28]
0x851B87: mov     [eax+8], ecx
0x851B8A: fstp    [esp+54h+var_10]
0x851B8E: mov     edx, [esp+54h+var_10]
0x851B92: push    2
0x851B94: mov     [eax+0Ch], edx
0x851B97: call    sub_7ECAE0
0x851B9C: add     esp, 14h
0x851B9F: cmp     ebp, 8
0x851BA2: jnz     short loc_851BAE
0x851BA4: fld1
0x851BA6: fst     [esp+44h+var_30]
0x851BAA: fldz
0x851BAC: jmp     short loc_851BD0
0x851BAE: cmp     ebp, 7
0x851BB1: fldz
0x851BB3: fst     [esp+44h+var_30]
0x851BB7: fld1
0x851BB9: jnz     short loc_851BCE
0x851BBB: fst     [esp+44h+var_2C]
0x851BBF: fxch    st(1)
0x851BC1: cmp     ebp, 5
0x851BC4: fst     [esp+44h+var_28]
0x851BC8: jnz     short loc_851BE1
0x851BCA: fstp    st
0x851BCC: jmp     short loc_851BE3
0x851BCE: fxch    st(1)
0x851BD0: cmp     ebp, 6
0x851BD3: fst     [esp+44h+var_2C]
0x851BD7: jnz     short loc_851BC1
0x851BD9: fxch    st(1)
0x851BDB: fstp    [esp+44h+var_28]
0x851BDF: jmp     short loc_851BE3
0x851BE1: fstp    st(1)
0x851BE3: fstp    [esp+44h+arg_C]
0x851BE7: sub     esp, 10h
0x851BEA: fld     [esp+54h+arg_C]
0x851BEE: mov     eax, esp
0x851BF0: fstp    [esp+54h+var_1C]
0x851BF4: mov     ecx, [esp+54h+var_1C]
0x851BF8: fld     [esp+54h+var_28]
0x851BFC: mov     [eax], ecx
0x851BFE: fstp    [esp+54h+var_18]
0x851C02: mov     edx, [esp+54h+var_18]
0x851C06: fld     [esp+54h+var_2C]
0x851C0A: mov     [eax+4], edx
0x851C0D: fstp    [esp+54h+var_14]
0x851C11: mov     ecx, [esp+54h+var_14]
0x851C15: fld     [esp+54h+var_30]
0x851C19: mov     [eax+8], ecx
0x851C1C: fstp    [esp+54h+var_10]
0x851C20: mov     edx, [esp+54h+var_10]
0x851C24: push    3
0x851C26: mov     [eax+0Ch], edx
0x851C29: call    sub_7ECAE0
0x851C2E: add     esp, 14h
0x851C31: cmp     byte ptr [esp+44h+arg_10], 0
0x851C36: jz      short loc_851C7B
0x851C38: mov     edi, [esp+44h+var_24]
0x851C3C: mov     ebx, 1
0x851C41: add     [edi+60h], ebx
0x851C44: mov     [esp+44h+arg_10], edi
0x851C48: mov     esi, [esp+44h+var_20]
0x851C4C: mov     ecx, [esi+38h]
0x851C4F: lea     eax, [esp+44h+arg_10]
0x851C53: push    eax
0x851C54: push    ecx
0x851C55: lea     ecx, [esi+40h]
0x851C58: mov     [esp+4Ch+var_4], 0
0x851C60: call    sub_76CE40
0x851C65: or      eax, 0FFFFFFFFh
0x851C68: add     [edi+60h], eax
0x851C6B: mov     [esp+44h+var_4], eax
0x851C6F: jnz     short loc_851C78
0x851C71: mov     ecx, edi
0x851C73: call    sub_7604D0
0x851C78: add     [esi+38h], ebx
0x851C7B: mov     ecx, dword ptr [esp+44h+var_C]
0x851C7F: mov     large fs:0, ecx
0x851C86: pop     ecx
0x851C87: pop     edi
0x851C88: pop     esi
0x851C89: pop     ebp
0x851C8A: pop     ebx
0x851C8B: add     esp, 30h
0x851C8E: retn    14h
