0x7ECC60: mov     eax, [esp+arg_8]
0x7ECC64: sub     esp, 20h
0x7ECC67: mov     dword ptr [eax], 0
0x7ECC6D: cmp     dword ptr [ecx+78h], 1
0x7ECC71: jnb     short loc_7ECC7B
0x7ECC73: xor     al, al
0x7ECC75: add     esp, 20h
0x7ECC78: retn    0Ch
0x7ECC7B: mov     ecx, [ecx+70h]
0x7ECC7E: push    ebx
0x7ECC7F: mov     ebx, [esp+24h+arg_0]
0x7ECC83: push    ebp
0x7ECC84: mov     ebp, [ecx]
0x7ECC86: push    esi
0x7ECC87: push    edi
0x7ECC88: mov     edi, [ecx+8]
0x7ECC8B: mov     [esp+30h+var_20], ecx
0x7ECC8F: lea     ecx, [esp+30h+var_1C]
0x7ECC93: push    ecx
0x7ECC94: mov     ecx, ebx
0x7ECC96: call    sub_405AD0
0x7ECC9B: mov     edx, [eax]
0x7ECC9D: mov     eax, [esp+30h+var_1C]
0x7ECCA1: fld     dword ptr [edx+0F8h]
0x7ECCA7: test    eax, eax
0x7ECCA9: fstp    [esp+30h+var_18]
0x7ECCAD: jz      short loc_7ECCCD
0x7ECCAF: mov     esi, eax
0x7ECCB1: add     eax, 4
0x7ECCB4: push    eax; lpAddend
0x7ECCB5: call    dword ptr ds:0A2807Ch
0x7ECCBB: test    eax, eax
0x7ECCBD: jnz     short loc_7ECCCD
0x7ECCBF: test    esi, esi
0x7ECCC1: jz      short loc_7ECCCD
0x7ECCC3: mov     eax, [esi]
0x7ECCC5: mov     edx, [eax]
0x7ECCC7: push    1
0x7ECCC9: mov     ecx, esi
0x7ECCCB: call    edx
0x7ECCCD: test    edi, edi
0x7ECCCF: jz      loc_7ECEA6
0x7ECCD5: lea     eax, [esp+30h+var_1C]
0x7ECCD9: push    eax
0x7ECCDA: mov     ecx, ebx
0x7ECCDC: call    sub_405AD0
0x7ECCE1: mov     eax, [eax]
0x7ECCE3: mov     esi, [esp+30h+arg_4]
0x7ECCE7: fld     dword ptr [eax+88h]
0x7ECCED: fsub    dword ptr [esi]
0x7ECCEF: add     eax, 88h ; 'ˆ'
0x7ECCF4: fstp    [esp+30h+var_C]
0x7ECCF8: fld     dword ptr [eax+4]
0x7ECCFB: fsub    dword ptr [esi+4]
0x7ECCFE: fstp    [esp+30h+var_8]
0x7ECD02: fld     dword ptr [eax+8]
0x7ECD05: fsub    dword ptr [esi+8]
0x7ECD08: fstp    [esp+30h+var_4]
0x7ECD0C: fld     [esp+30h+var_8]
0x7ECD10: fld     [esp+30h+var_C]
0x7ECD14: fld     [esp+30h+var_4]
0x7ECD18: fld     st(1)
0x7ECD1A: fmulp   st(2), st
0x7ECD1C: fld     st(2)
0x7ECD1E: fmulp   st(3), st
0x7ECD20: fxch    st(1)
0x7ECD22: faddp   st(2), st
0x7ECD24: fmul    st, st
0x7ECD26: faddp   st(1), st
0x7ECD28: fstp    [esp+30h+arg_4]
0x7ECD2C: fld     [esp+30h+arg_4]
0x7ECD30: call    __CIsqrt
0x7ECD35: fstp    [esp+30h+arg_4]
0x7ECD39: fld     [esp+30h+arg_4]
0x7ECD3D: mov     eax, [esp+30h+var_1C]
0x7ECD41: test    eax, eax
0x7ECD43: fsub    dword ptr [esi+0Ch]
0x7ECD46: fdiv    [esp+30h+var_18]
0x7ECD4A: fstp    [esp+30h+var_10]
0x7ECD4E: jz      short loc_7ECD70
0x7ECD50: mov     ebx, eax
0x7ECD52: add     eax, 4
0x7ECD55: push    eax; lpAddend
0x7ECD56: call    dword ptr ds:0A2807Ch
0x7ECD5C: test    eax, eax
0x7ECD5E: jnz     short loc_7ECD70
0x7ECD60: test    ebx, ebx
0x7ECD62: jz      short loc_7ECD70
0x7ECD64: mov     edx, [ebx]
0x7ECD66: mov     eax, [edx]
0x7ECD68: push    1
0x7ECD6A: mov     ecx, ebx
0x7ECD6C: call    eax
0x7ECD6E: mov     edi, edi
0x7ECD70: cmp     edi, [esp+30h+arg_0]
0x7ECD74: jz      loc_7ECE90
0x7ECD7A: mov     ecx, [esp+30h+arg_8]
0x7ECD7E: cmp     dword ptr [ecx], 0
0x7ECD81: jnz     loc_7ECE6B
0x7ECD87: lea     edx, [esp+30h+arg_4]
0x7ECD8B: push    edx
0x7ECD8C: mov     ecx, edi
0x7ECD8E: call    sub_405AD0
0x7ECD93: mov     eax, [eax]
0x7ECD95: fld     dword ptr [eax+0F8h]
0x7ECD9B: mov     eax, [esp+30h+arg_4]
0x7ECD9F: test    eax, eax
0x7ECDA1: fstp    [esp+30h+var_1C]
0x7ECDA5: jz      short loc_7ECDC5
0x7ECDA7: mov     ebx, eax
0x7ECDA9: add     eax, 4
0x7ECDAC: push    eax; lpAddend
0x7ECDAD: call    dword ptr ds:0A2807Ch
0x7ECDB3: test    eax, eax
0x7ECDB5: jnz     short loc_7ECDC5
0x7ECDB7: test    ebx, ebx
0x7ECDB9: jz      short loc_7ECDC5
0x7ECDBB: mov     edx, [ebx]
0x7ECDBD: mov     eax, [edx]
0x7ECDBF: push    1
0x7ECDC1: mov     ecx, ebx
0x7ECDC3: call    eax
0x7ECDC5: lea     ecx, [esp+30h+var_14]
0x7ECDC9: push    ecx
0x7ECDCA: mov     ecx, edi
0x7ECDCC: call    sub_405AD0
0x7ECDD1: mov     eax, [eax]
0x7ECDD3: fld     dword ptr [eax+88h]
0x7ECDD9: add     eax, 88h ; 'ˆ'
0x7ECDDE: fsub    dword ptr [esi]
0x7ECDE0: fstp    [esp+30h+var_C]
0x7ECDE4: fld     dword ptr [eax+4]
0x7ECDE7: fsub    dword ptr [esi+4]
0x7ECDEA: fstp    [esp+30h+var_8]
0x7ECDEE: fld     dword ptr [eax+8]
0x7ECDF1: fsub    dword ptr [esi+8]
0x7ECDF4: fstp    [esp+30h+var_4]
0x7ECDF8: fld     [esp+30h+var_8]
0x7ECDFC: fld     [esp+30h+var_C]
0x7ECE00: fld     [esp+30h+var_4]
0x7ECE04: fld     st(1)
0x7ECE06: fmulp   st(2), st
0x7ECE08: fld     st(2)
0x7ECE0A: fmulp   st(3), st
0x7ECE0C: fxch    st(1)
0x7ECE0E: faddp   st(2), st
0x7ECE10: fmul    st, st
0x7ECE12: faddp   st(1), st
0x7ECE14: fstp    [esp+30h+var_18]
0x7ECE18: fld     [esp+30h+var_18]
0x7ECE1C: call    __CIsqrt
0x7ECE21: fstp    [esp+30h+var_18]
0x7ECE25: fld     [esp+30h+var_18]
0x7ECE29: mov     eax, [esp+30h+var_14]
0x7ECE2D: test    eax, eax
0x7ECE2F: fsub    dword ptr [esi+0Ch]
0x7ECE32: fdiv    [esp+30h+var_1C]
0x7ECE36: fstp    [esp+30h+var_18]
0x7ECE3A: jz      short loc_7ECE5A
0x7ECE3C: mov     edi, eax
0x7ECE3E: add     eax, 4
0x7ECE41: push    eax; lpAddend
0x7ECE42: call    dword ptr ds:0A2807Ch
0x7ECE48: test    eax, eax
0x7ECE4A: jnz     short loc_7ECE5A
0x7ECE4C: test    edi, edi
0x7ECE4E: jz      short loc_7ECE5A
0x7ECE50: mov     edx, [edi]
0x7ECE52: mov     eax, [edx]
0x7ECE54: push    1
0x7ECE56: mov     ecx, edi
0x7ECE58: call    eax
0x7ECE5A: fld     [esp+30h+var_10]
0x7ECE5E: fld     [esp+30h+var_18]
0x7ECE62: fcompp
0x7ECE64: fnstsw  ax
0x7ECE66: test    ah, 41h
0x7ECE69: jz      short loc_7ECE9C
0x7ECE6B: test    ebp, ebp
0x7ECE6D: jz      short loc_7ECEA6
0x7ECE6F: mov     edi, [ebp+8]
0x7ECE72: test    edi, edi
0x7ECE74: lea     eax, [ebp+8]
0x7ECE77: mov     [esp+30h+var_20], ebp
0x7ECE7B: mov     ebp, [ebp+0]
0x7ECE7E: jnz     loc_7ECD70
0x7ECE84: pop     edi
0x7ECE85: pop     esi
0x7ECE86: pop     ebp
0x7ECE87: xor     al, al
0x7ECE89: pop     ebx
0x7ECE8A: add     esp, 20h
0x7ECE8D: retn    0Ch
0x7ECE90: pop     edi
0x7ECE91: pop     esi
0x7ECE92: pop     ebp
0x7ECE93: mov     al, 1
0x7ECE95: pop     ebx
0x7ECE96: add     esp, 20h
0x7ECE99: retn    0Ch
0x7ECE9C: mov     ecx, [esp+30h+var_20]
0x7ECEA0: mov     edx, [esp+30h+arg_8]
0x7ECEA4: mov     [edx], ecx
0x7ECEA6: pop     edi
0x7ECEA7: pop     esi
0x7ECEA8: pop     ebp
0x7ECEA9: xor     al, al
0x7ECEAB: pop     ebx
0x7ECEAC: add     esp, 20h
0x7ECEAF: retn    0Ch
