0x4BF550: push    ecx
0x4BF551: fldz
0x4BF553: push    ebx
0x4BF554: mov     ebx, [esp+8+arg_0]
0x4BF558: fstp    [esp+8+var_4]
0x4BF55C: cmp     bl, 4
0x4BF55F: push    ebp
0x4BF560: mov     ebp, ecx
0x4BF562: jnb     short loc_4BF5B1
0x4BF564: push    edi
0x4BF565: mov     edi, [esp+10h+arg_4]
0x4BF569: cmp     di, 8
0x4BF56D: jnb     short loc_4BF5B0
0x4BF56F: mov     eax, [ebp+24h]
0x4BF572: test    eax, eax
0x4BF574: jz      short loc_4BF5B0
0x4BF576: movzx   ecx, bl
0x4BF579: cmp     dword ptr [eax+ecx*4+30h], 0
0x4BF57E: lea     eax, [eax+ecx*4+30h]
0x4BF582: jz      short loc_4BF5B0
0x4BF584: mov     eax, [eax]
0x4BF586: movzx   edx, di
0x4BF589: cmp     dword ptr [eax+edx*4], 0
0x4BF58D: jz      short loc_4BF5B0
0x4BF58F: push    esi
0x4BF590: xor     esi, esi
0x4BF592: push    edi
0x4BF593: push    esi
0x4BF594: push    ebx
0x4BF595: mov     ecx, ebp
0x4BF597: call    sub_4BF210
0x4BF59C: fadd    [esp+14h+var_4]
0x4BF5A0: add     esi, 1
0x4BF5A3: cmp     esi, 121h
0x4BF5A9: fstp    [esp+14h+var_4]
0x4BF5AD: jl      short loc_4BF592
0x4BF5AF: pop     esi
0x4BF5B0: pop     edi
0x4BF5B1: fld     [esp+0Ch+var_4]
0x4BF5B5: pop     ebp
0x4BF5B6: pop     ebx
0x4BF5B7: pop     ecx
0x4BF5B8: retn    8
