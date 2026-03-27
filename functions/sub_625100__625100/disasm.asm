0x625100: mov     eax, [esp+arg_0]
0x625104: push    esi
0x625105: push    eax
0x625106: mov     esi, ecx
0x625108: call    sub_5E1880
0x62510D: mov     dword ptr [esi], offset ??_7Creature@@6BCreature@@@; const Creature::`vftable'{for `Creature'}
0x625113: mov     dword ptr [esi+18h], offset ??_7Creature@@6BTESChildCell@@@; const Creature::`vftable'{for `TESChildCell'}
0x62511A: mov     dword ptr [esi+5Ch], offset ??_7Creature@@6BMagicCaster@@@; const Creature::`vftable'{for `MagicCaster'}
0x625121: mov     dword ptr [esi+68h], offset ??_7Creature@@6BMagicTarget@@@; const Creature::`vftable'{for `MagicTarget'}
0x625128: mov     byte ptr [esi+4], 33h ; '3'
0x62512C: mov     byte ptr [esi+104h], 0
0x625133: mov     eax, esi
0x625135: pop     esi
0x625136: retn    4
