0x4D8950: push    esi
0x4D8951: mov     esi, ecx
0x4D8953: call    TESObjectREFR_GetContainer
0x4D8958: or      ecx, 0FFFFFFFFh
0x4D895B: test    eax, eax
0x4D895D: jz      short loc_4D8991
0x4D895F: cmp     [esp+4+arg_0], 0
0x4D8964: jz      short loc_4D897C
0x4D8966: mov     eax, ds:0B33A98h
0x4D896B: mov     eax, [eax+0CDCh]
0x4D8971: mov     ecx, eax
0x4D8973: call    ContainerExtraData_GetCount
0x4D8978: pop     esi
0x4D8979: retn    4
0x4D897C: push    eax
0x4D897D: push    esi; a1
0x4D897E: call    ContainerExtraData_GetContainerExtraDataForRef
0x4D8983: add     esp, 8
0x4D8986: mov     ecx, eax
0x4D8988: call    ContainerExtraData_GetCount
0x4D898D: pop     esi
0x4D898E: retn    4
0x4D8991: mov     eax, ecx
0x4D8993: pop     esi
0x4D8994: retn    4
