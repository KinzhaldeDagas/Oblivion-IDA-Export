0x573D00: mov     eax, [esp+arg_0]
0x573D04: push    eax
0x573D05: mov     dword ptr [eax+8], 0
0x573D0C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x573D11: pop     ecx
0x573D12: retn    4
