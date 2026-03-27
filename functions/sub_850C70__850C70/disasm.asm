0x850C70: push    0FFFFFFFFh
0x850C72: push    offset SEH_850F60
0x850C77: mov     eax, large fs:0
0x850C7D: push    eax
0x850C7E: sub     esp, 24h
0x850C81: push    ebx
0x850C82: push    ebp
0x850C83: push    esi
0x850C84: push    edi
0x850C85: mov     eax, ds:0B30AACh
0x850C8A: xor     eax, esp
0x850C8C: push    eax
0x850C8D: lea     eax, [esp+44h+var_C]
0x850C91: mov     large fs:0, eax
0x850C97: mov     [esp+44h+var_20], ecx
0x850C9B: mov     eax, ds:0B456C0h
0x850CA0: mov     ecx, ds:0B42EB8h
0x850CA6: movzx   ecx, byte ptr [ecx+9]
0x850CAA: mov     edx, [eax+24h]
0x850CAD: mov     edi, [esp+44h+arg_C]
0x850CB1: mov     ebp, [edx]
0x850CB3: mov     [esp+44h+var_24], eax
0x850CB7: mov     eax, [edi]
0x850CB9: mov     edx, [eax+88h]
0x850CBF: mov     [esp+44h+var_28], ecx
0x850CC3: push    ecx
0x850CC4: mov     ecx, edi
0x850CC6: call    edx
0x850CC8: mov     esi, [ebp+4]
0x850CCB: mov     ebx, eax
0x850CCD: cmp     esi, ebx
0x850CCF: jz      short loc_850D02
0x850CD1: test    esi, esi
0x850CD3: jz      short loc_850CF1
0x850CD5: lea     eax, [esi+4]
0x850CD8: push    eax; lpAddend
0x850CD9: call    dword ptr ds:0A2807Ch
0x850CDF: test    eax, eax
0x850CE1: jnz     short loc_850CF1
0x850CE3: test    esi, esi
0x850CE5: jz      short loc_850CF1
0x850CE7: mov     edx, [esi]
0x850CE9: mov     eax, [edx]
0x850CEB: push    1
0x850CED: mov     ecx, esi
0x850CEF: call    eax
0x850CF1: test    ebx, ebx
0x850CF3: mov     [ebp+4], ebx
0x850CF6: jz      short loc_850D02
0x850CF8: add     ebx, 4
0x850CFB: push    ebx; lpAddend
0x850CFC: call    dword ptr ds:0A28078h
0x850D02: test    ebp, ebp
0x850D04: jz      short loc_850D20
0x850D06: cmp     byte ptr ds:0B42CDDh, 0
0x850D0D: jz      short loc_850D20
0x850D0F: mov     edx, [edi]
0x850D11: mov     eax, [edx+78h]
0x850D14: mov     ecx, edi
0x850D16: call    eax
0x850D18: push    eax
0x850D19: mov     ecx, ebp
0x850D1B: call    sub_7715E0
0x850D20: mov     ecx, [esp+44h+var_24]
0x850D24: mov     edx, [ecx+24h]
0x850D27: mov     esi, [edx+4]
0x850D2A: mov     eax, [edi]
0x850D2C: mov     ebp, [esp+44h+var_28]
0x850D30: mov     edx, [eax+8Ch]
0x850D36: push    ebp
0x850D37: mov     ecx, edi
0x850D39: mov     [esp+48h+arg_C], esi
0x850D3D: call    edx
0x850D3F: test    eax, eax
0x850D41: jz      short loc_850D54
0x850D43: mov     eax, [edi]
0x850D45: mov     edx, [eax+8Ch]
0x850D4B: push    ebp
0x850D4C: mov     ecx, edi
0x850D4E: call    edx
0x850D50: mov     ebx, eax
0x850D52: jmp     short loc_850D69
0x850D54: test    dword ptr [edi+1Ch], 80h
0x850D5B: mov     ebx, ds:0B430F0h
0x850D61: ja      short loc_850D69
0x850D63: mov     ebx, ds:0B430DCh
0x850D69: mov     esi, [esi+4]
0x850D6C: cmp     esi, ebx
0x850D6E: jz      short loc_850DA7
0x850D70: test    esi, esi
0x850D72: jz      short loc_850D90
0x850D74: lea     eax, [esi+4]
0x850D77: push    eax; lpAddend
0x850D78: call    dword ptr ds:0A2807Ch
0x850D7E: test    eax, eax
0x850D80: jnz     short loc_850D90
0x850D82: test    esi, esi
0x850D84: jz      short loc_850D90
0x850D86: mov     edx, [esi]
0x850D88: mov     eax, [edx]
0x850D8A: push    1
0x850D8C: mov     ecx, esi
0x850D8E: call    eax
0x850D90: test    ebx, ebx
0x850D92: mov     esi, [esp+44h+arg_C]
0x850D96: mov     [esi+4], ebx
0x850D99: jz      short loc_850DAB
0x850D9B: add     ebx, 4
0x850D9E: push    ebx; lpAddend
0x850D9F: call    dword ptr ds:0A28078h
0x850DA5: jmp     short loc_850DAB
0x850DA7: mov     esi, [esp+44h+arg_C]
0x850DAB: test    esi, esi
0x850DAD: jz      short loc_850DC9
0x850DAF: cmp     byte ptr ds:0B42CDDh, 0
0x850DB6: jz      short loc_850DC9
0x850DB8: mov     edx, [edi]
0x850DBA: mov     eax, [edx+78h]
0x850DBD: mov     ecx, edi
0x850DBF: call    eax
0x850DC1: push    eax
0x850DC2: mov     ecx, esi
0x850DC4: call    sub_7715E0
0x850DC9: cmp     ebp, 4
0x850DCC: fld1
0x850DCE: fldz
0x850DD0: jnz     short loc_850DDA
0x850DD2: fxch    st(1)
0x850DD4: fst     [esp+44h+var_28]
0x850DD8: jmp     short loc_850DFC
0x850DDA: cmp     ebp, 3
0x850DDD: fst     [esp+44h+var_28]
0x850DE1: jnz     short loc_850DFA
0x850DE3: fstp    st(1)
0x850DE5: fld1
0x850DE7: fst     [esp+44h+var_2C]
0x850DEB: fxch    st(1)
0x850DED: cmp     ebp, 1
0x850DF0: fst     [esp+44h+var_30]
0x850DF4: jnz     short loc_850E0F
0x850DF6: fstp    st
0x850DF8: jmp     short loc_850E11
0x850DFA: fxch    st(1)
0x850DFC: cmp     ebp, 2
0x850DFF: fxch    st(1)
0x850E01: fst     [esp+44h+var_2C]
0x850E05: jnz     short loc_850DED
0x850E07: fxch    st(1)
0x850E09: fstp    [esp+44h+var_30]
0x850E0D: jmp     short loc_850E11
0x850E0F: fstp    st(1)
0x850E11: fstp    [esp+44h+arg_C]
0x850E15: sub     esp, 10h
0x850E18: fld     [esp+54h+arg_C]
0x850E1C: mov     eax, esp
0x850E1E: fstp    [esp+54h+var_1C]
0x850E22: mov     ecx, [esp+54h+var_1C]
0x850E26: fld     [esp+54h+var_30]
0x850E2A: mov     [eax], ecx
0x850E2C: fstp    [esp+54h+var_18]
0x850E30: mov     edx, [esp+54h+var_18]
0x850E34: fld     [esp+54h+var_2C]
0x850E38: mov     [eax+4], edx
0x850E3B: fstp    [esp+54h+var_14]
0x850E3F: mov     ecx, [esp+54h+var_14]
0x850E43: fld     [esp+54h+var_28]
0x850E47: mov     [eax+8], ecx
0x850E4A: fstp    [esp+54h+var_10]
0x850E4E: mov     edx, [esp+54h+var_10]
0x850E52: push    2
0x850E54: mov     [eax+0Ch], edx
0x850E57: call    sub_7ECAE0
0x850E5C: add     esp, 14h
0x850E5F: cmp     ebp, 8
0x850E62: jnz     short loc_850E6E
0x850E64: fld1
0x850E66: fst     [esp+44h+var_30]
0x850E6A: fldz
0x850E6C: jmp     short loc_850E90
0x850E6E: cmp     ebp, 7
0x850E71: fldz
0x850E73: fst     [esp+44h+var_30]
0x850E77: fld1
0x850E79: jnz     short loc_850E8E
0x850E7B: fst     [esp+44h+var_2C]
0x850E7F: fxch    st(1)
0x850E81: cmp     ebp, 5
0x850E84: fst     [esp+44h+var_28]
0x850E88: jnz     short loc_850EA1
0x850E8A: fstp    st
0x850E8C: jmp     short loc_850EA3
0x850E8E: fxch    st(1)
0x850E90: cmp     ebp, 6
0x850E93: fst     [esp+44h+var_2C]
0x850E97: jnz     short loc_850E81
0x850E99: fxch    st(1)
0x850E9B: fstp    [esp+44h+var_28]
0x850E9F: jmp     short loc_850EA3
0x850EA1: fstp    st(1)
0x850EA3: fstp    [esp+44h+arg_C]
0x850EA7: sub     esp, 10h
0x850EAA: fld     [esp+54h+arg_C]
0x850EAE: mov     eax, esp
0x850EB0: fstp    [esp+54h+var_1C]
0x850EB4: mov     ecx, [esp+54h+var_1C]
0x850EB8: fld     [esp+54h+var_28]
0x850EBC: mov     [eax], ecx
0x850EBE: fstp    [esp+54h+var_18]
0x850EC2: mov     edx, [esp+54h+var_18]
0x850EC6: fld     [esp+54h+var_2C]
0x850ECA: mov     [eax+4], edx
0x850ECD: fstp    [esp+54h+var_14]
0x850ED1: mov     ecx, [esp+54h+var_14]
0x850ED5: fld     [esp+54h+var_30]
0x850ED9: mov     [eax+8], ecx
0x850EDC: fstp    [esp+54h+var_10]
0x850EE0: mov     edx, [esp+54h+var_10]
0x850EE4: push    3
0x850EE6: mov     [eax+0Ch], edx
0x850EE9: call    sub_7ECAE0
0x850EEE: add     esp, 14h
0x850EF1: cmp     byte ptr [esp+44h+arg_10], 0
0x850EF6: jz      short loc_850F3B
0x850EF8: mov     edi, [esp+44h+var_24]
0x850EFC: mov     ebx, 1
0x850F01: add     [edi+60h], ebx
0x850F04: mov     [esp+44h+arg_10], edi
0x850F08: mov     esi, [esp+44h+var_20]
0x850F0C: mov     ecx, [esi+38h]
0x850F0F: lea     eax, [esp+44h+arg_10]
0x850F13: push    eax
0x850F14: push    ecx
0x850F15: lea     ecx, [esi+40h]
0x850F18: mov     [esp+4Ch+var_4], 0
0x850F20: call    sub_76CE40
0x850F25: or      eax, 0FFFFFFFFh
0x850F28: add     [edi+60h], eax
0x850F2B: mov     [esp+44h+var_4], eax
0x850F2F: jnz     short loc_850F38
0x850F31: mov     ecx, edi
0x850F33: call    sub_7604D0
0x850F38: add     [esi+38h], ebx
0x850F3B: mov     ecx, dword ptr [esp+44h+var_C]
0x850F3F: mov     large fs:0, ecx
0x850F46: pop     ecx
0x850F47: pop     edi
0x850F48: pop     esi
0x850F49: pop     ebp
0x850F4A: pop     ebx
0x850F4B: add     esp, 30h
0x850F4E: retn    14h
