0x7AF800: mov     eax, [ecx]; Generic vtable wrapper: calls virtual +0x94 with the inherited pass/list slot at this+0x25. Present in frond vtable but shared.
0x7AF802: mov     edx, [ecx+94h]
0x7AF808: mov     eax, [eax+94h]
0x7AF80E: push    edx
0x7AF80F: call    eax
0x7AF811: retn
