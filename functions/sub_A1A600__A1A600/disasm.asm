0xA1A600: push    offset off_B070F0; "water"
0xA1A605: mov     ecx, offset dword_B07CFC
0xA1A60A: call    BSSimpleList_Remove
0xA1A60F: mov     eax, off_B070F4; "sSurfaceTexture:Water"
0xA1A614: test    eax, eax
0xA1A616: jz      short locret_A1A624
0xA1A618: cmp     byte ptr [eax], 53h ; 'S'
0xA1A61B: jnz     short locret_A1A624
0xA1A61D: push    eax
0xA1A61E: call    FormHeapFree
0xA1A623: pop     ecx
0xA1A624: retn
