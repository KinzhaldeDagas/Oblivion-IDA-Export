0xA24F90: push    offset flt_B14824
0xA24F95: mov     ecx, offset dword_B07CFC
0xA24F9A: call    BSSimpleList_Remove
0xA24F9F: mov     eax, off_B14828; "fActorLODMax:LOD"
0xA24FA4: test    eax, eax
0xA24FA6: jz      short locret_A24FB4
0xA24FA8: cmp     byte ptr [eax], 53h ; 'S'
0xA24FAB: jnz     short locret_A24FB4
0xA24FAD: push    eax
0xA24FAE: call    FormHeapFree
0xA24FB3: pop     ecx
0xA24FB4: retn
