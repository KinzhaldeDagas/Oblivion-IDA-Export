0xA17C90: push    offset flt_B05150
0xA17C95: mov     ecx, offset dword_B07CFC
0xA17C9A: call    BSSimpleList_Remove
0xA17C9F: mov     eax, off_B05154; "fLODFadeOutPercent:LOD"
0xA17CA4: test    eax, eax
0xA17CA6: jz      short locret_A17CB4
0xA17CA8: cmp     byte ptr [eax], 53h ; 'S'
0xA17CAB: jnz     short locret_A17CB4
0xA17CAD: push    eax
0xA17CAE: call    FormHeapFree
0xA17CB3: pop     ecx
0xA17CB4: retn
