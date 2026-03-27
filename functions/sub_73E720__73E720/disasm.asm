0x73E720: sub     esp, 14h
0x73E723: push    esi
0x73E724: mov     esi, ecx
0x73E726: fld     dword ptr [esi+18h]
0x73E729: push    edi
0x73E72A: mov     edi, [esp+1Ch+arg_0]
0x73E72E: fsub    dword ptr [edi+88h]
0x73E734: fstp    [esp+1Ch+var_C]
0x73E738: fld     dword ptr [esi+1Ch]
0x73E73B: fsub    dword ptr [edi+8Ch]
0x73E741: fstp    [esp+1Ch+var_8]
0x73E745: fld     dword ptr [esi+20h]
0x73E748: fsub    dword ptr [edi+90h]
0x73E74E: fstp    [esp+1Ch+var_4]
0x73E752: fld     [esp+1Ch+var_8]
0x73E756: fld     [esp+1Ch+var_C]
0x73E75A: fld     [esp+1Ch+var_4]
0x73E75E: fld     st(1)
0x73E760: fmulp   st(2), st
0x73E762: fld     st(2)
0x73E764: fmulp   st(3), st
0x73E766: fxch    st(1)
0x73E768: faddp   st(2), st
0x73E76A: fmul    st, st
0x73E76C: faddp   st(1), st
0x73E76E: fstp    [esp+1Ch+arg_0]
0x73E772: fld     [esp+1Ch+arg_0]
0x73E776: call    __CIsqrt
0x73E77B: fstp    [esp+1Ch+arg_0]
0x73E77F: fld     [esp+1Ch+arg_0]
0x73E783: fstp    [esp+1Ch+arg_0]
0x73E787: fld     [esp+1Ch+arg_0]
0x73E78B: fld     dword ptr [esi+24h]
0x73E78E: fcomp   st(1)
0x73E790: fnstsw  ax
0x73E792: test    ah, 41h
0x73E795: jz      loc_73E851
0x73E79B: fld     dword ptr ds:0A372CCh
0x73E7A1: fcomp   st(1)
0x73E7A3: fnstsw  ax
0x73E7A5: test    ah, 1
0x73E7A8: jz      loc_73E851
0x73E7AE: cmp     byte ptr [edi+104h], 0
0x73E7B5: jz      short loc_73E7BE
0x73E7B7: fstp    st
0x73E7B9: fld     dword ptr [esi+24h]
0x73E7BC: jmp     short loc_73E7C1
0x73E7BE: fdivr   dword ptr [esi+24h]
0x73E7C1: fstp    [esp+1Ch+var_14]
0x73E7C5: fld     dword ptr [edi+0F0h]
0x73E7CB: fsub    dword ptr [edi+0ECh]
0x73E7D1: fld     qword ptr ds:0A3D0C0h
0x73E7D7: fld     st
0x73E7D9: fdivrp  st(2), st
0x73E7DB: fxch    st(1)
0x73E7DD: fstp    [esp+1Ch+arg_0]
0x73E7E1: fld     dword ptr [edi+0F4h]
0x73E7E7: fsub    dword ptr [edi+0F8h]
0x73E7ED: fdivp   st(1), st
0x73E7EF: fstp    [esp+1Ch+var_10]
0x73E7F3: fld     [esp+1Ch+arg_0]
0x73E7F7: fld     [esp+1Ch+var_10]
0x73E7FB: fcom    st(1)
0x73E7FD: fnstsw  ax
0x73E7FF: test    ah, 5
0x73E802: jp      short loc_73E808
0x73E804: fstp    st
0x73E806: jmp     short loc_73E80A
0x73E808: fstp    st(1)
0x73E80A: mov     edx, [esi+28h]
0x73E80D: fstp    [esp+1Ch+arg_0]
0x73E811: fld     [esp+1Ch+arg_0]
0x73E815: xor     ecx, ecx
0x73E817: test    edx, edx
0x73E819: fmul    [esp+1Ch+var_14]
0x73E81D: fmul    dword ptr [edi+120h]
0x73E823: fstp    [esp+1Ch+arg_0]
0x73E827: jbe     short loc_73E847
0x73E829: mov     esi, [esi+2Ch]
0x73E82C: fld     [esp+1Ch+arg_0]
0x73E830: fld     dword ptr [esi]
0x73E832: fcomp   st(1)
0x73E834: fnstsw  ax
0x73E836: test    ah, 41h
0x73E839: jnp     short loc_73E845
0x73E83B: add     ecx, 1
0x73E83E: add     esi, 4
0x73E841: cmp     ecx, edx
0x73E843: jb      short loc_73E830
0x73E845: fstp    st
0x73E847: pop     edi
0x73E848: mov     eax, ecx
0x73E84A: pop     esi
0x73E84B: add     esp, 14h
0x73E84E: retn    8
0x73E851: pop     edi
0x73E852: fstp    st
0x73E854: xor     eax, eax
0x73E856: pop     esi
0x73E857: add     esp, 14h
0x73E85A: retn    8
