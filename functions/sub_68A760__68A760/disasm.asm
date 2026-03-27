0x68A760: sub     esp, 1Ch
0x68A763: fldz
0x68A765: push    esi
0x68A766: mov     esi, ecx
0x68A768: fstp    [esp+20h+var_1C]
0x68A76C: mov     ecx, [esp+20h+arg_0]
0x68A770: test    ecx, ecx
0x68A772: jz      loc_68A877
0x68A778: mov     eax, [ecx]
0x68A77A: mov     edx, [eax+174h]
0x68A780: push    edi
0x68A781: call    edx
0x68A783: mov     ecx, [eax]
0x68A785: mov     edx, [eax+4]
0x68A788: mov     eax, [eax+8]
0x68A78B: lea     edi, [esi+4]
0x68A78E: test    edi, edi
0x68A790: mov     [esp+24h+var_18], ecx
0x68A794: mov     [esp+24h+var_14], edx
0x68A798: mov     [esp+24h+var_10], eax
0x68A79C: jz      loc_68A86B
0x68A7A2: cmp     dword ptr [edi+4], 0
0x68A7A6: jnz     short loc_68A7B1
0x68A7A8: cmp     dword ptr [edi], 0
0x68A7AB: jz      loc_68A86B
0x68A7B1: mov     esi, [edi]
0x68A7B3: mov     ecx, esi
0x68A7B5: call    sub_68B110
0x68A7BA: fld     dword ptr [eax]
0x68A7BC: fsub    [esp+24h+var_18]
0x68A7C0: fstp    [esp+24h+var_C]
0x68A7C4: fld     dword ptr [eax+4]
0x68A7C7: fsub    [esp+24h+var_14]
0x68A7CB: fstp    [esp+24h+var_8]
0x68A7CF: fld     dword ptr [eax+8]
0x68A7D2: fsub    [esp+24h+var_10]
0x68A7D6: fstp    [esp+24h+var_4]
0x68A7DA: fld     [esp+24h+var_8]
0x68A7DE: fld     [esp+24h+var_C]
0x68A7E2: fld     [esp+24h+var_4]
0x68A7E6: fld     st(1)
0x68A7E8: fmulp   st(2), st
0x68A7EA: fld     st(2)
0x68A7EC: fmulp   st(3), st
0x68A7EE: fxch    st(1)
0x68A7F0: faddp   st(2), st
0x68A7F2: fmul    st, st
0x68A7F4: faddp   st(1), st
0x68A7F6: fstp    [esp+24h+arg_0]
0x68A7FA: fld     [esp+24h+arg_0]
0x68A7FE: call    __CIsqrt
0x68A803: fstp    [esp+24h+arg_0]
0x68A807: fld     [esp+24h+arg_0]
0x68A80B: mov     ecx, esi
0x68A80D: fadd    [esp+24h+var_1C]
0x68A811: fstp    [esp+24h+var_1C]
0x68A815: call    ?status@DName@@QBE?AW4DNameStatus@@XZ; DName::status(void)
0x68A81A: cmp     eax, 1
0x68A81D: mov     ecx, esi
0x68A81F: jnz     short loc_68A828
0x68A821: call    sub_68B110
0x68A826: jmp     short loc_68A84C
0x68A828: call    sub_68B0F0
0x68A82D: mov     esi, eax
0x68A82F: test    esi, esi
0x68A831: jz      short loc_68A860
0x68A833: mov     ecx, esi; this
0x68A835: call    GetTeleportExtraData
0x68A83A: test    eax, eax
0x68A83C: jz      short loc_68A860
0x68A83E: mov     ecx, esi; this
0x68A840: call    GetTeleportExtraData
0x68A845: mov     ecx, eax
0x68A847: call    sub_6899C0
0x68A84C: mov     ecx, [eax]
0x68A84E: mov     edx, [eax+4]
0x68A851: mov     eax, [eax+8]
0x68A854: mov     [esp+24h+var_10], eax
0x68A858: mov     [esp+24h+var_14], edx
0x68A85C: mov     [esp+24h+var_18], ecx
0x68A860: mov     edi, [edi+4]
0x68A863: test    edi, edi
0x68A865: jnz     loc_68A7A2
0x68A86B: fld     [esp+24h+var_1C]
0x68A86F: pop     edi
0x68A870: pop     esi
0x68A871: add     esp, 1Ch
0x68A874: retn    4
0x68A877: fld     [esp+20h+var_1C]
0x68A87B: pop     esi
0x68A87C: add     esp, 1Ch
0x68A87F: retn    4
