0x6344A0: mov     eax, [esp+arg_0]
0x6344A4: push    esi
0x6344A5: mov     esi, ecx
0x6344A7: mov     edx, [esi]
0x6344A9: mov     [esi+2D4h], eax
0x6344AF: mov     eax, [edx+4CCh]
0x6344B5: mov     byte ptr [esi+2DFh], 1
0x6344BC: call    eax
0x6344BE: cmp     [esi+2E4h], eax
0x6344C4: jz      short loc_6344DF
0x6344C6: mov     edx, [esi]
0x6344C8: mov     eax, [edx+4CCh]
0x6344CE: mov     ecx, esi
0x6344D0: mov     byte ptr [esi+2E8h], 0
0x6344D7: call    eax
0x6344D9: mov     [esi+2E4h], eax
0x6344DF: pop     esi
0x6344E0: retn    4
