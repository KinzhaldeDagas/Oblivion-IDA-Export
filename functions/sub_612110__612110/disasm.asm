0x612110: mov     eax, [esp+arg_0]
0x612114: push    esi
0x612115: push    eax
0x612116: mov     esi, ecx
0x612118: call    sub_5F85E0
0x61211D: mov     ecx, ds:0B33B00h
0x612123: mov     eax, [ecx+44h]
0x612126: cmp     eax, 1FFFF000h
0x61212B: jz      short loc_612134
0x61212D: cmp     eax, 7FFFF000h
0x612132: jnz     short loc_612140
0x612134: fld     dword ptr ds:0A30634h
0x61213A: fstp    dword ptr [esi+108h]
0x612140: pop     esi
0x612141: retn    4
