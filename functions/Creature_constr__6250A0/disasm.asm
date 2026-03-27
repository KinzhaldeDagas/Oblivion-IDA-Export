0x6250A0: push    esi
0x6250A1: mov     esi, ecx
0x6250A3: call    Actor_constr
0x6250A8: mov     dword ptr [esi], offset ??_7Creature@@6BCreature@@@; const Creature::`vftable'{for `Creature'}
0x6250AE: mov     dword ptr [esi+18h], offset ??_7Creature@@6BTESChildCell@@@; const Creature::`vftable'{for `TESChildCell'}
0x6250B5: mov     dword ptr [esi+5Ch], offset ??_7Creature@@6BMagicCaster@@@; const Creature::`vftable'{for `MagicCaster'}
0x6250BC: mov     dword ptr [esi+68h], offset ??_7Creature@@6BMagicTarget@@@; const Creature::`vftable'{for `MagicTarget'}
0x6250C3: mov     byte ptr [esi+4], 33h ; '3'
0x6250C7: mov     byte ptr [esi+104h], 0
0x6250CE: mov     eax, esi
0x6250D0: pop     esi
0x6250D1: retn
