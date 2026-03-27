0xA25470: push    offset bBackgroundLoadLipFiles
0xA25475: mov     ecx, offset dword_B07CFC
0xA2547A: call    BSSimpleList_Remove
0xA2547F: mov     eax, off_B14910; "bBackgroundLoadLipFiles:BackgroundLoad"
0xA25484: test    eax, eax
0xA25486: jz      short locret_A25494
0xA25488: cmp     byte ptr [eax], 53h ; 'S'
0xA2548B: jnz     short locret_A25494
0xA2548D: push    eax
0xA2548E: call    FormHeapFree
0xA25493: pop     ecx
0xA25494: retn
