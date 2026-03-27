0x67C230: push    esi
0x67C231: mov     esi, [ecx]
0x67C233: test    esi, esi
0x67C235: jz      short loc_67C250
0x67C237: cmp     dword ptr [esi+4], 0
0x67C23B: jnz     short loc_67C242
0x67C23D: cmp     dword ptr [esi], 0
0x67C240: jz      short loc_67C250
0x67C242: mov     ecx, [esi]
0x67C244: call    sub_67BDD0
0x67C249: mov     esi, [esi+4]
0x67C24C: test    esi, esi
0x67C24E: jnz     short loc_67C237
0x67C250: pop     esi
0x67C251: retn
