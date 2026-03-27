0xA267A0: push    offset byte_B23C60
0xA267A5: mov     ecx, offset dword_B07CFC
0xA267AA: call    BSSimpleList_Remove
0xA267AF: mov     eax, off_B23C64; "bEnableProfile:General"
0xA267B4: test    eax, eax
0xA267B6: jz      short locret_A267C4
0xA267B8: cmp     byte ptr [eax], 53h ; 'S'
0xA267BB: jnz     short locret_A267C4
0xA267BD: push    eax
0xA267BE: call    FormHeapFree
0xA267C3: pop     ecx
0xA267C4: retn
