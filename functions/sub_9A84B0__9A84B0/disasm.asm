0x9A84B0: push    ebx
0x9A84B1: push    esi
0x9A84B2: mov     esi, ecx
0x9A84B4: xor     ebx, ebx
0x9A84B6: push    offset NiRefObject_objcount; lpAddend
0x9A84BB: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x9A84C1: mov     [esi+4], ebx
0x9A84C4: call    ds:InterlockedIncrement
0x9A84CA: mov     dword ptr [esi], offset ??_7NiD3DShaderConstantMapEntry@@6B@; const NiD3DShaderConstantMapEntry::`vftable'
0x9A84D0: mov     byte ptr [esi+8], 1
0x9A84D4: mov     [esi+0Ch], ebx
0x9A84D7: mov     [esi+14h], ebx
0x9A84DA: mov     [esi+18h], ebx
0x9A84DD: mov     [esi+1Ch], ebx
0x9A84E0: mov     [esi+20h], ebx
0x9A84E3: mov     [esi+24h], ebx
0x9A84E6: mov     [esi+28h], ebx
0x9A84E9: mov     [esi+2Ch], ebx
0x9A84EC: mov     [esi+30h], ebx
0x9A84EF: mov     [esi+34h], bl
0x9A84F2: cmp     byte_B4295B, bl
0x9A84F8: jnz     short loc_9A84FF
0x9A84FA: call    sub_783C70
0x9A84FF: cmp     byte_B4295C, bl
0x9A8505: jnz     short loc_9A850C
0x9A8507: call    sub_783D70
0x9A850C: mov     eax, esi
0x9A850E: pop     esi
0x9A850F: pop     ebx
0x9A8510: retn
