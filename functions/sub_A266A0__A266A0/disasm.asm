0xA266A0: push    offset dword_B162F4
0xA266A5: mov     ecx, offset dword_B07CFC
0xA266AA: call    BSSimpleList_Remove
0xA266AF: mov     eax, off_B162F8; "fPlayerFootVolume:Audio"
0xA266B4: test    eax, eax
0xA266B6: jz      short locret_A266C4
0xA266B8: cmp     byte ptr [eax], 53h ; 'S'
0xA266BB: jnz     short locret_A266C4
0xA266BD: push    eax
0xA266BE: call    FormHeapFree
0xA266C3: pop     ecx
0xA266C4: retn
