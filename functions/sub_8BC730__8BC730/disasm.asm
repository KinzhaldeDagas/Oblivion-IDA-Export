0x8BC730: cmp     word ptr [ecx+4], 0
0x8BC735: jz      short locret_8BC748
0x8BC737: dec     word ptr [ecx+6]
0x8BC73B: cmp     word ptr [ecx+6], 0
0x8BC740: jnz     short locret_8BC748
0x8BC742: mov     eax, [ecx]
0x8BC744: push    1
0x8BC746: call    dword ptr [eax]
0x8BC748: retn
