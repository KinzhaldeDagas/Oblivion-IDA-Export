0x4D86D0: push    ebx
0x4D86D1: push    esi
0x4D86D2: mov     esi, ecx
0x4D86D4: xor     bl, bl
0x4D86D6: call    TESObjectREFR_GetContainer
0x4D86DB: test    eax, eax
0x4D86DD: jz      short loc_4D8718
0x4D86DF: push    edi
0x4D86E0: push    eax
0x4D86E1: push    esi; a1
0x4D86E2: call    ContainerExtraData_GetContainerExtraDataForRef
0x4D86E7: mov     ebx, [esp+14h+arg_8]
0x4D86EB: push    1
0x4D86ED: push    ebx
0x4D86EE: push    esi
0x4D86EF: mov     edi, eax
0x4D86F1: call    Script_AddEventToExtraScript
0x4D86F6: mov     eax, [esp+20h+arg_4]
0x4D86FA: mov     ecx, [esp+20h+arg_0]
0x4D86FE: add     esp, 14h
0x4D8701: push    0
0x4D8703: push    0
0x4D8705: push    ebx
0x4D8706: push    esi
0x4D8707: push    eax
0x4D8708: push    ecx
0x4D8709: mov     ecx, edi
0x4D870B: call    ContainerExtraData_EquipItemForActor
0x4D8710: pop     edi
0x4D8711: pop     esi
0x4D8712: mov     al, 1
0x4D8714: pop     ebx
0x4D8715: retn    10h
0x4D8718: pop     esi
0x4D8719: mov     al, bl
0x4D871B: pop     ebx
0x4D871C: retn    10h
