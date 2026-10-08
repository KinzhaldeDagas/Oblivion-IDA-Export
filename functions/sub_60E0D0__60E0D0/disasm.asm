0x60E0D0: mov     eax, [esp+specialization]; Linker-shared trivial setter: writes one UInt32/pointer-sized value at object+0x40 and returns it. Call-site semantics differ. ClassMenu uses it to store TESClass specialization; BSPlayerDistanceCheckController and HUD UI code use the same folded body for their own +0x40 field.
0x60E0D4: mov     [ecx+40h], eax
0x60E0D7: retn    4
