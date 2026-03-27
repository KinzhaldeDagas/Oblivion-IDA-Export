0xA25440: push    offset dword_B14904
0xA25445: mov     ecx, offset dword_B07CFC
0xA2544A: call    BSSimpleList_Remove
0xA2544F: mov     eax, off_B14908; "iDetectionHighNumPicks"
0xA25454: test    eax, eax
0xA25456: jz      short locret_A25464
0xA25458: cmp     byte ptr [eax], 53h ; 'S'
0xA2545B: jnz     short locret_A25464
0xA2545D: push    eax
0xA2545E: call    FormHeapFree
0xA25463: pop     ecx
0xA25464: retn
