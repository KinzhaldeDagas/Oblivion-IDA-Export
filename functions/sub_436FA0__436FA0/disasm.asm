0x436FA0: mov     eax, dword ptr [esp+a2]
0x436FA4: push    esi
0x436FA5: push    eax; a2
0x436FA6: mov     esi, ecx
0x436FA8: call    sub_436500
0x436FAD: xor     eax, eax
0x436FAF: mov     [esi+18h], eax
0x436FB2: mov     [esi+1Ch], eax
0x436FB5: mov     [esi+20h], eax
0x436FB8: mov     [esi+24h], eax
0x436FBB: mov     dword ptr [esi], offset ??_7QueuedFileEntry@@6B@; const QueuedFileEntry::`vftable'
0x436FC1: mov     eax, esi
0x436FC3: pop     esi
0x436FC4: retn    4
