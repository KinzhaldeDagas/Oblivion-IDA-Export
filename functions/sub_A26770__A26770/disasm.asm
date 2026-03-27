0xA26770: push    offset flt_B23C58
0xA26775: mov     ecx, offset dword_B07CFC
0xA2677A: call    BSSimpleList_Remove
0xA2677F: mov     eax, off_B23C5C; "fHeadroomdB:Audio"
0xA26784: test    eax, eax
0xA26786: jz      short locret_A26794
0xA26788: cmp     byte ptr [eax], 53h ; 'S'
0xA2678B: jnz     short locret_A26794
0xA2678D: push    eax
0xA2678E: call    FormHeapFree
0xA26793: pop     ecx
0xA26794: retn
