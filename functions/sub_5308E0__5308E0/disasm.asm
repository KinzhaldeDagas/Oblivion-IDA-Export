0x5308E0: push    esi; Destroy every TESResponse and responseText owned by this list. CollectResponses creates a clone first, so this cleanup releases the caller's temporary snapshot without clearing the shared global cache.
0x5308E1: mov     esi, ecx
0x5308E3: test    esi, esi
0x5308E5: jz      short loc_53092E
0x5308E7: push    edi
0x5308E8: mov     ecx, esi
0x5308EA: call    BSSimpleList_IsEmpty
0x5308EF: test    al, al
0x5308F1: jnz     short loc_53092D
0x5308F3: mov     edi, [esi]
0x5308F5: test    edi, edi
0x5308F7: jz      short loc_530909
0x5308F9: mov     ecx, edi; this
0x5308FB: call    TESResponse__Destroy
0x530900: push    edi
0x530901: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x530906: add     esp, 4
0x530909: mov     eax, [esi+4]
0x53090C: test    eax, eax
0x53090E: jz      short loc_530925
0x530910: mov     ecx, [eax+4]
0x530913: mov     [esi+4], ecx
0x530916: mov     edx, [eax]
0x530918: push    eax
0x530919: mov     [esi], edx
0x53091B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x530920: add     esp, 4
0x530923: jmp     short loc_5308E8
0x530925: mov     dword ptr [esi], 0
0x53092B: jmp     short loc_5308E8
0x53092D: pop     edi
0x53092E: pop     esi
0x53092F: retn
