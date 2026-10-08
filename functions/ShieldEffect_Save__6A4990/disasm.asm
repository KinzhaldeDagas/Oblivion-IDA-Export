0x6A4990: mov     eax, [esp+arg_0]
0x6A4994: push    esi
0x6A4995: push    eax
0x6A4996: mov     esi, ecx
0x6A4998: call    ActiveEffect_Base_SaveEffect; Verified base save payload includes the HitEffectNode chain at ActiveEffect+0x34 for version >=0x2A: writes a count byte, then each hit effect's virtual type ID (+0x54) and per-type payload (+0x78). Earlier versions skip that list and use the older +0x14 payload branch.
0x6A499D: mov     ecx, ds:0B33B00h; self
0x6A49A3: cmp     byte ptr [ecx+7Ch], 6Eh ; 'n'
0x6A49A7: jb      short loc_6A49B4
0x6A49A9: push    4; byteCount
0x6A49AB: add     esi, 3Ch ; '<'
0x6A49AE: push    esi; source
0x6A49AF: call    SaveLoad_SaveData
0x6A49B4: pop     esi
0x6A49B5: retn    4
