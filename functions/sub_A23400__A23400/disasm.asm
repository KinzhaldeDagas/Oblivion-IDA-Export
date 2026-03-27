0xA23400: push    offset bUSeMultithreadedFaceGen
0xA23405: mov     ecx, offset dword_B07CFC
0xA2340A: call    BSSimpleList_Remove
0xA2340F: mov     eax, off_B120E0; "bUseMultiThreadedFaceGen:BackgroundLoad"
0xA23414: test    eax, eax
0xA23416: jz      short locret_A23424
0xA23418: cmp     byte ptr [eax], 53h ; 'S'
0xA2341B: jnz     short locret_A23424
0xA2341D: push    eax
0xA2341E: call    FormHeapFree
0xA23423: pop     ecx
0xA23424: retn
