0xA257E0: push    offset dword_B14E3C
0xA257E5: mov     ecx, offset dword_B07CFC
0xA257EA: call    BSSimpleList_Remove
0xA257EF: mov     eax, off_B14E40; "fHorseRunGravity:HAVOK"
0xA257F4: test    eax, eax
0xA257F6: jz      short locret_A25804
0xA257F8: cmp     byte ptr [eax], 53h ; 'S'
0xA257FB: jnz     short locret_A25804
0xA257FD: push    eax
0xA257FE: call    FormHeapFree
0xA25803: pop     ecx
0xA25804: retn
