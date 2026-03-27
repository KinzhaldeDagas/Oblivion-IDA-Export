0x9431A0: push    esi
0x9431A1: mov     esi, ecx
0x9431A3: mov     ecx, [esi+8]
0x9431A6: mov     dword ptr [esi], offset off_AA2768
0x9431AC: cmp     word ptr [ecx+4], 0
0x9431B1: jz      short loc_9431C4
0x9431B3: dec     word ptr [ecx+6]
0x9431B7: cmp     word ptr [ecx+6], 0
0x9431BC: jnz     short loc_9431C4
0x9431BE: mov     eax, [ecx]
0x9431C0: push    1
0x9431C2: call    dword ptr [eax]
0x9431C4: mov     ecx, [esi+0Ch]
0x9431C7: cmp     word ptr [ecx+4], 0
0x9431CC: jz      short loc_9431DF
0x9431CE: dec     word ptr [ecx+6]
0x9431D2: cmp     word ptr [ecx+6], 0
0x9431D7: jnz     short loc_9431DF
0x9431D9: mov     edx, [ecx]
0x9431DB: push    1
0x9431DD: call    dword ptr [edx]
0x9431DF: mov     ecx, [esi+10h]
0x9431E2: cmp     word ptr [ecx+4], 0
0x9431E7: jz      short loc_9431FA
0x9431E9: dec     word ptr [ecx+6]
0x9431ED: cmp     word ptr [ecx+6], 0
0x9431F2: jnz     short loc_9431FA
0x9431F4: mov     eax, [ecx]
0x9431F6: push    1
0x9431F8: call    dword ptr [eax]
0x9431FA: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x943200: pop     esi
0x943201: retn
