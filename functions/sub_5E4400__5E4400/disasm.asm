0x5E4400: push    esi
0x5E4401: add     ecx, 44h ; 'D'; this
0x5E4404: xor     esi, esi
0x5E4406: call    ExtraDataList_GetContainerChanges
0x5E440B: test    eax, eax
0x5E440D: jz      short loc_5E4417
0x5E440F: mov     ecx, eax
0x5E4411: pop     esi
0x5E4412: jmp     loc_4873A0
0x5E4417: mov     eax, esi
0x5E4419: pop     esi
0x5E441A: retn
