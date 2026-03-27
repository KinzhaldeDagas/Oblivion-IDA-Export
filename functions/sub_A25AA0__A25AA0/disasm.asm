0xA25AA0: push    offset flt_B14EE8
0xA25AA5: mov     ecx, offset dword_B07CFC
0xA25AAA: call    BSSimpleList_Remove
0xA25AAF: mov     eax, off_B14EEC; "fMouseSensitivity:Controls"
0xA25AB4: test    eax, eax
0xA25AB6: jz      short locret_A25AC4
0xA25AB8: cmp     byte ptr [eax], 53h ; 'S'
0xA25ABB: jnz     short locret_A25AC4
0xA25ABD: push    eax
0xA25ABE: call    FormHeapFree
0xA25AC3: pop     ecx
0xA25AC4: retn
