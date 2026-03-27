0x80E730: push    0FFFFFFFFh
0x80E732: push    offset SEH_7B09A0
0x80E737: mov     eax, large fs:0
0x80E73D: push    eax
0x80E73E: sub     esp, 8
0x80E741: push    ebx
0x80E742: push    ebp
0x80E743: push    esi
0x80E744: push    edi
0x80E745: mov     eax, ds:0B30AACh
0x80E74A: xor     eax, esp
0x80E74C: push    eax
0x80E74D: lea     eax, [esp+28h+var_C]
0x80E751: mov     large fs:0, eax
0x80E757: mov     esi, ecx
0x80E759: lea     eax, [esp+28h+var_10]
0x80E75D: push    eax
0x80E75E: call    sub_7606A0
0x80E763: add     esp, 4
0x80E766: mov     edi, eax
0x80E768: mov     ecx, [esi+94h]
0x80E76E: cmp     ecx, [edi]
0x80E770: mov     [esp+28h+var_4], 0
0x80E778: jz      short loc_80E799
0x80E77A: test    ecx, ecx
0x80E77C: jz      short loc_80E789
0x80E77E: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x80E782: jnz     short loc_80E789
0x80E784: call    sub_7604D0
0x80E789: mov     eax, [edi]
0x80E78B: test    eax, eax
0x80E78D: mov     [esi+94h], eax
0x80E793: jz      short loc_80E799
0x80E795: add     dword ptr [eax+60h], 1
0x80E799: mov     eax, [esp+28h+var_10]
0x80E79D: test    eax, eax
0x80E79F: mov     [esp+28h+var_4], 0FFFFFFFFh
0x80E7A7: jz      short loc_80E7BC
0x80E7A9: add     dword ptr [eax+60h], 0FFFFFFFFh
0x80E7AD: mov     ecx, eax
0x80E7AF: add     eax, 60h ; '`'
0x80E7B2: cmp     dword ptr [eax], 0
0x80E7B5: jnz     short loc_80E7BC
0x80E7B7: call    sub_7604D0
0x80E7BC: lea     ecx, [esp+28h+a3]
0x80E7C0: push    ecx
0x80E7C1: call    sub_772630
0x80E7C6: mov     edx, [esp+2Ch+a3]
0x80E7CA: push    2
0x80E7CC: push    3
0x80E7CE: push    0
0x80E7D0: push    edx
0x80E7D1: mov     [esp+3Ch+var_4], 1
0x80E7D9: call    sub_801110
0x80E7DE: mov     ecx, [esi+94h]; this
0x80E7E4: mov     eax, [esp+3Ch+a3]
0x80E7E8: mov     edx, [ecx+14h]
0x80E7EB: add     esp, 14h
0x80E7EE: push    eax; a3
0x80E7EF: push    edx; a2
0x80E7F0: call    sub_760010
0x80E7F5: mov     ebp, [esi+94h]
0x80E7FB: mov     ebx, [esi+7Ch]
0x80E7FE: mov     edi, [ebp+58h]
0x80E801: cmp     edi, ebx
0x80E803: jz      short loc_80E836
0x80E805: test    edi, edi
0x80E807: jz      short loc_80E825
0x80E809: lea     eax, [edi+4]
0x80E80C: push    eax; lpAddend
0x80E80D: call    dword ptr ds:0A2807Ch
0x80E813: test    eax, eax
0x80E815: jnz     short loc_80E825
0x80E817: test    edi, edi
0x80E819: jz      short loc_80E825
0x80E81B: mov     edx, [edi]
0x80E81D: mov     eax, [edx]
0x80E81F: push    1
0x80E821: mov     ecx, edi
0x80E823: call    eax
0x80E825: test    ebx, ebx
0x80E827: mov     [ebp+58h], ebx
0x80E82A: jz      short loc_80E836
0x80E82C: add     ebx, 4
0x80E82F: push    ebx; lpAddend
0x80E830: call    dword ptr ds:0A28078h
0x80E836: mov     ebx, [esi+8Ch]
0x80E83C: mov     esi, [esi+94h]
0x80E842: mov     edi, [esi+44h]
0x80E845: cmp     edi, ebx
0x80E847: jz      short loc_80E87A
0x80E849: test    edi, edi
0x80E84B: jz      short loc_80E869
0x80E84D: lea     ecx, [edi+4]
0x80E850: push    ecx; lpAddend
0x80E851: call    dword ptr ds:0A2807Ch
0x80E857: test    eax, eax
0x80E859: jnz     short loc_80E869
0x80E85B: test    edi, edi
0x80E85D: jz      short loc_80E869
0x80E85F: mov     edx, [edi]
0x80E861: mov     eax, [edx]
0x80E863: push    1
0x80E865: mov     ecx, edi
0x80E867: call    eax
0x80E869: test    ebx, ebx
0x80E86B: mov     [esi+44h], ebx
0x80E86E: jz      short loc_80E87A
0x80E870: add     ebx, 4
0x80E873: push    ebx; lpAddend
0x80E874: call    dword ptr ds:0A28078h
0x80E87A: mov     eax, [esp+28h+a3]
0x80E87E: test    eax, eax
0x80E880: mov     [esp+28h+var_4], 0FFFFFFFFh
0x80E888: jz      short loc_80E89D
0x80E88A: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x80E88E: mov     ecx, eax
0x80E890: add     eax, 5Ch ; '\'
0x80E893: cmp     dword ptr [eax], 0
0x80E896: jnz     short loc_80E89D
0x80E898: call    sub_772560
0x80E89D: mov     ecx, [esp+28h+var_C]
0x80E8A1: mov     large fs:0, ecx
0x80E8A8: pop     ecx
0x80E8A9: pop     edi
0x80E8AA: pop     esi
0x80E8AB: pop     ebp
0x80E8AC: pop     ebx
0x80E8AD: add     esp, 14h
0x80E8B0: retn
