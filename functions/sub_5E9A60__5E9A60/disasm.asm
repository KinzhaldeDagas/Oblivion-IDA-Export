0x5E9A60: push    0FFFFFFFFh
0x5E9A62: push    offset SEH_5E9A60
0x5E9A67: mov     eax, large fs:0
0x5E9A6D: push    eax
0x5E9A6E: sub     esp, 30h
0x5E9A71: push    ebx
0x5E9A72: push    ebp
0x5E9A73: push    esi
0x5E9A74: push    edi
0x5E9A75: mov     eax, ds:0B30AACh
0x5E9A7A: xor     eax, esp
0x5E9A7C: push    eax
0x5E9A7D: lea     eax, [esp+50h+var_C]
0x5E9A81: mov     large fs:0, eax
0x5E9A87: mov     edi, ecx
0x5E9A89: xor     ebx, ebx
0x5E9A8B: mov     [esp+50h+var_38], ebx
0x5E9A8F: mov     eax, [edi]
0x5E9A91: mov     edx, [eax+388h]
0x5E9A97: call    edx
0x5E9A99: mov     esi, eax
0x5E9A9B: mov     eax, [edi]
0x5E9A9D: mov     edx, [eax+170h]
0x5E9AA3: mov     ecx, edi
0x5E9AA5: xor     ebp, ebp
0x5E9AA7: call    edx
0x5E9AA9: cmp     byte ptr [eax+4], 24h ; '$'
0x5E9AAD: jnz     short loc_5E9AB1
0x5E9AAF: mov     ebp, edi
0x5E9AB1: cmp     esi, ebx
0x5E9AB3: mov     al, 1
0x5E9AB5: jz      loc_5E9D2A
0x5E9ABB: cmp     ebp, ebx
0x5E9ABD: jz      loc_5E9D2A
0x5E9AC3: mov     eax, [esi]
0x5E9AC5: mov     edx, [eax+154h]
0x5E9ACB: mov     ecx, esi
0x5E9ACD: call    edx
0x5E9ACF: test    eax, eax
0x5E9AD1: jz      loc_5E9D28
0x5E9AD7: mov     eax, [ebp+0]
0x5E9ADA: mov     edx, [eax+154h]
0x5E9AE0: mov     ecx, ebp
0x5E9AE2: call    edx
0x5E9AE4: test    eax, eax
0x5E9AE6: jz      loc_5E9D28
0x5E9AEC: lea     eax, [esp+50h+var_18]
0x5E9AF0: push    eax
0x5E9AF1: mov     ecx, ebp
0x5E9AF3: call    sub_625290
0x5E9AF8: mov     ecx, [esi+58h]
0x5E9AFB: mov     edx, [ecx]
0x5E9AFD: mov     edx, [edx+18Ch]
0x5E9B03: lea     eax, [esp+50h+var_30]
0x5E9B07: push    eax
0x5E9B08: call    edx
0x5E9B0A: mov     eax, [eax]
0x5E9B0C: test    eax, eax
0x5E9B0E: mov     [esp+50h+var_4], ebx
0x5E9B12: mov     ebx, 1
0x5E9B17: mov     [esp+50h+var_38], ebx
0x5E9B1B: jz      short loc_5E9B61
0x5E9B1D: mov     ecx, [esi+58h]
0x5E9B20: mov     eax, [ecx]
0x5E9B22: mov     eax, [eax+18Ch]
0x5E9B28: lea     edx, [esp+50h+var_34]
0x5E9B2C: push    edx
0x5E9B2D: call    eax
0x5E9B2F: cmp     esi, ds:0B333C4h
0x5E9B35: mov     eax, [eax]
0x5E9B37: setnz   cl
0x5E9B3A: push    0
0x5E9B3C: push    0
0x5E9B3E: mov     [esp+58h+var_4], ebx
0x5E9B42: lea     edx, [esp+58h+var_18]
0x5E9B46: mov     ebx, 3
0x5E9B4B: mov     [esp+58h+var_38], ebx
0x5E9B4F: push    ecx
0x5E9B50: push    edx
0x5E9B51: mov     ecx, eax
0x5E9B53: call    sub_8949C0
0x5E9B58: test    al, al
0x5E9B5A: mov     byte ptr [esp+50h+var_3C+3], 1
0x5E9B5F: jz      short loc_5E9B66
0x5E9B61: mov     byte ptr [esp+50h+var_3C+3], 0
0x5E9B66: test    bl, 2
0x5E9B69: mov     [esp+50h+var_4], 0
0x5E9B71: jz      short loc_5E9B83
0x5E9B73: and     ebx, 0FFFFFFFDh
0x5E9B76: lea     ecx, [esp+50h+var_34]; this
0x5E9B7A: mov     [esp+50h+var_38], ebx
0x5E9B7E: call    sub_7016A0
0x5E9B83: or      ebp, 0FFFFFFFFh
0x5E9B86: test    bl, 1
0x5E9B89: mov     [esp+50h+var_4], ebp
0x5E9B8D: jz      short loc_5E9B9B
0x5E9B8F: lea     ecx, [esp+50h+var_30]; this
0x5E9B93: and     ebx, 0FFFFFFFEh
0x5E9B96: call    sub_7016A0
0x5E9B9B: cmp     byte ptr [esp+50h+var_3C+3], 0
0x5E9BA0: jz      short loc_5E9BB8
0x5E9BA2: xor     al, al
0x5E9BA4: mov     ecx, [esp+50h+var_C]
0x5E9BA8: mov     large fs:0, ecx
0x5E9BAF: pop     ecx
0x5E9BB0: pop     edi
0x5E9BB1: pop     esi
0x5E9BB2: pop     ebp
0x5E9BB3: pop     ebx
0x5E9BB4: add     esp, 3Ch
0x5E9BB7: retn
0x5E9BB8: mov     eax, [edi]
0x5E9BBA: mov     edx, [eax+174h]
0x5E9BC0: mov     ecx, edi
0x5E9BC2: call    edx
0x5E9BC4: fld     dword ptr [eax]
0x5E9BC6: fsub    dword ptr [esp+50h+var_18]
0x5E9BCA: lea     ecx, [esp+50h+var_24]
0x5E9BCE: fstp    [esp+50h+var_30]
0x5E9BD2: fld     dword ptr [eax+4]
0x5E9BD5: fsub    [esp+50h+var_14]
0x5E9BD9: fstp    [esp+50h+var_34]
0x5E9BDD: fld     dword ptr [eax+8]
0x5E9BE0: fsub    [esp+50h+var_10]
0x5E9BE4: fstp    [esp+50h+var_38]
0x5E9BE8: fld     [esp+50h+var_30]
0x5E9BEC: fstp    [esp+50h+var_24]
0x5E9BF0: fld     [esp+50h+var_34]
0x5E9BF4: fstp    [esp+50h+var_20]
0x5E9BF8: fld     [esp+50h+var_38]
0x5E9BFC: fstp    [esp+50h+var_1C]
0x5E9C00: call    sub_43F350
0x5E9C05: fstp    st
0x5E9C07: fld     [esp+50h+var_24]
0x5E9C0B: fld     qword ptr ds:0A492B0h
0x5E9C11: fmul    st(1), st
0x5E9C13: fxch    st(1)
0x5E9C15: fstp    [esp+50h+var_24]
0x5E9C19: fld     [esp+50h+var_20]
0x5E9C1D: fmul    st, st(1)
0x5E9C1F: fstp    [esp+50h+var_20]
0x5E9C23: fmul    [esp+50h+var_1C]
0x5E9C27: fstp    [esp+50h+var_1C]
0x5E9C2B: fld     [esp+50h+var_24]
0x5E9C2F: fadd    dword ptr [esp+50h+var_18]
0x5E9C33: fstp    [esp+50h+var_30]
0x5E9C37: fld     [esp+50h+var_20]
0x5E9C3B: fadd    [esp+50h+var_14]
0x5E9C3F: fstp    [esp+50h+var_34]
0x5E9C43: fld     [esp+50h+var_1C]
0x5E9C47: fadd    [esp+50h+var_10]
0x5E9C4B: fstp    [esp+50h+var_38]
0x5E9C4F: fld     [esp+50h+var_30]
0x5E9C53: fstp    [esp+50h+var_24]
0x5E9C57: mov     eax, [esp+50h+var_24]
0x5E9C5B: fld     [esp+50h+var_34]
0x5E9C5F: mov     dword ptr [esp+50h+var_18], eax
0x5E9C63: fstp    [esp+50h+var_20]
0x5E9C67: mov     ecx, [esp+50h+var_20]
0x5E9C6B: fld     [esp+50h+var_38]
0x5E9C6F: mov     [esp+50h+var_14], ecx
0x5E9C73: mov     ecx, [esi+58h]
0x5E9C76: fstp    [esp+50h+var_1C]
0x5E9C7A: mov     edx, [esp+50h+var_1C]
0x5E9C7E: mov     [esp+50h+var_10], edx
0x5E9C82: mov     eax, [ecx]
0x5E9C84: mov     eax, [eax+18Ch]
0x5E9C8A: lea     edx, [esp+50h+var_28]
0x5E9C8E: push    edx
0x5E9C8F: call    eax
0x5E9C91: mov     eax, [eax]
0x5E9C93: or      ebx, 4
0x5E9C96: test    eax, eax
0x5E9C98: mov     edi, 2
0x5E9C9D: mov     [esp+50h+var_4], edi
0x5E9CA1: mov     [esp+50h+var_38], ebx
0x5E9CA5: jz      short loc_5E9CED
0x5E9CA7: mov     ecx, [esi+58h]
0x5E9CAA: mov     edx, [ecx]
0x5E9CAC: mov     edx, [edx+18Ch]
0x5E9CB2: lea     eax, [esp+50h+var_2C]
0x5E9CB6: push    eax
0x5E9CB7: call    edx
0x5E9CB9: mov     eax, [eax]
0x5E9CBB: or      ebx, 8
0x5E9CBE: cmp     esi, ds:0B333C4h
0x5E9CC4: push    0
0x5E9CC6: setnz   cl
0x5E9CC9: push    0
0x5E9CCB: lea     edx, [esp+58h+var_18]
0x5E9CCF: mov     [esp+58h+var_4], 3
0x5E9CD7: mov     [esp+58h+var_38], ebx
0x5E9CDB: push    ecx
0x5E9CDC: push    edx
0x5E9CDD: mov     ecx, eax
0x5E9CDF: call    sub_8949C0
0x5E9CE4: test    al, al
0x5E9CE6: mov     byte ptr [esp+50h+var_3C+3], 1
0x5E9CEB: jz      short loc_5E9CF2
0x5E9CED: mov     byte ptr [esp+50h+var_3C+3], 0
0x5E9CF2: test    bl, 8
0x5E9CF5: mov     [esp+50h+var_4], edi
0x5E9CF9: jz      short loc_5E9D0B
0x5E9CFB: and     ebx, 0FFFFFFF7h
0x5E9CFE: lea     ecx, [esp+50h+var_2C]; this
0x5E9D02: mov     [esp+50h+var_38], ebx
0x5E9D06: call    sub_7016A0
0x5E9D0B: test    bl, 4
0x5E9D0E: mov     [esp+50h+var_4], ebp
0x5E9D12: jz      short loc_5E9D1D
0x5E9D14: lea     ecx, [esp+50h+var_28]; this
0x5E9D18: call    sub_7016A0
0x5E9D1D: cmp     byte ptr [esp+50h+var_3C+3], 0
0x5E9D22: jnz     loc_5E9BA2
0x5E9D28: mov     al, 1
0x5E9D2A: mov     ecx, [esp+50h+var_C]
0x5E9D2E: mov     large fs:0, ecx
0x5E9D35: pop     ecx
0x5E9D36: pop     edi
0x5E9D37: pop     esi
0x5E9D38: pop     ebp
0x5E9D39: pop     ebx
0x5E9D3A: add     esp, 3Ch
0x5E9D3D: retn
