0xA25C80: push    offset byte_B14F38
0xA25C85: mov     ecx, offset dword_B07CFC
0xA25C8A: call    BSSimpleList_Remove
0xA25C8F: mov     eax, off_B14F3C; "bInvertYValues:Controls"
0xA25C94: test    eax, eax
0xA25C96: jz      short locret_A25CA4
0xA25C98: cmp     byte ptr [eax], 53h ; 'S'
0xA25C9B: jnz     short locret_A25CA4
0xA25C9D: push    eax
0xA25C9E: call    FormHeapFree
0xA25CA3: pop     ecx
0xA25CA4: retn
