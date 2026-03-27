0x5E4330: push    esi
0x5E4331: add     ecx, 44h ; 'D'; this
0x5E4334: xor     esi, esi
0x5E4336: call    ExtraDataList_GetContainerChanges
0x5E433B: test    eax, eax
0x5E433D: jz      short loc_5E4351
0x5E433F: mov     ecx, [esp+4+arg_0]
0x5E4343: push    1
0x5E4345: push    ecx
0x5E4346: mov     ecx, eax
0x5E4348: call    ContainerExtraData_GetEquippedInstance
0x5E434D: pop     esi
0x5E434E: retn    4
0x5E4351: mov     eax, esi
0x5E4353: pop     esi
0x5E4354: retn    4
