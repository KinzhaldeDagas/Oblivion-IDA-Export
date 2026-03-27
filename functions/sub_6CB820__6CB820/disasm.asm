0x6CB820: sub     esp, 10h
0x6CB823: mov     eax, ds:0B24260h
0x6CB828: fld     dword ptr ds:0A79E10h
0x6CB82E: push    ebx
0x6CB82F: push    esi
0x6CB830: mov     esi, [esp+18h+arg_0]
0x6CB834: mov     [esi], eax
0x6CB836: push    edi
0x6CB837: mov     edi, ecx
0x6CB839: mov     ecx, ds:0B24264h
0x6CB83F: mov     [esi+4], ecx
0x6CB842: mov     edx, ds:0B24268h
0x6CB848: mov     [esi+8], edx
0x6CB84B: mov     eax, ds:0B3CBA4h
0x6CB850: mov     [esi+0Ch], eax
0x6CB853: mov     ecx, ds:0B3CBA8h
0x6CB859: mov     ebx, [esp+1Ch+arg_4]
0x6CB85D: mov     [esi+10h], ecx
0x6CB860: mov     edx, ds:0B3CBACh
0x6CB866: mov     [esi+14h], edx
0x6CB869: mov     eax, ds:0B3CBB0h
0x6CB86E: fstp    dword ptr [esi+1Ch]
0x6CB871: mov     [esi+18h], eax
0x6CB874: fld     dword ptr ds:0A7DEB4h
0x6CB87A: fchs
0x6CB87C: fstp    [esp+1Ch+arg_0]
0x6CB880: fld     dword ptr [edi+1Ch]
0x6CB883: fld     [esp+1Ch+arg_0]
0x6CB887: fld     st
0x6CB889: fucomp  st(2)
0x6CB88B: fnstsw  ax
0x6CB88D: fstp    st(1)
0x6CB88F: test    ah, 44h
0x6CB892: jnp     short loc_6CB8BF
0x6CB894: fld     dword ptr [ebx+1Ch]
0x6CB897: fld     st(1)
0x6CB899: fucompp
0x6CB89B: fnstsw  ax
0x6CB89D: test    ah, 44h
0x6CB8A0: jnp     short loc_6CB8BF
0x6CB8A2: fstp    st
0x6CB8A4: push    ecx
0x6CB8A5: fld     dword ptr [ebx+1Ch]
0x6CB8A8: mov     ecx, esi
0x6CB8AA: fmul    dword ptr [edi+1Ch]
0x6CB8AD: fstp    [esp+20h+arg_0]
0x6CB8B1: fld     [esp+20h+arg_0]
0x6CB8B5: fstp    [esp+20h+var_20]; float
0x6CB8B8: call    sub_471560
0x6CB8BD: jmp     short loc_6CB8C2
0x6CB8BF: fstp    dword ptr [esi+1Ch]
0x6CB8C2: fld     dword ptr ds:0A7DEB4h
0x6CB8C8: fchs
0x6CB8CA: fstp    [esp+1Ch+arg_0]
0x6CB8CE: fld     dword ptr [edi+10h]
0x6CB8D1: fld     [esp+1Ch+arg_0]
0x6CB8D5: fld     st
0x6CB8D7: fucomp  st(2)
0x6CB8D9: fnstsw  ax
0x6CB8DB: fstp    st(1)
0x6CB8DD: test    ah, 44h
0x6CB8E0: jnp     short loc_6CB91A
0x6CB8E2: fld     dword ptr [ebx+10h]
0x6CB8E5: fld     st(1)
0x6CB8E7: fucompp
0x6CB8E9: fnstsw  ax
0x6CB8EB: test    ah, 44h
0x6CB8EE: jnp     short loc_6CB91A
0x6CB8F0: lea     ecx, [ebx+0Ch]
0x6CB8F3: fstp    st
0x6CB8F5: push    ecx
0x6CB8F6: lea     edx, [esp+20h+var_10]
0x6CB8FA: push    edx
0x6CB8FB: lea     ecx, [edi+0Ch]
0x6CB8FE: call    sub_714CF0
0x6CB903: lea     ecx, [esp+1Ch+var_10]
0x6CB907: call    sub_715340
0x6CB90C: lea     eax, [esp+1Ch+var_10]
0x6CB910: push    eax
0x6CB911: mov     ecx, esi
0x6CB913: call    sub_471430
0x6CB918: jmp     short loc_6CB91D
0x6CB91A: fstp    dword ptr [esi+10h]
0x6CB91D: fld     dword ptr ds:0A7DEB4h
0x6CB923: fchs
0x6CB925: fstp    [esp+1Ch+arg_0]
0x6CB929: fld     dword ptr [edi]
0x6CB92B: fld     [esp+1Ch+arg_0]
0x6CB92F: fld     st
0x6CB931: fucomp  st(2)
0x6CB933: fnstsw  ax
0x6CB935: fstp    st(1)
0x6CB937: test    ah, 44h
0x6CB93A: jnp     short loc_6CB97E
0x6CB93C: fld     dword ptr [ebx]
0x6CB93E: fld     st(1)
0x6CB940: fucompp
0x6CB942: fnstsw  ax
0x6CB944: test    ah, 44h
0x6CB947: jnp     short loc_6CB97E
0x6CB949: fstp    st
0x6CB94B: lea     ecx, [esp+1Ch+var_10]
0x6CB94F: fld     dword ptr [ebx]
0x6CB951: push    ecx
0x6CB952: fadd    dword ptr [edi]
0x6CB954: mov     ecx, esi
0x6CB956: fstp    [esp+20h+var_10]
0x6CB95A: fld     dword ptr [ebx+4]
0x6CB95D: fadd    dword ptr [edi+4]
0x6CB960: fstp    [esp+20h+var_C]
0x6CB964: fld     dword ptr [ebx+8]
0x6CB967: fadd    dword ptr [edi+8]
0x6CB96A: fstp    [esp+20h+var_8]
0x6CB96E: call    sub_471390
0x6CB973: pop     edi
0x6CB974: mov     eax, esi
0x6CB976: pop     esi
0x6CB977: pop     ebx
0x6CB978: add     esp, 10h
0x6CB97B: retn    8
0x6CB97E: pop     edi
0x6CB97F: fstp    dword ptr [esi]
0x6CB981: mov     eax, esi
0x6CB983: pop     esi
0x6CB984: pop     ebx
0x6CB985: add     esp, 10h
0x6CB988: retn    8
