0xA25810: push    offset dword_B14E44
0xA25815: mov     ecx, offset dword_B07CFC
0xA2581A: call    BSSimpleList_Remove
0xA2581F: mov     eax, off_B14E48; "iHavokSkipFrameCountTEST:Havok"
0xA25824: test    eax, eax
0xA25826: jz      short locret_A25834
0xA25828: cmp     byte ptr [eax], 53h ; 'S'
0xA2582B: jnz     short locret_A25834
0xA2582D: push    eax
0xA2582E: call    FormHeapFree
0xA25833: pop     ecx
0xA25834: retn
