0x438020: mov     eax, dword ptr [esp+a2]
0x438024: push    esi
0x438025: push    edi
0x438026: mov     edi, TESDataHandler_g_PlayerRef
0x43802C: push    eax; a2
0x43802D: mov     esi, ecx
0x43802F: call    sub_436500
0x438034: xor     eax, eax
0x438036: mov     [esi+18h], eax
0x438039: mov     [esi+1Ch], eax
0x43803C: mov     [esi+20h], edi
0x43803F: mov     [esi+24h], eax
0x438042: mov     [esi+28h], eax
0x438045: mov     [esi+2Ch], eax
0x438048: mov     [esi+30h], eax
0x43804B: mov     [esi+38h], eax
0x43804E: mov     [esi+3Ch], eax
0x438051: pop     edi
0x438052: mov     dword ptr [esi], offset ??_7QueuedPlayer@@6B@; const QueuedPlayer::`vftable'
0x438058: mov     eax, esi
0x43805A: pop     esi
0x43805B: retn    4
