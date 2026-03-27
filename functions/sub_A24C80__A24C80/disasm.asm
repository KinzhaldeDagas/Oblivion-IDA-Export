0xA24C80: push    offset flt_B14158
0xA24C85: mov     ecx, offset dword_B07CFC
0xA24C8A: call    BSSimpleList_Remove
0xA24C8F: mov     eax, off_B1415C; "fLoadingSlideDelay:LoadingBar"
0xA24C94: test    eax, eax
0xA24C96: jz      short locret_A24CA4
0xA24C98: cmp     byte ptr [eax], 53h ; 'S'
0xA24C9B: jnz     short locret_A24CA4
0xA24C9D: push    eax
0xA24C9E: call    FormHeapFree
0xA24CA3: pop     ecx
0xA24CA4: retn
