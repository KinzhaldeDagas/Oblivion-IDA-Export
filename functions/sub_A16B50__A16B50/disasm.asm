0xA16B50: push    offset dword_B02D48
0xA16B55: mov     ecx, offset dword_B07CFC
0xA16B5A: call    BSSimpleList_Remove
0xA16B5F: mov     eax, off_B02D4C; "iFPS:CameraPath"
0xA16B64: test    eax, eax
0xA16B66: jz      short locret_A16B74
0xA16B68: cmp     byte ptr [eax], 53h ; 'S'
0xA16B6B: jnz     short locret_A16B74
0xA16B6D: push    eax
0xA16B6E: call    FormHeapFree
0xA16B73: pop     ecx
0xA16B74: retn
