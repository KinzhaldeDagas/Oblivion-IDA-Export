0xA236F0: push    offset flt_B12610
0xA236F5: mov     ecx, offset dword_B07CFC
0xA236FA: call    BSSimpleList_Remove
0xA236FF: mov     eax, off_B12614; "fTreeForceBranchDimming:SpeedTree"
0xA23704: test    eax, eax
0xA23706: jz      short locret_A23714
0xA23708: cmp     byte ptr [eax], 53h ; 'S'
0xA2370B: jnz     short locret_A23714
0xA2370D: push    eax
0xA2370E: call    FormHeapFree
0xA23713: pop     ecx
0xA23714: retn
