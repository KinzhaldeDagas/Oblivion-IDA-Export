0xA18040: push    offset byte_B0525C
0xA18045: mov     ecx, offset dword_B07CFC
0xA1804A: call    BSSimpleList_Remove
0xA1804F: mov     eax, off_B05260; "bSelectivePurgeUnusedOnFastTravel:Backg"...
0xA18054: test    eax, eax
0xA18056: jz      short locret_A18064
0xA18058: cmp     byte ptr [eax], 53h ; 'S'
0xA1805B: jnz     short locret_A18064
0xA1805D: push    eax
0xA1805E: call    FormHeapFree
0xA18063: pop     ecx
0xA18064: retn
