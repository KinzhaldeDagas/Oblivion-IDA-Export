0x453500: mov     eax, [esp+arg_0]
0x453504: push    esi; ArgList
0x453505: push    1
0x453507: mov     esi, ecx
0x453509: push    eax
0x45350A: mov     ecx, offset FormHeap
0x45350F: call    j_MemoryHeap_Alloc
0x453514: test    eax, eax
0x453516: mov     [esi+14h], eax
0x453519: jnz     short loc_45352B
0x45351B: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x453520: call    sub_404EC0
0x453525: mov     eax, [esi+14h]
0x453528: add     esp, 4
0x45352B: pop     esi
0x45352C: retn    4
