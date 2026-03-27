0x96E5E0: sub     esp, 30h
0x96E5E3: mov     eax, [esp+30h+arg_C]
0x96E5E7: mov     ecx, [esp+30h+arg_8]
0x96E5EB: fld     dword ptr [eax]
0x96E5ED: fsub    dword ptr [ecx]
0x96E5EF: push    ebx
0x96E5F0: push    ebp
0x96E5F1: push    esi
0x96E5F2: fstp    [esp+3Ch+var_30]
0x96E5F6: mov     esi, [esp+3Ch+arg_4]
0x96E5FA: fld     dword ptr [eax+4]
0x96E5FD: push    edi
0x96E5FE: fsub    dword ptr [ecx+4]
0x96E601: fstp    [esp+40h+var_2C]
0x96E605: fld     dword ptr [eax+8]
0x96E608: mov     eax, [esp+40h+arg_10]
0x96E60C: fsub    dword ptr [ecx+8]
0x96E60F: fstp    [esp+40h+var_28]
0x96E613: fld     dword ptr [eax]
0x96E615: fsub    dword ptr [ecx]
0x96E617: fstp    [esp+40h+var_24]
0x96E61B: fld     dword ptr [eax+4]
0x96E61E: fsub    dword ptr [ecx+4]
0x96E621: fstp    [esp+40h+var_20]
0x96E625: fld     dword ptr [eax+8]
0x96E628: fsub    dword ptr [ecx+8]
0x96E62B: fstp    [esp+40h+var_1C]
0x96E62F: fld     dword ptr [esi+4]
0x96E632: fld     [esp+40h+var_1C]
0x96E636: fld     st
0x96E638: fmulp   st(2), st
0x96E63A: fld     dword ptr [esi+8]
0x96E63D: fld     [esp+40h+var_20]
0x96E641: fld     st
0x96E643: fmulp   st(2), st
0x96E645: fxch    st(3)
0x96E647: fsubrp  st(1), st
0x96E649: fstp    [esp+40h+var_18]
0x96E64D: fld     dword ptr [esi+8]
0x96E650: fld     [esp+40h+var_24]
0x96E654: fld     st
0x96E656: fmulp   st(2), st
0x96E658: fld     dword ptr [esi]
0x96E65A: fmulp   st(3), st
0x96E65C: fxch    st(1)
0x96E65E: fsubrp  st(2), st
0x96E660: fxch    st(1)
0x96E662: fstp    [esp+40h+var_14]
0x96E666: fld     dword ptr [esi]
0x96E668: fmulp   st(2), st
0x96E66A: fmul    dword ptr [esi+4]
0x96E66D: fsubp   st(1), st
0x96E66F: fstp    [esp+40h+var_10]
0x96E673: fld     [esp+40h+var_14]
0x96E677: fld     st
0x96E679: fld     [esp+40h+var_2C]
0x96E67D: fld     st
0x96E67F: fmulp   st(2), st
0x96E681: fld     [esp+40h+var_18]
0x96E685: fld     st
0x96E687: fld     [esp+40h+var_30]
0x96E68B: fld     st
0x96E68D: fmulp   st(2), st
0x96E68F: fxch    st(4)
0x96E691: faddp   st(1), st
0x96E693: fld     [esp+40h+var_10]
0x96E697: fld     st
0x96E699: fmul    [esp+40h+var_28]
0x96E69D: faddp   st(2), st
0x96E69F: fxch    st(1)
0x96E6A1: fstp    [esp+40h+arg_C]
0x96E6A5: fld     dword ptr ds:0A3C778h
0x96E6AB: fld     [esp+40h+arg_C]
0x96E6AF: fcom    st(1)
0x96E6B1: fnstsw  ax
0x96E6B3: fstp    st(1)
0x96E6B5: test    ah, 1
0x96E6B8: jnz     loc_96E808
0x96E6BE: mov     edi, [esp+40h+arg_0]
0x96E6C2: fstp    st
0x96E6C4: fld     dword ptr [edi]
0x96E6C6: mov     ebx, [esp+40h+arg_20]
0x96E6CA: fsub    dword ptr [ecx]
0x96E6CC: fstp    [esp+40h+var_18]
0x96E6D0: fld     dword ptr [edi+4]
0x96E6D3: fsub    dword ptr [ecx+4]
0x96E6D6: fstp    [esp+40h+var_14]
0x96E6DA: fld     dword ptr [edi+8]
0x96E6DD: fsub    dword ptr [ecx+8]
0x96E6E0: fstp    [esp+40h+var_10]
0x96E6E4: fld     [esp+40h+var_14]
0x96E6E8: fld     st
0x96E6EA: fmulp   st(6), st
0x96E6EC: fld     [esp+40h+var_18]
0x96E6F0: fld     st
0x96E6F2: fmulp   st(4), st
0x96E6F4: fxch    st(6)
0x96E6F6: faddp   st(3), st
0x96E6F8: fld     [esp+40h+var_10]
0x96E6FC: fld     st
0x96E6FE: fmulp   st(3), st
0x96E700: fxch    st(3)
0x96E702: faddp   st(2), st
0x96E704: fxch    st(1)
0x96E706: fstp    [esp+40h+arg_8]
0x96E70A: fld     [esp+40h+arg_8]
0x96E70E: fst     dword ptr [ebx]
0x96E710: fldz
0x96E712: fcomp   st(1)
0x96E714: fnstsw  ax
0x96E716: test    ah, 41h
0x96E719: jz      loc_96E7DE
0x96E71F: fld     [esp+40h+arg_C]
0x96E723: fcompp
0x96E725: fnstsw  ax
0x96E727: test    ah, 5
0x96E72A: jnp     loc_96E7F4
0x96E730: fld     st
0x96E732: mov     ebp, [esp+40h+arg_24]
0x96E736: fmul    [esp+40h+var_28]
0x96E73A: fld     st(2)
0x96E73C: fmul    st, st(4)
0x96E73E: fsubp   st(1), st
0x96E740: fstp    [esp+40h+var_18]
0x96E744: fld     st(3)
0x96E746: fmulp   st(2), st
0x96E748: fld     st(4)
0x96E74A: fmul    [esp+40h+var_28]
0x96E74E: fsubp   st(2), st
0x96E750: fxch    st(1)
0x96E752: fstp    [esp+40h+var_14]
0x96E756: fxch    st(3)
0x96E758: fmulp   st(1), st
0x96E75A: fxch    st(2)
0x96E75C: fmulp   st(1), st
0x96E75E: fsubp   st(1), st
0x96E760: fstp    [esp+40h+var_10]
0x96E764: fld     dword ptr [esi+4]
0x96E767: fmul    [esp+40h+var_14]
0x96E76B: fld     [esp+40h+var_18]
0x96E76F: fmul    dword ptr [esi]
0x96E771: faddp   st(1), st
0x96E773: fld     dword ptr [esi+8]
0x96E776: fmul    [esp+40h+var_10]
0x96E77A: faddp   st(1), st
0x96E77C: fstp    [esp+40h+arg_8]
0x96E780: fld     [esp+40h+arg_8]
0x96E784: fst     dword ptr [ebp+0]
0x96E787: fldz
0x96E789: fcomp   st(1)
0x96E78B: fnstsw  ax
0x96E78D: test    ah, 41h
0x96E790: jz      loc_96E972
0x96E796: fadd    dword ptr [ebx]
0x96E798: fld     [esp+40h+arg_C]
0x96E79C: fcompp
0x96E79E: fnstsw  ax
0x96E7A0: test    ah, 5
0x96E7A3: jnp     loc_96E974
0x96E7A9: lea     eax, [esp+40h+var_18]
0x96E7AD: push    eax
0x96E7AE: lea     ecx, [esp+44h+var_24]
0x96E7B2: call    sub_47D9E0
0x96E7B7: fstp    [esp+40h+arg_8]
0x96E7BB: fld     [esp+40h+arg_8]
0x96E7BF: mov     ecx, [esp+40h+arg_1C]
0x96E7C3: fst     dword ptr [ecx]
0x96E7C5: fldz
0x96E7C7: fcompp
0x96E7C9: fnstsw  ax
0x96E7CB: test    ah, 41h
0x96E7CE: jnz     loc_96E901
0x96E7D4: pop     edi
0x96E7D5: pop     esi
0x96E7D6: pop     ebp
0x96E7D7: xor     al, al
0x96E7D9: pop     ebx
0x96E7DA: add     esp, 30h
0x96E7DD: retn
0x96E7DE: fstp    st(1)
0x96E7E0: pop     edi
0x96E7E1: fstp    st(4)
0x96E7E3: pop     esi
0x96E7E4: fstp    st
0x96E7E6: pop     ebp
0x96E7E7: fstp    st(2)
0x96E7E9: xor     al, al
0x96E7EB: fstp    st(1)
0x96E7ED: pop     ebx
0x96E7EE: fstp    st
0x96E7F0: add     esp, 30h
0x96E7F3: retn
0x96E7F4: fstp    st
0x96E7F6: pop     edi
0x96E7F7: fstp    st(3)
0x96E7F9: pop     esi
0x96E7FA: fstp    st(2)
0x96E7FC: pop     ebp
0x96E7FD: fstp    st(1)
0x96E7FF: xor     al, al
0x96E801: fstp    st
0x96E803: pop     ebx
0x96E804: add     esp, 30h
0x96E807: retn
0x96E808: cmp     [esp+40h+arg_14], 0
0x96E80D: fstp    st(3)
0x96E80F: fstp    st(3)
0x96E811: jnz     loc_96E96C
0x96E817: fld     dword ptr ds:0AA3D4Ch
0x96E81D: fcomp   st(2)
0x96E81F: fnstsw  ax
0x96E821: test    ah, 1
0x96E824: jnz     loc_96E96C
0x96E82A: mov     edi, [esp+40h+arg_0]
0x96E82E: fld     dword ptr [edi]
0x96E830: mov     ebx, [esp+40h+arg_20]
0x96E834: fsub    dword ptr [ecx]
0x96E836: fstp    [esp+40h+var_18]
0x96E83A: fld     dword ptr [edi+4]
0x96E83D: fsub    dword ptr [ecx+4]
0x96E840: fstp    [esp+40h+var_14]
0x96E844: fld     dword ptr [edi+8]
0x96E847: fsub    dword ptr [ecx+8]
0x96E84A: fstp    [esp+40h+var_10]
0x96E84E: fld     [esp+40h+var_14]
0x96E852: fmulp   st(4), st
0x96E854: fmul    [esp+40h+var_18]
0x96E858: faddp   st(3), st
0x96E85A: fld     [esp+40h+var_10]
0x96E85E: fmulp   st(2), st
0x96E860: fxch    st(2)
0x96E862: faddp   st(1), st
0x96E864: fstp    [esp+40h+arg_8]
0x96E868: fld     [esp+40h+arg_8]
0x96E86C: fst     dword ptr [ebx]
0x96E86E: fldz
0x96E870: fcomp   st(1)
0x96E872: fnstsw  ax
0x96E874: test    ah, 5
0x96E877: jnp     loc_96E970
0x96E87D: fcompp
0x96E87F: fnstsw  ax
0x96E881: test    ah, 5
0x96E884: jnp     loc_96E974
0x96E88A: lea     ecx, [esp+40h+var_30]
0x96E88E: push    ecx
0x96E88F: lea     edx, [esp+44h+var_C]
0x96E893: push    edx
0x96E894: lea     ecx, [esp+48h+var_18]
0x96E898: call    sub_498FE0
0x96E89D: lea     eax, [esp+40h+var_C]
0x96E8A1: push    eax
0x96E8A2: mov     ecx, esi
0x96E8A4: call    sub_47D9E0
0x96E8A9: fstp    [esp+40h+arg_8]
0x96E8AD: fld     [esp+40h+arg_8]
0x96E8B1: mov     ebp, [esp+40h+arg_24]
0x96E8B5: fst     dword ptr [ebp+0]
0x96E8B8: fldz
0x96E8BA: fcomp   st(1)
0x96E8BC: fnstsw  ax
0x96E8BE: test    ah, 5
0x96E8C1: jnp     loc_96E972
0x96E8C7: fadd    dword ptr [ebx]
0x96E8C9: fld     [esp+40h+arg_C]
0x96E8CD: fcompp
0x96E8CF: fnstsw  ax
0x96E8D1: test    ah, 41h
0x96E8D4: jz      loc_96E974
0x96E8DA: lea     ecx, [esp+40h+var_C]
0x96E8DE: push    ecx
0x96E8DF: lea     ecx, [esp+44h+var_24]
0x96E8E3: call    sub_47D9E0
0x96E8E8: fstp    [esp+40h+arg_8]
0x96E8EC: fld     [esp+40h+arg_8]
0x96E8F0: mov     ecx, [esp+40h+arg_1C]
0x96E8F4: fst     dword ptr [ecx]
0x96E8F6: fldz
0x96E8F8: fcompp
0x96E8FA: fnstsw  ax
0x96E8FC: test    ah, 5
0x96E8FF: jnp     short loc_96E974
0x96E901: fld     [esp+40h+arg_C]
0x96E905: push    esi; int
0x96E906: fld1
0x96E908: push    ecx
0x96E909: fdivrp  st(1), st
0x96E90B: lea     edx, [esp+48h+var_C]
0x96E90F: fstp    [esp+48h+arg_C]
0x96E913: fld     dword ptr [ebx]
0x96E915: fld     [esp+48h+arg_C]
0x96E919: fld     st
0x96E91B: fmulp   st(2), st
0x96E91D: fxch    st(1)
0x96E91F: fstp    dword ptr [ebx]
0x96E921: fld     dword ptr [ebp+0]
0x96E924: fmul    st, st(1)
0x96E926: fstp    dword ptr [ebp+0]
0x96E929: fmul    dword ptr [ecx]
0x96E92B: fstp    [esp+48h+arg_C]
0x96E92F: fld     [esp+48h+arg_C]
0x96E933: fst     dword ptr [ecx]
0x96E935: fstp    [esp+48h+var_48]; float
0x96E938: push    edx; int
0x96E939: call    sub_47DA10
0x96E93E: add     esp, 0Ch
0x96E941: push    eax
0x96E942: lea     eax, [esp+44h+var_18]
0x96E946: push    eax
0x96E947: mov     ecx, edi
0x96E949: call    sub_47D9B0
0x96E94E: mov     edx, [eax]
0x96E950: mov     ecx, [esp+40h+arg_18]
0x96E954: mov     [ecx], edx
0x96E956: mov     edx, [eax+4]
0x96E959: pop     edi
0x96E95A: mov     [ecx+4], edx
0x96E95D: mov     eax, [eax+8]
0x96E960: pop     esi
0x96E961: pop     ebp
0x96E962: mov     [ecx+8], eax
0x96E965: mov     al, 1
0x96E967: pop     ebx
0x96E968: add     esp, 30h
0x96E96B: retn
0x96E96C: fstp    st(3)
0x96E96E: fstp    st(2)
0x96E970: fstp    st
0x96E972: fstp    st
0x96E974: pop     edi
0x96E975: pop     esi
0x96E976: pop     ebp
0x96E977: xor     al, al
0x96E979: pop     ebx
0x96E97A: add     esp, 30h
0x96E97D: retn
