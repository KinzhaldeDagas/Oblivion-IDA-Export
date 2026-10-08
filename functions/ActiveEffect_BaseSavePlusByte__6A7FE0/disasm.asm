0x6A7FE0: mov     eax, [esp+arg_0]
0x6A7FE4: push    esi
0x6A7FE5: push    eax
0x6A7FE6: mov     esi, ecx
0x6A7FE8: call    ActiveEffect_Base_SaveEffect; Verified base save payload includes the HitEffectNode chain at ActiveEffect+0x34 for version >=0x2A: writes a count byte, then each hit effect's virtual type ID (+0x54) and per-type payload (+0x78). Earlier versions skip that list and use the older +0x14 payload branch.
0x6A7FED: mov     ecx, ds:0B33B00h; self
0x6A7FF3: push    1; byteCount
0x6A7FF5: add     esi, 38h ; '8'
0x6A7FF8: push    esi; source
0x6A7FF9: call    SaveLoad_SaveData
0x6A7FFE: pop     esi
0x6A7FFF: retn    4
