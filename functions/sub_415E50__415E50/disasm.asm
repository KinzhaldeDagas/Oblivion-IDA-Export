0x415E50: push    esi; ArgList
0x415E51: mov     esi, ecx
0x415E53: mov     eax, [esi+0A4h]
0x415E59: test    eax, eax
0x415E5B: jle     short loc_415E72
0x415E5D: push    offset aTryingToQueueU; "Trying to Queue up a Magic Effect Assoc"...
0x415E62: call    PrintError
0x415E67: mov     eax, [esi+0A4h]
0x415E6D: add     esp, 4
0x415E70: pop     esi
0x415E71: retn
0x415E72: add     eax, 0FFFFFFFFh
0x415E75: mov     [esi+0A4h], eax
0x415E7B: pop     esi
0x415E7C: retn
