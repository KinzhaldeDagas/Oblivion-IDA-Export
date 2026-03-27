0x5E4420: push    esi
0x5E4421: add     ecx, 44h ; 'D'; this
0x5E4424: xor     esi, esi
0x5E4426: call    ExtraDataList_GetContainerChanges
0x5E442B: test    eax, eax
0x5E442D: jz      short loc_5E4437
0x5E442F: mov     ecx, eax
0x5E4431: pop     esi
0x5E4432: jmp     sub_4875C0
0x5E4437: mov     eax, esi
0x5E4439: pop     esi
0x5E443A: retn
