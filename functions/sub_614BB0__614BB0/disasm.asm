0x614BB0: mov     eax, [ecx+6Ch]
0x614BB3: cmp     eax, 4
0x614BB6: jz      short locret_614BD3
0x614BB8: cmp     eax, 7
0x614BBB: jz      short locret_614BD3
0x614BBD: cmp     eax, 9
0x614BC0: jz      short locret_614BD3
0x614BC2: cmp     eax, 8
0x614BC5: jz      short locret_614BD3
0x614BC7: cmp     eax, 0Ch
0x614BCA: jz      short locret_614BD3
0x614BCC: mov     byte ptr [ecx+191h], 1
0x614BD3: retn
