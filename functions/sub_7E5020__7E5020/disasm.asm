0x7E5020: sub     esp, 2Ch
0x7E5023: push    esi
0x7E5024: mov     esi, ecx
0x7E5026: cmp     word ptr [esi+11Ah], 0
0x7E502E: push    edi
0x7E502F: jbe     loc_7E515D
0x7E5035: mov     eax, [esi+114h]
0x7E503B: mov     edi, [eax]
0x7E503D: test    edi, edi
0x7E503F: jz      loc_7E5186
0x7E5045: call    _rand
0x7E504A: mov     [esp+34h+var_2C], eax
0x7E504E: fild    [esp+34h+var_2C]
0x7E5052: fdiv    qword ptr ds:0A3D5A8h
0x7E5058: fstp    [esp+34h+var_2C]
0x7E505C: fldz
0x7E505E: fst     [esp+34h+var_C]
0x7E5062: fld     dword ptr [esi+74h]
0x7E5065: fmul    [esp+34h+var_2C]
0x7E5069: mov     ecx, [esp+34h+var_C]
0x7E506D: mov     dword ptr [esp+34h+var_18], ecx
0x7E5071: fstp    [esp+34h+var_8]
0x7E5075: mov     edx, [esp+34h+var_8]
0x7E5079: mov     dword ptr [esp+34h+var_18+4], edx
0x7E507D: fstp    [esp+34h+var_4]
0x7E5081: mov     eax, [esp+34h+var_4]
0x7E5085: mov     [esp+34h+var_10], eax
0x7E5089: call    _rand
0x7E508E: mov     [esp+34h+var_2C], eax
0x7E5092: fild    [esp+34h+var_2C]
0x7E5096: fadd    st, st
0x7E5098: fdiv    qword ptr ds:0A3D5A8h
0x7E509E: fsub    qword ptr ds:0A2F928h
0x7E50A4: fstp    [esp+34h+var_2C]
0x7E50A8: fld     [esp+34h+var_2C]
0x7E50AC: fstp    [esp+34h+var_28]
0x7E50B0: call    _rand
0x7E50B5: mov     [esp+34h+var_2C], eax
0x7E50B9: fild    [esp+34h+var_2C]
0x7E50BD: fadd    st, st
0x7E50BF: fdiv    qword ptr ds:0A3D5A8h
0x7E50C5: fsub    qword ptr ds:0A2F928h
0x7E50CB: fstp    [esp+34h+var_2C]
0x7E50CF: fld     [esp+34h+var_2C]
0x7E50D3: fstp    [esp+34h+var_C]
0x7E50D7: mov     ecx, [esp+34h+var_C]
0x7E50DB: fldz
0x7E50DD: mov     dword ptr [esp+34h+var_24], ecx
0x7E50E1: fstp    [esp+34h+var_8]
0x7E50E5: lea     ecx, [esp+34h+var_24]
0x7E50E9: fld     [esp+34h+var_28]
0x7E50ED: mov     edx, [esp+34h+var_8]
0x7E50F1: fstp    [esp+34h+var_4]
0x7E50F5: mov     dword ptr [esp+34h+var_24+4], edx
0x7E50F9: mov     eax, [esp+34h+var_4]
0x7E50FD: mov     [esp+34h+var_1C], eax
0x7E5101: call    sub_43F350
0x7E5106: fstp    st
0x7E5108: cmp     byte ptr [esi+78h], 0
0x7E510C: jz      short loc_7E5186
0x7E510E: lea     ecx, [esp+34h+var_18]
0x7E5112: push    ecx
0x7E5113: lea     edx, [esp+38h+var_C]
0x7E5117: add     edi, 64h ; 'd'
0x7E511A: push    edx
0x7E511B: mov     ecx, edi
0x7E511D: call    sub_53D4B0
0x7E5122: mov     ecx, [eax]
0x7E5124: mov     dword ptr [esp+34h+var_18], ecx
0x7E5128: mov     edx, [eax+4]
0x7E512B: mov     dword ptr [esp+34h+var_18+4], edx
0x7E512F: mov     eax, [eax+8]
0x7E5132: lea     ecx, [esp+34h+var_24]
0x7E5136: push    ecx
0x7E5137: lea     edx, [esp+38h+var_C]
0x7E513B: push    edx
0x7E513C: mov     ecx, edi
0x7E513E: mov     [esp+3Ch+var_10], eax
0x7E5142: call    sub_7101F0
0x7E5147: mov     ecx, [eax]
0x7E5149: mov     dword ptr [esp+34h+var_24], ecx
0x7E514D: mov     edx, [eax+4]
0x7E5150: mov     dword ptr [esp+34h+var_24+4], edx
0x7E5154: mov     eax, [eax+8]
0x7E5157: mov     [esp+34h+var_1C], eax
0x7E515B: jmp     short loc_7E5186
0x7E515D: mov     eax, ds:0B3F9A8h
0x7E5162: mov     ecx, ds:0B3F9ACh
0x7E5168: mov     edx, ds:0B3F9B0h
0x7E516E: mov     dword ptr [esp+34h+var_18], eax
0x7E5172: mov     dword ptr [esp+34h+var_18+4], ecx
0x7E5176: mov     [esp+34h+var_10], edx
0x7E517A: mov     dword ptr [esp+34h+var_24], eax
0x7E517E: mov     dword ptr [esp+34h+var_24+4], ecx
0x7E5182: mov     [esp+34h+var_1C], edx
0x7E5186: mov     ecx, [esi+6Ch]
0x7E5189: fld     dword ptr [esp+34h+var_18]
0x7E518D: mov     eax, [esp+34h+arg_0]
0x7E5191: shl     eax, 5
0x7E5194: fstp    dword ptr [eax+ecx]
0x7E5197: mov     edx, [esi+6Ch]
0x7E519A: fld     dword ptr [esp+34h+var_18+4]
0x7E519E: pop     edi
0x7E519F: fstp    dword ptr [edx+eax+4]
0x7E51A3: mov     ecx, [esi+6Ch]
0x7E51A6: fld     [esp+30h+var_10]
0x7E51AA: fstp    dword ptr [ecx+eax+8]
0x7E51AE: mov     edx, [esi+6Ch]
0x7E51B1: fld     dword ptr [esi+0F8h]
0x7E51B7: fstp    dword ptr [edx+eax+0Ch]
0x7E51BB: mov     ecx, [esi+6Ch]
0x7E51BE: fld     dword ptr [esp+30h+var_24]
0x7E51C2: fstp    dword ptr [ecx+eax+10h]
0x7E51C6: mov     edx, [esi+6Ch]
0x7E51C9: fld     dword ptr [esp+30h+var_24+4]
0x7E51CD: fstp    dword ptr [edx+eax+14h]
0x7E51D1: mov     ecx, [esi+6Ch]
0x7E51D4: fld     [esp+30h+var_1C]
0x7E51D8: pop     esi
0x7E51D9: fstp    dword ptr [ecx+eax+18h]
0x7E51DD: add     esp, 2Ch
0x7E51E0: retn    4
