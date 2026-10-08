0x68DEB0: sub     esp, 14h; Verified active-effect list save layout: TESSaveLoadGame_UseSaveGameBlocks controls whether the list emits a BLOK header and reserves/backpatches a block size. The list always reserves and patches a UInt16 effect count. Per-effect records separately use the save version threshold 0x2A to include a UInt16 record-size field.
0x68DEB3: cmp     byte ptr ds:0B05BACh, 0
0x68DEBA: mov     ecx, ds:0B33B00h
0x68DEC0: mov     [esp+14h+var_4], 0
0x68DEC8: mov     eax, [ecx+14h]
0x68DECB: mov     [esp+14h+var_C], 0
0x68DED3: mov     [esp+14h+var_10], eax
0x68DED7: jz      short ActiveEffect_Base_SaveAEList___CheckRecordVersion
0x68DED9: mov     [esp+14h+var_10], eax
