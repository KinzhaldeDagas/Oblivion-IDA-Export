0x4D8760: push    ebp
0x4D8761: mov     ebp, [esp+4+arg_0]
0x4D8765: push    esi
0x4D8766: push    edi
0x4D8767: xor     edi, edi
0x4D8769: test    ebp, ebp
0x4D876B: mov     esi, ecx
0x4D876D: jnz     short loc_4D8777
0x4D876F: pop     edi
0x4D8770: pop     esi
0x4D8771: xor     eax, eax
0x4D8773: pop     ebp
0x4D8774: retn    28h ; '('
0x4D8777: push    ebx
0x4D8778: call    TESObjectREFR_GetContainer
0x4D877D: mov     ebx, eax
0x4D877F: test    ebx, ebx
0x4D8781: jz      short loc_4D87CE
0x4D8783: mov     edi, [esp+10h+arg_4]
0x4D8787: push    4
0x4D8789: push    edi
0x4D878A: push    esi
0x4D878B: call    Script_AddEventToExtraScript
0x4D8790: push    ebx
0x4D8791: push    esi; a1
0x4D8792: call    ContainerExtraData_GetContainerExtraDataForRef
0x4D8797: mov     ecx, [esp+24h+arg_24]
0x4D879B: mov     edx, [esp+24h+arg_20]
0x4D879F: add     esp, 14h
0x4D87A2: push    ecx
0x4D87A3: mov     ecx, [esp+14h+arg_1C]
0x4D87A7: push    edx
0x4D87A8: mov     edx, [esp+18h+arg_18]
0x4D87AC: push    ecx
0x4D87AD: mov     ecx, [esp+1Ch+arg_14]
0x4D87B1: push    edx
0x4D87B2: mov     edx, [esp+20h+arg_10]
0x4D87B6: push    ecx
0x4D87B7: mov     ecx, [esp+24h+arg_8]
0x4D87BB: push    edx
0x4D87BC: mov     edx, [esp+28h+arg_C]
0x4D87C0: push    edi
0x4D87C1: push    ecx
0x4D87C2: push    edx
0x4D87C3: push    ebp
0x4D87C4: push    esi
0x4D87C5: mov     ecx, eax
0x4D87C7: call    ContainerExtraData_RemoveForm
0x4D87CC: mov     edi, eax
0x4D87CE: pop     ebx
0x4D87CF: mov     eax, edi
0x4D87D1: pop     edi
0x4D87D2: pop     esi
0x4D87D3: pop     ebp
0x4D87D4: retn    28h ; '('
