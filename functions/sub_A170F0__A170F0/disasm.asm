0xA170F0: push    offset off_B0309C; "CreditsMenu.bik"
0xA170F5: mov     ecx, offset dword_B07CFC
0xA170FA: call    BSSimpleList_Remove
0xA170FF: mov     eax, off_B030A0; "sCreditsMenuMovie:General"
0xA17104: test    eax, eax
0xA17106: jz      short locret_A17114
0xA17108: cmp     byte ptr [eax], 53h ; 'S'
0xA1710B: jnz     short locret_A17114
0xA1710D: push    eax
0xA1710E: call    FormHeapFree
0xA17113: pop     ecx
0xA17114: retn
