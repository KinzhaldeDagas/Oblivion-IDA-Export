0x68DF45: cmp     dword ptr [esi+4], 0
0x68DF49: jnz     short ActiveEffect_Base_SaveAEList___LoopBody
0x68DF4B: cmp     dword ptr [esi], 0
0x68DF4E: jz      short ActiveEffect_Base_SaveAEList___DoneActvEffList; Verified list-save finalization: backpatches the UInt16 active-effect count; when save-game blocks are enabled, a later branch backpatches the BLOK payload size.
