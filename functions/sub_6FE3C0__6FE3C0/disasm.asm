0x6FE3C0: mov     eax, [esp+arg_0]
0x6FE3C4: sub     esp, 18h
0x6FE3C7: test    eax, eax
0x6FE3C9: push    ebx
0x6FE3CA: mov     ebx, ecx
0x6FE3CC: jz      loc_6FE551
0x6FE3D2: push    esi
0x6FE3D3: mov     edx, 1
0x6FE3D8: cmp     [ebx+54h], edx
0x6FE3DB: push    edi
0x6FE3DC: mov     edi, [eax+1Ch]
0x6FE3DF: jz      loc_6FE503
0x6FE3E5: test    edi, edi
0x6FE3E7: jz      loc_6FE503
0x6FE3ED: fld     dword ptr [eax+88h]
0x6FE3F3: mov     esi, [esp+24h+arg_4]
0x6FE3F7: fsub    dword ptr [edi+88h]
0x6FE3FD: fstp    [esp+24h+var_18]
0x6FE401: fld     dword ptr [eax+8Ch]
0x6FE407: fsub    dword ptr [edi+8Ch]
0x6FE40D: fstp    [esp+24h+var_14]
0x6FE411: mov     ecx, [esp+24h+var_14]
0x6FE415: fld     dword ptr [eax+90h]
0x6FE41B: mov     eax, [esp+24h+var_18]
0x6FE41F: fsub    dword ptr [edi+90h]
0x6FE425: mov     [esi], eax
0x6FE427: mov     [esi+4], ecx
0x6FE42A: fstp    [esp+24h+var_10]
0x6FE42E: mov     edx, [esp+24h+var_10]
0x6FE432: mov     [esi+8], edx
0x6FE435: call    _rand
0x6FE43A: mov     [esp+24h+arg_4], eax
0x6FE43E: fild    [esp+24h+arg_4]
0x6FE442: fdiv    qword ptr ds:0A3D5A8h
0x6FE448: fstp    [esp+24h+arg_4]
0x6FE44C: fld     dword ptr [esi]
0x6FE44E: fld     [esp+24h+arg_4]
0x6FE452: fld     st
0x6FE454: fmulp   st(2), st
0x6FE456: fxch    st(1)
0x6FE458: fstp    [esp+24h+var_18]
0x6FE45C: fld     dword ptr [esi+4]
0x6FE45F: fmul    st, st(1)
0x6FE461: fstp    [esp+24h+var_14]
0x6FE465: fmul    dword ptr [esi+8]
0x6FE468: fstp    [esp+24h+var_10]
0x6FE46C: fld     dword ptr [edi+88h]
0x6FE472: fadd    [esp+24h+var_18]
0x6FE476: fstp    [esp+24h+var_C]
0x6FE47A: mov     eax, [esp+24h+var_C]
0x6FE47E: fld     dword ptr [edi+8Ch]
0x6FE484: fadd    [esp+24h+var_14]
0x6FE488: fstp    [esp+24h+var_8]
0x6FE48C: mov     ecx, [esp+24h+var_8]
0x6FE490: fld     dword ptr [edi+90h]
0x6FE496: mov     [esi], eax
0x6FE498: fadd    [esp+24h+var_10]
0x6FE49C: mov     [esi+4], ecx
0x6FE49F: fstp    [esp+24h+var_4]
0x6FE4A3: mov     edx, [esp+24h+var_4]
0x6FE4A7: mov     [esi+8], edx
0x6FE4AA: mov     ebx, [ebx+10h]
0x6FE4AD: test    ebx, ebx
0x6FE4AF: jz      loc_6FE578
0x6FE4B5: fld     dword ptr [ebx+94h]
0x6FE4BB: fstp    [esp+24h+arg_4]
0x6FE4BF: fld1
0x6FE4C1: fld     [esp+24h+arg_4]
0x6FE4C5: fucom   st(1)
0x6FE4C7: fnstsw  ax
0x6FE4C9: fstp    st(1)
0x6FE4CB: test    ah, 44h
0x6FE4CE: jnp     loc_6FE576
0x6FE4D4: fldz
0x6FE4D6: fucomp  st(1)
0x6FE4D8: fnstsw  ax
0x6FE4DA: test    ah, 44h
0x6FE4DD: jnp     loc_6FE576
0x6FE4E3: fld1
0x6FE4E5: push    ecx
0x6FE4E6: fdivrp  st(1), st
0x6FE4E8: mov     ecx, esi
0x6FE4EA: fstp    [esp+28h+arg_4]
0x6FE4EE: fld     [esp+28h+arg_4]
0x6FE4F2: fstp    [esp+28h+var_28]; float
0x6FE4F5: call    NiPoint3__MutliplyByValue
0x6FE4FA: pop     edi
0x6FE4FB: pop     esi
0x6FE4FC: pop     ebx
0x6FE4FD: add     esp, 18h
0x6FE500: retn    0Ch
0x6FE503: mov     esi, [eax+88h]
0x6FE509: mov     ecx, [esp+24h+arg_4]
0x6FE50D: mov     [ecx], esi
0x6FE50F: mov     esi, [eax+8Ch]
0x6FE515: mov     [ecx+4], esi
0x6FE518: mov     esi, [eax+90h]
0x6FE51E: mov     [ecx+8], esi
0x6FE521: cmp     [ebx+54h], edx
0x6FE524: jnz     short loc_6FE578
0x6FE526: mov     esi, [esp+24h+arg_8]
0x6FE52A: push    esi
0x6FE52B: lea     ecx, [esp+28h+var_C]
0x6FE52F: push    ecx
0x6FE530: lea     ecx, [eax+64h]
0x6FE533: call    sub_7101F0
0x6FE538: mov     edx, [eax]
0x6FE53A: mov     [esi], edx
0x6FE53C: mov     ecx, [eax+4]
0x6FE53F: mov     [esi+4], ecx
0x6FE542: mov     edx, [eax+8]
0x6FE545: pop     edi
0x6FE546: mov     [esi+8], edx
0x6FE549: pop     esi
0x6FE54A: pop     ebx
0x6FE54B: add     esp, 18h
0x6FE54E: retn    0Ch
0x6FE551: mov     ecx, ds:0B3F9A8h
0x6FE557: mov     eax, [esp+1Ch+arg_4]
0x6FE55B: mov     [eax], ecx
0x6FE55D: mov     edx, ds:0B3F9ACh
0x6FE563: mov     [eax+4], edx
0x6FE566: mov     ecx, ds:0B3F9B0h
0x6FE56C: mov     [eax+8], ecx
0x6FE56F: pop     ebx
0x6FE570: add     esp, 18h
0x6FE573: retn    0Ch
0x6FE576: fstp    st
0x6FE578: pop     edi
0x6FE579: pop     esi
0x6FE57A: pop     ebx
0x6FE57B: add     esp, 18h
0x6FE57E: retn    0Ch
