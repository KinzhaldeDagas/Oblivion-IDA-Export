0x7217C0: sub     esp, 48h
0x7217C3: mov     eax, [esp+48h+arg_4]
0x7217C7: push    edi
0x7217C8: mov     edi, [esp+4Ch+arg_0]
0x7217CC: fld     dword ptr [edi+88h]
0x7217D2: fsub    dword ptr [eax]
0x7217D4: fstp    [esp+4Ch+var_48]
0x7217D8: fld     dword ptr [edi+8Ch]
0x7217DE: fsub    dword ptr [eax+4]
0x7217E1: fstp    [esp+4Ch+var_44]
0x7217E5: fld     dword ptr [edi+90h]
0x7217EB: fsub    dword ptr [eax+8]
0x7217EE: fstp    [esp+4Ch+var_40]
0x7217F2: fld     [esp+4Ch+var_48]
0x7217F6: fld     [esp+4Ch+var_44]
0x7217FA: fld     [esp+4Ch+var_40]
0x7217FE: fld     st(1)
0x721800: fmulp   st(2), st
0x721802: fld     st(2)
0x721804: fmulp   st(3), st
0x721806: fxch    st(1)
0x721808: faddp   st(2), st
0x72180A: fmul    st, st
0x72180C: faddp   st(1), st
0x72180E: fstp    [esp+4Ch+arg_0]
0x721812: fld     [esp+4Ch+arg_0]
0x721816: fcomp   dword ptr ds:0A37080h
0x72181C: fnstsw  ax
0x72181E: test    ah, 5
0x721821: jp      short loc_72182C
0x721823: xor     al, al
0x721825: pop     edi
0x721826: add     esp, 48h
0x721829: retn    14h
0x72182C: push    ebx
0x72182D: push    esi
0x72182E: lea     ecx, [esp+54h+var_48]
0x721832: call    sub_43F350
0x721837: fstp    st
0x721839: fld     dword ptr [edi+64h]
0x72183C: mov     esi, [esp+54h+arg_8]
0x721840: fstp    [esp+54h+var_3C]
0x721844: mov     ebx, [esp+54h+arg_C]
0x721848: fld     dword ptr [edi+70h]
0x72184B: fstp    [esp+54h+var_38]
0x72184F: fld     dword ptr [edi+7Ch]
0x721852: fstp    [esp+54h+var_34]
0x721856: fld     [esp+54h+var_3C]
0x72185A: fchs
0x72185C: fstp    [esp+54h+var_30]
0x721860: mov     eax, [esp+54h+var_30]
0x721864: fld     [esp+54h+var_38]
0x721868: mov     [esi], eax
0x72186A: fchs
0x72186C: fstp    [esp+54h+var_2C]
0x721870: mov     ecx, [esp+54h+var_2C]
0x721874: fld     [esp+54h+var_34]
0x721878: mov     [esi+4], ecx
0x72187B: fchs
0x72187D: fstp    [esp+54h+var_28]
0x721881: mov     edx, [esp+54h+var_28]
0x721885: mov     [esi+8], edx
0x721888: fld     dword ptr [edi+68h]
0x72188B: fstp    [esp+54h+var_30]
0x72188F: mov     eax, [esp+54h+var_30]
0x721893: fld     dword ptr [edi+74h]
0x721896: fstp    [esp+54h+var_2C]
0x72189A: mov     ecx, [esp+54h+var_2C]
0x72189E: fld     dword ptr [edi+80h]
0x7218A4: mov     [ebx], eax
0x7218A6: fstp    [esp+54h+var_28]
0x7218AA: mov     edx, [esp+54h+var_28]
0x7218AE: mov     [ebx+4], ecx
0x7218B1: mov     [ebx+8], edx
0x7218B4: fld     dword ptr [edi+6Ch]
0x7218B7: fstp    [esp+54h+var_30]
0x7218BB: mov     eax, [esp+54h+var_30]
0x7218BF: fld     dword ptr [edi+78h]
0x7218C2: fstp    [esp+54h+var_2C]
0x7218C6: mov     ecx, [esp+54h+var_2C]
0x7218CA: fld     dword ptr [edi+84h]
0x7218D0: mov     edi, [esp+54h+arg_10]
0x7218D4: fstp    [esp+54h+var_28]
0x7218D8: mov     edx, [esp+54h+var_28]
0x7218DC: mov     [edi], eax
0x7218DE: mov     [edi+4], ecx
0x7218E1: mov     [edi+8], edx
0x7218E4: fld     dword ptr [esi+4]
0x7218E7: fmul    [esp+54h+var_44]
0x7218EB: fld     dword ptr [esi]
0x7218ED: fmul    [esp+54h+var_48]
0x7218F1: faddp   st(1), st
0x7218F3: fld     dword ptr [esi+8]
0x7218F6: fmul    [esp+54h+var_40]
0x7218FA: faddp   st(1), st
0x7218FC: fstp    [esp+54h+arg_0]
0x721900: fld     [esp+54h+arg_0]
0x721904: fcomp   qword ptr ds:0A7F740h
0x72190A: fnstsw  ax
0x72190C: test    ah, 5
0x72190F: jp      loc_7219A9
0x721915: push    esi
0x721916: lea     eax, [esp+58h+var_30]
0x72191A: push    eax
0x72191B: lea     ecx, [esp+5Ch+var_48]
0x72191F: call    sub_4BF9E0
0x721924: fld     [esp+54h+var_28]
0x721928: sub     esp, 10h
0x72192B: fstp    [esp+64h+var_58]; float
0x72192F: fld     [esp+64h+var_2C]
0x721933: fstp    [esp+64h+var_5C]; float
0x721937: fld     [esp+64h+var_30]
0x72193B: fstp    [esp+64h+var_60]; float
0x72193F: fld     [esp+64h+arg_0]
0x721943: fstp    [esp+64h+var_64]; float
0x721946: call    sub_612820
0x72194B: lea     ecx, [esp+64h+var_24]
0x72194F: fstp    [esp+64h+var_64]; float
0x721952: call    sub_70FE20
0x721957: mov     ecx, [esp+54h+var_48]
0x72195B: mov     edx, [esp+54h+var_44]
0x72195F: mov     eax, [esp+54h+var_40]
0x721963: mov     [esi], ecx
0x721965: push    ebx
0x721966: lea     ecx, [esp+58h+var_30]
0x72196A: push    ecx
0x72196B: mov     [esi+4], edx
0x72196E: lea     ecx, [esp+5Ch+var_24]
0x721972: mov     [esi+8], eax
0x721975: call    sub_7101F0
0x72197A: mov     edx, [eax]
0x72197C: mov     [ebx], edx
0x72197E: mov     ecx, [eax+4]
0x721981: mov     [ebx+4], ecx
0x721984: mov     edx, [eax+8]
0x721987: push    edi
0x721988: lea     eax, [esp+58h+var_30]
0x72198C: push    eax
0x72198D: lea     ecx, [esp+5Ch+var_24]
0x721991: mov     [ebx+8], edx
0x721994: call    sub_7101F0
0x721999: mov     ecx, [eax]
0x72199B: mov     [edi], ecx
0x72199D: mov     edx, [eax+4]
0x7219A0: mov     [edi+4], edx
0x7219A3: mov     eax, [eax+8]
0x7219A6: mov     [edi+8], eax
0x7219A9: pop     esi
0x7219AA: pop     ebx
0x7219AB: mov     al, 1
0x7219AD: pop     edi
0x7219AE: add     esp, 48h
0x7219B1: retn    14h
