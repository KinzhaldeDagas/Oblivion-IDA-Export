0x722B30: push    0FFFFFFFFh
0x722B32: push    offset SEH_7E5B50
0x722B37: mov     eax, large fs:0
0x722B3D: push    eax
0x722B3E: push    ebx
0x722B3F: push    ebp
0x722B40: push    esi
0x722B41: push    edi
0x722B42: mov     eax, ds:0B30AACh
0x722B47: xor     eax, esp
0x722B49: push    eax
0x722B4A: lea     eax, [esp+20h+var_C]
0x722B4E: mov     large fs:0, eax
0x722B54: mov     edi, ecx
0x722B56: mov     eax, [esp+20h+arg_0]
0x722B5A: push    1
0x722B5C: push    eax
0x722B5D: lea     ecx, [esp+28h+arg_0]
0x722B61: push    ecx
0x722B62: mov     ecx, edi
0x722B64: call    sub_7077D0
0x722B69: mov     ebx, eax
0x722B6B: mov     esi, [edi+0ACh]
0x722B71: cmp     esi, [ebx]
0x722B73: mov     ebp, ds:0A2807Ch
0x722B79: mov     [esp+20h+var_4], 0
0x722B81: jz      short loc_722BB5
0x722B83: test    esi, esi
0x722B85: jz      short loc_722B9F
0x722B87: lea     edx, [esi+4]
0x722B8A: push    edx; lpAddend
0x722B8B: call    ebp ; InterlockedDecrement
0x722B8D: test    eax, eax
0x722B8F: jnz     short loc_722B9F
0x722B91: test    esi, esi
0x722B93: jz      short loc_722B9F
0x722B95: mov     eax, [esi]
0x722B97: mov     edx, [eax]
0x722B99: push    1
0x722B9B: mov     ecx, esi
0x722B9D: call    edx
0x722B9F: mov     eax, [ebx]
0x722BA1: test    eax, eax
0x722BA3: mov     [edi+0ACh], eax
0x722BA9: jz      short loc_722BB5
0x722BAB: add     eax, 4
0x722BAE: push    eax; lpAddend
0x722BAF: call    dword ptr ds:0A28078h
0x722BB5: mov     esi, [esp+20h+arg_0]
0x722BB9: test    esi, esi
0x722BBB: mov     [esp+20h+var_4], 0FFFFFFFFh
0x722BC3: jz      short loc_722BDD
0x722BC5: lea     eax, [esi+4]
0x722BC8: push    eax; lpAddend
0x722BC9: call    ebp ; InterlockedDecrement
0x722BCB: test    eax, eax
0x722BCD: jnz     short loc_722BDD
0x722BCF: test    esi, esi
0x722BD1: jz      short loc_722BDD
0x722BD3: mov     edx, [esi]
0x722BD5: mov     eax, [edx]
0x722BD7: push    1
0x722BD9: mov     ecx, esi
0x722BDB: call    eax
0x722BDD: mov     ecx, dword ptr [esp+20h+var_C]
0x722BE1: mov     large fs:0, ecx
0x722BE8: pop     ecx
0x722BE9: pop     edi
0x722BEA: pop     esi
0x722BEB: pop     ebp
0x722BEC: pop     ebx
0x722BED: add     esp, 0Ch
0x722BF0: retn    4
