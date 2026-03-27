0x48F834: test    dl, dl
0x48F836: jz      ContainerExtraData_AddItem___ProcessFoundEntryExtraDataNode
0x48F83C: mov     ecx, [eax]
0x48F83E: test    ecx, ecx
0x48F840: jz      short ContainerExtraData_AddItem___FindEntryForAddedForm_Next
0x48F842: mov     esi, [esp+arg_24]
0x48F846: cmp     [ecx+8], esi
0x48F849: jnz     short ContainerExtraData_AddItem___FindEntryForAddedForm_Next
0x48F84B: xor     dl, dl
0x48F84D: jmp     short loc_48F852
