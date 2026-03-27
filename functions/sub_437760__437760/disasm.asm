0x437760: mov     eax, dword ptr [esp+a2]
0x437764: push    esi
0x437765: push    eax; a2
0x437766: mov     esi, ecx
0x437768: call    sub_436500
0x43776D: mov     ecx, [esp+4+arg_0]
0x437771: mov     edx, [esp+4+arg_4]
0x437775: xor     eax, eax
0x437777: mov     [esi+18h], eax
0x43777A: mov     [esi+1Ch], eax
0x43777D: mov     dword ptr [esi], offset ??_7QueuedMagicItem@@6B@; const QueuedMagicItem::`vftable'
0x437783: mov     [esi+20h], ecx
0x437786: mov     [esi+24h], edx
0x437789: mov     eax, esi
0x43778B: pop     esi
0x43778C: retn    0Ch
