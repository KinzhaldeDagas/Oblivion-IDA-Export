0x65D670: push    ebx
0x65D671: mov     bl, [esp+4+arg_0]
0x65D675: test    bl, bl
0x65D677: push    esi
0x65D678: mov     esi, ecx
0x65D67A: jnz     short loc_65D6BD
0x65D67C: mov     ecx, ds:0B33B00h
0x65D682: call    sub_45A500
0x65D687: test    al, al
0x65D689: jnz     short loc_65D6BD
0x65D68B: mov     eax, ds:0B3BAD0h
0x65D690: push    1
0x65D692: push    eax
0x65D693: push    0
0x65D695: mov     ecx, offset ActorProcessManager_ptr
0x65D69A: call    sub_6765F0
0x65D69F: mov     dword ptr [esi+608h], 0
0x65D6A9: mov     dword ptr ds:0B3BAD4h, 0
0x65D6B3: mov     dword ptr ds:0B3BAD0h, 0
0x65D6BD: mov     [esi+610h], bl
0x65D6C3: pop     esi
0x65D6C4: pop     ebx
0x65D6C5: retn    4
