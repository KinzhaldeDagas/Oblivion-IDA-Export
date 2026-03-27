0x71B850: push    esi
0x71B851: mov     esi, [esp+4+arg_0]
0x71B855: push    offset unk_B25D28
0x71B85A: mov     ecx, esi
0x71B85C: call    sub_71AD40
0x71B861: test    al, al
0x71B863: jnz     short loc_71B889
0x71B865: push    offset unk_B25DB8
0x71B86A: mov     ecx, esi
0x71B86C: call    sub_71AD40
0x71B871: test    al, al
0x71B873: jnz     short loc_71B889
0x71B875: push    offset unk_B25E00
0x71B87A: mov     ecx, esi
0x71B87C: call    sub_71AD40
0x71B881: test    al, al
0x71B883: jnz     short loc_71B889
0x71B885: pop     esi
0x71B886: retn    4
0x71B889: mov     al, 1
0x71B88B: pop     esi
0x71B88C: retn    4
