0xA187A0: push    offset uGridsToLoad
0xA187A5: mov     ecx, offset dword_B07CFC
0xA187AA: call    BSSimpleList_Remove
0xA187AF: mov     eax, off_B06A30; "uGridsToLoad:General"
0xA187B4: test    eax, eax
0xA187B6: jz      short locret_A187C4
0xA187B8: cmp     byte ptr [eax], 53h ; 'S'
0xA187BB: jnz     short locret_A187C4
0xA187BD: push    eax
0xA187BE: call    FormHeapFree
0xA187C3: pop     ecx
0xA187C4: retn
