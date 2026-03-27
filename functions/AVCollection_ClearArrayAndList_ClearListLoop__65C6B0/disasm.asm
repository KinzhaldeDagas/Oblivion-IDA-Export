0x65C6B0: push    eax
0x65C6B1: call    FormHeapFree
0x65C6B6: mov     eax, [esi+4]
0x65C6B9: add     esp, 4
0x65C6BC: test    eax, eax
0x65C6BE: jz      short loc_65C6D5
0x65C6C0: mov     ecx, [eax+4]
0x65C6C3: mov     [esi+4], ecx
0x65C6C6: mov     edx, [eax]
0x65C6C8: push    eax
0x65C6C9: mov     [esi], edx
0x65C6CB: call    FormHeapFree
0x65C6D0: add     esp, 4
0x65C6D3: jmp     short loc_65C6DB
0x65C6D5: mov     dword ptr [esi], 0
0x65C6DB: mov     eax, [esi]
0x65C6DD: test    eax, eax
0x65C6DF: jnz     short AVCollection_ClearArrayAndList___ClearListLoop
0x65C6E1: mov     edi, [esi+10h]
0x65C6E4: test    edi, edi
0x65C6E6: jz      short loc_65C6FF
0x65C6E8: mov     ecx, edi
0x65C6EA: call    AVCollection_DeleteArray
0x65C6EF: push    edi
0x65C6F0: call    FormHeapFree
0x65C6F5: add     esp, 4
0x65C6F8: mov     dword ptr [esi+10h], 0
0x65C6FF: pop     edi
0x65C700: pop     esi
0x65C701: retn
