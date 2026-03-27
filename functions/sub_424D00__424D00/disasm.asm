0x424D00: push    23h ; '#'; a2
0x424D02: call    BaseExtraList_GetExtraData
0x424D07: test    eax, eax
0x424D09: jz      short locret_424D23
0x424D0B: mov     ecx, [esp+arg_0]
0x424D0F: push    ecx
0x424D10: mov     ecx, [eax+0Ch]
0x424D13: call    BSSimpleList_Remove
0x424D18: mov     ecx, SaveLoad_CurrentSavegame
0x424D1E: call    sub_45A500
0x424D23: retn    4
