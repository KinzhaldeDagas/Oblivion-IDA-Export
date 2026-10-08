0x5E1550: add     ecx, 1E0h
0x5E1556: call    hkCharacterContext_GetStateId; hkCharacterContext state id accessor used by controller update; proxy+0x1E0 context stores current state id at +0x0C.
0x5E155B: xor     ecx, ecx
0x5E155D: cmp     eax, 5
0x5E1560: setz    cl
0x5E1563: mov     al, cl
0x5E1565: retn
