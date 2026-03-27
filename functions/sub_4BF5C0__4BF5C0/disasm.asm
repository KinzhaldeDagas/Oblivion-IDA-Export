0x4BF5C0: sub     esp, 20h
0x4BF5C3: push    ebx
0x4BF5C4: push    ebp
0x4BF5C5: push    esi
0x4BF5C6: push    edi
0x4BF5C7: mov     esi, ecx
0x4BF5C9: mov     [esp+30h+var_20], 0
0x4BF5D1: mov     edi, 40h ; '@'
0x4BF5D6: mov     dl, byte ptr [esp+30h+var_20]
0x4BF5DA: cmp     dl, 4
0x4BF5DD: jnb     short loc_4BF600
0x4BF5DF: mov     eax, [esi+24h]
0x4BF5E2: xor     ebp, ebp
0x4BF5E4: cmp     eax, ebp
0x4BF5E6: jz      short loc_4BF600
0x4BF5E8: movzx   ecx, dl
0x4BF5EB: mov     eax, [eax+ecx*4+20h]
0x4BF5EF: cmp     eax, ebp
0x4BF5F1: jz      short loc_4BF600
0x4BF5F3: add     eax, 18h
0x4BF5F6: mov     [esp+30h+var_14], eax
0x4BF5FA: mov     [esp+30h+var_18], ebp
0x4BF5FE: jmp     short loc_4BF614
0x4BF600: xor     ebp, ebp
0x4BF602: mov     [esp+30h+var_14], ebp
0x4BF606: mov     [esp+30h+var_18], ebp
0x4BF60A: jmp     short loc_4BF614
0x4BF60C: align 10h
0x4BF610: mov     dl, byte ptr [esp+30h+var_20]
0x4BF614: cmp     dl, 4
0x4BF617: jnb     loc_4BF93A
0x4BF61D: movzx   eax, word ptr [esp+30h+var_18]
0x4BF622: cmp     ax, 8
0x4BF626: jnb     loc_4BF93A
0x4BF62C: mov     ecx, [esi+24h]
0x4BF62F: test    ecx, ecx
0x4BF631: jz      loc_4BF93A
0x4BF637: movzx   edx, dl
0x4BF63A: lea     edx, ds:30h[edx*4]
0x4BF641: cmp     dword ptr [edx+ecx], 0
0x4BF645: mov     [esp+30h+var_1C], edx
0x4BF649: jz      loc_4BF93A
0x4BF64F: mov     ecx, [edx+ecx]
0x4BF652: movzx   eax, ax
0x4BF655: add     eax, eax
0x4BF657: add     eax, eax
0x4BF659: mov     [esp+30h+var_4], eax
0x4BF65D: mov     eax, [eax+ecx]
0x4BF660: test    eax, eax
0x4BF662: jz      loc_4BF93A
0x4BF668: add     eax, 18h
0x4BF66B: mov     [esp+30h+var_C], eax
0x4BF66F: jz      loc_4BF93A
0x4BF675: xor     eax, eax
0x4BF677: mov     [esp+30h+var_10], eax
0x4BF67B: xor     ebx, ebx
0x4BF67D: lea     ecx, [ecx+0]
0x4BF680: cmp     [esp+30h+var_18], eax
0x4BF684: jz      loc_4BF84D
0x4BF68A: cmp     byte ptr [esp+30h+var_20], 4
0x4BF68F: jnb     loc_4BF84D
0x4BF695: movzx   eax, ax
0x4BF698: cmp     ax, 8
0x4BF69C: jnb     loc_4BF84D
0x4BF6A2: mov     ecx, [esi+24h]
0x4BF6A5: test    ecx, ecx
0x4BF6A7: jz      loc_4BF84D
0x4BF6AD: cmp     dword ptr [edx+ecx], 0
0x4BF6B1: jz      loc_4BF84D
0x4BF6B7: mov     ecx, [edx+ecx]
0x4BF6BA: movzx   eax, ax
0x4BF6BD: add     eax, eax
0x4BF6BF: add     eax, eax
0x4BF6C1: mov     [esp+30h+var_8], eax
0x4BF6C5: mov     eax, [eax+ecx]
0x4BF6C8: test    eax, eax
0x4BF6CA: jz      loc_4BF84D
0x4BF6D0: add     eax, 18h
0x4BF6D3: jz      loc_4BF84D
0x4BF6D9: mov     ecx, [esp+30h+var_C]
0x4BF6DD: push    eax
0x4BF6DE: call    TESTexture_CompareTo
0x4BF6E3: test    al, al
0x4BF6E5: jnz     loc_4BF849
0x4BF6EB: fldz
0x4BF6ED: mov     eax, 0Ch
0x4BF6F2: mov     edx, [esi+24h]
0x4BF6F5: mov     ecx, [edx+edi]
0x4BF6F8: mov     ecx, [eax+ecx-0Ch]
0x4BF6FC: fld     dword ptr [ebx+ecx]
0x4BF6FF: add     eax, 20h ; ' '
0x4BF702: fadd    dword ptr [ecx+ebp]
0x4BF705: fstp    dword ptr [ecx+ebp]
0x4BF708: mov     edx, [esi+24h]
0x4BF70B: mov     ecx, [edx+edi]
0x4BF70E: mov     edx, [ecx+eax-2Ch]
0x4BF712: fst     dword ptr [ebx+edx]
0x4BF715: mov     ecx, [esi+24h]
0x4BF718: mov     edx, [ecx+edi]
0x4BF71B: mov     ecx, [edx+eax-28h]
0x4BF71F: fld     dword ptr [ebx+ecx]
0x4BF722: fadd    dword ptr [ecx+ebp]
0x4BF725: fstp    dword ptr [ecx+ebp]
0x4BF728: mov     ecx, [esi+24h]
0x4BF72B: mov     edx, [ecx+edi]
0x4BF72E: mov     ecx, [edx+eax-28h]
0x4BF732: fst     dword ptr [ebx+ecx]
0x4BF735: mov     edx, [esi+24h]
0x4BF738: mov     ecx, [edx+edi]
0x4BF73B: mov     ecx, [eax+ecx-24h]
0x4BF73F: fld     dword ptr [ebx+ecx]
0x4BF742: fadd    dword ptr [ecx+ebp]
0x4BF745: fstp    dword ptr [ecx+ebp]
0x4BF748: mov     edx, [esi+24h]
0x4BF74B: mov     ecx, [edx+edi]
0x4BF74E: mov     edx, [ecx+eax-24h]
0x4BF752: fst     dword ptr [ebx+edx]
0x4BF755: mov     ecx, [esi+24h]
0x4BF758: mov     edx, [ecx+edi]
0x4BF75B: mov     ecx, [eax+edx-20h]
0x4BF75F: fld     dword ptr [ebx+ecx]
0x4BF762: fadd    dword ptr [ecx+ebp]
0x4BF765: fstp    dword ptr [ecx+ebp]
0x4BF768: mov     ecx, [esi+24h]
0x4BF76B: mov     edx, [ecx+edi]
0x4BF76E: mov     ecx, [edx+eax-20h]
0x4BF772: fst     dword ptr [ebx+ecx]
0x4BF775: mov     edx, [esi+24h]
0x4BF778: mov     ecx, [edx+edi]
0x4BF77B: mov     ecx, [eax+ecx-1Ch]
0x4BF77F: fld     dword ptr [ebx+ecx]
0x4BF782: fadd    dword ptr [ecx+ebp]
0x4BF785: fstp    dword ptr [ecx+ebp]
0x4BF788: mov     edx, [esi+24h]
0x4BF78B: mov     ecx, [edx+edi]
0x4BF78E: mov     edx, [ecx+eax-1Ch]
0x4BF792: fst     dword ptr [ebx+edx]
0x4BF795: mov     ecx, [esi+24h]
0x4BF798: mov     edx, [ecx+edi]
0x4BF79B: mov     ecx, [eax+edx-18h]
0x4BF79F: fld     dword ptr [ebx+ecx]
0x4BF7A2: fadd    dword ptr [ecx+ebp]
0x4BF7A5: fstp    dword ptr [ecx+ebp]
0x4BF7A8: mov     ecx, [esi+24h]
0x4BF7AB: mov     edx, [ecx+edi]
0x4BF7AE: mov     ecx, [edx+eax-18h]
0x4BF7B2: fst     dword ptr [ebx+ecx]
0x4BF7B5: mov     edx, [esi+24h]
0x4BF7B8: mov     ecx, [edx+edi]
0x4BF7BB: mov     ecx, [eax+ecx-14h]
0x4BF7BF: fld     dword ptr [ebx+ecx]
0x4BF7C2: fadd    dword ptr [ecx+ebp]
0x4BF7C5: fstp    dword ptr [ecx+ebp]
0x4BF7C8: mov     edx, [esi+24h]
0x4BF7CB: mov     ecx, [edx+edi]
0x4BF7CE: mov     edx, [ecx+eax-14h]
0x4BF7D2: fst     dword ptr [ebx+edx]
0x4BF7D5: mov     ecx, [esi+24h]
0x4BF7D8: mov     edx, [ecx+edi]
0x4BF7DB: mov     ecx, [eax+edx-10h]
0x4BF7DF: fld     dword ptr [ebx+ecx]
0x4BF7E2: fadd    dword ptr [ecx+ebp]
0x4BF7E5: fstp    dword ptr [ecx+ebp]
0x4BF7E8: mov     ecx, [esi+24h]
0x4BF7EB: mov     edx, [ecx+edi]
0x4BF7EE: mov     ecx, [edx+eax-10h]
0x4BF7F2: fst     dword ptr [ebx+ecx]
0x4BF7F5: cmp     eax, 474h
0x4BF7FA: jl      loc_4BF6F2
0x4BF800: mov     eax, 480h
0x4BF805: mov     edx, [esi+24h]
0x4BF808: mov     ecx, [edx+edi]
0x4BF80B: mov     ecx, [eax+ecx]
0x4BF80E: fld     dword ptr [ebx+ecx]
0x4BF811: add     eax, 4
0x4BF814: cmp     eax, 484h
0x4BF819: fadd    dword ptr [ecx+ebp]
0x4BF81C: fstp    dword ptr [ecx+ebp]
0x4BF81F: mov     edx, [esi+24h]
0x4BF822: mov     ecx, [edx+edi]
0x4BF825: mov     edx, [ecx+eax-4]
0x4BF829: fst     dword ptr [ebx+edx]
0x4BF82C: jl      short loc_4BF805
0x4BF82E: mov     eax, [esi+24h]
0x4BF831: fstp    st
0x4BF833: test    eax, eax
0x4BF835: jz      short loc_4BF849
0x4BF837: mov     ecx, [esp+30h+var_1C]
0x4BF83B: mov     edx, [ecx+eax]
0x4BF83E: mov     eax, [esp+30h+var_8]
0x4BF842: mov     dword ptr [eax+edx], 0
0x4BF849: mov     edx, [esp+30h+var_1C]
0x4BF84D: mov     eax, [esp+30h+var_10]
0x4BF851: add     eax, 1
0x4BF854: add     ebx, 4
0x4BF857: cmp     ebx, 20h ; ' '
0x4BF85A: mov     [esp+30h+var_10], eax
0x4BF85E: jl      loc_4BF680
0x4BF864: cmp     [esp+30h+var_14], 0
0x4BF869: jz      loc_4BF93A
0x4BF86F: mov     ecx, [esp+30h+var_14]
0x4BF873: push    ecx
0x4BF874: mov     ecx, [esp+34h+var_C]
0x4BF878: call    TESTexture_CompareTo
0x4BF87D: test    al, al
0x4BF87F: jnz     loc_4BF93A
0x4BF885: fldz
0x4BF887: mov     eax, 0Ch
0x4BF88C: mov     edx, [esi+24h]
0x4BF88F: mov     ecx, [edx+edi]
0x4BF892: mov     edx, [ecx+eax-0Ch]
0x4BF896: fst     dword ptr [edx+ebp]
0x4BF899: mov     ecx, [esi+24h]
0x4BF89C: mov     edx, [ecx+edi]
0x4BF89F: mov     ecx, [edx+eax-8]
0x4BF8A3: fst     dword ptr [ecx+ebp]
0x4BF8A6: mov     edx, [esi+24h]
0x4BF8A9: mov     ecx, [edx+edi]
0x4BF8AC: mov     edx, [ecx+eax-4]
0x4BF8B0: fst     dword ptr [edx+ebp]
0x4BF8B3: mov     ecx, [esi+24h]
0x4BF8B6: mov     edx, [ecx+edi]
0x4BF8B9: mov     ecx, [edx+eax]
0x4BF8BC: fst     dword ptr [ecx+ebp]
0x4BF8BF: mov     edx, [esi+24h]
0x4BF8C2: mov     ecx, [edx+edi]
0x4BF8C5: mov     edx, [ecx+eax+4]
0x4BF8C9: fst     dword ptr [edx+ebp]
0x4BF8CC: mov     ecx, [esi+24h]
0x4BF8CF: mov     edx, [ecx+edi]
0x4BF8D2: mov     ecx, [edx+eax+8]
0x4BF8D6: fst     dword ptr [ecx+ebp]
0x4BF8D9: mov     edx, [esi+24h]
0x4BF8DC: mov     ecx, [edx+edi]
0x4BF8DF: mov     edx, [ecx+eax+0Ch]
0x4BF8E3: fst     dword ptr [edx+ebp]
0x4BF8E6: mov     ecx, [esi+24h]
0x4BF8E9: mov     edx, [ecx+edi]
0x4BF8EC: mov     ecx, [edx+eax+10h]
0x4BF8F0: add     eax, 20h ; ' '
0x4BF8F3: fst     dword ptr [ecx+ebp]
0x4BF8F6: cmp     eax, 474h
0x4BF8FB: jl      short loc_4BF88C
0x4BF8FD: mov     eax, 480h
0x4BF902: mov     edx, [esi+24h]
0x4BF905: mov     ecx, [edx+edi]
0x4BF908: mov     edx, [ecx+eax]
0x4BF90B: add     eax, 4
0x4BF90E: fst     dword ptr [edx+ebp]
0x4BF911: cmp     eax, 484h
0x4BF916: jl      short loc_4BF902
0x4BF918: cmp     byte ptr [esp+30h+var_20], 4
0x4BF91D: fstp    st
0x4BF91F: jnb     short loc_4BF93A
0x4BF921: mov     eax, [esi+24h]
0x4BF924: test    eax, eax
0x4BF926: jz      short loc_4BF93A
0x4BF928: mov     ecx, [esp+30h+var_1C]
0x4BF92C: mov     edx, [ecx+eax]
0x4BF92F: mov     eax, [esp+30h+var_4]
0x4BF933: mov     dword ptr [eax+edx], 0
0x4BF93A: add     [esp+30h+var_18], 1
0x4BF93F: add     ebp, 4
0x4BF942: cmp     ebp, 20h ; ' '
0x4BF945: jl      loc_4BF610
0x4BF94B: mov     ecx, [esi+24h]
0x4BF94E: mov     eax, [edi+ecx-10h]
0x4BF952: mov     ebp, 8
0x4BF957: xor     ebx, ebx
0x4BF959: lea     esp, [esp+0]
0x4BF960: cmp     dword ptr [eax+ebx*4], 0
0x4BF964: jnz     short loc_4BF987
0x4BF966: cmp     ebx, ebp
0x4BF968: jnb     short loc_4BF987
0x4BF96A: mov     edx, [esp+30h+var_20]
0x4BF96E: push    ebx
0x4BF96F: push    edx
0x4BF970: mov     ecx, esi
0x4BF972: call    sub_4BF2F0
0x4BF977: mov     eax, [esi+24h]
0x4BF97A: mov     eax, [edi+eax-10h]
0x4BF97E: sub     ebp, 1
0x4BF981: cmp     dword ptr [eax+ebx*4], 0
0x4BF985: jz      short loc_4BF966
0x4BF987: add     ebx, 1
0x4BF98A: cmp     ebx, ebp
0x4BF98C: jb      short loc_4BF960
0x4BF98E: add     [esp+30h+var_20], 1
0x4BF993: add     edi, 4
0x4BF996: cmp     edi, 50h ; 'P'
0x4BF999: jl      loc_4BF5D6
0x4BF99F: pop     edi
0x4BF9A0: pop     esi
0x4BF9A1: pop     ebp
0x4BF9A2: pop     ebx
0x4BF9A3: add     esp, 20h
0x4BF9A6: retn
