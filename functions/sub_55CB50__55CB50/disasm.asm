0x55CB50: push    ecx
0x55CB51: mov     eax, [ecx]
0x55CB53: mov     edx, [eax+9Ch]
0x55CB59: call    edx
0x55CB5B: mov     edx, [eax]
0x55CB5D: mov     ecx, eax
0x55CB5F: mov     eax, [edx+70h]
0x55CB62: push    0
0x55CB64: call    eax
0x55CB66: fstp    [esp+4+var_4]
0x55CB69: fldz
0x55CB6B: fld     [esp+4+var_4]
0x55CB6E: fcom    st(1)
0x55CB70: fnstsw  ax
0x55CB72: fstp    st(1)
0x55CB74: test    ah, 41h
0x55CB77: jnz     short loc_55CBE0
0x55CB79: fld1
0x55CB7B: fcompp
0x55CB7D: fnstsw  ax
0x55CB7F: test    ah, 1
0x55CB82: jnz     short loc_55CBE2
0x55CB84: push    esi
0x55CB85: mov     esi, [esp+8+arg_0]
0x55CB89: mov     ecx, [esi+10h]
0x55CB8C: mov     edx, [ecx]
0x55CB8E: mov     eax, [edx+24h]
0x55CB91: push    0
0x55CB93: call    eax
0x55CB95: test    eax, eax
0x55CB97: jz      short loc_55CBDB
0x55CB99: cmp     byte ptr [esi+1Ch], 0
0x55CB9D: jnz     short loc_55CBB2
0x55CB9F: mov     edx, [esi]
0x55CBA1: lea     ecx, [esi+4]
0x55CBA4: push    ecx
0x55CBA5: push    edx
0x55CBA6: call    sub_5508F0
0x55CBAB: add     esp, 8
0x55CBAE: mov     byte ptr [esi+1Ch], 1
0x55CBB2: mov     ecx, [esi+10h]
0x55CBB5: mov     eax, [ecx]
0x55CBB7: mov     edx, [eax+24h]
0x55CBBA: push    0
0x55CBBC: call    edx
0x55CBBE: fld     [esp+8+var_4]
0x55CBC2: mov     edx, [eax]
0x55CBC4: mov     edx, [edx+4]
0x55CBC7: push    ecx
0x55CBC8: mov     ecx, [esi+14h]
0x55CBCB: fstp    [esp+0Ch+var_C]
0x55CBCE: push    ecx
0x55CBCF: mov     ecx, [esi+18h]
0x55CBD2: push    ecx
0x55CBD3: add     esi, 4
0x55CBD6: push    esi
0x55CBD7: mov     ecx, eax
0x55CBD9: call    edx
0x55CBDB: pop     esi
0x55CBDC: pop     ecx
0x55CBDD: retn    4
0x55CBE0: fstp    st
0x55CBE2: pop     ecx
0x55CBE3: retn    4
