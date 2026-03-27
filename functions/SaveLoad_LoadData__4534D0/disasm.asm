0x4534D0: push    esi
0x4534D1: push    edi
0x4534D2: mov     edi, [esp+8+Size]
0x4534D6: mov     esi, ecx
0x4534D8: mov     eax, [esi+14h]
0x4534DB: mov     ecx, [esp+8+Dst]
0x4534DF: push    edi; Size
0x4534E0: push    eax; Src
0x4534E1: push    ecx; Dst
0x4534E2: call    _memcpy
0x4534E7: add     [esi+14h], edi
0x4534EA: add     esp, 0Ch
0x4534ED: pop     edi
0x4534EE: pop     esi
0x4534EF: retn    8
