0x75A9E0: push    esi
0x75A9E1: push    20h ; ' '; Size
0x75A9E3: call    FormHeapAlloc
0x75A9E8: mov     esi, eax
0x75A9EA: add     esp, 4
0x75A9ED: test    esi, esi
0x75A9EF: jz      short loc_75AA15
0x75A9F1: mov     ecx, esi
0x75A9F3: call    sub_752BF0
0x75A9F8: mov     dword ptr [esi], offset ??_7NiPSysBoundUpdateModifier@@6B@; const NiPSysBoundUpdateModifier::`vftable'
0x75A9FE: mov     word ptr [esi+18h], 0
0x75AA04: mov     word ptr [esi+1Ah], 0
0x75AA0A: mov     dword ptr [esi+1Ch], 0
0x75AA11: mov     eax, esi
0x75AA13: pop     esi
0x75AA14: retn
0x75AA15: xor     eax, eax
0x75AA17: pop     esi
0x75AA18: retn
