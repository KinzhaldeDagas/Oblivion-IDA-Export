0x6DD710: sub     esp, 8
0x6DD713: push    esi
0x6DD714: push    edi
0x6DD715: mov     edi, ecx
0x6DD717: mov     al, [edi+3Ch]
0x6DD71A: shr     al, 4
0x6DD71D: test    al, 1
0x6DD71F: mov     [esp+10h+var_4], edi
0x6DD723: jz      short loc_6DD750
0x6DD725: mov     ecx, [esp+10h+arg_C]
0x6DD729: fld     [esp+10h+arg_0]
0x6DD72D: mov     edx, [esp+10h+arg_8]
0x6DD731: mov     esi, [esp+10h+arg_4]
0x6DD735: push    ecx; int
0x6DD736: push    edx; int
0x6DD737: push    esi; int
0x6DD738: push    ecx
0x6DD739: mov     ecx, edi
0x6DD73B: fstp    [esp+20h+var_20]; float
0x6DD73E: call    sub_6DD540
0x6DD743: mov     eax, [esi]
0x6DD745: mov     [edi+40h], eax
0x6DD748: pop     edi
0x6DD749: pop     esi
0x6DD74A: add     esp, 8
0x6DD74D: retn    10h
0x6DD750: mov     eax, [edi+48h]
0x6DD753: test    eax, eax
0x6DD755: push    ebx
0x6DD756: jz      short loc_6DD767
0x6DD758: mov     ebx, [eax+8]
0x6DD75B: mov     cl, [eax+14h]
0x6DD75E: mov     esi, [eax+0Ch]
0x6DD761: mov     [esp+14h+var_8], ebx
0x6DD765: jmp     short loc_6DD775
0x6DD767: xor     esi, esi
0x6DD769: mov     [esp+14h+var_8], 0
0x6DD771: xor     cl, cl
0x6DD773: mov     ebx, esi
0x6DD775: fld     [esp+14h+arg_0]
0x6DD779: fld     dword ptr [esi]
0x6DD77B: fcomp   st(1)
0x6DD77D: fnstsw  ax
0x6DD77F: test    ah, 1
0x6DD782: jnz     short loc_6DD7AB
0x6DD784: mov     ecx, [esp+14h+arg_4]
0x6DD788: fstp    st
0x6DD78A: mov     edx, [esp+14h+arg_8]
0x6DD78E: fldz
0x6DD790: mov     eax, [esp+14h+arg_C]
0x6DD794: pop     ebx
0x6DD795: mov     dword ptr [ecx], 0
0x6DD79B: pop     edi
0x6DD79C: mov     dword ptr [edx], 1
0x6DD7A2: fstp    dword ptr [eax]
0x6DD7A4: pop     esi
0x6DD7A5: add     esp, 8
0x6DD7A8: retn    10h
0x6DD7AB: movzx   edx, cl
0x6DD7AE: push    ebp
0x6DD7AF: lea     ebp, [ebx-1]
0x6DD7B2: mov     ecx, edx
0x6DD7B4: imul    ecx, ebp
0x6DD7B7: fld     dword ptr [ecx+esi]
0x6DD7BA: fcomp   st(1)
0x6DD7BC: fnstsw  ax
0x6DD7BE: test    ah, 41h
0x6DD7C1: jp      short loc_6DD7E6
0x6DD7C3: mov     edx, [esp+18h+arg_4]
0x6DD7C7: fstp    st
0x6DD7C9: mov     eax, [esp+18h+arg_8]
0x6DD7CD: fld1
0x6DD7CF: mov     ecx, [esp+18h+arg_C]
0x6DD7D3: add     ebx, 0FFFFFFFEh
0x6DD7D6: mov     [edx], ebx
0x6DD7D8: mov     [eax], ebp
0x6DD7DA: fstp    dword ptr [ecx]
0x6DD7DC: pop     ebp
0x6DD7DD: pop     ebx
0x6DD7DE: pop     edi
0x6DD7DF: pop     esi
0x6DD7E0: add     esp, 8
0x6DD7E3: retn    10h
0x6DD7E6: mov     ecx, [edi+40h]
0x6DD7E9: cmp     ecx, ebp
0x6DD7EB: mov     bl, 1
0x6DD7ED: jnb     short loc_6DD83E
0x6DD7EF: mov     eax, edx
0x6DD7F1: fld     st
0x6DD7F3: imul    eax, ecx
0x6DD7F6: fld     dword ptr [eax+esi]
0x6DD7F9: fucompp
0x6DD7FB: lea     edi, [eax+esi]
0x6DD7FE: fnstsw  ax
0x6DD800: test    ah, 44h
0x6DD803: jnp     short loc_6DD872
0x6DD805: fld     dword ptr [edi]
0x6DD807: fcomp   st(1)
0x6DD809: fnstsw  ax
0x6DD80B: test    ah, 5
0x6DD80E: jp      short loc_6DD822
0x6DD810: lea     eax, [ecx+1]
0x6DD813: imul    eax, edx
0x6DD816: fld     dword ptr [eax+esi]
0x6DD819: fcomp   st(1)
0x6DD81B: fnstsw  ax
0x6DD81D: test    ah, 41h
0x6DD820: jz      short loc_6DD872
0x6DD822: mov     eax, [esp+18h+var_8]
0x6DD826: add     eax, 0FFFFFFFEh
0x6DD829: cmp     ecx, eax
0x6DD82B: jnz     short loc_6DD837
0x6DD82D: test    bl, bl
0x6DD82F: jz      short loc_6DD837
0x6DD831: xor     ecx, ecx
0x6DD833: xor     bl, bl
0x6DD835: jmp     short loc_6DD83A
0x6DD837: add     ecx, 1
0x6DD83A: cmp     ecx, ebp
0x6DD83C: jb      short loc_6DD7EF
0x6DD83E: mov     eax, [esp+18h+arg_C]
0x6DD842: mov     edi, edx
0x6DD844: imul    edi, ecx
0x6DD847: fsub    dword ptr [edi+esi]
0x6DD84A: add     edi, esi
0x6DD84C: imul    edx, eax
0x6DD84F: pop     ebp
0x6DD850: fld     dword ptr [edx+esi]
0x6DD853: mov     edx, [esp+14h+arg_C]
0x6DD857: fsub    dword ptr [edi]
0x6DD859: pop     ebx
0x6DD85A: pop     edi
0x6DD85B: pop     esi
0x6DD85C: fdivp   st(1), st
0x6DD85E: fstp    dword ptr [edx]
0x6DD860: mov     edx, [esp+8+arg_4]
0x6DD864: mov     [edx], ecx
0x6DD866: mov     ecx, [esp+8+arg_8]
0x6DD86A: mov     [ecx], eax
0x6DD86C: add     esp, 8
0x6DD86F: retn    10h
0x6DD872: mov     eax, [esp+18h+var_4]
0x6DD876: mov     [eax+40h], ecx
0x6DD879: lea     eax, [ecx+1]
0x6DD87C: jmp     short loc_6DD842
