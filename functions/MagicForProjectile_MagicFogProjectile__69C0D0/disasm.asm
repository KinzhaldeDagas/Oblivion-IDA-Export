0x69C0D0: push    esi
0x69C0D1: mov     esi, ecx
0x69C0D3: call    MagicProjectile__MagicProjectile
0x69C0D8: xor     eax, eax
0x69C0DA: mov     [esi+90h], eax
0x69C0E0: mov     [esi+98h], eax
0x69C0E6: mov     [esi+94h], eax
0x69C0EC: mov     dword ptr [esi], offset ??_7MagicFogProjectile@@6BMagicFogProjectile@@@; const MagicFogProjectile::`vftable'{for `MagicFogProjectile'}
0x69C0F2: mov     dword ptr [esi+18h], offset ??_7MagicFogProjectile@@6BTESChildCell@@@; const MagicFogProjectile::`vftable'{for `TESChildCell'}
0x69C0F9: mov     eax, esi
0x69C0FB: pop     esi
0x69C0FC: retn
