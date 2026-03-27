0xA25DD0: push    offset unk_B15748
0xA25DD5: mov     ecx, offset dword_B07CFC
0xA25DDA: call    BSSimpleList_Remove
0xA25DDF: mov     eax, off_B1574C; "bDisableAvoidance:Pathfinding"
0xA25DE4: test    eax, eax
0xA25DE6: jz      short locret_A25DF4
0xA25DE8: cmp     byte ptr [eax], 53h ; 'S'
0xA25DEB: jnz     short locret_A25DF4
0xA25DED: push    eax
0xA25DEE: call    FormHeapFree
0xA25DF3: pop     ecx
0xA25DF4: retn
