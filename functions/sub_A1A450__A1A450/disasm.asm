0xA1A450: push    offset unk_B070A8
0xA1A455: mov     ecx, offset dword_B07CFC
0xA1A45A: call    BSSimpleList_Remove
0xA1A45F: mov     eax, off_B070AC; "uSurfaceFPS:Water"
0xA1A464: test    eax, eax
0xA1A466: jz      short locret_A1A474
0xA1A468: cmp     byte ptr [eax], 53h ; 'S'
0xA1A46B: jnz     short locret_A1A474
0xA1A46D: push    eax
0xA1A46E: call    FormHeapFree
0xA1A473: pop     ecx
0xA1A474: retn
