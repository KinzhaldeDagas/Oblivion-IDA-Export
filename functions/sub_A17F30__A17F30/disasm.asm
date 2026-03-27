0xA17F30: push    offset flt_B05234
0xA17F35: mov     ecx, offset dword_B07CFC
0xA17F3A: call    BSSimpleList_Remove
0xA17F3F: mov     eax, off_B05238; "fChaseDeltaMult:HAVOK"
0xA17F44: test    eax, eax
0xA17F46: jz      short locret_A17F54
0xA17F48: cmp     byte ptr [eax], 53h ; 'S'
0xA17F4B: jnz     short locret_A17F54
0xA17F4D: push    eax
0xA17F4E: call    FormHeapFree
0xA17F53: pop     ecx
0xA17F54: retn
