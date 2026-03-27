0x5F44EF: push    ebp
0x5F44F0: lea     ebp, [ebx-5Ch]
0x5F44F3: cmp     ebp, ds:0B333C4h
0x5F44F9: mov     [esp+4+arg_18], 1
0x5F44FE: mov     [esp+4+arg_B], 1
0x5F4503: mov     [esp+4+arg_9], 0
0x5F4508: mov     [esp+4+arg_A], 0
0x5F450D: jnz     short Actor_MagicCaster_IsMagicItemUseable___CheckSilenced
0x5F450F: call    GetGodMode
0x5F4514: test    al, al
0x5F4516: jnz     Actor_MagicCaster_IsMagicItemUseable___CheckImmuneToSilence
