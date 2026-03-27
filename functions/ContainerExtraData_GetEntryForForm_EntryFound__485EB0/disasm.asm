0x485EB0: test    eax, eax
0x485EB2: jz      short ContainerExtraData_GetEntryForForm___Return_0
0x485EB4: push    ebx
0x485EB5: mov     ebx, [eax]
0x485EB7: test    ebx, ebx
0x485EB9: push    ebp
0x485EBA: jz      short ContainerExtraData_GetEntryForForm___Return_
0x485EBC: mov     ebp, [esp+8+arg_C]
0x485EC0: test    ebp, ebp
0x485EC2: jz      short ContainerExtraData_GetEntryForForm___Return_
0x485EC4: mov     esi, [ebx]
0x485EC6: test    esi, esi
0x485EC8: push    edi
0x485EC9: jz      short ContainerExtraData_GetEntryForForm___Return_0_
0x485ECB: jmp     short ContainerExtraData_GetEntryForForm___ExtraDataLoop
