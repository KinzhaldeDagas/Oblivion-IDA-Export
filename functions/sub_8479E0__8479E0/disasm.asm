0x8479E0: push    0FFFFFFFFh
0x8479E2: push    offset SEH_8479E0
0x8479E7: mov     eax, large fs:0
0x8479ED: push    eax
0x8479EE: sub     esp, 20h
0x8479F1: push    ebx
0x8479F2: push    ebp
0x8479F3: push    esi
0x8479F4: push    edi
0x8479F5: mov     eax, ds:0B30AACh
0x8479FA: xor     eax, esp
0x8479FC: push    eax
0x8479FD: lea     eax, [esp+40h+var_C]
0x847A01: mov     large fs:0, eax
0x847A07: mov     [esp+40h+var_2C], ecx
0x847A0B: mov     eax, ds:0B42EB8h
0x847A10: fld1
0x847A12: movzx   ebx, byte ptr [eax+9]
0x847A16: mov     esi, [esp+40h+arg_C]
0x847A1A: mov     eax, [esi+0C8h]
0x847A20: movzx   eax, byte ptr [eax+ebx]
0x847A24: mov     ecx, ds:0B25AD0h
0x847A2A: mov     edx, ds:0B25AD8h
0x847A30: mov     edi, ds:0B45B4Ch
0x847A36: mov     [esp+40h+var_1C], ecx
0x847A3A: mov     ecx, ds:0B25AD4h
0x847A40: mov     [esp+40h+arg_C], eax
0x847A44: fstp    [esp+40h+var_1C]
0x847A48: mov     ebp, [esp+40h+var_1C]
0x847A4C: sub     esp, 10h
0x847A4F: fild    [esp+50h+arg_C]
0x847A53: mov     eax, esp
0x847A55: mov     [eax], ebp
0x847A57: mov     [esp+50h+var_14], edx
0x847A5B: mov     edx, ds:0B25ADCh
0x847A61: mov     [eax+4], ecx
0x847A64: fstp    [esp+50h+var_14]
0x847A68: mov     ecx, [esp+50h+var_14]
0x847A6C: mov     [eax+8], ecx
0x847A6F: push    1Fh
0x847A71: mov     [esp+54h+var_28], ebx
0x847A75: mov     [eax+0Ch], edx
0x847A78: call    sub_7ECAE0
0x847A7D: mov     edx, [edi+24h]
0x847A80: mov     eax, [esi]
0x847A82: mov     ebp, [edx]
0x847A84: mov     edx, [eax+88h]
0x847A8A: add     esp, 14h
0x847A8D: push    ebx
0x847A8E: mov     ecx, esi
0x847A90: call    edx
0x847A92: mov     ebx, [ebp+4]
0x847A95: cmp     ebx, eax
0x847A97: mov     [esp+40h+arg_C], eax
0x847A9B: jz      short loc_847AD2
0x847A9D: test    ebx, ebx
0x847A9F: jz      short loc_847AC1
0x847AA1: lea     eax, [ebx+4]
0x847AA4: push    eax; lpAddend
0x847AA5: call    dword ptr ds:0A2807Ch
0x847AAB: test    eax, eax
0x847AAD: jnz     short loc_847ABD
0x847AAF: test    ebx, ebx
0x847AB1: jz      short loc_847ABD
0x847AB3: mov     edx, [ebx]
0x847AB5: mov     eax, [edx]
0x847AB7: push    1
0x847AB9: mov     ecx, ebx
0x847ABB: call    eax
0x847ABD: mov     eax, [esp+40h+arg_C]
0x847AC1: test    eax, eax
0x847AC3: mov     [ebp+4], eax
0x847AC6: jz      short loc_847AD2
0x847AC8: add     eax, 4
0x847ACB: push    eax; lpAddend
0x847ACC: call    dword ptr ds:0A28078h
0x847AD2: push    esi
0x847AD3: push    ebp
0x847AD4: mov     ebp, [esp+48h+var_2C]
0x847AD8: mov     ecx, ebp
0x847ADA: call    sub_848FA0
0x847ADF: mov     ecx, [edi+24h]
0x847AE2: mov     edx, [esp+40h+var_28]
0x847AE6: mov     ebx, [ecx+4]
0x847AE9: push    edx
0x847AEA: push    esi
0x847AEB: mov     ecx, ebp
0x847AED: call    sub_848FD0
0x847AF2: mov     ebp, [ebx+4]
0x847AF5: cmp     ebp, eax
0x847AF7: mov     [esp+40h+arg_C], eax
0x847AFB: jz      short loc_847B33
0x847AFD: test    ebp, ebp
0x847AFF: jz      short loc_847B22
0x847B01: lea     eax, [ebp+4]
0x847B04: push    eax; lpAddend
0x847B05: call    dword ptr ds:0A2807Ch
0x847B0B: test    eax, eax
0x847B0D: jnz     short loc_847B1E
0x847B0F: test    ebp, ebp
0x847B11: jz      short loc_847B1E
0x847B13: mov     edx, [ebp+0]
0x847B16: mov     eax, [edx]
0x847B18: push    1
0x847B1A: mov     ecx, ebp
0x847B1C: call    eax
0x847B1E: mov     eax, [esp+40h+arg_C]
0x847B22: test    eax, eax
0x847B24: mov     [ebx+4], eax
0x847B27: jz      short loc_847B33
0x847B29: add     eax, 4
0x847B2C: push    eax; lpAddend
0x847B2D: call    dword ptr ds:0A28078h
0x847B33: mov     ecx, [esp+40h+var_2C]
0x847B37: push    esi
0x847B38: push    ebx
0x847B39: call    sub_848FA0
0x847B3E: mov     ecx, [edi+24h]
0x847B41: mov     esi, [ecx+8]
0x847B44: mov     eax, ds:0B43108h
0x847B49: mov     ebp, [esi+4]
0x847B4C: add     esi, 4
0x847B4F: cmp     ebp, eax
0x847B51: mov     ebx, eax
0x847B53: jz      short loc_847B86
0x847B55: test    ebp, ebp
0x847B57: jz      short loc_847B76
0x847B59: lea     edx, [ebp+4]
0x847B5C: push    edx; lpAddend
0x847B5D: call    dword ptr ds:0A2807Ch
0x847B63: test    eax, eax
0x847B65: jnz     short loc_847B76
0x847B67: test    ebp, ebp
0x847B69: jz      short loc_847B76
0x847B6B: mov     eax, [ebp+0]
0x847B6E: mov     edx, [eax]
0x847B70: push    1
0x847B72: mov     ecx, ebp
0x847B74: call    edx
0x847B76: test    ebx, ebx
0x847B78: mov     [esi], ebx
0x847B7A: jz      short loc_847B86
0x847B7C: add     ebx, 4
0x847B7F: push    ebx; lpAddend
0x847B80: call    dword ptr ds:0A28078h
0x847B86: mov     eax, [edi+24h]
0x847B89: mov     ebx, [eax+0Ch]
0x847B8C: mov     eax, ds:0B4310Ch
0x847B91: mov     esi, [ebx+4]
0x847B94: cmp     esi, eax
0x847B96: mov     ebp, eax
0x847B98: jz      short loc_847BCB
0x847B9A: test    esi, esi
0x847B9C: jz      short loc_847BBA
0x847B9E: lea     ecx, [esi+4]
0x847BA1: push    ecx; lpAddend
0x847BA2: call    dword ptr ds:0A2807Ch
0x847BA8: test    eax, eax
0x847BAA: jnz     short loc_847BBA
0x847BAC: test    esi, esi
0x847BAE: jz      short loc_847BBA
0x847BB0: mov     edx, [esi]
0x847BB2: mov     eax, [edx]
0x847BB4: push    1
0x847BB6: mov     ecx, esi
0x847BB8: call    eax
0x847BBA: test    ebp, ebp
0x847BBC: mov     [ebx+4], ebp
0x847BBF: jz      short loc_847BCB
0x847BC1: add     ebp, 4
0x847BC4: push    ebp; lpAddend
0x847BC5: call    dword ptr ds:0A28078h
0x847BCB: mov     esi, [esp+40h+var_28]
0x847BCF: fldz
0x847BD1: cmp     esi, 4
0x847BD4: jnz     short loc_847BEF
0x847BD6: fld1
0x847BD8: fst     [esp+40h+var_20]
0x847BDC: cmp     esi, 2
0x847BDF: fxch    st(1)
0x847BE1: fst     [esp+40h+var_24]
0x847BE5: jnz     short loc_847C00
0x847BE7: fxch    st(1)
0x847BE9: fstp    [esp+40h+var_28]
0x847BED: jmp     short loc_847C0F
0x847BEF: cmp     esi, 3
0x847BF2: fst     [esp+40h+var_20]
0x847BF6: fld1
0x847BF8: jnz     short loc_847BDC
0x847BFA: fst     [esp+40h+var_24]
0x847BFE: fxch    st(1)
0x847C00: cmp     esi, 1
0x847C03: fst     [esp+40h+var_28]
0x847C07: jnz     short loc_847C0D
0x847C09: fstp    st
0x847C0B: jmp     short loc_847C0F
0x847C0D: fstp    st(1)
0x847C0F: fstp    [esp+40h+arg_C]
0x847C13: sub     esp, 10h
0x847C16: fld     [esp+50h+arg_C]
0x847C1A: mov     eax, esp
0x847C1C: fstp    [esp+50h+var_1C]
0x847C20: mov     ecx, [esp+50h+var_1C]
0x847C24: fld     [esp+50h+var_28]
0x847C28: mov     [eax], ecx
0x847C2A: fstp    [esp+50h+var_18]
0x847C2E: mov     edx, [esp+50h+var_18]
0x847C32: fld     [esp+50h+var_24]
0x847C36: mov     [eax+4], edx
0x847C39: fstp    [esp+50h+var_14]
0x847C3D: mov     ecx, [esp+50h+var_14]
0x847C41: fld     [esp+50h+var_20]
0x847C45: mov     [eax+8], ecx
0x847C48: fstp    [esp+50h+var_10]
0x847C4C: mov     edx, [esp+50h+var_10]
0x847C50: push    2
0x847C52: mov     [eax+0Ch], edx
0x847C55: call    sub_7ECAE0
0x847C5A: add     esp, 14h
0x847C5D: cmp     esi, 8
0x847C60: jnz     short loc_847C6C
0x847C62: fld1
0x847C64: fst     [esp+40h+var_28]
0x847C68: fldz
0x847C6A: jmp     short loc_847C8E
0x847C6C: cmp     esi, 7
0x847C6F: fldz
0x847C71: fst     [esp+40h+var_28]
0x847C75: fld1
0x847C77: jnz     short loc_847C8C
0x847C79: fst     [esp+40h+var_24]
0x847C7D: fxch    st(1)
0x847C7F: cmp     esi, 5
0x847C82: fst     [esp+40h+var_20]
0x847C86: jnz     short loc_847C9F
0x847C88: fstp    st
0x847C8A: jmp     short loc_847CA1
0x847C8C: fxch    st(1)
0x847C8E: cmp     esi, 6
0x847C91: fst     [esp+40h+var_24]
0x847C95: jnz     short loc_847C7F
0x847C97: fxch    st(1)
0x847C99: fstp    [esp+40h+var_20]
0x847C9D: jmp     short loc_847CA1
0x847C9F: fstp    st(1)
0x847CA1: fstp    [esp+40h+arg_C]
0x847CA5: sub     esp, 10h
0x847CA8: fld     [esp+50h+arg_C]
0x847CAC: mov     eax, esp
0x847CAE: fstp    [esp+50h+var_1C]
0x847CB2: mov     ecx, [esp+50h+var_1C]
0x847CB6: fld     [esp+50h+var_20]
0x847CBA: mov     [eax], ecx
0x847CBC: fstp    [esp+50h+var_18]
0x847CC0: mov     edx, [esp+50h+var_18]
0x847CC4: fld     [esp+50h+var_24]
0x847CC8: mov     [eax+4], edx
0x847CCB: fstp    [esp+50h+var_14]
0x847CCF: mov     ecx, [esp+50h+var_14]
0x847CD3: fld     [esp+50h+var_28]
0x847CD7: mov     [eax+8], ecx
0x847CDA: fstp    [esp+50h+var_10]
0x847CDE: mov     edx, [esp+50h+var_10]
0x847CE2: push    3
0x847CE4: mov     [eax+0Ch], edx
0x847CE7: call    sub_7ECAE0
0x847CEC: add     esp, 14h
0x847CEF: cmp     byte ptr [esp+40h+arg_10], 0
0x847CF4: jz      short loc_847D35
0x847CF6: mov     ebx, 1
0x847CFB: add     [edi+60h], ebx
0x847CFE: mov     [esp+40h+arg_10], edi
0x847D02: mov     esi, [esp+40h+var_2C]
0x847D06: mov     ecx, [esi+38h]
0x847D09: lea     eax, [esp+40h+arg_10]
0x847D0D: push    eax
0x847D0E: push    ecx
0x847D0F: lea     ecx, [esi+40h]
0x847D12: mov     [esp+48h+var_4], 0
0x847D1A: call    sub_76CE40
0x847D1F: or      eax, 0FFFFFFFFh
0x847D22: add     [edi+60h], eax
0x847D25: mov     [esp+40h+var_4], eax
0x847D29: jnz     short loc_847D32
0x847D2B: mov     ecx, edi
0x847D2D: call    sub_7604D0
0x847D32: add     [esi+38h], ebx
0x847D35: mov     ecx, dword ptr [esp+40h+var_C]
0x847D39: mov     large fs:0, ecx
0x847D40: pop     ecx
0x847D41: pop     edi
0x847D42: pop     esi
0x847D43: pop     ebp
0x847D44: pop     ebx
0x847D45: add     esp, 2Ch
0x847D48: retn    14h
