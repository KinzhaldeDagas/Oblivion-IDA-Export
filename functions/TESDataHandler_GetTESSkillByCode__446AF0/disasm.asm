0x446AF0: mov     al, [esp+skillIndex]; Return one of exactly 21 inline Oblivion TESSkill records. Reject skillIndex > 20; otherwise return TESDataHandler+0xD8+(skillIndex*0x60).
0x446AF4: cmp     al, 14h
0x446AF6: ja      short loc_446B0B; The native skill registry has exactly 21 valid indices, 0..20.
0x446AF8: movsx   eax, al
0x446AFB: lea     eax, [eax+eax*2]
0x446AFE: shl     eax, 5
0x446B01: lea     eax, [eax+ecx+0D8h]; Each inline TESSkill record is 0x60 bytes; its TESSkill_Data payload is at record+0x2C.
0x446B08: retn    4
0x446B0B: xor     eax, eax
0x446B0D: retn    4
