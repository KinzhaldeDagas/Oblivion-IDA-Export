0xA246D0: push    offset unk_B135C0
0xA246D5: mov     ecx, offset dword_B07CFC
0xA246DA: call    BSSimpleList_Remove
0xA246DF: mov     eax, off_B135C4; "bAllowConsole:Interface"
0xA246E4: test    eax, eax
0xA246E6: jz      short locret_A246F4
0xA246E8: cmp     byte ptr [eax], 53h ; 'S'
0xA246EB: jnz     short locret_A246F4
0xA246ED: push    eax
0xA246EE: call    FormHeapFree
0xA246F3: pop     ecx
0xA246F4: retn
