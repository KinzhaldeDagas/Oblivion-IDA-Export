0x68B1C0: cmp     byte ptr [ecx+4], 1; Verified frees only the owned position payload when kind==1; it does not free the TravelPathNode record itself and does not release reference-kind payloads.
0x68B1C4: jnz     short locret_68B1CF
0x68B1C6: mov     eax, [ecx]
0x68B1C8: push    eax
0x68B1C9: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x68B1CE: pop     ecx
0x68B1CF: retn
