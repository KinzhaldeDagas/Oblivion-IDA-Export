0x4D87E0: push    esi
0x4D87E1: mov     esi, ecx
0x4D87E3: call    TESObjectREFR_GetContainer
0x4D87E8: test    eax, eax
0x4D87EA: jz      short loc_4D87FE
0x4D87EC: push    eax
0x4D87ED: push    esi; a1
0x4D87EE: call    ContainerExtraData_GetContainerExtraDataForRef
0x4D87F3: add     esp, 8
0x4D87F6: pop     esi
0x4D87F7: mov     ecx, eax
0x4D87F9: jmp     loc_491690
0x4D87FE: pop     esi
0x4D87FF: retn    0Ch
