0x8C4CA0: push    ebp
0x8C4CA1: mov     ebp, esp
0x8C4CA3: and     esp, 0FFFFFFF0h
0x8C4CA6: sub     esp, 44h
0x8C4CA9: mov     eax, ds:0B30AACh
0x8C4CAE: xor     eax, esp
0x8C4CB0: mov     [esp+44h+var_4], eax
0x8C4CB4: fld     dword ptr ds:0A99378h
0x8C4CBA: push    ebx
0x8C4CBB: mov     eax, [ebp+arg_0]
0x8C4CBE: push    esi
0x8C4CBF: mov     esi, [ebp+arg_8]
0x8C4CC2: fst     dword ptr [esi]
0x8C4CC4: push    edi
0x8C4CC5: fst     dword ptr [esi+4]
0x8C4CC8: mov     edi, ecx
0x8C4CCA: fst     dword ptr [esi+8]
0x8C4CCD: mov     [esp+50h+var_38], eax
0x8C4CD1: fldz
0x8C4CD3: xor     ebx, ebx
0x8C4CD5: fst     dword ptr [esi+0Ch]
0x8C4CD8: fld     dword ptr ds:0A3B888h
0x8C4CDE: fst     dword ptr [esi+10h]
0x8C4CE1: fst     dword ptr [esi+14h]
0x8C4CE4: fst     dword ptr [esi+18h]
0x8C4CE7: fxch    st(1)
0x8C4CE9: fst     dword ptr [esi+1Ch]
0x8C4CEC: fst     dword ptr [esp+50h+var_30+0Ch]
0x8C4CF0: fxch    st(2)
0x8C4CF2: fst     dword ptr [esp+50h+var_30]
0x8C4CF6: fst     dword ptr [esp+50h+var_30+4]
0x8C4CFA: fstp    dword ptr [esp+50h+var_30+8]
0x8C4CFE: movaps  xmm0, [esp+50h+var_30]
0x8C4D03: movaps  xmmword ptr [esi], xmm0
0x8C4D06: fst     dword ptr [esp+50h+var_30]
0x8C4D0A: fst     dword ptr [esp+50h+var_30+4]
0x8C4D0E: fstp    dword ptr [esp+50h+var_30+8]
0x8C4D12: fstp    dword ptr [esp+50h+var_30+0Ch]
0x8C4D16: movaps  xmm0, [esp+50h+var_30]
0x8C4D1B: movaps  xmmword ptr [esi+10h], xmm0
0x8C4D1F: mov     eax, [edi+10h]
0x8C4D22: cmp     [eax+0Ch], ebx
0x8C4D25: jbe     short loc_8C4D93
0x8C4D27: mov     [esp+50h+var_34], ebx
0x8C4D2B: mov     eax, [eax+18h]
0x8C4D2E: add     eax, [esp+50h+var_34]
0x8C4D32: mov     edx, [esp+50h+var_38]
0x8C4D36: fld     dword ptr [eax]
0x8C4D38: movaps  xmm0, xmmword ptr [edi+20h]
0x8C4D3C: fstp    dword ptr [esp+50h+var_30]
0x8C4D40: lea     ecx, [esp+50h+var_30]
0x8C4D44: fld     dword ptr [eax+4]
0x8C4D47: push    ecx
0x8C4D48: fstp    dword ptr [esp+54h+var_30+4]
0x8C4D4C: push    edx
0x8C4D4D: fld     dword ptr [eax+8]
0x8C4D50: lea     ecx, [esp+58h+var_20]
0x8C4D54: fstp    dword ptr [esp+58h+var_30+8]
0x8C4D58: movaps  xmm1, [esp+58h+var_30]
0x8C4D5D: mulps   xmm0, xmm1
0x8C4D60: movaps  [esp+58h+var_30], xmm0
0x8C4D65: call    sub_88FCC0
0x8C4D6A: movaps  xmm0, [esp+50h+var_20]
0x8C4D6F: movaps  xmm1, xmmword ptr [esi]
0x8C4D72: add     [esp+50h+var_34], 0Ch
0x8C4D77: minps   xmm1, xmm0
0x8C4D7A: movaps  xmmword ptr [esi], xmm1
0x8C4D7D: movaps  xmm1, xmmword ptr [esi+10h]
0x8C4D81: maxps   xmm1, xmm0
0x8C4D84: movaps  xmmword ptr [esi+10h], xmm1
0x8C4D88: mov     eax, [edi+10h]
0x8C4D8B: add     ebx, 1
0x8C4D8E: cmp     ebx, [eax+0Ch]
0x8C4D91: jb      short loc_8C4D2B
0x8C4D93: fld     dword ptr [edi+30h]
0x8C4D96: movaps  xmm1, xmmword ptr [esi]
0x8C4D99: fadd    [ebp+arg_4]
0x8C4D9C: mov     ecx, [esp+50h+var_4]
0x8C4DA0: pop     edi
0x8C4DA1: fstp    [esp+4Ch+var_38]
0x8C4DA5: movss   xmm0, [esp+4Ch+var_38]
0x8C4DAB: shufps  xmm0, xmm0, 0
0x8C4DAF: subps   xmm1, xmm0
0x8C4DB2: movaps  xmmword ptr [esi], xmm1
0x8C4DB5: movaps  xmm1, xmmword ptr [esi+10h]
0x8C4DB9: addps   xmm1, xmm0
0x8C4DBC: movaps  xmmword ptr [esi+10h], xmm1
0x8C4DC0: pop     esi
0x8C4DC1: pop     ebx
0x8C4DC2: xor     ecx, esp
0x8C4DC4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C4DC9: mov     esp, ebp
0x8C4DCB: pop     ebp
0x8C4DCC: retn    0Ch
