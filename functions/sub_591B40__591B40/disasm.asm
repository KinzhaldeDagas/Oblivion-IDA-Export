0x591B40: push    esi
0x591B41: mov     esi, ecx
0x591B43: mov     ecx, [esi+44h]
0x591B46: mov     eax, [ecx]
0x591B48: mov     edx, [eax+34h]
0x591B4B: call    edx
0x591B4D: cmp     eax, 3ECh
0x591B52: jz      short loc_591B6D
0x591B54: mov     ecx, [esi+44h]
0x591B57: mov     eax, [ecx]
0x591B59: mov     edx, [eax+34h]
0x591B5C: call    edx
0x591B5E: cmp     eax, 3EFh
0x591B63: jz      short loc_591B6D
0x591B65: mov     ecx, esi
0x591B67: pop     esi
0x591B68: jmp     sub_589D60
0x591B6D: pop     esi
0x591B6E: retn
