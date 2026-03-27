0x945C10: push    esi
0x945C11: mov     esi, ecx
0x945C13: mov     eax, [esi+20h]
0x945C16: cmp     eax, 0FFFFFFFFh
0x945C19: jz      short loc_945C28
0x945C1B: push    eax; s
0x945C1C: call    closesocket_0
0x945C21: mov     dword ptr [esi+20h], 0FFFFFFFFh
0x945C28: pop     esi
0x945C29: retn
