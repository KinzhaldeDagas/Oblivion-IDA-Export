0x4D8810: push    ecx
0x4D8811: push    esi
0x4D8812: mov     esi, ecx
0x4D8814: call    TESObjectREFR_GetContainer
0x4D8819: test    eax, eax
0x4D881B: mov     cl, 1
0x4D881D: mov     [esp+8+var_1], cl
0x4D8821: jz      short loc_4D8877
0x4D8823: push    ebx
0x4D8824: push    edi
0x4D8825: push    eax
0x4D8826: push    esi; a1
0x4D8827: call    ContainerExtraData_GetContainerExtraDataForRef
0x4D882C: mov     ecx, ds:0B33B00h
0x4D8832: add     esp, 8
0x4D8835: mov     edi, eax
0x4D8837: call    sub_45A500
0x4D883C: test    al, al
0x4D883E: mov     ebx, [esp+10h+arg_8]
0x4D8842: jnz     short loc_4D8850
0x4D8844: push    8
0x4D8846: push    ebx
0x4D8847: push    esi
0x4D8848: call    Script_AddEventToExtraScript
0x4D884D: add     esp, 0Ch
0x4D8850: mov     eax, [esp+10h+arg_4]
0x4D8854: mov     ecx, [esp+10h+arg_0]
0x4D8858: push    0
0x4D885A: push    0
0x4D885C: push    ebx
0x4D885D: push    esi
0x4D885E: push    eax
0x4D885F: push    ecx
0x4D8860: lea     edx, [esp+28h+var_1]
0x4D8864: push    edx
0x4D8865: mov     ecx, edi
0x4D8867: call    ContainerExtraData_UnequipItem
0x4D886C: mov     al, [esp+10h+var_1]
0x4D8870: pop     edi
0x4D8871: pop     ebx
0x4D8872: pop     esi
0x4D8873: pop     ecx
0x4D8874: retn    0Ch
0x4D8877: mov     al, cl
0x4D8879: pop     esi
0x4D887A: pop     ecx
0x4D887B: retn    0Ch
