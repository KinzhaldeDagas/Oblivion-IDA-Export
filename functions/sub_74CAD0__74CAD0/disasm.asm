0x74CAD0: sub     esp, 1Ch
0x74CAD3: push    esi
0x74CAD4: push    edi
0x74CAD5: mov     edi, ecx
0x74CAD7: call    _rand
0x74CADC: mov     [esp+24h+var_18], eax
0x74CAE0: fild    [esp+24h+var_18]
0x74CAE4: fdiv    qword ptr ds:0A3D5A8h
0x74CAEA: fstp    [esp+24h+var_18]
0x74CAEE: fld     dword ptr [edi+54h]
0x74CAF1: fmul    [esp+24h+var_18]
0x74CAF5: fstp    [esp+24h+var_10]
0x74CAF9: call    _rand
0x74CAFE: mov     [esp+24h+var_18], eax
0x74CB02: fild    [esp+24h+var_18]
0x74CB06: fdiv    qword ptr ds:0A3D5A8h
0x74CB0C: fstp    [esp+24h+var_18]
0x74CB10: fld     dword ptr ds:0B3F9A0h
0x74CB16: fmul    [esp+24h+var_18]
0x74CB1A: fstp    [esp+24h+var_14]
0x74CB1E: fld     [esp+24h+var_14]
0x74CB22: fsincos
0x74CB24: fstp    [esp+24h+var_1C]
0x74CB28: fstp    [esp+24h+var_18]
0x74CB2C: fld     [esp+24h+var_1C]
0x74CB30: mov     esi, [esp+24h+arg_4]
0x74CB34: fld     [esp+24h+var_10]
0x74CB38: fld     st
0x74CB3A: fmulp   st(2), st
0x74CB3C: fxch    st(1)
0x74CB3E: fstp    dword ptr [esi]
0x74CB40: fmul    [esp+24h+var_18]
0x74CB44: fstp    dword ptr [esi+4]
0x74CB47: call    _rand
0x74CB4C: mov     [esp+24h+arg_4], eax
0x74CB50: fild    [esp+24h+arg_4]
0x74CB54: push    esi
0x74CB55: lea     eax, [esp+28h+var_C]
0x74CB59: push    eax
0x74CB5A: fdiv    qword ptr ds:0A3D5A8h
0x74CB60: fstp    [esp+2Ch+arg_4]
0x74CB64: fld     [esp+2Ch+arg_4]
0x74CB68: fsub    qword ptr ds:0A2FAA0h
0x74CB6E: fmul    dword ptr [edi+58h]
0x74CB71: mov     edi, [esp+2Ch+arg_0]
0x74CB75: mov     ecx, edi
0x74CB77: fstp    dword ptr [esi+8]
0x74CB7A: call    sub_53D4B0
0x74CB7F: mov     ecx, [eax]
0x74CB81: mov     [esi], ecx
0x74CB83: mov     edx, [eax+4]
0x74CB86: mov     [esi+4], edx
0x74CB89: mov     eax, [eax+8]
0x74CB8C: mov     [esi+8], eax
0x74CB8F: mov     esi, [esp+24h+arg_8]
0x74CB93: push    esi
0x74CB94: lea     ecx, [esp+28h+var_C]
0x74CB98: push    ecx
0x74CB99: mov     ecx, edi
0x74CB9B: call    sub_7101F0
0x74CBA0: mov     edx, [eax]
0x74CBA2: mov     [esi], edx
0x74CBA4: mov     ecx, [eax+4]
0x74CBA7: mov     [esi+4], ecx
0x74CBAA: mov     edx, [eax+8]
0x74CBAD: pop     edi
0x74CBAE: mov     [esi+8], edx
0x74CBB1: pop     esi
0x74CBB2: add     esp, 1Ch
0x74CBB5: retn    0Ch
