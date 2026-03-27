0xA26060: push    offset flt_B16190
0xA26065: mov     ecx, offset dword_B07CFC
0xA2606A: call    BSSimpleList_Remove
0xA2606F: mov     eax, off_B16194; "fDefaultMasterVolume:Audio"
0xA26074: test    eax, eax
0xA26076: jz      short locret_A26084
0xA26078: cmp     byte ptr [eax], 53h ; 'S'
0xA2607B: jnz     short locret_A26084
0xA2607D: push    eax
0xA2607E: call    FormHeapFree
0xA26083: pop     ecx
0xA26084: retn
