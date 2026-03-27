0x78F7A0: sub     esp, 34h
0x78F7A3: push    edi
0x78F7A4: xor     edi, edi
0x78F7A6: cmp     [ecx+1Ch], edi
0x78F7A9: mov     [esp+38h+var_30], ecx
0x78F7AD: mov     [esp+38h+var_2C], edi
0x78F7B1: jle     loc_78F9EE
0x78F7B7: movzx   eax, [esp+38h+arg_4]
0x78F7BC: push    ebx
0x78F7BD: push    ebp
0x78F7BE: add     eax, 1
0x78F7C1: push    esi
0x78F7C2: mov     esi, [esp+44h+arg_0]
0x78F7C6: mov     [esp+44h+var_34], eax
0x78F7CA: lea     ebx, [ebx+0]
0x78F7D0: mov     eax, [esp+44h+var_34]
0x78F7D4: movzx   edx, [esp+44h+arg_4]
0x78F7D9: imul    eax, edi
0x78F7DC: xor     ebp, ebp
0x78F7DE: test    edx, edx
0x78F7E0: mov     [esp+44h+arg_0], eax
0x78F7E4: jl      loc_78F9DB
0x78F7EA: jmp     short loc_78F7F4
0x78F7EC: align 10h
0x78F7F0: mov     eax, [esp+44h+arg_0]
0x78F7F4: test    ebp, ebp
0x78F7F6: jnz     short loc_78F803
0x78F7F8: movzx   edx, [esp+44h+arg_4]
0x78F7FD: lea     edx, [edx+eax-1]
0x78F801: jmp     short loc_78F807
0x78F803: lea     edx, [eax+ebp-1]
0x78F807: movzx   edi, [esp+44h+arg_4]
0x78F80C: cmp     ebp, edi
0x78F80E: lea     ebx, [eax+1]
0x78F811: jz      short loc_78F815
0x78F813: add     ebx, ebp
0x78F815: mov     eax, [ecx+24h]
0x78F818: add     edx, eax
0x78F81A: push    edx
0x78F81B: mov     ecx, esi
0x78F81D: add     ebx, eax
0x78F81F: call    sub_794730
0x78F824: push    ebx
0x78F825: mov     ecx, esi
0x78F827: mov     edi, eax
0x78F829: call    sub_794730
0x78F82E: fld     dword ptr [eax]
0x78F830: fsub    dword ptr [edi]
0x78F832: fstp    [esp+44h+var_18]
0x78F836: fld     dword ptr [eax+4]
0x78F839: fsub    dword ptr [edi+4]
0x78F83C: fstp    [esp+44h+var_14]
0x78F840: fld     dword ptr [eax+8]
0x78F843: fsub    dword ptr [edi+8]
0x78F846: fstp    [esp+44h+var_10]
0x78F84A: fld     [esp+44h+var_14]
0x78F84E: fld     [esp+44h+var_18]
0x78F852: fld     [esp+44h+var_10]
0x78F856: fld     st(1)
0x78F858: fmulp   st(2), st
0x78F85A: fld     st(2)
0x78F85C: fmulp   st(3), st
0x78F85E: fxch    st(1)
0x78F860: faddp   st(2), st
0x78F862: fmul    st, st
0x78F864: faddp   st(1), st
0x78F866: fstp    [esp+44h+var_28]
0x78F86A: fld     [esp+44h+var_28]
0x78F86E: call    __CIsqrt
0x78F873: fstp    [esp+44h+var_28]
0x78F877: fld     [esp+44h+var_28]
0x78F87B: mov     edi, [esp+44h+var_2C]
0x78F87F: test    edi, edi
0x78F881: fld1
0x78F883: fdivrp  st(1), st
0x78F885: fstp    [esp+44h+var_28]
0x78F889: fld     [esp+44h+var_28]
0x78F88D: fld     st
0x78F88F: fmul    [esp+44h+var_18]
0x78F893: fstp    [esp+44h+var_18]
0x78F897: fld     [esp+44h+var_14]
0x78F89B: fmul    st, st(1)
0x78F89D: fstp    [esp+44h+var_14]
0x78F8A1: fmul    [esp+44h+var_10]
0x78F8A5: fstp    [esp+44h+var_10]
0x78F8A9: jnz     short loc_78F8B1
0x78F8AB: mov     eax, [esp+44h+arg_0]
0x78F8AF: jmp     short loc_78F8B9
0x78F8B1: lea     eax, [edi-1]
0x78F8B4: imul    eax, [esp+44h+var_34]
0x78F8B9: mov     ecx, [esp+44h+var_30]
0x78F8BD: mov     edx, [ecx+1Ch]
0x78F8C0: sub     edx, 1
0x78F8C3: add     eax, ebp
0x78F8C5: cmp     edi, edx
0x78F8C7: jnz     short loc_78F8D2
0x78F8C9: mov     edx, [esp+44h+arg_0]
0x78F8CD: lea     edi, [edx+ebp]
0x78F8D0: jmp     short loc_78F8DC
0x78F8D2: add     edi, 1
0x78F8D5: imul    edi, [esp+44h+var_34]
0x78F8DA: add     edi, ebp
0x78F8DC: mov     ecx, [ecx+24h]
0x78F8DF: add     eax, ecx
0x78F8E1: add     edi, ecx
0x78F8E3: push    eax
0x78F8E4: mov     ecx, esi
0x78F8E6: call    sub_794730
0x78F8EB: push    edi
0x78F8EC: mov     ecx, esi
0x78F8EE: mov     ebx, eax
0x78F8F0: call    sub_794730
0x78F8F5: fld     dword ptr [eax]
0x78F8F7: fsub    dword ptr [ebx]
0x78F8F9: fstp    [esp+44h+var_24]
0x78F8FD: fld     dword ptr [eax+4]
0x78F900: fsub    dword ptr [ebx+4]
0x78F903: fstp    [esp+44h+var_20]
0x78F907: fld     dword ptr [eax+8]
0x78F90A: fsub    dword ptr [ebx+8]
0x78F90D: fstp    [esp+44h+var_1C]
0x78F911: fld     [esp+44h+var_24]
0x78F915: fld     [esp+44h+var_20]
0x78F919: fld     [esp+44h+var_1C]
0x78F91D: fld     st(1)
0x78F91F: fmulp   st(2), st
0x78F921: fld     st(2)
0x78F923: fmulp   st(3), st
0x78F925: fxch    st(1)
0x78F927: faddp   st(2), st
0x78F929: fmul    st, st
0x78F92B: faddp   st(1), st
0x78F92D: fstp    [esp+44h+var_28]
0x78F931: fld     [esp+44h+var_28]
0x78F935: call    __CIsqrt
0x78F93A: fstp    [esp+44h+var_28]
0x78F93E: fld     [esp+44h+var_28]
0x78F942: lea     eax, [esp+44h+var_C]
0x78F946: fld1
0x78F948: push    eax
0x78F949: fdivrp  st(1), st
0x78F94B: mov     ecx, esi
0x78F94D: fstp    [esp+48h+var_28]
0x78F951: fld     [esp+48h+var_28]
0x78F955: fld     st
0x78F957: fmul    [esp+48h+var_24]
0x78F95B: fstp    [esp+48h+var_24]
0x78F95F: fld     st
0x78F961: fmul    [esp+48h+var_20]
0x78F965: fstp    [esp+48h+var_20]
0x78F969: fmul    [esp+48h+var_1C]
0x78F96D: fstp    [esp+48h+var_1C]
0x78F971: fld     [esp+48h+var_1C]
0x78F975: fld     st
0x78F977: fld     [esp+48h+var_14]
0x78F97B: fld     st
0x78F97D: fmulp   st(2), st
0x78F97F: fld     [esp+48h+var_10]
0x78F983: fld     st
0x78F985: fld     [esp+48h+var_20]
0x78F989: fld     st
0x78F98B: fmulp   st(2), st
0x78F98D: fxch    st(4)
0x78F98F: fsubrp  st(1), st
0x78F991: fstp    [esp+48h+var_C]
0x78F995: fld     [esp+48h+var_24]
0x78F999: fld     st
0x78F99B: fmulp   st(2), st
0x78F99D: fld     [esp+48h+var_18]
0x78F9A1: fld     st
0x78F9A3: fmulp   st(6), st
0x78F9A5: fxch    st(2)
0x78F9A7: fsubrp  st(5), st
0x78F9A9: fxch    st(4)
0x78F9AB: fstp    [esp+48h+var_8]
0x78F9AF: fmulp   st(2), st
0x78F9B1: fmulp   st(2), st
0x78F9B3: fsubrp  st(1), st
0x78F9B5: fstp    [esp+48h+var_4]
0x78F9B9: call    sub_7962F0
0x78F9BE: add     word ptr [esi+22h], 1
0x78F9C3: movzx   eax, [esp+44h+arg_4]
0x78F9C8: add     ebp, 1
0x78F9CB: cmp     ebp, eax
0x78F9CD: mov     ecx, [esp+44h+var_30]
0x78F9D1: jle     loc_78F7F0
0x78F9D7: mov     edi, [esp+44h+var_2C]
0x78F9DB: add     edi, 1
0x78F9DE: cmp     edi, [ecx+1Ch]
0x78F9E1: mov     [esp+44h+var_2C], edi
0x78F9E5: jl      loc_78F7D0
0x78F9EB: pop     esi
0x78F9EC: pop     ebp
0x78F9ED: pop     ebx
0x78F9EE: pop     edi
0x78F9EF: add     esp, 34h
0x78F9F2: retn    8
