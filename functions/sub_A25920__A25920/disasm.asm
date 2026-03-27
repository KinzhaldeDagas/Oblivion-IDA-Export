0xA25920: push    offset trackLevelUps
0xA25925: mov     ecx, offset dword_B07CFC
0xA2592A: call    BSSimpleList_Remove
0xA2592F: mov     eax, off_B14EAC; "bTrackLevelUps:GamePlay"
0xA25934: test    eax, eax
0xA25936: jz      short locret_A25944
0xA25938: cmp     byte ptr [eax], 53h ; 'S'
0xA2593B: jnz     short locret_A25944
0xA2593D: push    eax
0xA2593E: call    FormHeapFree
0xA25943: pop     ecx
0xA25944: retn
