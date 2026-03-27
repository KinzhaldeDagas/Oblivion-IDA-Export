0x8BB560: push    esi
0x8BB561: mov     esi, ecx
0x8BB563: lea     ecx, [esi+8]
0x8BB566: mov     word ptr [esi+6], 1
0x8BB56C: mov     dword ptr [esi], offset off_A982C0
0x8BB572: call    sub_8B0E10
0x8BB577: mov     ecx, [esp+4+arg_4]
0x8BB57B: xor     eax, eax
0x8BB57D: mov     [esi+14h], eax
0x8BB580: mov     [esi+18h], eax
0x8BB583: mov     eax, [esp+4+arg_0]
0x8BB587: mov     dword ptr [esi+1Ch], 80000000h
0x8BB58E: mov     [esi+20h], eax
0x8BB591: mov     [esi+24h], ecx
0x8BB594: mov     eax, esi
0x8BB596: pop     esi
0x8BB597: retn    8
