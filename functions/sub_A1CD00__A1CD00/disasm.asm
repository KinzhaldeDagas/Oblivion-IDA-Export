0xA1CD00: push    offset off_B11B34; "1.0, 1.0"
0xA1CD05: mov     ecx, offset unk_B11D4C
0xA1CD0A: call    BSSimpleList_Remove
0xA1CD0F: mov     eax, off_B11B38; "sHead:DEFAULT"
0xA1CD14: test    eax, eax
0xA1CD16: jz      short locret_A1CD24
0xA1CD18: cmp     byte ptr [eax], 53h ; 'S'
0xA1CD1B: jnz     short locret_A1CD24
0xA1CD1D: push    eax
0xA1CD1E: call    FormHeapFree
0xA1CD23: pop     ecx
0xA1CD24: retn
