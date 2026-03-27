0x88D340: push    esi
0x88D341: mov     esi, ecx
0x88D343: mov     ecx, [esi+8]
0x88D346: mov     dword ptr [esi], offset off_A96248
0x88D34C: cmp     word ptr [ecx+4], 0
0x88D351: jz      short loc_88D364
0x88D353: dec     word ptr [ecx+6]
0x88D357: cmp     word ptr [ecx+6], 0
0x88D35C: jnz     short loc_88D364
0x88D35E: mov     eax, [ecx]
0x88D360: push    1
0x88D362: call    dword ptr [eax]
0x88D364: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x88D36A: pop     esi
0x88D36B: retn
