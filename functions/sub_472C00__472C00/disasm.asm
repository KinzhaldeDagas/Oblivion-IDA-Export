0x472C00: push    esi
0x472C01: mov     esi, ecx
0x472C03: cmp     dword ptr [esi], 1
0x472C06: jz      short loc_472C0E
0x472C08: xor     al, al
0x472C0A: pop     esi
0x472C0B: retn    4
0x472C0E: mov     eax, [esp+4+a2]
0x472C12: push    edi
0x472C13: lea     edi, [esi+10h]
0x472C16: push    eax; a2
0x472C17: mov     ecx, edi; this
0x472C19: call    NiSmartPointer_Set??
0x472C1E: cmp     dword ptr [esi+4], 3
0x472C22: mov     dword ptr [esi], 2
0x472C28: jnz     short loc_472C37
0x472C2A: mov     ecx, [edi]
0x472C2C: push    ecx
0x472C2D: mov     ecx, [esi+28h]
0x472C30: push    0Bh
0x472C32: call    HighPRocess_DoAction?????
0x472C37: pop     edi
0x472C38: mov     al, 1
0x472C3A: pop     esi
0x472C3B: retn    4
