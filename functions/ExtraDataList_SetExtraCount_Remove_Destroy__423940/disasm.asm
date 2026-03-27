0x423940: test    eax, eax
0x423942: jz      short ExtraDataList_SetExtraCount___Done
0x423944: push    1
0x423946: push    eax
0x423947: mov     ecx, edi
0x423949: call    BaseExtraList_RemoveExtraByPtr
