0xA25200: push    offset flt_B1488C
0xA25205: mov     ecx, offset dword_B07CFC
0xA2520A: call    BSSimpleList_Remove
0xA2520F: mov     eax, off_B14890; "fSpecularStartMin:Display"
0xA25214: test    eax, eax
0xA25216: jz      short locret_A25224
0xA25218: cmp     byte ptr [eax], 53h ; 'S'
0xA2521B: jnz     short locret_A25224
0xA2521D: push    eax
0xA2521E: call    FormHeapFree
0xA25223: pop     ecx
0xA25224: retn
