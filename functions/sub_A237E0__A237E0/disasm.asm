0xA237E0: push    offset flt_B12638
0xA237E5: mov     ecx, offset dword_B07CFC
0xA237EA: call    BSSimpleList_Remove
0xA237EF: mov     eax, off_B1263C; "fCanopyShadowGrassMult:SpeedTree"
0xA237F4: test    eax, eax
0xA237F6: jz      short locret_A23804
0xA237F8: cmp     byte ptr [eax], 53h ; 'S'
0xA237FB: jnz     short locret_A23804
0xA237FD: push    eax
0xA237FE: call    FormHeapFree
0xA23803: pop     ecx
0xA23804: retn
