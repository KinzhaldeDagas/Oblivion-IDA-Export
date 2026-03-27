0x709E60: push    ebx
0x709E61: push    esi
0x709E62: mov     esi, ecx
0x709E64: xor     ebx, ebx
0x709E66: push    offset NiRefObject_objcount; lpAddend
0x709E6B: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x709E71: mov     [esi+4], ebx
0x709E74: call    dword ptr ds:0A28078h
0x709E7A: mov     [esi+8], bl
0x709E7D: mov     [esi+0Ch], ebx
0x709E80: mov     [esi+10h], ebx
0x709E83: mov     [esi+14h], ebx
0x709E86: mov     [esi+18h], ebx
0x709E89: mov     [esi+1Ch], ebx
0x709E8C: mov     dword ptr [esi], offset ??_7NiDynamicEffectState@@6B@; const NiDynamicEffectState::`vftable'
0x709E92: mov     eax, esi
0x709E94: pop     esi
0x709E95: pop     ebx
0x709E96: retn
