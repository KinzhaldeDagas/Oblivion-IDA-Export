0x415EB0: push    esi; ArgList
0x415EB1: mov     esi, ecx
0x415EB3: mov     eax, [esi+0A0h]
0x415EB9: test    eax, eax
0x415EBB: jle     short loc_415ED2
0x415EBD: push    offset aTryingToQueueU; "Trying to Queue up a Magic Effect Assoc"...
0x415EC2: call    PrintError
0x415EC7: mov     eax, [esi+0A0h]
0x415ECD: add     esp, 4
0x415ED0: pop     esi
0x415ED1: retn
0x415ED2: add     eax, 0FFFFFFFFh
0x415ED5: mov     [esi+0A0h], eax
0x415EDB: pop     esi
0x415EDC: retn
