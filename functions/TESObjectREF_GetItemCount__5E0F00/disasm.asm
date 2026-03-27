0x5E0F00: push    esi
0x5E0F01: push    edi
0x5E0F02: mov     esi, ecx
0x5E0F04: xor     edi, edi
0x5E0F06: call    TESObjectREFR_GetContainer
0x5E0F0B: test    eax, eax
0x5E0F0D: jz      short loc_5E0F26
0x5E0F0F: push    eax
0x5E0F10: push    esi; a1
0x5E0F11: call    ContainerExtraData_GetContainerExtraDataForRef
0x5E0F16: add     esp, 8
0x5E0F19: test    eax, eax
0x5E0F1B: jz      short loc_5E0F26
0x5E0F1D: pop     edi
0x5E0F1E: pop     esi
0x5E0F1F: mov     ecx, eax; this
0x5E0F21: jmp     ContainerExtraData_GetItemCount
0x5E0F26: mov     eax, edi
0x5E0F28: pop     edi
0x5E0F29: pop     esi
0x5E0F2A: retn    4
