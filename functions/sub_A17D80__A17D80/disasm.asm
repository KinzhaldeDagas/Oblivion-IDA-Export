0xA17D80: push    offset off_B051EC; "255,255,255,255"
0xA17D85: mov     ecx, offset dword_B07CFC
0xA17D8A: call    BSSimpleList_Remove
0xA17D8F: mov     eax, off_B051F0; "sLerpCloseColor:Weather"
0xA17D94: test    eax, eax
0xA17D96: jz      short locret_A17DA4
0xA17D98: cmp     byte ptr [eax], 53h ; 'S'
0xA17D9B: jnz     short locret_A17DA4
0xA17D9D: push    eax
0xA17D9E: call    FormHeapFree
0xA17DA3: pop     ecx
0xA17DA4: retn
