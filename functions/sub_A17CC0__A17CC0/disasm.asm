0xA17CC0: push    offset bPreemptivelyUnloadCells
0xA17CC5: mov     ecx, offset dword_B07CFC
0xA17CCA: call    BSSimpleList_Remove
0xA17CCF: mov     eax, off_B051D0; "bPreemptivelyUnloadCells:General"
0xA17CD4: test    eax, eax
0xA17CD6: jz      short locret_A17CE4
0xA17CD8: cmp     byte ptr [eax], 53h ; 'S'
0xA17CDB: jnz     short locret_A17CE4
0xA17CDD: push    eax
0xA17CDE: call    FormHeapFree
0xA17CE3: pop     ecx
0xA17CE4: retn
