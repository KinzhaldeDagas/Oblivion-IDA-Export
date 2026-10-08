0x68DF68: mov     cx, [esp+arg_8]; Verified list-save finalization: backpatches the UInt16 active-effect count; when save-game blocks are enabled, a later branch backpatches the BLOK payload size.
0x68DF6D: mov     [ebp+0], cx
0x68DF71: cmp     byte ptr ds:0B05BACh, 0
0x68DF78: jz      short ActiveEffect_Base_SaveAEList___CheckRecordVersion_
