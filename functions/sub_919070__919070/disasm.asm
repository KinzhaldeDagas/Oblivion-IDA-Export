0x919070: push    ebp
0x919071: mov     ebp, esp
0x919073: and     esp, 0FFFFFFF0h
0x919076: sub     esp, 2Ch
0x919079: movzx   eax, [ebp+arg_0]
0x91907D: sub     eax, 0B0h ; '°'
0x919082: push    esi
0x919083: mov     esi, ecx
0x919085: jz      short loc_9190D7
0x919087: dec     eax
0x919088: jz      short loc_9190A0
0x91908A: dec     eax
0x91908B: jnz     loc_919123
0x919091: lea     ecx, [esi-8]
0x919094: call    sub_918F80
0x919099: pop     esi
0x91909A: mov     esp, ebp
0x91909C: pop     ebp
0x91909D: retn    4
0x9190A0: mov     ecx, [esi+8]
0x9190A3: lea     eax, [esp+30h+var_20]
0x9190A7: push    eax
0x9190A8: call    sub_948C80
0x9190AD: lea     ecx, [esp+30h+var_23]
0x9190B1: push    ecx
0x9190B2: mov     ecx, [esi+8]
0x9190B5: call    sub_918060
0x9190BA: cmp     byte ptr [eax], 0
0x9190BD: jz      short loc_919123
0x9190BF: mov     ecx, [esi+24h]
0x9190C2: test    ecx, ecx
0x9190C4: jz      short loc_919123
0x9190C6: lea     edx, [esp+30h+var_20]
0x9190CA: push    edx
0x9190CB: call    sub_8B8A10
0x9190D0: pop     esi
0x9190D1: mov     esp, ebp
0x9190D3: pop     ebp
0x9190D4: retn    4
0x9190D7: mov     ecx, [esi+8]
0x9190DA: lea     eax, [esp+30h+var_10]
0x9190DE: push    eax
0x9190DF: call    sub_948C80
0x9190E4: push    1
0x9190E6: push    8
0x9190E8: lea     ecx, [esp+38h+var_20]
0x9190EC: push    ecx
0x9190ED: mov     ecx, [esi+8]
0x9190F0: call    sub_947910
0x9190F5: mov     ecx, [esi+8]
0x9190F8: lea     edx, [esp+30h+var_22]
0x9190FC: push    edx
0x9190FD: call    sub_918060
0x919102: cmp     byte ptr [eax], 0
0x919105: jz      short loc_919123
0x919107: mov     ecx, [esp+30h+var_1C]
0x91910B: mov     edx, [esp+30h+var_20]
0x91910F: lea     eax, [esp+30h+var_10]
0x919113: push    eax
0x919114: push    ecx
0x919115: push    edx
0x919116: lea     eax, [esp+3Ch+var_21]
0x91911A: push    eax
0x91911B: lea     ecx, [esi-8]
0x91911E: call    sub_918E90
0x919123: pop     esi
0x919124: mov     esp, ebp
0x919126: pop     ebp
0x919127: retn    4
