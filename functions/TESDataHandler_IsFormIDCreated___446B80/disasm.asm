0x446B80: cmp     [esp+arg_0], 0FF000000h; MEF PERF 2026-09-08: PERF-3 created-ID exclusion is proven by unsigned CMP argument,FF000000h then SBB/ADD: IDs>=FF000000h return true.45E0D0 returns such IDs unchanged before array access; optimization must preserve that path exactly.
0x446B88: sbb     eax, eax
0x446B8A: add     eax, 1
0x446B8D: retn    4
