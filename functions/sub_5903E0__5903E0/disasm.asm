0x5903E0: push    esi
0x5903E1: push    1; arg1
0x5903E3: push    0; canCreate
0x5903E5: call    InterfaceManager_GetSingleton
0x5903EA: mov     esi, eax
0x5903EC: mov     ecx, [esi+68h]
0x5903EF: add     esp, 8
0x5903F2: test    ecx, ecx
0x5903F4: jz      short loc_5903FD
0x5903F6: push    0; float
0x5903F8: call    sub_58FBA0
0x5903FD: cmp     byte ptr [esi+0B8h], 0
0x590404: jz      short loc_590419
0x590406: mov     byte ptr [esi+0B8h], 0
0x59040D: mov     ecx, ds:0B35300h
0x590413: pop     esi
0x590414: jmp     sub_4A25F0
0x590419: pop     esi
0x59041A: retn
