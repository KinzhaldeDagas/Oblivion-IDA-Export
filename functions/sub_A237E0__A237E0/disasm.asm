0xA237E0: push    offset fCanopyShadowGrassMult_SpeedTree; Verified INI setting cleanup removes fCanopyShadowGrassMult from the setting list and frees a dynamically allocated name if applicable.
0xA237E5: mov     ecx, offset dword_B07CFC
0xA237EA: call    BSSimpleList_Remove
0xA237EF: mov     eax, fCanopyShadowGrassMult_SpeedTree.name
0xA237F4: test    eax, eax
0xA237F6: jz      short locret_A23804
0xA237F8: cmp     byte ptr [eax], 53h ; 'S'
0xA237FB: jnz     short locret_A23804
0xA237FD: push    eax
0xA237FE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA23803: pop     ecx
0xA23804: retn
