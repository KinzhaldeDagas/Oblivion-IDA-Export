0xA25610: push    offset unk_B14BC4
0xA25615: mov     ecx, offset dword_B07CFC
0xA2561A: call    BSSimpleList_Remove
0xA2561F: mov     eax, off_B14BC8; "fLowPerfNPCTargetLOSTimer:Combat"
0xA25624: test    eax, eax
0xA25626: jz      short locret_A25634
0xA25628: cmp     byte ptr [eax], 53h ; 'S'
0xA2562B: jnz     short locret_A25634
0xA2562D: push    eax
0xA2562E: call    FormHeapFree
0xA25633: pop     ecx
0xA25634: retn
