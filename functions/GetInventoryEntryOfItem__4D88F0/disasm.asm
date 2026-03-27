0x4D88F0: push    esi
0x4D88F1: push    edi
0x4D88F2: mov     esi, ecx
0x4D88F4: xor     edi, edi
0x4D88F6: call    TESObjectREFR_GetContainer
0x4D88FB: test    eax, eax
0x4D88FD: jz      short loc_4D893D
0x4D88FF: cmp     [esp+8+a3], 0
0x4D8904: jz      short loc_4D8922
0x4D8906: mov     eax, ds:0B33A98h
0x4D890B: mov     ecx, [esp+8+a2]
0x4D890F: mov     eax, [eax+0CDCh]
0x4D8915: push    ecx
0x4D8916: mov     ecx, eax
0x4D8918: call    ContainerExtraData_GetEntryForItem
0x4D891D: pop     edi
0x4D891E: pop     esi
0x4D891F: retn    8
0x4D8922: push    eax
0x4D8923: push    esi; a1
0x4D8924: call    ContainerExtraData_GetContainerExtraDataForRef
0x4D8929: mov     ecx, [esp+10h+a2]
0x4D892D: add     esp, 8
0x4D8930: push    ecx
0x4D8931: mov     ecx, eax
0x4D8933: call    ContainerExtraData_GetEntryForItem
0x4D8938: pop     edi
0x4D8939: pop     esi
0x4D893A: retn    8
0x4D893D: mov     eax, edi
0x4D893F: pop     edi
0x4D8940: pop     esi
0x4D8941: retn    8
