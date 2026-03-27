0x437970: mov     eax, dword ptr [esp+a2]
0x437974: push    esi
0x437975: push    eax; a2
0x437976: mov     esi, ecx
0x437978: call    sub_436500
0x43797D: mov     ecx, [esp+4+arg_0]
0x437981: xor     eax, eax
0x437983: mov     [esi+18h], eax
0x437986: mov     [esi+1Ch], eax
0x437989: mov     dword ptr [esi], offset ??_7QueuedHead@@6B@; const QueuedHead::`vftable'
0x43798F: mov     [esi+20h], ecx
0x437992: mov     [esi+24h], eax
0x437995: mov     [esi+28h], eax
0x437998: mov     eax, esi
0x43799A: pop     esi
0x43799B: retn    8
