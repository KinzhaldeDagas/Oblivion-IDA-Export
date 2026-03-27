0x6CBD40: sub     esp, 20h
0x6CBD43: push    esi
0x6CBD44: mov     esi, [esp+24h+arg_0]
0x6CBD48: push    esi
0x6CBD49: call    sub_6CD720
0x6CBD4E: cmp     dword ptr [esi+0D8h], 0A01006Eh
0x6CBD58: jnb     short loc_6CBDB1
0x6CBD5A: mov     eax, ds:0B24260h
0x6CBD5F: fld     dword ptr ds:0A79E10h
0x6CBD65: mov     ecx, ds:0B24264h
0x6CBD6B: fstp    [esp+24h+var_4]
0x6CBD6F: mov     edx, ds:0B24268h
0x6CBD75: mov     [esp+24h+var_20], eax
0x6CBD79: mov     eax, ds:0B3CBA4h
0x6CBD7E: mov     [esp+24h+var_1C], ecx
0x6CBD82: mov     ecx, ds:0B3CBA8h
0x6CBD88: mov     [esp+24h+var_18], edx
0x6CBD8C: mov     edx, ds:0B3CBACh
0x6CBD92: mov     [esp+24h+var_14], eax
0x6CBD96: mov     eax, ds:0B3CBB0h
0x6CBD9B: mov     [esp+24h+var_10], ecx
0x6CBD9F: push    esi
0x6CBDA0: lea     ecx, [esp+28h+var_20]
0x6CBDA4: mov     [esp+28h+var_C], edx
0x6CBDA8: mov     [esp+28h+var_8], eax
0x6CBDAC: call    sub_6CB990
0x6CBDB1: pop     esi
0x6CBDB2: add     esp, 20h
0x6CBDB5: retn    4
