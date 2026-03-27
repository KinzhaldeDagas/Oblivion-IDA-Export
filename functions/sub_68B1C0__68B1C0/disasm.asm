0x68B1C0: cmp     byte ptr [ecx+4], 1
0x68B1C4: jnz     short locret_68B1CF
0x68B1C6: mov     eax, [ecx]
0x68B1C8: push    eax
0x68B1C9: call    FormHeapFree
0x68B1CE: pop     ecx
0x68B1CF: retn
