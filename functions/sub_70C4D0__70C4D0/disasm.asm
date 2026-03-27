0x70C4D0: sub     esp, 30h
0x70C4D3: push    esi
0x70C4D4: mov     esi, ecx
0x70C4D6: cmp     byte ptr [esi+104h], 0
0x70C4DD: jz      loc_70C5FB
0x70C4E3: fld     dword ptr [esi+64h]
0x70C4E6: mov     ecx, [esp+34h+arg_C]
0x70C4EA: fstp    [esp+34h+var_30]
0x70C4EE: mov     eax, [esp+34h+var_30]
0x70C4F2: fld     dword ptr [esi+70h]
0x70C4F5: fstp    [esp+34h+var_2C]
0x70C4F9: mov     edx, [esp+34h+var_2C]
0x70C4FD: fld     dword ptr [esi+7Ch]
0x70C500: mov     [ecx], eax
0x70C502: fstp    [esp+34h+var_28]
0x70C506: mov     eax, [esp+34h+var_28]
0x70C50A: mov     [ecx+4], edx
0x70C50D: mov     [ecx+8], eax
0x70C510: call    sub_43F350
0x70C515: fstp    st
0x70C517: fld     dword ptr [esi+68h]
0x70C51A: mov     eax, [esp+34h+arg_8]
0x70C51E: fstp    [esp+34h+var_30]
0x70C522: fld     dword ptr [esi+74h]
0x70C525: fstp    [esp+34h+var_2C]
0x70C529: fld     dword ptr [esi+80h]
0x70C52F: fstp    [esp+34h+var_28]
0x70C533: fld     [esp+34h+var_30]
0x70C537: fld     [esp+34h+arg_4]
0x70C53B: fld     st
0x70C53D: fmulp   st(2), st
0x70C53F: fxch    st(1)
0x70C541: fstp    [esp+34h+var_18]
0x70C545: fld     [esp+34h+var_2C]
0x70C549: fmul    st, st(1)
0x70C54B: fstp    [esp+34h+var_14]
0x70C54F: fmul    [esp+34h+var_28]
0x70C553: fstp    [esp+34h+var_10]
0x70C557: fld     dword ptr [esi+6Ch]
0x70C55A: fstp    [esp+34h+var_30]
0x70C55E: fld     dword ptr [esi+78h]
0x70C561: fstp    [esp+34h+var_2C]
0x70C565: fld     dword ptr [esi+84h]
0x70C56B: fstp    [esp+34h+var_28]
0x70C56F: fld     [esp+34h+var_30]
0x70C573: fld     [esp+34h+arg_0]
0x70C577: fld     st
0x70C579: fmulp   st(2), st
0x70C57B: fxch    st(1)
0x70C57D: fstp    [esp+34h+var_24]
0x70C581: fld     [esp+34h+var_2C]
0x70C585: fmul    st, st(1)
0x70C587: fstp    [esp+34h+var_20]
0x70C58B: fmul    [esp+34h+var_28]
0x70C58F: fstp    [esp+34h+var_1C]
0x70C593: fld     dword ptr [esi+88h]
0x70C599: fadd    [esp+34h+var_24]
0x70C59D: fstp    [esp+34h+var_30]
0x70C5A1: fld     dword ptr [esi+8Ch]
0x70C5A7: fadd    [esp+34h+var_20]
0x70C5AB: fstp    [esp+34h+var_2C]
0x70C5AF: fld     dword ptr [esi+90h]
0x70C5B5: pop     esi
0x70C5B6: fadd    [esp+30h+var_1C]
0x70C5BA: fstp    [esp+30h+var_28]
0x70C5BE: fld     [esp+30h+var_30]
0x70C5C1: fadd    [esp+30h+var_18]
0x70C5C5: fstp    [esp+30h+var_24]
0x70C5C9: mov     ecx, [esp+30h+var_24]
0x70C5CD: fld     [esp+30h+var_2C]
0x70C5D1: mov     [eax], ecx
0x70C5D3: fadd    [esp+30h+var_14]
0x70C5D7: fstp    [esp+30h+var_20]
0x70C5DB: mov     edx, [esp+30h+var_20]
0x70C5DF: fld     [esp+30h+var_28]
0x70C5E3: mov     [eax+4], edx
0x70C5E6: fadd    [esp+30h+var_10]
0x70C5EA: fstp    [esp+30h+var_1C]
0x70C5EE: mov     ecx, [esp+30h+var_1C]
0x70C5F2: mov     [eax+8], ecx
0x70C5F5: add     esp, 30h
0x70C5F8: retn    10h
0x70C5FB: fld     dword ptr [esi+68h]
0x70C5FE: mov     ecx, [esp+34h+arg_C]
0x70C602: fstp    [esp+34h+var_18]
0x70C606: fld     dword ptr [esi+74h]
0x70C609: fstp    [esp+34h+var_14]
0x70C60D: fld     dword ptr [esi+80h]
0x70C613: fstp    [esp+34h+var_10]
0x70C617: fld     [esp+34h+var_18]
0x70C61B: fld     [esp+34h+arg_4]
0x70C61F: fld     st
0x70C621: fmulp   st(2), st
0x70C623: fxch    st(1)
0x70C625: fstp    [esp+34h+var_C]
0x70C629: fld     [esp+34h+var_14]
0x70C62D: fmul    st, st(1)
0x70C62F: fstp    [esp+34h+var_8]
0x70C633: fmul    [esp+34h+var_10]
0x70C637: fstp    [esp+34h+var_4]
0x70C63B: fld     dword ptr [esi+6Ch]
0x70C63E: fstp    [esp+34h+var_18]
0x70C642: fld     dword ptr [esi+78h]
0x70C645: fstp    [esp+34h+var_14]
0x70C649: fld     dword ptr [esi+84h]
0x70C64F: fstp    [esp+34h+var_10]
0x70C653: fld     [esp+34h+var_18]
0x70C657: fld     [esp+34h+arg_0]
0x70C65B: fld     st
0x70C65D: fmulp   st(2), st
0x70C65F: fxch    st(1)
0x70C661: fstp    [esp+34h+var_24]
0x70C665: fld     [esp+34h+var_14]
0x70C669: fmul    st, st(1)
0x70C66B: fstp    [esp+34h+var_20]
0x70C66F: fmul    [esp+34h+var_10]
0x70C673: fstp    [esp+34h+var_1C]
0x70C677: fld     dword ptr [esi+64h]
0x70C67A: fstp    [esp+34h+var_18]
0x70C67E: fld     dword ptr [esi+70h]
0x70C681: fstp    [esp+34h+var_14]
0x70C685: fld     dword ptr [esi+7Ch]
0x70C688: fstp    [esp+34h+var_10]
0x70C68C: fld     [esp+34h+var_18]
0x70C690: fadd    [esp+34h+var_24]
0x70C694: fstp    [esp+34h+var_30]
0x70C698: fld     [esp+34h+var_14]
0x70C69C: fadd    [esp+34h+var_20]
0x70C6A0: fstp    [esp+34h+var_2C]
0x70C6A4: fld     [esp+34h+var_10]
0x70C6A8: fadd    [esp+34h+var_1C]
0x70C6AC: fstp    [esp+34h+var_28]
0x70C6B0: fld     [esp+34h+var_30]
0x70C6B4: fadd    [esp+34h+var_C]
0x70C6B8: fstp    [esp+34h+var_18]
0x70C6BC: mov     edx, [esp+34h+var_18]
0x70C6C0: fld     [esp+34h+var_2C]
0x70C6C4: mov     [ecx], edx
0x70C6C6: fadd    [esp+34h+var_8]
0x70C6CA: fstp    [esp+34h+var_14]
0x70C6CE: mov     eax, [esp+34h+var_14]
0x70C6D2: fld     [esp+34h+var_28]
0x70C6D6: mov     [ecx+4], eax
0x70C6D9: fadd    [esp+34h+var_4]
0x70C6DD: fstp    [esp+34h+var_10]
0x70C6E1: mov     edx, [esp+34h+var_10]
0x70C6E5: mov     [ecx+8], edx
0x70C6E8: call    sub_43F350
0x70C6ED: fstp    st
0x70C6EF: mov     ecx, [esi+88h]
0x70C6F5: mov     eax, [esp+34h+arg_8]
0x70C6F9: mov     [eax], ecx
0x70C6FB: mov     edx, [esi+8Ch]
0x70C701: mov     [eax+4], edx
0x70C704: mov     ecx, [esi+90h]
0x70C70A: mov     [eax+8], ecx
0x70C70D: pop     esi
0x70C70E: add     esp, 30h
0x70C711: retn    10h
