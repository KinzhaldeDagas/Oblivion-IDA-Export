0xA23600: push    offset bEnableTrees_SpeedTree; Verified INI setting cleanup removes bEnableTrees from the setting list and frees a dynamically allocated name if applicable.
0xA23605: mov     ecx, offset dword_B07CFC
0xA2360A: call    BSSimpleList_Remove
0xA2360F: mov     eax, bEnableTrees_SpeedTree.name
0xA23614: test    eax, eax
0xA23616: jz      short locret_A23624
0xA23618: cmp     byte ptr [eax], 53h ; 'S'
0xA2361B: jnz     short locret_A23624
0xA2361D: push    eax
0xA2361E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA23623: pop     ecx
0xA23624: retn
