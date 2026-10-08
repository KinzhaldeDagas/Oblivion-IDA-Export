0x68DF39: mov     esi, [esp+arg_20]
0x68DF3D: test    esi, esi
0x68DF3F: jz      short ActiveEffect_Base_SaveAEList___DoneActvEffList; Verified list-save finalization: backpatches the UInt16 active-effect count; when save-game blocks are enabled, a later branch backpatches the BLOK payload size.
0x68DF41: mov     edi, [esp+arg_24]
