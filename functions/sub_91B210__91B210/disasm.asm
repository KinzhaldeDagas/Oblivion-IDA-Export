0x91B210: push    esi
0x91B211: mov     esi, ecx
0x91B213: push    edi
0x91B214: mov     edi, [esi+34h]
0x91B217: dec     edi
0x91B218: mov     dword ptr [esi], offset off_A9D438
0x91B21E: mov     dword ptr [esi+8], offset off_A9D420
0x91B225: mov     dword ptr [esi+20h], offset off_A9D418
0x91B22C: mov     dword ptr [esi+28h], offset off_A9D404
0x91B233: mov     dword ptr [esi+2Ch], offset off_A9D3F8
0x91B23A: js      short loc_91B24B
0x91B23C: lea     esp, [esp+0]
0x91B240: push    edi
0x91B241: mov     ecx, esi
0x91B243: call    sub_91B160
0x91B248: dec     edi
0x91B249: jns     short loc_91B240
0x91B24B: mov     eax, [esi+38h]
0x91B24E: test    eax, eax
0x91B250: js      short loc_91B286
0x91B252: mov     ecx, ds:0BA9DE4h
0x91B258: mov     edx, large fs:2Ch
0x91B25F: mov     ecx, [edx+ecx*4]
0x91B262: mov     ecx, [ecx+19Ch]
0x91B268: test    ecx, ecx
0x91B26A: jnz     short loc_91B272
0x91B26C: mov     ecx, ds:0BA7D9Ch
0x91B272: mov     edx, [esi+30h]
0x91B275: and     eax, 3FFFFFFFh
0x91B27A: push    14h
0x91B27C: shl     eax, 2
0x91B27F: push    eax
0x91B280: push    edx
0x91B281: call    sub_8A75D0
0x91B286: mov     dword ptr [esi+2Ch], offset off_A9D2B4
0x91B28D: pop     edi
0x91B28E: mov     dword ptr [esi+28h], offset ??_7hkEntityListener@@6B@; const hkEntityListener::`vftable'
0x91B295: mov     ecx, esi
0x91B297: pop     esi
0x91B298: jmp     sub_949180
