0x693B50: mov     eax, [esp+arg_0]
0x693B54: push    esi
0x693B55: push    eax
0x693B56: mov     esi, ecx
0x693B58: call    ActiveEffect_Base_SaveEffect; Verified base save payload includes the HitEffectNode chain at ActiveEffect+0x34 for version >=0x2A: writes a count byte, then each hit effect's virtual type ID (+0x54) and per-type payload (+0x78). Earlier versions skip that list and use the older +0x14 payload branch.
0x693B5D: mov     ecx, ds:0B33B00h; self
0x693B63: push    1; byteCount
0x693B65: add     esi, 3Ch ; '<'
0x693B68: push    esi; source
0x693B69: call    SaveLoad_SaveData
0x693B6E: pop     esi
0x693B6F: retn    4
