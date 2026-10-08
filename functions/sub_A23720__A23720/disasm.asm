0xA23720: push    offset OB_INI_fTreeForceLeafDimming_SpeedTree_010201A0
0xA23725: mov     ecx, offset dword_B07CFC
0xA2372A: call    BSSimpleList_Remove
0xA2372F: mov     eax, off_B1261C; "fTreeForceLeafDimming:SpeedTree"
0xA23734: test    eax, eax
0xA23736: jz      short locret_A23744
0xA23738: cmp     byte ptr [eax], 53h ; 'S'
0xA2373B: jnz     short locret_A23744
0xA2373D: push    eax
0xA2373E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA23743: pop     ecx
0xA23744: retn
