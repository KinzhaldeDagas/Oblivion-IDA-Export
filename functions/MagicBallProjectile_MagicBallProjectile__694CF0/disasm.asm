0x694CF0: push    esi
0x694CF1: mov     esi, ecx
0x694CF3: call    MagicProjectile__MagicProjectile
0x694CF8: xor     eax, eax
0x694CFA: mov     [esi+88h], eax
0x694D00: mov     [esi+8Ch], eax
0x694D06: mov     dword ptr [esi], offset ??_7MagicBallProjectile@@6BMagicBallProjectile@@@; const MagicBallProjectile::`vftable'{for `MagicBallProjectile'}
0x694D0C: mov     dword ptr [esi+18h], offset ??_7MagicBallProjectile@@6BTESChildCell@@@; const MagicBallProjectile::`vftable'{for `TESChildCell'}
0x694D13: mov     eax, esi
0x694D15: pop     esi
0x694D16: retn
