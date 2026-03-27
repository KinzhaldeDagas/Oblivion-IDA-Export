0x55A6F0: sub     esp, 18h
0x55A6F3: push    ebx
0x55A6F4: push    edi
0x55A6F5: mov     edi, [esp+20h+arg_0]
0x55A6F9: test    edi, edi
0x55A6FB: mov     ebx, ecx
0x55A6FD: jz      loc_55A7F5
0x55A703: cmp     [esp+20h+arg_4], 0
0x55A708: jz      loc_55A7F5
0x55A70E: push    esi
0x55A70F: mov     esi, [esp+24h+arg_8]
0x55A713: test    esi, esi
0x55A715: jz      loc_55A7F4
0x55A71B: mov     eax, [esi]
0x55A71D: mov     edx, [eax+54h]
0x55A720: mov     ecx, esi
0x55A722: call    edx
0x55A724: test    eax, eax
0x55A726: jz      loc_55A7F4
0x55A72C: fldz
0x55A72E: fld     [esp+24h+arg_C]
0x55A732: fcom    st(1)
0x55A734: fnstsw  ax
0x55A736: fstp    st(1)
0x55A738: test    ah, 41h
0x55A73B: jnp     loc_55A7F2
0x55A741: fld1
0x55A743: fcompp
0x55A745: fnstsw  ax
0x55A747: test    ah, 5
0x55A74A: jnp     loc_55A7F4
0x55A750: cmp     dword ptr [ebx+4], 0
0x55A754: jz      loc_55A7F4
0x55A75A: mov     eax, [esi]
0x55A75C: mov     edx, [eax+54h]
0x55A75F: mov     ecx, esi
0x55A761: call    edx
0x55A763: xor     esi, esi
0x55A765: cmp     [ebx+8], esi
0x55A768: jbe     loc_55A7F4
0x55A76E: fld     [esp+24h+arg_C]
0x55A772: mov     ecx, [ebx+4]
0x55A775: mov     ecx, [ecx+esi*4]
0x55A778: mov     edx, [ebx+0Ch]
0x55A77B: add     edx, esi
0x55A77D: lea     ecx, [ecx+ecx*2]
0x55A780: add     ecx, ecx
0x55A782: add     ecx, ecx
0x55A784: lea     edx, [edx+edx*2]
0x55A787: fld     dword ptr [eax+edx*4]
0x55A78A: lea     edx, [eax+edx*4]
0x55A78D: fsub    dword ptr [ecx+eax]
0x55A790: add     esi, 1
0x55A793: fstp    [esp+24h+var_18]
0x55A797: fld     dword ptr [edx+4]
0x55A79A: fsub    dword ptr [ecx+eax+4]
0x55A79E: fstp    [esp+24h+var_14]
0x55A7A2: fld     dword ptr [edx+8]
0x55A7A5: fsub    dword ptr [ecx+eax+8]
0x55A7A9: fstp    [esp+24h+var_10]
0x55A7AD: fld     [esp+24h+var_18]
0x55A7B1: fmul    st, st(1)
0x55A7B3: fstp    [esp+24h+var_C]
0x55A7B7: fld     [esp+24h+var_14]
0x55A7BB: fmul    st, st(1)
0x55A7BD: fstp    [esp+24h+var_8]
0x55A7C1: fld     [esp+24h+var_10]
0x55A7C5: fmul    st, st(1)
0x55A7C7: fstp    [esp+24h+var_4]
0x55A7CB: fld     dword ptr [ecx+edi]
0x55A7CE: fadd    [esp+24h+var_C]
0x55A7D2: fstp    dword ptr [ecx+edi]
0x55A7D5: fld     dword ptr [ecx+edi+4]
0x55A7D9: fadd    [esp+24h+var_8]
0x55A7DD: fstp    dword ptr [ecx+edi+4]
0x55A7E1: lea     ecx, [ecx+edi+8]
0x55A7E5: fld     dword ptr [ecx]
0x55A7E7: fadd    [esp+24h+var_4]
0x55A7EB: fstp    dword ptr [ecx]
0x55A7ED: cmp     esi, [ebx+8]
0x55A7F0: jb      short loc_55A772
0x55A7F2: fstp    st
0x55A7F4: pop     esi
0x55A7F5: pop     edi
0x55A7F6: pop     ebx
0x55A7F7: add     esp, 18h
0x55A7FA: retn    10h
