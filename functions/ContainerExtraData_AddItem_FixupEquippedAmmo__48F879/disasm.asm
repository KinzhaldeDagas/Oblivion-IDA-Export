0x48F879: mov     ecx, [edi+4]
0x48F87C: mov     eax, [ecx]
0x48F87E: mov     edx, [eax+190h]
0x48F884: call    edx
0x48F886: test    al, al
0x48F888: jz      short ContainerExtraData_AddItem___FixupPersistentRefPointer
0x48F88A: mov     esi, [edi+4]
0x48F88D: test    esi, esi
0x48F88F: jz      short ContainerExtraData_AddItem___FixupPersistentRefPointer
0x48F891: cmp     dword ptr [esi+58h], 0
0x48F895: jz      short ContainerExtraData_AddItem___FixupPersistentRefPointer
0x48F897: mov     ecx, ds:0B33B00h
0x48F89D: call    sub_45A500
0x48F8A2: test    al, al
0x48F8A4: jnz     short ContainerExtraData_AddItem___FixupPersistentRefPointer
0x48F8A6: mov     eax, ds:0B33B00h
0x48F8AB: mov     ecx, [eax+18h]
0x48F8AE: shr     ecx, 0Ch
0x48F8B1: test    cl, 1
0x48F8B4: jnz     short ContainerExtraData_AddItem___FixupPersistentRefPointer
0x48F8B6: mov     ecx, [esi+58h]
0x48F8B9: mov     edx, [ecx]
0x48F8BB: mov     eax, [edx+0F4h]
0x48F8C1: push    0
0x48F8C3: call    eax
0x48F8C5: mov     esi, eax
0x48F8C7: test    esi, esi
0x48F8C9: jz      short ContainerExtraData_AddItem___FixupPersistentRefPointer
0x48F8CB: mov     ecx, [esi+8]
0x48F8CE: cmp     ecx, [esp+arg_24]
0x48F8D2: jnz     short ContainerExtraData_AddItem___FixupPersistentRefPointer
0x48F8D4: mov     eax, [esi]
0x48F8D6: mov     ecx, [eax]
0x48F8D8: mov     edi, ecx
0x48F8DA: call    ExtraDataList_GetExtraCount
0x48F8DF: add     ax, word ptr [esp+arg_2C]
0x48F8E4: mov     ecx, edi
0x48F8E6: push    eax
0x48F8E7: call    ExtraDataList_SetExtraCount
0x48F8EC: mov     eax, [esi+4]
0x48F8EF: mov     edx, [esp+arg_2C]
0x48F8F3: mov     edi, [esp+arg_10]
0x48F8F7: add     eax, edx
0x48F8F9: mov     [esi+4], eax
