0x42C540: mov     eax, [esp+Size]
0x42C544: push    esi
0x42C545: mov     esi, ecx
0x42C547: mov     ecx, [esp+4+Dst]
0x42C54B: push    eax; Size
0x42C54C: push    ecx; Dst
0x42C54D: mov     ecx, esi
0x42C54F: call    sub_42C4A0
0x42C554: add     [esi+148h], eax
0x42C55A: pop     esi
0x42C55B: retn    8
