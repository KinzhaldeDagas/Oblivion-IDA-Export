0x4D88C0: push    esi
0x4D88C1: mov     esi, ecx
0x4D88C3: call    TESObjectREFR_GetContainer
0x4D88C8: xor     cl, cl
0x4D88CA: test    eax, eax
0x4D88CC: jz      short loc_4D88E0
0x4D88CE: push    eax
0x4D88CF: push    esi; a1
0x4D88D0: call    ContainerExtraData_GetContainerExtraDataForRef
0x4D88D5: add     esp, 8
0x4D88D8: pop     esi
0x4D88D9: mov     ecx, eax
0x4D88DB: jmp     sub_487820
0x4D88E0: mov     al, cl
0x4D88E2: pop     esi
0x4D88E3: retn    4
