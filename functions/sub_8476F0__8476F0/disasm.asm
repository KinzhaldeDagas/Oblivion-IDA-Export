0x8476F0: push    0FFFFFFFFh
0x8476F2: push    offset SEH_851250
0x8476F7: mov     eax, large fs:0
0x8476FD: push    eax
0x8476FE: sub     esp, 1Ch
0x847701: push    ebx
0x847702: push    ebp
0x847703: push    esi
0x847704: push    edi
0x847705: mov     eax, ds:0B30AACh
0x84770A: xor     eax, esp
0x84770C: push    eax
0x84770D: lea     eax, [esp+3Ch+var_C]
0x847711: mov     large fs:0, eax
0x847717: mov     [esp+3Ch+var_28], ecx
0x84771B: mov     eax, ds:0B42EB8h
0x847720: fld1
0x847722: movzx   esi, byte ptr [eax+9]
0x847726: mov     edi, [esp+3Ch+arg_C]
0x84772A: mov     eax, [edi+0C8h]
0x847730: movzx   eax, byte ptr [eax+esi]
0x847734: mov     ecx, ds:0B25AD0h
0x84773A: mov     edx, ds:0B25AD8h
0x847740: mov     ebx, ds:0B45B70h
0x847746: mov     [esp+3Ch+var_1C], ecx
0x84774A: mov     ecx, ds:0B25AD4h
0x847750: mov     [esp+3Ch+arg_C], eax
0x847754: fstp    [esp+3Ch+var_1C]
0x847758: mov     ebp, [esp+3Ch+var_1C]
0x84775C: sub     esp, 10h
0x84775F: fild    [esp+4Ch+arg_C]
0x847763: mov     eax, esp
0x847765: mov     [eax], ebp
0x847767: mov     [esp+4Ch+var_14], edx
0x84776B: mov     edx, ds:0B25ADCh
0x847771: mov     [eax+4], ecx
0x847774: fstp    [esp+4Ch+var_14]
0x847778: mov     ecx, [esp+4Ch+var_14]
0x84777C: mov     [eax+8], ecx
0x84777F: push    1Fh
0x847781: mov     [eax+0Ch], edx
0x847784: call    sub_7ECAE0
0x847789: mov     edx, [ebx+24h]
0x84778C: mov     ebp, [edx]
0x84778E: mov     eax, [edi]
0x847790: mov     edx, [eax+88h]
0x847796: add     esp, 14h
0x847799: push    esi
0x84779A: mov     ecx, edi
0x84779C: mov     [esp+40h+arg_C], ebp
0x8477A0: call    edx
0x8477A2: mov     ebp, [ebp+4]
0x8477A5: cmp     ebp, eax
0x8477A7: mov     [esp+3Ch+var_24], eax
0x8477AB: jz      short loc_8477E7
0x8477AD: test    ebp, ebp
0x8477AF: jz      short loc_8477D2
0x8477B1: lea     eax, [ebp+4]
0x8477B4: push    eax; lpAddend
0x8477B5: call    dword ptr ds:0A2807Ch
0x8477BB: test    eax, eax
0x8477BD: jnz     short loc_8477CE
0x8477BF: test    ebp, ebp
0x8477C1: jz      short loc_8477CE
0x8477C3: mov     edx, [ebp+0]
0x8477C6: mov     eax, [edx]
0x8477C8: push    1
0x8477CA: mov     ecx, ebp
0x8477CC: call    eax
0x8477CE: mov     eax, [esp+3Ch+var_24]
0x8477D2: test    eax, eax
0x8477D4: mov     ecx, [esp+3Ch+arg_C]
0x8477D8: mov     [ecx+4], eax
0x8477DB: jz      short loc_8477E7
0x8477DD: add     eax, 4
0x8477E0: push    eax; lpAddend
0x8477E1: call    dword ptr ds:0A28078h
0x8477E7: mov     edx, [esp+3Ch+arg_C]
0x8477EB: mov     ecx, [esp+3Ch+var_28]
0x8477EF: push    edi
0x8477F0: push    edx
0x8477F1: call    sub_848FA0
0x8477F6: mov     eax, [ebx+24h]
0x8477F9: mov     ebp, [eax+4]
0x8477FC: mov     ecx, [esp+3Ch+var_28]
0x847800: push    esi
0x847801: push    edi
0x847802: mov     [esp+44h+arg_C], ebp
0x847806: call    sub_848FD0
0x84780B: mov     ebp, [ebp+4]
0x84780E: cmp     ebp, eax
0x847810: mov     [esp+3Ch+var_24], eax
0x847814: jz      short loc_847850
0x847816: test    ebp, ebp
0x847818: jz      short loc_84783B
0x84781A: lea     ecx, [ebp+4]
0x84781D: push    ecx; lpAddend
0x84781E: call    dword ptr ds:0A2807Ch
0x847824: test    eax, eax
0x847826: jnz     short loc_847837
0x847828: test    ebp, ebp
0x84782A: jz      short loc_847837
0x84782C: mov     edx, [ebp+0]
0x84782F: mov     eax, [edx]
0x847831: push    1
0x847833: mov     ecx, ebp
0x847835: call    eax
0x847837: mov     eax, [esp+3Ch+var_24]
0x84783B: test    eax, eax
0x84783D: mov     ecx, [esp+3Ch+arg_C]
0x847841: mov     [ecx+4], eax
0x847844: jz      short loc_847850
0x847846: add     eax, 4
0x847849: push    eax; lpAddend
0x84784A: call    dword ptr ds:0A28078h
0x847850: mov     edx, [esp+3Ch+arg_C]
0x847854: push    edi
0x847855: mov     edi, [esp+40h+var_28]
0x847859: push    edx
0x84785A: mov     ecx, edi
0x84785C: call    sub_848FA0
0x847861: fldz
0x847863: cmp     esi, 4
0x847866: jnz     short loc_847881
0x847868: fld1
0x84786A: fst     [esp+3Ch+var_20]
0x84786E: cmp     esi, 2
0x847871: fxch    st(1)
0x847873: fst     [esp+3Ch+var_28]
0x847877: jnz     short loc_847892
0x847879: fxch    st(1)
0x84787B: fstp    [esp+3Ch+var_24]
0x84787F: jmp     short loc_8478A1
0x847881: cmp     esi, 3
0x847884: fst     [esp+3Ch+var_20]
0x847888: fld1
0x84788A: jnz     short loc_84786E
0x84788C: fst     [esp+3Ch+var_28]
0x847890: fxch    st(1)
0x847892: cmp     esi, 1
0x847895: fst     [esp+3Ch+var_24]
0x847899: jnz     short loc_84789F
0x84789B: fstp    st
0x84789D: jmp     short loc_8478A1
0x84789F: fstp    st(1)
0x8478A1: fstp    [esp+3Ch+arg_C]
0x8478A5: sub     esp, 10h
0x8478A8: fld     [esp+4Ch+arg_C]
0x8478AC: mov     eax, esp
0x8478AE: fstp    [esp+4Ch+var_1C]
0x8478B2: mov     ecx, [esp+4Ch+var_1C]
0x8478B6: fld     [esp+4Ch+var_24]
0x8478BA: mov     [eax], ecx
0x8478BC: fstp    [esp+4Ch+var_18]
0x8478C0: mov     edx, [esp+4Ch+var_18]
0x8478C4: fld     [esp+4Ch+var_28]
0x8478C8: mov     [eax+4], edx
0x8478CB: fstp    [esp+4Ch+var_14]
0x8478CF: mov     ecx, [esp+4Ch+var_14]
0x8478D3: fld     [esp+4Ch+var_20]
0x8478D7: mov     [eax+8], ecx
0x8478DA: fstp    [esp+4Ch+var_10]
0x8478DE: mov     edx, [esp+4Ch+var_10]
0x8478E2: push    2
0x8478E4: mov     [eax+0Ch], edx
0x8478E7: call    sub_7ECAE0
0x8478EC: add     esp, 14h
0x8478EF: cmp     esi, 8
0x8478F2: jnz     short loc_8478FE
0x8478F4: fld1
0x8478F6: fst     [esp+3Ch+var_28]
0x8478FA: fldz
0x8478FC: jmp     short loc_847920
0x8478FE: cmp     esi, 7
0x847901: fldz
0x847903: fst     [esp+3Ch+var_28]
0x847907: fld1
0x847909: jnz     short loc_84791E
0x84790B: fst     [esp+3Ch+var_24]
0x84790F: fxch    st(1)
0x847911: cmp     esi, 5
0x847914: fst     [esp+3Ch+var_20]
0x847918: jnz     short loc_847931
0x84791A: fstp    st
0x84791C: jmp     short loc_847933
0x84791E: fxch    st(1)
0x847920: cmp     esi, 6
0x847923: fst     [esp+3Ch+var_24]
0x847927: jnz     short loc_847911
0x847929: fxch    st(1)
0x84792B: fstp    [esp+3Ch+var_20]
0x84792F: jmp     short loc_847933
0x847931: fstp    st(1)
0x847933: fstp    [esp+3Ch+arg_C]
0x847937: sub     esp, 10h
0x84793A: fld     [esp+4Ch+arg_C]
0x84793E: mov     eax, esp
0x847940: fstp    [esp+4Ch+var_1C]
0x847944: mov     ecx, [esp+4Ch+var_1C]
0x847948: fld     [esp+4Ch+var_20]
0x84794C: mov     [eax], ecx
0x84794E: fstp    [esp+4Ch+var_18]
0x847952: mov     edx, [esp+4Ch+var_18]
0x847956: fld     [esp+4Ch+var_24]
0x84795A: mov     [eax+4], edx
0x84795D: fstp    [esp+4Ch+var_14]
0x847961: mov     ecx, [esp+4Ch+var_14]
0x847965: fld     [esp+4Ch+var_28]
0x847969: mov     [eax+8], ecx
0x84796C: fstp    [esp+4Ch+var_10]
0x847970: mov     edx, [esp+4Ch+var_10]
0x847974: push    3
0x847976: mov     [eax+0Ch], edx
0x847979: call    sub_7ECAE0
0x84797E: add     esp, 14h
0x847981: cmp     byte ptr [esp+3Ch+arg_10], 0
0x847986: jz      short loc_8479C3
0x847988: mov     esi, 1
0x84798D: add     [ebx+60h], esi
0x847990: mov     [esp+3Ch+arg_10], ebx
0x847994: mov     ecx, [edi+38h]
0x847997: lea     eax, [esp+3Ch+arg_10]
0x84799B: push    eax
0x84799C: push    ecx
0x84799D: lea     ecx, [edi+40h]
0x8479A0: mov     [esp+44h+var_4], 0
0x8479A8: call    sub_76CE40
0x8479AD: or      eax, 0FFFFFFFFh
0x8479B0: add     [ebx+60h], eax
0x8479B3: mov     [esp+3Ch+var_4], eax
0x8479B7: jnz     short loc_8479C0
0x8479B9: mov     ecx, ebx
0x8479BB: call    sub_7604D0
0x8479C0: add     [edi+38h], esi
0x8479C3: mov     ecx, dword ptr [esp+3Ch+var_C]
0x8479C7: mov     large fs:0, ecx
0x8479CE: pop     ecx
0x8479CF: pop     edi
0x8479D0: pop     esi
0x8479D1: pop     ebp
0x8479D2: pop     ebx
0x8479D3: add     esp, 28h
0x8479D6: retn    14h
