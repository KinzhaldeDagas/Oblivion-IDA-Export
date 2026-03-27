0x91B970: push    esi
0x91B971: mov     esi, ecx
0x91B973: push    edi
0x91B974: mov     edi, [esi+34h]
0x91B977: dec     edi
0x91B978: mov     dword ptr [esi], offset off_A9D528
0x91B97E: mov     dword ptr [esi+8], offset off_A9D510
0x91B985: mov     dword ptr [esi+20h], offset off_A9D508
0x91B98C: mov     dword ptr [esi+28h], offset off_A9D4F4
0x91B993: mov     dword ptr [esi+2Ch], offset off_A9D4E8
0x91B99A: js      short loc_91B9AB
0x91B99C: lea     esp, [esp+0]
0x91B9A0: push    edi
0x91B9A1: mov     ecx, esi
0x91B9A3: call    sub_91B8C0
0x91B9A8: dec     edi
0x91B9A9: jns     short loc_91B9A0
0x91B9AB: mov     eax, [esi+38h]
0x91B9AE: test    eax, eax
0x91B9B0: js      short loc_91B9E6
0x91B9B2: mov     ecx, ds:0BA9DE4h
0x91B9B8: mov     edx, large fs:2Ch
0x91B9BF: mov     ecx, [edx+ecx*4]
0x91B9C2: mov     ecx, [ecx+19Ch]
0x91B9C8: test    ecx, ecx
0x91B9CA: jnz     short loc_91B9D2
0x91B9CC: mov     ecx, ds:0BA7D9Ch
0x91B9D2: mov     edx, [esi+30h]
0x91B9D5: and     eax, 3FFFFFFFh
0x91B9DA: push    14h
0x91B9DC: shl     eax, 2
0x91B9DF: push    eax
0x91B9E0: push    edx
0x91B9E1: call    sub_8A75D0
0x91B9E6: mov     dword ptr [esi+2Ch], offset off_A9D2B4
0x91B9ED: pop     edi
0x91B9EE: mov     dword ptr [esi+28h], offset ??_7hkEntityListener@@6B@; const hkEntityListener::`vftable'
0x91B9F5: mov     ecx, esi
0x91B9F7: pop     esi
0x91B9F8: jmp     sub_949180
