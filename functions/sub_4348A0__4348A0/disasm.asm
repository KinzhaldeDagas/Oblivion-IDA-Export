0x4348A0: mov     eax, [esp+arg_0]
0x4348A4: push    eax
0x4348A5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4348AA: pop     ecx
0x4348AB: retn    4
