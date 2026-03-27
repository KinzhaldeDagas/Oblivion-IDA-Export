0xA24850: push    offset dword_B13600
0xA24855: mov     ecx, offset dword_B07CFC
0xA2485A: call    BSSimpleList_Remove
0xA2485F: mov     eax, off_B13604; "iSafeZoneY:Interface"
0xA24864: test    eax, eax
0xA24866: jz      short locret_A24874
0xA24868: cmp     byte ptr [eax], 53h ; 'S'
0xA2486B: jnz     short locret_A24874
0xA2486D: push    eax
0xA2486E: call    FormHeapFree
0xA24873: pop     ecx
0xA24874: retn
