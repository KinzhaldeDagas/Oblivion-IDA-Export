0x912710: push    ebp
0x912711: mov     ebp, esp
0x912713: and     esp, 0FFFFFFF0h
0x912716: sub     esp, 34h
0x912719: mov     eax, [ebp+arg_0]
0x91271C: mov     ecx, [ebp+arg_10]
0x91271F: mov     edx, [ecx+28h]
0x912722: push    ebx
0x912723: mov     ebx, [eax]
0x912725: add     ebx, 4
0x912728: mov     [eax], ebx
0x91272A: mov     eax, ebx
0x91272C: mov     eax, [eax]
0x91272E: add     eax, 2
0x912731: push    esi
0x912732: mov     esi, [ebp+arg_C]
0x912735: movaps  xmm1, xmmword ptr [esi]
0x912738: shl     eax, 4
0x91273B: movaps  xmm0, xmmword ptr [eax+esi]
0x91273F: push    edi
0x912740: mov     edi, [ebp+arg_4]
0x912743: mov     eax, [edi]
0x912745: lea     ebx, [eax+10h]
0x912748: movaps  [esp+40h+var_20], xmm0
0x91274D: movaps  xmm0, xmmword ptr [esi+10h]
0x912751: subps   xmm1, xmm0
0x912754: mov     [edi], ebx
0x912756: movaps  [esp+40h+var_30], xmm1
0x91275B: mov     eax, [eax]
0x91275D: mov     [esp+40h+var_10], eax
0x912761: mov     eax, [esi+0B8h]
0x912767: lea     edx, [edx+eax*8]
0x91276A: mov     eax, [ebp+arg_14]
0x91276D: push    eax
0x91276E: push    ecx
0x91276F: lea     ecx, [esp+48h+var_30]
0x912773: push    ecx
0x912774: mov     [esp+4Ch+var_C], edx
0x912778: call    sub_8F15F0
0x91277D: mov     eax, [esi+0B8h]
0x912783: add     esp, 0Ch
0x912786: inc     eax
0x912787: pop     edi
0x912788: mov     [esi+0B8h], eax
0x91278E: pop     esi
0x91278F: pop     ebx
0x912790: mov     esp, ebp
0x912792: pop     ebp
0x912793: retn    18h
