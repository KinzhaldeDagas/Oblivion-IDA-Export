0x67E3D0: sub     esp, 30h
0x67E3D3: push    ebx
0x67E3D4: push    ebp
0x67E3D5: mov     ebp, [esp+38h+arg_0]
0x67E3D9: test    ebp, ebp
0x67E3DB: mov     ebx, ecx
0x67E3DD: jz      loc_67E5F0
0x67E3E3: push    esi
0x67E3E4: mov     ecx, ebp
0x67E3E6: call    sub_68C6E0
0x67E3EB: lea     esi, [ebx+0Ch]
0x67E3EE: push    esi
0x67E3EF: mov     ecx, ebx
0x67E3F1: mov     [esp+40h+arg_0], esi
0x67E3F5: call    sub_8AA390
0x67E3FA: test    al, al
0x67E3FC: jz      loc_67E5EF
0x67E402: push    offset dword_B15450
0x67E407: mov     ecx, ebx
0x67E409: call    sub_8AA390
0x67E40E: test    al, al
0x67E410: jz      loc_67E5EF
0x67E416: push    offset dword_B15450
0x67E41B: mov     ecx, esi
0x67E41D: call    sub_8AA390
0x67E422: test    al, al
0x67E424: jz      loc_67E5EF
0x67E42A: push    edi
0x67E42B: push    0
0x67E42D: push    esi
0x67E42E: mov     ecx, ebp
0x67E430: call    sub_68C280
0x67E435: mov     ecx, [esp+40h+arg_4]
0x67E439: push    ecx
0x67E43A: mov     ecx, eax
0x67E43C: call    sub_68CB40
0x67E441: cmp     dword ptr [ebx+1Ch], 0
0x67E445: jz      loc_67E4E7
0x67E44B: mov     edi, [ebx+24h]
0x67E44E: test    edi, edi
0x67E450: jz      loc_67E4E7
0x67E456: push    0
0x67E458: mov     ecx, edi
0x67E45A: call    sub_4BEF40
0x67E45F: push    eax
0x67E460: mov     ecx, ebp
0x67E462: call    sub_68C280
0x67E467: mov     esi, eax
0x67E469: test    esi, esi
0x67E46B: jz      short loc_67E4BC
0x67E46D: push    1
0x67E46F: mov     ecx, esi
0x67E471: call    sub_68CA30
0x67E476: mov     ecx, [ebx+28h]; this
0x67E479: test    ecx, ecx
0x67E47B: jz      short loc_67E486
0x67E47D: call    Actor_IsCreature
0x67E482: test    al, al
0x67E484: jnz     short loc_67E495
0x67E486: mov     ecx, edi
0x67E488: call    sub_4E8040
0x67E48D: mov     ecx, esi
0x67E48F: push    eax
0x67E490: call    sub_68CA60
0x67E495: mov     ecx, edi
0x67E497: call    sub_67ECF0
0x67E49C: mov     ecx, esi
0x67E49E: push    eax
0x67E49F: call    sub_68CA90
0x67E4A4: mov     ecx, edi
0x67E4A6: call    sub_67ED20
0x67E4AB: mov     ecx, esi
0x67E4AD: push    eax
0x67E4AE: call    sub_68CAC0
0x67E4B3: push    1
0x67E4B5: mov     ecx, esi
0x67E4B7: call    sub_68CB10
0x67E4BC: mov     ecx, edi
0x67E4BE: call    TESEnchantableForm_GetCastingType
0x67E4C3: mov     edi, eax
0x67E4C5: test    edi, edi
0x67E4C7: jnz     short loc_67E456
0x67E4C9: mov     ecx, [ebx+24h]
0x67E4CC: call    sub_4BEF40
0x67E4D1: mov     edx, [eax]
0x67E4D3: mov     esi, [esp+40h+arg_0]
0x67E4D7: mov     [esp+40h+var_30], edx
0x67E4DB: mov     ecx, [eax+4]
0x67E4DE: mov     [esp+40h+var_2C], ecx
0x67E4E2: mov     edx, [eax+8]
0x67E4E5: jmp     short loc_67E4F7
0x67E4E7: mov     eax, [ebx]
0x67E4E9: mov     ecx, [ebx+4]
0x67E4EC: mov     edx, [ebx+8]
0x67E4EF: mov     [esp+40h+var_30], eax
0x67E4F3: mov     [esp+40h+var_2C], ecx
0x67E4F7: push    0
0x67E4F9: push    ebx
0x67E4FA: mov     ecx, ebp
0x67E4FC: mov     [esp+48h+var_28], edx
0x67E500: call    sub_68C280
0x67E505: mov     ecx, ds:0B333A0h
0x67E50B: cmp     dword ptr [ecx+34h], 0
0x67E50F: pop     edi
0x67E510: jnz     loc_67E5EF
0x67E516: fld1
0x67E518: push    ecx
0x67E519: fstp    [esp+40h+var_40]; float
0x67E51C: lea     eax, [esp+40h+var_C]
0x67E520: push    eax; int
0x67E521: push    esi; int
0x67E522: lea     edx, [esp+48h+var_30]
0x67E526: push    edx; int
0x67E527: call    sub_43F7C0
0x67E52C: test    eax, eax
0x67E52E: jz      loc_67E5EF
0x67E534: fld     dword ptr [esi]
0x67E536: lea     ecx, [esp+3Ch+var_24]
0x67E53A: fsub    [esp+3Ch+var_30]
0x67E53E: fstp    [esp+3Ch+var_24]
0x67E542: fld     dword ptr [esi+4]
0x67E545: fsub    [esp+3Ch+var_2C]
0x67E549: fstp    [esp+3Ch+var_20]
0x67E54D: fldz
0x67E54F: fstp    [esp+3Ch+var_1C]
0x67E553: call    sub_43F350
0x67E558: fstp    st
0x67E55A: fld     [esp+3Ch+var_24]
0x67E55E: mov     ecx, ebp
0x67E560: fld     qword ptr ds:0A3F3E8h
0x67E566: fmul    st(1), st
0x67E568: fxch    st(1)
0x67E56A: fstp    [esp+3Ch+var_18]
0x67E56E: fld     [esp+3Ch+var_20]
0x67E572: fmul    st, st(1)
0x67E574: fstp    [esp+3Ch+var_14]
0x67E578: fmul    [esp+3Ch+var_1C]
0x67E57C: fstp    [esp+3Ch+var_10]
0x67E580: fld     [esp+3Ch+var_28]
0x67E584: fst     [esp+3Ch+var_4]
0x67E588: fld     [esp+3Ch+var_C]
0x67E58C: fld     st
0x67E58E: fld     [esp+3Ch+var_18]
0x67E592: fld     st
0x67E594: fsubp   st(2), st
0x67E596: fxch    st(1)
0x67E598: fstp    [esp+3Ch+var_24]
0x67E59C: fld     [esp+3Ch+var_8]
0x67E5A0: fld     st
0x67E5A2: fld     [esp+3Ch+var_14]
0x67E5A6: fld     st
0x67E5A8: fsubp   st(2), st
0x67E5AA: fxch    st(1)
0x67E5AC: fstp    [esp+3Ch+var_20]
0x67E5B0: fld     st(4)
0x67E5B2: fld     [esp+3Ch+var_10]
0x67E5B6: fld     st
0x67E5B8: fsubp   st(2), st
0x67E5BA: fxch    st(1)
0x67E5BC: fstp    [esp+3Ch+var_1C]
0x67E5C0: fxch    st(3)
0x67E5C2: faddp   st(4), st
0x67E5C4: fxch    st(3)
0x67E5C6: fstp    [esp+3Ch+var_18]
0x67E5CA: faddp   st(2), st
0x67E5CC: fxch    st(1)
0x67E5CE: fstp    [esp+3Ch+var_14]
0x67E5D2: faddp   st(1), st
0x67E5D4: fstp    [esp+3Ch+var_10]
0x67E5D8: call    TESHealthForm_GetHealth
0x67E5DD: push    eax
0x67E5DE: lea     eax, [esp+40h+var_18]
0x67E5E2: push    eax
0x67E5E3: lea     ecx, [esp+44h+var_24]
0x67E5E7: push    ecx
0x67E5E8: mov     ecx, ebp
0x67E5EA: call    sub_68C3A0
0x67E5EF: pop     esi
0x67E5F0: pop     ebp
0x67E5F1: pop     ebx
0x67E5F2: add     esp, 30h
0x67E5F5: retn    8
