0xA23630: push    offset byte_B125F0
0xA23635: mov     ecx, offset dword_B07CFC
0xA2363A: call    BSSimpleList_Remove
0xA2363F: mov     eax, off_B125F4; "bForceFullLOD:SpeedTree"
0xA23644: test    eax, eax
0xA23646: jz      short locret_A23654
0xA23648: cmp     byte ptr [eax], 53h ; 'S'
0xA2364B: jnz     short locret_A23654
0xA2364D: push    eax
0xA2364E: call    FormHeapFree
0xA23653: pop     ecx
0xA23654: retn
