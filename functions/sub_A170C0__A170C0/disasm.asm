0xA170C0: push    offset off_B03094; "Map loop.bik"
0xA170C5: mov     ecx, offset dword_B07CFC
0xA170CA: call    BSSimpleList_Remove
0xA170CF: mov     eax, off_B03098; "sMainMenuMovie:General"
0xA170D4: test    eax, eax
0xA170D6: jz      short locret_A170E4
0xA170D8: cmp     byte ptr [eax], 53h ; 'S'
0xA170DB: jnz     short locret_A170E4
0xA170DD: push    eax
0xA170DE: call    FormHeapFree
0xA170E3: pop     ecx
0xA170E4: retn
