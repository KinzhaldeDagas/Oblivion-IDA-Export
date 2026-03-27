0x55A800: sub     esp, 24h
0x55A803: push    ebx
0x55A804: push    ebp
0x55A805: mov     ebp, [esp+2Ch+arg_0]
0x55A809: cmp     dword ptr [ebp+0], 0
0x55A80D: mov     ebx, ecx
0x55A80F: jz      loc_55A93C
0x55A815: cmp     [esp+2Ch+arg_4], 0
0x55A81A: jz      loc_55A93C
0x55A820: mov     ecx, [esp+2Ch+arg_8]
0x55A824: test    ecx, ecx
0x55A826: jz      loc_55A93C
0x55A82C: fldz
0x55A82E: fld     [esp+2Ch+arg_C]
0x55A832: fcom    st(1)
0x55A834: fnstsw  ax
0x55A836: fstp    st(1)
0x55A838: test    ah, 41h
0x55A83B: jnp     loc_55A93A
0x55A841: fld1
0x55A843: fcompp
0x55A845: fnstsw  ax
0x55A847: test    ah, 5
0x55A84A: jnp     loc_55A93C
0x55A850: cmp     dword ptr [ebx+4], 0
0x55A854: jz      loc_55A93C
0x55A85A: mov     eax, [ecx]
0x55A85C: mov     edx, [eax+54h]
0x55A85F: call    edx
0x55A861: test    eax, eax
0x55A863: jz      loc_55A93C
0x55A869: push    esi
0x55A86A: xor     esi, esi
0x55A86C: cmp     [ebx+8], esi
0x55A86F: jbe     loc_55A931
0x55A875: fld     [esp+30h+arg_C]
0x55A879: push    edi
0x55A87A: mov     ecx, [ebx+4]
0x55A87D: mov     edx, [ecx+esi*4]
0x55A880: mov     ecx, [ebp+4]
0x55A883: mov     edi, [ebp+0]
0x55A886: imul    ecx, edx
0x55A889: add     ecx, edi
0x55A88B: mov     edi, [ecx]
0x55A88D: mov     [esp+34h+var_24], edi
0x55A891: mov     edi, [ecx+4]
0x55A894: lea     edx, [edx+edx*2]
0x55A897: mov     [esp+34h+var_20], edi
0x55A89B: mov     edi, [ecx+8]
0x55A89E: mov     [esp+34h+var_1C], edi
0x55A8A2: lea     edi, [eax+edx*4]
0x55A8A5: mov     edx, [ebx+0Ch]
0x55A8A8: add     edx, esi
0x55A8AA: lea     edx, [edx+edx*2]
0x55A8AD: lea     edx, [eax+edx*4]
0x55A8B0: add     esi, 1
0x55A8B3: fld     dword ptr [edx]
0x55A8B5: fsub    dword ptr [edi]
0x55A8B7: fstp    [esp+34h+var_18]
0x55A8BB: fld     dword ptr [edx+4]
0x55A8BE: fsub    dword ptr [edi+4]
0x55A8C1: fstp    [esp+34h+var_14]
0x55A8C5: fld     dword ptr [edx+8]
0x55A8C8: fsub    dword ptr [edi+8]
0x55A8CB: fstp    [esp+34h+var_10]
0x55A8CF: fld     [esp+34h+var_18]
0x55A8D3: fmul    st, st(1)
0x55A8D5: fstp    [esp+34h+var_C]
0x55A8D9: fld     [esp+34h+var_14]
0x55A8DD: fmul    st, st(1)
0x55A8DF: fstp    [esp+34h+var_8]
0x55A8E3: fld     [esp+34h+var_10]
0x55A8E7: fmul    st, st(1)
0x55A8E9: fstp    [esp+34h+var_4]
0x55A8ED: fld     [esp+34h+var_C]
0x55A8F1: fadd    [esp+34h+var_24]
0x55A8F5: fstp    [esp+34h+var_24]
0x55A8F9: mov     edx, [esp+34h+var_24]
0x55A8FD: fld     [esp+34h+var_20]
0x55A901: mov     [ecx], edx
0x55A903: fadd    [esp+34h+var_8]
0x55A907: fstp    [esp+34h+var_20]
0x55A90B: mov     edx, [esp+34h+var_20]
0x55A90F: fld     [esp+34h+var_1C]
0x55A913: mov     [ecx+4], edx
0x55A916: fadd    [esp+34h+var_4]
0x55A91A: fstp    [esp+34h+var_1C]
0x55A91E: mov     edx, [esp+34h+var_1C]
0x55A922: mov     [ecx+8], edx
0x55A925: cmp     esi, [ebx+8]
0x55A928: jb      loc_55A87A
0x55A92E: fstp    st
0x55A930: pop     edi
0x55A931: pop     esi
0x55A932: pop     ebp
0x55A933: pop     ebx
0x55A934: add     esp, 24h
0x55A937: retn    10h
0x55A93A: fstp    st
0x55A93C: pop     ebp
0x55A93D: pop     ebx
0x55A93E: add     esp, 24h
0x55A941: retn    10h
