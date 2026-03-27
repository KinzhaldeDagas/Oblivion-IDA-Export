0xA25550: push    offset unk_B14BA4
0xA25555: mov     ecx, offset dword_B07CFC
0xA2555A: call    BSSimpleList_Remove
0xA2555F: mov     eax, off_B14BA8; "fLowPerfPCTargetLOSTimer:Combat"
0xA25564: test    eax, eax
0xA25566: jz      short locret_A25574
0xA25568: cmp     byte ptr [eax], 53h ; 'S'
0xA2556B: jnz     short locret_A25574
0xA2556D: push    eax
0xA2556E: call    FormHeapFree
0xA25573: pop     ecx
0xA25574: retn
