0x753F80: sub     esp, 104h
0x753F86: push    ebx
0x753F87: mov     ebx, ecx
0x753F89: push    ebp
0x753F8A: push    esi
0x753F8B: mov     esi, [ebx+18h]
0x753F8E: push    edi
0x753F8F: add     esi, 64h ; 'd'
0x753F92: mov     ecx, 0Dh
0x753F97: lea     edi, [esp+114h+var_9C]
0x753F9B: rep movsd
0x753F9D: mov     esi, [ebx+10h]
0x753FA0: add     esi, 64h ; 'd'
0x753FA3: mov     ecx, 0Dh
0x753FA8: lea     edi, [esp+114h+var_68]
0x753FAF: lea     eax, [esp+114h+var_34]
0x753FB6: rep movsd
0x753FB8: push    eax
0x753FB9: lea     ecx, [esp+118h+var_68]
0x753FC0: call    sub_718A80
0x753FC5: lea     ecx, [esp+114h+var_9C]
0x753FC9: push    ecx
0x753FCA: lea     edx, [esp+118h+var_D0]
0x753FCE: push    edx
0x753FCF: lea     ecx, [esp+11Ch+var_34]
0x753FD6: call    sub_53D7A0
0x753FDB: mov     edi, [esp+114h+arg_4]
0x753FE2: xor     ebp, ebp
0x753FE4: cmp     [edi+48h], bp
0x753FE8: jbe     loc_754125
0x753FEE: mov     edi, edi
0x753FF0: mov     edx, [edi+5Ch]
0x753FF3: movzx   eax, bp
0x753FF6: lea     ecx, ds:0[eax*8]
0x753FFD: sub     ecx, eax
0x753FFF: lea     esi, [edx+ecx*4]
0x754002: mov     ecx, [edi+1Ch]
0x754005: lea     eax, [eax+eax*2]
0x754008: mov     edx, [ecx+eax*4+4]
0x75400C: lea     eax, [ecx+eax*4]
0x75400F: mov     ecx, [eax]
0x754011: mov     eax, [eax+8]
0x754014: mov     [esp+114h+var_DC], ecx
0x754018: mov     [esp+114h+var_D8], edx
0x75401C: fld     [esp+114h+var_DC]
0x754020: mov     [esp+114h+var_D4], eax
0x754024: fsub    [esp+114h+var_AC]
0x754028: fstp    [esp+114h+var_E8]
0x75402C: fld     [esp+114h+var_D8]
0x754030: fsub    [esp+114h+var_A8]
0x754034: fstp    [esp+114h+var_E4]
0x754038: fld     [esp+114h+var_D4]
0x75403C: fsub    [esp+114h+var_A4]
0x754040: fstp    [esp+114h+var_E0]
0x754044: fld     [esp+114h+var_E4]
0x754048: fld     [esp+114h+var_E8]
0x75404C: fld     [esp+114h+var_E0]
0x754050: fld     st(1)
0x754052: fmulp   st(2), st
0x754054: fld     st(2)
0x754056: fmulp   st(3), st
0x754058: fxch    st(1)
0x75405A: faddp   st(2), st
0x75405C: fmul    st, st
0x75405E: faddp   st(1), st
0x754060: fstp    [esp+114h+var_104]
0x754064: fld     [esp+114h+var_104]
0x754068: fld     dword ptr [ebx+2Ch]
0x75406B: fcompp
0x75406D: fnstsw  ax
0x75406F: test    ah, 1
0x754072: jnz     loc_754118
0x754078: call    _rand
0x75407D: mov     [esp+114h+var_104], eax
0x754081: fild    [esp+114h+var_104]
0x754085: fadd    st, st
0x754087: fdiv    qword ptr ds:0A3D5A8h
0x75408D: fsub    qword ptr ds:0A2F928h
0x754093: fstp    [esp+114h+var_F4]
0x754097: call    _rand
0x75409C: mov     [esp+114h+var_104], eax
0x7540A0: fild    [esp+114h+var_104]
0x7540A4: fadd    st, st
0x7540A6: fdiv    qword ptr ds:0A3D5A8h
0x7540AC: fsub    qword ptr ds:0A2F928h
0x7540B2: fstp    [esp+114h+var_F0]
0x7540B6: call    _rand
0x7540BB: mov     [esp+114h+var_104], eax
0x7540BF: fild    [esp+114h+var_104]
0x7540C3: fadd    st, st
0x7540C5: fdiv    qword ptr ds:0A3D5A8h
0x7540CB: fsub    qword ptr ds:0A2F928h
0x7540D1: fstp    [esp+114h+var_EC]
0x7540D5: fld     dword ptr [ebx+1Ch]
0x7540D8: fstp    [esp+114h+var_104]
0x7540DC: fld     [esp+114h+var_104]
0x7540E0: fld     st
0x7540E2: fmul    [esp+114h+var_F4]
0x7540E6: fstp    [esp+114h+var_100]
0x7540EA: fld     st
0x7540EC: fmul    [esp+114h+var_F0]
0x7540F0: fstp    [esp+114h+var_FC]
0x7540F4: fmul    [esp+114h+var_EC]
0x7540F8: fstp    [esp+114h+var_F8]
0x7540FC: fld     dword ptr [esi]
0x7540FE: fadd    [esp+114h+var_100]
0x754102: fstp    dword ptr [esi]
0x754104: fld     dword ptr [esi+4]
0x754107: fadd    [esp+114h+var_FC]
0x75410B: fstp    dword ptr [esi+4]
0x75410E: fld     dword ptr [esi+8]
0x754111: fadd    [esp+114h+var_F8]
0x754115: fstp    dword ptr [esi+8]
0x754118: add     ebp, 1
0x75411B: cmp     bp, [edi+48h]
0x75411F: jb      loc_753FF0
0x754125: pop     edi
0x754126: pop     esi
0x754127: pop     ebp
0x754128: pop     ebx
0x754129: add     esp, 104h
0x75412F: retn    8
