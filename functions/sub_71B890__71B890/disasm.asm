0x71B890: push    esi
0x71B891: mov     esi, [esp+4+arg_0]
0x71B895: push    offset unk_B25CE0
0x71B89A: mov     ecx, esi
0x71B89C: call    sub_71AD40
0x71B8A1: test    al, al
0x71B8A3: jnz     short loc_71B8C9
0x71B8A5: push    offset unk_B25D70
0x71B8AA: mov     ecx, esi
0x71B8AC: call    sub_71AD40
0x71B8B1: test    al, al
0x71B8B3: jnz     short loc_71B8C9
0x71B8B5: push    offset unk_B25E48
0x71B8BA: mov     ecx, esi
0x71B8BC: call    sub_71AD40
0x71B8C1: test    al, al
0x71B8C3: jnz     short loc_71B8C9
0x71B8C5: pop     esi
0x71B8C6: retn    4
0x71B8C9: mov     al, 1
0x71B8CB: pop     esi
0x71B8CC: retn    4
