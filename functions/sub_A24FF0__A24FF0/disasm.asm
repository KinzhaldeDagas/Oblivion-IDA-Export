0xA24FF0: push    offset flt_B14834
0xA24FF5: mov     ecx, offset dword_B07CFC
0xA24FFA: call    BSSimpleList_Remove
0xA24FFF: mov     eax, off_B14838; "fItemLODMin:LOD"
0xA25004: test    eax, eax
0xA25006: jz      short locret_A25014
0xA25008: cmp     byte ptr [eax], 53h ; 'S'
0xA2500B: jnz     short locret_A25014
0xA2500D: push    eax
0xA2500E: call    FormHeapFree
0xA25013: pop     ecx
0xA25014: retn
