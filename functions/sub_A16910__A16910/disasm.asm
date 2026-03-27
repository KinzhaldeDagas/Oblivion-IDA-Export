0xA16910: push    offset unk_B02CE8
0xA16915: mov     ecx, offset dword_B07CFC
0xA1691A: call    BSSimpleList_Remove
0xA1691F: mov     eax, off_B02CEC; "bUseMyGamesDirectory:General"
0xA16924: test    eax, eax
0xA16926: jz      short locret_A16934
0xA16928: cmp     byte ptr [eax], 53h ; 'S'
0xA1692B: jnz     short locret_A16934
0xA1692D: push    eax
0xA1692E: call    FormHeapFree
0xA16933: pop     ecx
0xA16934: retn
