0x447DB0: push    esi
0x447DB1: lea     esi, [ecx+8C8h]
0x447DB7: test    esi, esi
0x447DB9: jz      short loc_447DE3
0x447DBB: push    ebx
0x447DBC: mov     ebx, [esp+8+arg_0]
0x447DC0: push    edi
0x447DC1: mov     edi, [esi]
0x447DC3: test    edi, edi
0x447DC5: jz      short loc_447DE1
0x447DC7: mov     ecx, edi
0x447DC9: call    TESFile_GetIsMaster
0x447DCE: test    al, al
0x447DD0: jz      short loc_447DDA
0x447DD2: push    ebx
0x447DD3: mov     ecx, edi
0x447DD5: call    sub_44FBB0
0x447DDA: mov     esi, [esi+4]
0x447DDD: test    esi, esi
0x447DDF: jnz     short loc_447DC1
0x447DE1: pop     edi
0x447DE2: pop     ebx
0x447DE3: pop     esi
0x447DE4: retn    4
