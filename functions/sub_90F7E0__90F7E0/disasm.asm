0x90F7E0: sub     esp, 2Ch
0x90F7E3: push    ebx
0x90F7E4: mov     ebx, [esp+30h+arg_0]
0x90F7E8: cmp     dword ptr [ebx], 0
0x90F7EB: push    ebp
0x90F7EC: mov     ebp, ecx
0x90F7EE: jz      loc_90F8B4
0x90F7F4: push    ebx
0x90F7F5: call    sub_88D780
0x90F7FA: test    eax, eax
0x90F7FC: jnz     loc_90F8B4
0x90F802: mov     eax, [ebp+128h]
0x90F808: mov     ecx, [ebp+124h]
0x90F80E: push    esi
0x90F80F: lea     esi, [ebp+120h]
0x90F815: and     eax, 3FFFFFFFh
0x90F81A: cmp     ecx, eax
0x90F81C: push    edi
0x90F81D: jnz     short loc_90F82A
0x90F81F: push    8
0x90F821: push    esi
0x90F822: call    sub_8A6EE0
0x90F827: add     esp, 8
0x90F82A: mov     eax, [esi+4]
0x90F82D: mov     ecx, [esi]
0x90F82F: lea     edx, [ecx+eax*8]
0x90F832: inc     eax
0x90F833: mov     [esi+4], eax
0x90F836: mov     eax, [ebp+8]
0x90F839: mov     esi, [eax+74h]
0x90F83C: mov     ecx, 0Bh
0x90F841: lea     edi, [esp+3Ch+var_2C]
0x90F845: rep movsd
0x90F847: mov     eax, [esp+3Ch+var_2C]
0x90F84B: lea     ecx, [eax+1A50h]
0x90F851: mov     [esp+3Ch+var_4], ecx
0x90F855: mov     ecx, [ebp+14h]
0x90F858: lea     edi, [ebp+14h]
0x90F85B: mov     [esp+3Ch+arg_0], edx
0x90F85F: mov     [esp+3Ch+var_20], 0
0x90F864: mov     edx, [ecx]
0x90F866: mov     ebp, eax
0x90F868: call    dword ptr [edx+8]
0x90F86B: mov     ecx, [ebx]
0x90F86D: mov     esi, eax
0x90F86F: mov     eax, [ecx]
0x90F871: call    dword ptr [eax+8]
0x90F874: mov     cl, [esp+3Ch+var_20]
0x90F878: test    cl, cl
0x90F87A: lea     ecx, [ebp+590h]
0x90F880: jnz     short loc_90F888
0x90F882: lea     ecx, [ebp+190h]
0x90F888: shl     esi, 5
0x90F88B: add     esi, ecx
0x90F88D: movzx   eax, byte ptr [esi+eax]
0x90F891: push    0
0x90F893: lea     edx, [esp+40h+var_2C]
0x90F897: push    edx
0x90F898: lea     ecx, [eax+eax*4]
0x90F89B: mov     ebp, [ebp+ecx*4+990h]
0x90F8A2: push    ebx
0x90F8A3: push    edi
0x90F8A4: call    ebp
0x90F8A6: mov     ecx, [esp+4Ch+arg_0]
0x90F8AA: add     esp, 10h
0x90F8AD: pop     edi
0x90F8AE: mov     [ecx], eax
0x90F8B0: mov     [ecx+4], ebx
0x90F8B3: pop     esi
0x90F8B4: pop     ebp
0x90F8B5: pop     ebx
0x90F8B6: add     esp, 2Ch
0x90F8B9: retn    4
