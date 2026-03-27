0x47E320: sub     esp, 40h
0x47E323: mov     eax, [esp+40h+arg_0]
0x47E327: mov     ecx, [eax]
0x47E329: mov     edx, [eax+8]
0x47E32C: cmp     ecx, edx
0x47E32E: mov     [esp+40h+var_3D], 0
0x47E333: mov     [esp+40h+arg_0], ecx
0x47E337: mov     [esp+40h+var_38], edx
0x47E33B: jl      short loc_47E343
0x47E33D: xor     al, al
0x47E33F: add     esp, 40h
0x47E342: retn
0x47E343: mov     ecx, [eax+0Ch]
0x47E346: mov     eax, [eax+4]
0x47E349: cmp     ecx, eax
0x47E34B: mov     [esp+40h+var_3C], ecx
0x47E34F: mov     [esp+40h+var_34], eax
0x47E353: jge     short loc_47E33D
0x47E355: fild    [esp+40h+arg_0]
0x47E359: mov     ecx, [esp+40h+arg_8]
0x47E35D: push    esi
0x47E35E: mov     esi, [esp+44h+arg_4]
0x47E362: fstp    [esp+44h+arg_0]
0x47E366: fld     dword ptr [esi]
0x47E368: fld     [esp+44h+arg_0]
0x47E36C: fcom    st(1)
0x47E36E: fnstsw  ax
0x47E370: fstp    st(1)
0x47E372: test    ah, 41h
0x47E375: jnz     short loc_47E386
0x47E377: fld     dword ptr [ecx]
0x47E379: fcomp   st(1)
0x47E37B: fnstsw  ax
0x47E37D: test    ah, 5
0x47E380: jnp     loc_47E460
0x47E386: fild    [esp+44h+var_3C]
0x47E38A: fstp    [esp+44h+var_3C]
0x47E38E: fld     dword ptr [esi+4]
0x47E391: fld     [esp+44h+var_3C]
0x47E395: fcom    st(1)
0x47E397: fnstsw  ax
0x47E399: fstp    st(1)
0x47E39B: test    ah, 41h
0x47E39E: jnz     short loc_47E3B0
0x47E3A0: fld     dword ptr [ecx+4]
0x47E3A3: fcomp   st(1)
0x47E3A5: fnstsw  ax
0x47E3A7: test    ah, 5
0x47E3AA: jnp     loc_47E45E
0x47E3B0: fild    [esp+44h+var_38]
0x47E3B4: fstp    [esp+44h+var_38]
0x47E3B8: fld     dword ptr [esi]
0x47E3BA: fld     [esp+44h+var_38]
0x47E3BE: fcom    st(1)
0x47E3C0: fnstsw  ax
0x47E3C2: fstp    st(1)
0x47E3C4: test    ah, 5
0x47E3C7: jp      short loc_47E3D8
0x47E3C9: fld     dword ptr [ecx]
0x47E3CB: fcomp   st(1)
0x47E3CD: fnstsw  ax
0x47E3CF: test    ah, 41h
0x47E3D2: jz      loc_47E45C
0x47E3D8: fild    [esp+44h+var_34]
0x47E3DC: fstp    [esp+44h+var_34]
0x47E3E0: fld     dword ptr [esi+4]
0x47E3E3: fld     [esp+44h+var_34]
0x47E3E7: fcom    st(1)
0x47E3E9: fnstsw  ax
0x47E3EB: fstp    st(1)
0x47E3ED: test    ah, 5
0x47E3F0: jp      short loc_47E3FE
0x47E3F2: fld     dword ptr [ecx+4]
0x47E3F5: fcomp   st(1)
0x47E3F7: fnstsw  ax
0x47E3F9: test    ah, 41h
0x47E3FC: jz      short loc_47E45A
0x47E3FE: fld     dword ptr [esi]
0x47E400: fcomp   st(4)
0x47E402: fnstsw  ax
0x47E404: test    ah, 41h
0x47E407: jnz     short loc_47E469
0x47E409: fld     dword ptr [esi]
0x47E40B: fcomp   st(2)
0x47E40D: fnstsw  ax
0x47E40F: test    ah, 5
0x47E412: jp      short loc_47E469
0x47E414: fld     dword ptr [esi+4]
0x47E417: fcomp   st(3)
0x47E419: fnstsw  ax
0x47E41B: test    ah, 41h
0x47E41E: jnz     short loc_47E469
0x47E420: fld     dword ptr [esi+4]
0x47E423: fcomp   st(1)
0x47E425: fnstsw  ax
0x47E427: test    ah, 5
0x47E42A: jp      short loc_47E469
0x47E42C: fld     dword ptr [ecx]
0x47E42E: fcomp   st(4)
0x47E430: fnstsw  ax
0x47E432: test    ah, 41h
0x47E435: jnz     short loc_47E469
0x47E437: fld     dword ptr [ecx]
0x47E439: fcomp   st(2)
0x47E43B: fnstsw  ax
0x47E43D: test    ah, 5
0x47E440: jp      short loc_47E469
0x47E442: fld     dword ptr [ecx+4]
0x47E445: fcomp   st(3)
0x47E447: fnstsw  ax
0x47E449: test    ah, 41h
0x47E44C: jnz     short loc_47E469
0x47E44E: fld     dword ptr [ecx+4]
0x47E451: fcomp   st(1)
0x47E453: fnstsw  ax
0x47E455: test    ah, 5
0x47E458: jp      short loc_47E469
0x47E45A: fstp    st(3)
0x47E45C: fstp    st(2)
0x47E45E: fstp    st(1)
0x47E460: fstp    st
0x47E462: xor     al, al
0x47E464: pop     esi
0x47E465: add     esp, 40h
0x47E468: retn
0x47E469: fld     dword ptr [ecx]
0x47E46B: push    ebx
0x47E46C: fld     dword ptr [esi]
0x47E46E: push    ebp
0x47E46F: fucompp
0x47E471: push    edi
0x47E472: fnstsw  ax
0x47E474: test    ah, 44h
0x47E477: jnp     loc_47E89E
0x47E47D: fld     dword ptr [ecx+4]
0x47E480: fld     dword ptr [esi+4]
0x47E483: fucompp
0x47E485: fnstsw  ax
0x47E487: test    ah, 44h
0x47E48A: jnp     loc_47E89E
0x47E490: fld     dword ptr ds:0A32048h
0x47E496: xor     edx, edx
0x47E498: fst     [esp+50h+var_30]
0x47E49C: fst     [esp+50h+var_2C]
0x47E4A0: fst     [esp+50h+var_28]
0x47E4A4: fst     [esp+50h+var_24]
0x47E4A8: fst     [esp+50h+var_20]
0x47E4AC: fstp    [esp+50h+var_1C]
0x47E4B0: fld     dword ptr [ecx+4]
0x47E4B3: fsub    dword ptr [esi+4]
0x47E4B6: fld     dword ptr [ecx]
0x47E4B8: fsub    dword ptr [esi]
0x47E4BA: fdivp   st(1), st
0x47E4BC: fstp    [esp+50h+var_34]
0x47E4C0: fld     dword ptr [ecx]
0x47E4C2: fld     [esp+50h+var_34]
0x47E4C6: fld     st
0x47E4C8: fmulp   st(2), st
0x47E4CA: fxch    st(1)
0x47E4CC: fsubr   dword ptr [ecx+4]
0x47E4CF: fstp    [esp+50h+var_34]
0x47E4D3: fld     st
0x47E4D5: fmulp   st(5), st
0x47E4D7: fld     [esp+50h+var_34]
0x47E4DB: fld     st
0x47E4DD: faddp   st(6), st
0x47E4DF: fxch    st(5)
0x47E4E1: fstp    [esp+50h+var_34]
0x47E4E5: fld     [esp+50h+var_34]
0x47E4E9: fcom    st(2)
0x47E4EB: fnstsw  ax
0x47E4ED: fldz
0x47E4EF: test    ah, 41h
0x47E4F2: jp      short loc_47E530
0x47E4F4: fxch    st(5)
0x47E4F6: fcomp   st(1)
0x47E4F8: fnstsw  ax
0x47E4FA: test    ah, 41h
0x47E4FD: jp      short loc_47E536
0x47E4FF: fld     [esp+50h+arg_0]
0x47E503: mov     edx, 1
0x47E508: fstp    [esp+50h+var_18]
0x47E50C: mov     edi, [esp+50h+var_18]
0x47E510: mov     [esp+50h+var_30], edi
0x47E514: fstp    [esp+50h+var_14]
0x47E518: mov     ebp, [esp+50h+var_14]
0x47E51C: fxch    st(3)
0x47E51E: mov     [esp+50h+var_2C], ebp
0x47E522: fst     [esp+50h+var_10]
0x47E526: mov     ebx, [esp+50h+var_10]
0x47E52A: mov     [esp+50h+var_28], ebx
0x47E52E: jmp     short loc_47E546
0x47E530: fstp    st(1)
0x47E532: fstp    st(4)
0x47E534: jmp     short loc_47E538
0x47E536: fstp    st
0x47E538: mov     ebx, [esp+50h+var_28]
0x47E53C: fxch    st(3)
0x47E53E: mov     ebp, [esp+50h+var_2C]
0x47E542: mov     edi, [esp+50h+var_30]
0x47E546: fld     st(1)
0x47E548: fsub    st, st(5)
0x47E54A: fdiv    st, st(4)
0x47E54C: fstp    [esp+50h+var_34]
0x47E550: fld     [esp+50h+var_34]
0x47E554: fcom    st(3)
0x47E556: fnstsw  ax
0x47E558: test    ah, 41h
0x47E55B: jp      short loc_47E5BA
0x47E55D: fld     [esp+50h+arg_0]
0x47E561: fcomp   st(1)
0x47E563: fnstsw  ax
0x47E565: test    ah, 41h
0x47E568: jp      short loc_47E5BA
0x47E56A: test    edx, edx
0x47E56C: fstp    [esp+50h+var_18]
0x47E570: fxch    st(1)
0x47E572: fst     [esp+50h+var_14]
0x47E576: fxch    st(1)
0x47E578: fst     [esp+50h+var_10]
0x47E57C: jnz     short loc_47E59D
0x47E57E: mov     edi, [esp+50h+var_18]
0x47E582: mov     ebp, [esp+50h+var_14]
0x47E586: mov     ebx, [esp+50h+var_10]
0x47E58A: mov     [esp+50h+var_30], edi
0x47E58E: mov     [esp+50h+var_2C], ebp
0x47E592: mov     [esp+50h+var_28], ebx
0x47E596: mov     edx, 1
0x47E59B: jmp     short loc_47E5BC
0x47E59D: mov     eax, [esp+50h+var_18]
0x47E5A1: mov     [esp+50h+var_24], eax
0x47E5A5: mov     eax, [esp+50h+var_14]
0x47E5A9: mov     [esp+50h+var_20], eax
0x47E5AD: mov     eax, [esp+50h+var_10]
0x47E5B1: mov     [esp+50h+var_1C], eax
0x47E5B5: add     edx, 1
0x47E5B8: jmp     short loc_47E5BC
0x47E5BA: fstp    st
0x47E5BC: cmp     edx, 2
0x47E5BF: jge     loc_47E7CC
0x47E5C5: fld     st(2)
0x47E5C7: fmul    st, st(4)
0x47E5C9: fadd    st, st(5)
0x47E5CB: fstp    [esp+50h+var_34]
0x47E5CF: fld     [esp+50h+var_34]
0x47E5D3: fcom    st(2)
0x47E5D5: fnstsw  ax
0x47E5D7: test    ah, 41h
0x47E5DA: jp      short loc_47E639
0x47E5DC: fld     [esp+50h+var_3C]
0x47E5E0: fcomp   st(1)
0x47E5E2: fnstsw  ax
0x47E5E4: test    ah, 41h
0x47E5E7: jp      short loc_47E639
0x47E5E9: test    edx, edx
0x47E5EB: fxch    st(3)
0x47E5ED: fst     [esp+50h+var_18]
0x47E5F1: fxch    st(3)
0x47E5F3: fstp    [esp+50h+var_14]
0x47E5F7: fst     [esp+50h+var_10]
0x47E5FB: jnz     short loc_47E61C
0x47E5FD: mov     edi, [esp+50h+var_18]
0x47E601: mov     ebp, [esp+50h+var_14]
0x47E605: mov     ebx, [esp+50h+var_10]
0x47E609: mov     [esp+50h+var_30], edi
0x47E60D: mov     [esp+50h+var_2C], ebp
0x47E611: mov     [esp+50h+var_28], ebx
0x47E615: mov     edx, 1
0x47E61A: jmp     short loc_47E63B
0x47E61C: mov     eax, [esp+50h+var_18]
0x47E620: mov     [esp+50h+var_24], eax
0x47E624: mov     eax, [esp+50h+var_14]
0x47E628: mov     [esp+50h+var_20], eax
0x47E62C: mov     eax, [esp+50h+var_10]
0x47E630: mov     [esp+50h+var_1C], eax
0x47E634: add     edx, 1
0x47E637: jmp     short loc_47E63B
0x47E639: fstp    st
0x47E63B: cmp     edx, 2
0x47E63E: jge     loc_47E7CC
0x47E644: fld     [esp+50h+var_3C]
0x47E648: fld     st
0x47E64A: fsubrp  st(6), st
0x47E64C: fxch    st(5)
0x47E64E: fdivrp  st(4), st
0x47E650: fxch    st(3)
0x47E652: fstp    [esp+50h+var_34]
0x47E656: fld     [esp+50h+var_34]
0x47E65A: fcom    st(2)
0x47E65C: fnstsw  ax
0x47E65E: test    ah, 41h
0x47E661: jp      loc_47E7C3
0x47E667: fld     [esp+50h+arg_0]
0x47E66B: fcomp   st(1)
0x47E66D: fnstsw  ax
0x47E66F: test    ah, 41h
0x47E672: jp      loc_47E7C3
0x47E678: test    edx, edx
0x47E67A: fstp    [esp+50h+var_18]
0x47E67E: fxch    st(3)
0x47E680: fst     [esp+50h+var_14]
0x47E684: fxch    st(2)
0x47E686: fstp    [esp+50h+var_10]
0x47E68A: jnz     short loc_47E6A6
0x47E68C: mov     edi, [esp+50h+var_18]
0x47E690: mov     ebp, [esp+50h+var_14]
0x47E694: mov     ebx, [esp+50h+var_10]
0x47E698: mov     [esp+50h+var_30], edi
0x47E69C: mov     [esp+50h+var_2C], ebp
0x47E6A0: mov     [esp+50h+var_28], ebx
0x47E6A4: jmp     short loc_47E6BE
0x47E6A6: mov     eax, [esp+50h+var_18]
0x47E6AA: mov     [esp+50h+var_24], eax
0x47E6AE: mov     eax, [esp+50h+var_14]
0x47E6B2: mov     [esp+50h+var_20], eax
0x47E6B6: mov     eax, [esp+50h+var_10]
0x47E6BA: mov     [esp+50h+var_1C], eax
0x47E6BE: add     edx, 1
0x47E6C1: fxch    st(1)
0x47E6C3: fxch    st(2)
0x47E6C5: fxch    st(1)
0x47E6C7: test    edx, edx
0x47E6C9: jz      loc_47EA2A
0x47E6CF: cmp     edx, 2
0x47E6D2: mov     [esp+50h+var_3D], 1
0x47E6D7: jnz     loc_47E880
0x47E6DD: fld     dword ptr [esi]
0x47E6DF: fld     [esp+50h+arg_0]
0x47E6E3: fcompp
0x47E6E5: fnstsw  ax
0x47E6E7: test    ah, 5
0x47E6EA: jp      loc_47E7DB
0x47E6F0: fld     dword ptr [esi]
0x47E6F2: fcompp
0x47E6F4: fnstsw  ax
0x47E6F6: test    ah, 5
0x47E6F9: jp      loc_47E7E1
0x47E6FF: fld     dword ptr [esi+4]
0x47E702: fcomp   st(2)
0x47E704: fnstsw  ax
0x47E706: fstp    st(1)
0x47E708: test    ah, 41h
0x47E70B: jnz     loc_47E7E3
0x47E711: fld     dword ptr [esi+4]
0x47E714: fcompp
0x47E716: fnstsw  ax
0x47E718: test    ah, 5
0x47E71B: jp      loc_47E7E5
0x47E721: push    esi
0x47E722: lea     edx, [esp+54h+var_C]
0x47E726: push    edx
0x47E727: call    sub_4121A0
0x47E72C: fld     [esp+50h+var_30]
0x47E730: fsub    dword ptr [esi]
0x47E732: lea     ecx, [esp+50h+var_C]
0x47E736: fstp    [esp+50h+var_18]
0x47E73A: fld     [esp+50h+var_2C]
0x47E73E: fsub    dword ptr [esi+4]
0x47E741: fstp    [esp+50h+var_14]
0x47E745: fldz
0x47E747: fst     [esp+50h+var_4]
0x47E74B: fstp    [esp+50h+var_10]
0x47E74F: call    sub_43F350
0x47E754: fstp    st
0x47E756: lea     ecx, [esp+50h+var_18]
0x47E75A: call    sub_43F350
0x47E75F: fstp    st
0x47E761: fld     [esp+50h+var_18]
0x47E765: lea     ecx, [esp+50h+var_30]
0x47E769: fadd    [esp+50h+var_C]
0x47E76D: fstp    [esp+50h+var_30]
0x47E771: fld     [esp+50h+var_8]
0x47E775: fadd    [esp+50h+var_14]
0x47E779: fstp    [esp+50h+var_2C]
0x47E77D: fld     [esp+50h+var_10]
0x47E781: fadd    [esp+50h+var_4]
0x47E785: fstp    [esp+50h+var_28]
0x47E789: call    sub_404C90
0x47E78E: fcomp   dword ptr ds:0A2F948h
0x47E794: fnstsw  ax
0x47E796: test    ah, 41h
0x47E799: mov     eax, [esp+50h+arg_C]
0x47E79D: jz      loc_47E84C
0x47E7A3: mov     ecx, [esp+50h+var_24]
0x47E7A7: mov     edx, [esp+50h+var_20]
0x47E7AB: pop     edi
0x47E7AC: mov     [eax], ecx
0x47E7AE: mov     ecx, [esp+4Ch+var_1C]
0x47E7B2: pop     ebp
0x47E7B3: mov     [eax+4], edx
0x47E7B6: pop     ebx
0x47E7B7: mov     [eax+8], ecx
0x47E7BA: mov     al, [esp+44h+var_3D]
0x47E7BE: pop     esi
0x47E7BF: add     esp, 40h
0x47E7C2: retn
0x47E7C3: fstp    st
0x47E7C5: fstp    st(2)
0x47E7C7: jmp     loc_47E6C7
0x47E7CC: fstp    st(3)
0x47E7CE: fstp    st(3)
0x47E7D0: fstp    st(1)
0x47E7D2: fld     [esp+50h+var_3C]
0x47E7D6: jmp     loc_47E6C3
0x47E7DB: fstp    st(2)
0x47E7DD: fstp    st
0x47E7DF: jmp     short loc_47E7E3
0x47E7E1: fstp    st(1)
0x47E7E3: fstp    st
0x47E7E5: fld     [esp+50h+var_30]
0x47E7E9: lea     ecx, [esp+50h+var_C]
0x47E7ED: fsub    dword ptr [esi]
0x47E7EF: fstp    [esp+50h+var_C]
0x47E7F3: fld     [esp+50h+var_2C]
0x47E7F7: fsub    dword ptr [esi+4]
0x47E7FA: fstp    [esp+50h+var_8]
0x47E7FE: fld     [esp+50h+var_28]
0x47E802: fsub    dword ptr [esi+8]
0x47E805: fstp    [esp+50h+var_4]
0x47E809: fld     [esp+50h+var_24]
0x47E80D: fsub    dword ptr [esi]
0x47E80F: fstp    [esp+50h+var_18]
0x47E813: fld     [esp+50h+var_20]
0x47E817: fsub    dword ptr [esi+4]
0x47E81A: fstp    [esp+50h+var_14]
0x47E81E: fld     [esp+50h+var_1C]
0x47E822: fsub    dword ptr [esi+8]
0x47E825: fstp    [esp+50h+var_10]
0x47E829: call    sub_404C90
0x47E82E: lea     ecx, [esp+50h+var_18]
0x47E832: fstp    [esp+50h+arg_0]
0x47E836: call    sub_404C90
0x47E83B: fld     [esp+50h+arg_0]
0x47E83F: fcompp
0x47E841: fnstsw  ax
0x47E843: test    ah, 5
0x47E846: mov     eax, [esp+50h+arg_C]
0x47E84A: jp      short loc_47E860
0x47E84C: mov     [eax], edi
0x47E84E: pop     edi
0x47E84F: mov     [eax+4], ebp
0x47E852: pop     ebp
0x47E853: mov     [eax+8], ebx
0x47E856: mov     al, [esp+48h+var_3D]
0x47E85A: pop     ebx
0x47E85B: pop     esi
0x47E85C: add     esp, 40h
0x47E85F: retn
0x47E860: mov     edx, [esp+50h+var_24]
0x47E864: mov     ecx, [esp+50h+var_20]
0x47E868: pop     edi
0x47E869: mov     [eax], edx
0x47E86B: mov     edx, [esp+4Ch+var_1C]
0x47E86F: pop     ebp
0x47E870: mov     [eax+4], ecx
0x47E873: pop     ebx
0x47E874: mov     [eax+8], edx
0x47E877: mov     al, [esp+44h+var_3D]
0x47E87B: pop     esi
0x47E87C: add     esp, 40h
0x47E87F: retn
0x47E880: mov     eax, [esp+50h+arg_C]
0x47E884: fstp    st(2)
0x47E886: mov     [eax], edi
0x47E888: fstp    st
0x47E88A: pop     edi
0x47E88B: fstp    st
0x47E88D: mov     [eax+4], ebp
0x47E890: pop     ebp
0x47E891: mov     [eax+8], ebx
0x47E894: mov     al, [esp+48h+var_3D]
0x47E898: pop     ebx
0x47E899: pop     esi
0x47E89A: add     esp, 40h
0x47E89D: retn
0x47E89E: fld     dword ptr [ecx]
0x47E8A0: fld     dword ptr [esi]
0x47E8A2: fucompp
0x47E8A4: fnstsw  ax
0x47E8A6: test    ah, 44h
0x47E8A9: jp      short loc_47E923
0x47E8AB: fld     dword ptr [ecx+4]
0x47E8AE: fld     dword ptr [esi+4]
0x47E8B1: fucompp
0x47E8B3: fnstsw  ax
0x47E8B5: test    ah, 44h
0x47E8B8: jp      short loc_47E923
0x47E8BA: fld     dword ptr [esi]
0x47E8BC: fcomp   st(2)
0x47E8BE: fnstsw  ax
0x47E8C0: fstp    st(1)
0x47E8C2: test    ah, 41h
0x47E8C5: jp      loc_47EA3E
0x47E8CB: fld     dword ptr [esi]
0x47E8CD: fcomp   st(3)
0x47E8CF: fnstsw  ax
0x47E8D1: fstp    st(2)
0x47E8D3: test    ah, 1
0x47E8D6: jnz     loc_47EA40
0x47E8DC: fld     dword ptr [esi+4]
0x47E8DF: fcomp   st(2)
0x47E8E1: fnstsw  ax
0x47E8E3: fstp    st(1)
0x47E8E5: test    ah, 41h
0x47E8E8: jp      loc_47EA42
0x47E8EE: fld     dword ptr [esi+4]
0x47E8F1: fcompp
0x47E8F3: fnstsw  ax
0x47E8F5: test    ah, 1
0x47E8F8: jnz     loc_47EA44
0x47E8FE: mov     ecx, [esi]
0x47E900: mov     eax, [esp+50h+arg_C]
0x47E904: mov     [eax], ecx
0x47E906: mov     edx, [esi+4]
0x47E909: pop     edi
0x47E90A: mov     [eax+4], edx
0x47E90D: mov     ecx, [esi+8]
0x47E910: pop     ebp
0x47E911: mov     [esp+48h+var_3D], 1
0x47E916: pop     ebx
0x47E917: mov     [eax+8], ecx
0x47E91A: mov     al, [esp+44h+var_3D]
0x47E91E: pop     esi
0x47E91F: add     esp, 40h
0x47E922: retn
0x47E923: fld     dword ptr [ecx]
0x47E925: fld     dword ptr [esi]
0x47E927: fucompp
0x47E929: fnstsw  ax
0x47E92B: test    ah, 44h
0x47E92E: jp      short loc_47E9A6
0x47E930: fld     dword ptr [esi]
0x47E932: fcomp   st(2)
0x47E934: fnstsw  ax
0x47E936: fstp    st(1)
0x47E938: test    ah, 41h
0x47E93B: jp      loc_47EA3E
0x47E941: fld     dword ptr [esi]
0x47E943: fcomp   st(3)
0x47E945: fnstsw  ax
0x47E947: fstp    st(2)
0x47E949: test    ah, 1
0x47E94C: jnz     loc_47EA40
0x47E952: fld     dword ptr [esi+4]
0x47E955: mov     [esp+50h+var_3D], 1
0x47E95A: fld     dword ptr [ecx+4]
0x47E95D: fcompp
0x47E95F: fnstsw  ax
0x47E961: test    ah, 5
0x47E964: mov     eax, [esp+50h+arg_C]
0x47E968: jp      short loc_47E974
0x47E96A: fstp    st
0x47E96C: fld     dword ptr [esi]
0x47E96E: fstp    [esp+50h+var_C]
0x47E972: jmp     short loc_47E9F2
0x47E974: fstp    st(1)
0x47E976: fld     dword ptr [esi]
0x47E978: fstp    [esp+50h+var_C]
0x47E97C: mov     ecx, [esp+50h+var_C]
0x47E980: fstp    [esp+50h+var_8]
0x47E984: fldz
0x47E986: mov     edx, [esp+50h+var_8]
0x47E98A: pop     edi
0x47E98B: fstp    [esp+4Ch+var_4]
0x47E98F: mov     [eax], ecx
0x47E991: mov     ecx, [esp+4Ch+var_4]
0x47E995: pop     ebp
0x47E996: mov     [eax+4], edx
0x47E999: pop     ebx
0x47E99A: mov     [eax+8], ecx
0x47E99D: mov     al, [esp+44h+var_3D]
0x47E9A1: pop     esi
0x47E9A2: add     esp, 40h
0x47E9A5: retn
0x47E9A6: fld     dword ptr [ecx+4]
0x47E9A9: fld     dword ptr [esi+4]
0x47E9AC: fucompp
0x47E9AE: fnstsw  ax
0x47E9B0: test    ah, 44h
0x47E9B3: jp      loc_47EA3C
0x47E9B9: fld     dword ptr [esi+4]
0x47E9BC: fcompp
0x47E9BE: fnstsw  ax
0x47E9C0: test    ah, 41h
0x47E9C3: jp      short loc_47EA3E
0x47E9C5: fld     dword ptr [esi+4]
0x47E9C8: fcomp   st(2)
0x47E9CA: fnstsw  ax
0x47E9CC: fstp    st(1)
0x47E9CE: test    ah, 1
0x47E9D1: jnz     short loc_47EA40
0x47E9D3: fld     dword ptr [esi]
0x47E9D5: mov     [esp+50h+var_3D], 1
0x47E9DA: fld     dword ptr [ecx]
0x47E9DC: fcompp
0x47E9DE: fnstsw  ax
0x47E9E0: test    ah, 5
0x47E9E3: mov     eax, [esp+50h+arg_C]
0x47E9E7: jp      short loc_47EA1C
0x47E9E9: fstp    st(1)
0x47E9EB: fstp    [esp+50h+var_C]
0x47E9EF: fld     dword ptr [esi+4]
0x47E9F2: mov     edx, [esp+50h+var_C]
0x47E9F6: fstp    [esp+50h+var_8]
0x47E9FA: fldz
0x47E9FC: mov     ecx, [esp+50h+var_8]
0x47EA00: pop     edi
0x47EA01: fstp    [esp+4Ch+var_4]
0x47EA05: mov     [eax], edx
0x47EA07: mov     edx, [esp+4Ch+var_4]
0x47EA0B: pop     ebp
0x47EA0C: mov     [eax+4], ecx
0x47EA0F: pop     ebx
0x47EA10: mov     [eax+8], edx
0x47EA13: mov     al, [esp+44h+var_3D]
0x47EA17: pop     esi
0x47EA18: add     esp, 40h
0x47EA1B: retn
0x47EA1C: fstp    st
0x47EA1E: fstp    [esp+50h+var_C]
0x47EA22: fld     dword ptr [esi+4]
0x47EA25: jmp     loc_47E97C
0x47EA2A: mov     al, [esp+50h+var_3D]
0x47EA2E: fstp    st(2)
0x47EA30: pop     edi
0x47EA31: fstp    st
0x47EA33: pop     ebp
0x47EA34: fstp    st
0x47EA36: pop     ebx
0x47EA37: pop     esi
0x47EA38: add     esp, 40h
0x47EA3B: retn
0x47EA3C: fstp    st(3)
0x47EA3E: fstp    st(2)
0x47EA40: fstp    st(1)
0x47EA42: fstp    st
0x47EA44: mov     al, [esp+50h+var_3D]
0x47EA48: pop     edi
0x47EA49: pop     ebp
0x47EA4A: pop     ebx
0x47EA4B: pop     esi
0x47EA4C: add     esp, 40h
0x47EA4F: retn
