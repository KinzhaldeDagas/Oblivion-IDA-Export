0x48F924: cmp     ebp, esi
0x48F926: jnz     short loc_48F9A5
0x48F928: push    0Ch; Size
0x48F92A: call    FormHeapAlloc
0x48F92F: add     esp, 4
0x48F932: mov     [esp+arg_28], eax
0x48F936: cmp     eax, esi
0x48F938: mov     [esp+arg_1C], esi
0x48F93C: jz      short loc_48F951
0x48F93E: mov     edx, [esp+arg_2C]
0x48F942: mov     ecx, [esp+arg_24]
0x48F946: push    edx
0x48F947: push    ecx
0x48F948: mov     ecx, eax
0x48F94A: call    ContainerEntryExtraData_constr
0x48F94F: mov     esi, eax
0x48F951: cmp     dword ptr [esi], 0
0x48F954: mov     [esp+arg_1C], 0FFFFFFFFh
0x48F95C: jnz     short ContainerExtraData_AddItem___AddNewEntry
0x48F95E: push    8; Size
0x48F960: call    FormHeapAlloc
0x48F965: add     esp, 4
0x48F968: test    eax, eax
0x48F96A: jz      short ContainerExtraData_AddItem___AddNewEntry__
0x48F96C: mov     dword ptr [eax], 0
0x48F972: mov     dword ptr [eax+4], 0
0x48F979: jmp     short ContainerExtraData_AddItem___AddNewEntry_
