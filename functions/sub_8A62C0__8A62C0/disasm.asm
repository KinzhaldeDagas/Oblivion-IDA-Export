0x8A62C0: push    esi
0x8A62C1: mov     esi, [esp+4+arg_0]
0x8A62C5: test    esi, esi
0x8A62C7: push    edi
0x8A62C8: mov     edi, ecx
0x8A62CA: jz      short loc_8A62D7
0x8A62CC: cmp     word ptr [esi+4], 0
0x8A62D1: jz      short loc_8A62D7
0x8A62D3: inc     word ptr [esi+6]
0x8A62D7: mov     ecx, [edi+64h]
0x8A62DA: test    ecx, ecx
0x8A62DC: jz      short loc_8A62F6
0x8A62DE: cmp     word ptr [ecx+4], 0
0x8A62E3: jz      short loc_8A62F6
0x8A62E5: dec     word ptr [ecx+6]
0x8A62E9: cmp     word ptr [ecx+6], 0
0x8A62EE: jnz     short loc_8A62F6
0x8A62F0: mov     eax, [ecx]
0x8A62F2: push    1
0x8A62F4: call    dword ptr [eax]
0x8A62F6: mov     [edi+64h], esi
0x8A62F9: pop     edi
0x8A62FA: pop     esi
0x8A62FB: retn    4
