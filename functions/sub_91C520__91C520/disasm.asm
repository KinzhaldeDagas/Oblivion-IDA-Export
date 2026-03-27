0x91C520: push    esi
0x91C521: mov     esi, ecx
0x91C523: push    edi
0x91C524: mov     edi, [esi+34h]
0x91C527: dec     edi
0x91C528: mov     dword ptr [esi], offset off_A9D5E0
0x91C52E: mov     dword ptr [esi+8], offset off_A9D5C8
0x91C535: mov     dword ptr [esi+20h], offset off_A9D5C0
0x91C53C: mov     dword ptr [esi+28h], offset off_A9D5AC
0x91C543: mov     dword ptr [esi+2Ch], offset off_A9D5A0
0x91C54A: js      short loc_91C55B
0x91C54C: lea     esp, [esp+0]
0x91C550: push    edi
0x91C551: mov     ecx, esi
0x91C553: call    sub_91C470
0x91C558: dec     edi
0x91C559: jns     short loc_91C550
0x91C55B: mov     eax, [esi+38h]
0x91C55E: test    eax, eax
0x91C560: js      short loc_91C596
0x91C562: mov     ecx, ds:0BA9DE4h
0x91C568: mov     edx, large fs:2Ch
0x91C56F: mov     ecx, [edx+ecx*4]
0x91C572: mov     ecx, [ecx+19Ch]
0x91C578: test    ecx, ecx
0x91C57A: jnz     short loc_91C582
0x91C57C: mov     ecx, ds:0BA7D9Ch
0x91C582: mov     edx, [esi+30h]
0x91C585: and     eax, 3FFFFFFFh
0x91C58A: push    14h
0x91C58C: shl     eax, 2
0x91C58F: push    eax
0x91C590: push    edx
0x91C591: call    sub_8A75D0
0x91C596: mov     dword ptr [esi+2Ch], offset off_A9D2B4
0x91C59D: pop     edi
0x91C59E: mov     dword ptr [esi+28h], offset ??_7hkEntityListener@@6B@; const hkEntityListener::`vftable'
0x91C5A5: mov     ecx, esi
0x91C5A7: pop     esi
0x91C5A8: jmp     sub_949180
