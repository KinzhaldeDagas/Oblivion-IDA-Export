0x6C4260: mov     eax, [esp+arg_0]
0x6C4264: push    ebx
0x6C4265: push    esi
0x6C4266: push    edi
0x6C4267: push    eax
0x6C4268: mov     esi, ecx
0x6C426A: call    nullsub_returnvVoid_1arg
0x6C426F: mov     ebx, [esi+30h]
0x6C4272: xor     edi, edi
0x6C4274: cmp     [esi+46h], di
0x6C4278: jbe     short loc_6C429B
0x6C427A: lea     ebx, [ebx+0]
0x6C4280: mov     ecx, [esi+40h]
0x6C4283: mov     ecx, [ecx+edi*4]
0x6C4286: test    ecx, ecx
0x6C4288: jz      short loc_6C4290
0x6C428A: push    ebx
0x6C428B: call    sub_6C9590
0x6C4290: movzx   edx, word ptr [esi+46h]
0x6C4294: add     edi, 1
0x6C4297: cmp     edi, edx
0x6C4299: jb      short loc_6C4280
0x6C429B: pop     edi
0x6C429C: pop     esi
0x6C429D: pop     ebx
0x6C429E: retn    4
