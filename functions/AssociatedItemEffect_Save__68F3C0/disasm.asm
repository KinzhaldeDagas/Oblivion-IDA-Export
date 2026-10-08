0x68F3C0: mov     eax, [esp+source]
0x68F3C4: push    esi
0x68F3C5: push    eax
0x68F3C6: mov     esi, ecx
0x68F3C8: call    ActiveEffect_Base_SaveEffect; Verified base save payload includes the HitEffectNode chain at ActiveEffect+0x34 for version >=0x2A: writes a count byte, then each hit effect's virtual type ID (+0x54) and per-type payload (+0x78). Earlier versions skip that list and use the older +0x14 payload branch.
0x68F3CD: mov     esi, [esi+38h]
0x68F3D0: test    esi, esi
0x68F3D2: mov     [esp+4+source], 0
0x68F3DA: jz      short loc_68F3E3
0x68F3DC: mov     ecx, [esi+0Ch]
0x68F3DF: mov     [esp+4+source], ecx
0x68F3E3: mov     ecx, ds:0B33B00h; self
0x68F3E9: push    4; byteCount
0x68F3EB: lea     edx, [esp+8+source]
0x68F3EF: push    edx; source
0x68F3F0: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x68F3F5: pop     esi
0x68F3F6: retn    4
