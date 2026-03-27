0x6E88C0: push    ebx
0x6E88C1: push    esi
0x6E88C2: mov     esi, ecx
0x6E88C4: mov     eax, [esi+0Ch]
0x6E88C7: xor     ebx, ebx
0x6E88C9: cmp     eax, ebx
0x6E88CB: push    edi
0x6E88CC: jz      short loc_6E88DE
0x6E88CE: mov     ecx, [esi+10h]
0x6E88D1: mov     edx, ds:0B3D340h[ecx*4]
0x6E88D8: push    eax
0x6E88D9: call    edx ; dword_B3D340
0x6E88DB: add     esp, 4
0x6E88DE: mov     edi, [esp+0Ch+arg_0]
0x6E88E2: cmp     edi, ebx
0x6E88E4: jz      short loc_6E890A
0x6E88E6: mov     ecx, [esp+0Ch+arg_4]
0x6E88EA: cmp     ecx, ebx
0x6E88EC: jz      short loc_6E890A
0x6E88EE: mov     eax, [esp+0Ch+arg_8]
0x6E88F2: mov     dl, ds:byte_B3D406[eax]
0x6E88F8: mov     [esi+0Ch], edi
0x6E88FB: pop     edi
0x6E88FC: mov     [esi+14h], dl
0x6E88FF: mov     [esi+8], ecx
0x6E8902: mov     [esi+10h], eax
0x6E8905: pop     esi
0x6E8906: pop     ebx
0x6E8907: retn    0Ch
0x6E890A: pop     edi
0x6E890B: mov     [esi+8], ebx
0x6E890E: mov     [esi+0Ch], ebx
0x6E8911: mov     [esi+10h], ebx
0x6E8914: mov     [esi+14h], bl
0x6E8917: pop     esi
0x6E8918: pop     ebx
0x6E8919: retn    0Ch
