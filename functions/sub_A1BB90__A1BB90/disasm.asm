0xA1BB90: push    offset g_iMaxDecalsPerFrame_Display
0xA1BB95: mov     ecx, offset dword_B07CFC
0xA1BB9A: call    BSSimpleList_Remove
0xA1BB9F: mov     eax, off_B097D4; "iMaxDecalsPerFrame:Display"
0xA1BBA4: test    eax, eax
0xA1BBA6: jz      short locret_A1BBB4
0xA1BBA8: cmp     byte ptr [eax], 53h ; 'S'
0xA1BBAB: jnz     short locret_A1BBB4
0xA1BBAD: push    eax
0xA1BBAE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA1BBB3: pop     ecx
0xA1BBB4: retn
