0xA1A630: push    offset flt_B3524C
0xA1A635: mov     ecx, offset dword_B07CFC
0xA1A63A: call    BSSimpleList_Remove
0xA1A63F: mov     eax, dword_B35250
0xA1A644: test    eax, eax
0xA1A646: jz      short locret_A1A654
0xA1A648: cmp     byte ptr [eax], 53h ; 'S'
0xA1A64B: jnz     short locret_A1A654
0xA1A64D: push    eax
0xA1A64E: call    FormHeapFree
0xA1A653: pop     ecx
0xA1A654: retn
