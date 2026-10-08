0x6AF6D0: push    esi
0x6AF6D1: mov     esi, ecx
0x6AF6D3: mov     eax, [esi+14h]
0x6AF6D6: push    eax
0x6AF6D7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6AF6DC: mov     ecx, [esi+0Ch]
0x6AF6DF: push    ecx
0x6AF6E0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6AF6E5: add     esp, 8
0x6AF6E8: pop     esi
0x6AF6E9: retn
