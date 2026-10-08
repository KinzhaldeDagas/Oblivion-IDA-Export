0x65C6A0: push    esi
0x65C6A1: mov     esi, ecx
0x65C6A3: mov     eax, [esi]
0x65C6A5: test    eax, eax
0x65C6A7: push    edi
0x65C6A8: jz      short loc_65C6E1
0x65C6AA: lea     ebx, [ebx+0]
0x65C6B0: push    eax
0x65C6B1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x65C6B6: mov     eax, [esi+4]
0x65C6B9: add     esp, 4
0x65C6BC: test    eax, eax
0x65C6BE: jz      short loc_65C6D5
0x65C6C0: mov     ecx, [eax+4]
0x65C6C3: mov     [esi+4], ecx
0x65C6C6: mov     edx, [eax]
0x65C6C8: push    eax
0x65C6C9: mov     [esi], edx
0x65C6CB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x65C6D0: add     esp, 4
0x65C6D3: jmp     short loc_65C6DB
0x65C6D5: mov     dword ptr [esi], 0
0x65C6DB: mov     eax, [esi]
0x65C6DD: test    eax, eax
0x65C6DF: jnz     short AVCollection_ClearArrayAndList___ClearListLoop
0x65C6E1: mov     edi, [esi+10h]
0x65C6E4: test    edi, edi
0x65C6E6: jz      short loc_65C6FF
0x65C6E8: mov     ecx, edi; self
0x65C6EA: call    AVCollection_DeleteArray
0x65C6EF: push    edi
0x65C6F0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x65C6F5: add     esp, 4
0x65C6F8: mov     dword ptr [esi+10h], 0
0x65C6FF: pop     edi
0x65C700: pop     esi
0x65C701: retn
