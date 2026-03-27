0x4894F1: mov     esi, [edi]
0x4894F3: test    esi, esi
0x4894F5: jz      short loc_489515
0x4894F7: mov     edi, [edi+4]
0x4894FA: push    1
0x4894FC: mov     ecx, esi
0x4894FE: call    BaseExtraList_Clear
0x489503: test    esi, esi
0x489505: jz      short loc_489511
0x489507: mov     eax, [esi]
0x489509: mov     edx, [eax]
0x48950B: push    1
0x48950D: mov     ecx, esi
0x48950F: call    edx
0x489511: test    edi, edi
0x489513: jnz     short ContainerExtraData_destr___DestructEntryDataListLoop
0x489515: mov     esi, [ebx]
0x489517: test    esi, esi
0x489519: jz      short loc_48953D
0x48951B: cmp     dword ptr [esi+4], 0
0x48951F: jz      short loc_489537
0x489521: mov     eax, [esi+4]
0x489524: mov     edi, [eax+4]
0x489527: push    eax
0x489528: call    FormHeapFree
0x48952D: add     esp, 4
0x489530: test    edi, edi
0x489532: mov     [esi+4], edi
0x489535: jnz     short loc_489521
0x489537: mov     dword ptr [esi], 0
0x48953D: mov     eax, [ebx]
0x48953F: push    eax
0x489540: call    FormHeapFree
0x489545: push    ebx
0x489546: mov     dword ptr [ebx], 0
0x48954C: call    FormHeapFree
0x489551: mov     edi, [esp+0Ch+arg_8]
0x489555: add     esp, 8
0x489558: test    ebp, ebp
0x48955A: jnz     short ContainerExtraData_destr___DestructEntryLoop
0x48955C: pop     ebx
0x48955D: mov     esi, [edi]
0x48955F: cmp     dword ptr [esi+4], 0
0x489563: jz      short ContainerExtraData_destr___MarkOwnerAsModified
0x489565: mov     eax, [esi+4]
0x489568: mov     edi, [eax+4]
0x48956B: push    eax
0x48956C: call    FormHeapFree
0x489571: add     esp, 4
0x489574: test    edi, edi
0x489576: mov     [esi+4], edi
0x489579: jnz     short loc_489565
0x48957B: mov     edi, [esp+arg_8]
