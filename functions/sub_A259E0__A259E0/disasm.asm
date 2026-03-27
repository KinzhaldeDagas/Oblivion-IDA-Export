0xA259E0: push    offset dword_B14EC8
0xA259E5: mov     ecx, offset dword_B07CFC
0xA259EA: call    BSSimpleList_Remove
0xA259EF: mov     eax, off_B14ECC; "iJoystickMoveFrontBack:Controls"
0xA259F4: test    eax, eax
0xA259F6: jz      short locret_A25A04
0xA259F8: cmp     byte ptr [eax], 53h ; 'S'
0xA259FB: jnz     short locret_A25A04
0xA259FD: push    eax
0xA259FE: call    FormHeapFree
0xA25A03: pop     ecx
0xA25A04: retn
