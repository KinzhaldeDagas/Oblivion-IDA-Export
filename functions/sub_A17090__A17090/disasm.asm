0xA17090: push    offset off_B0308C; "Oblivion iv logo.bik"
0xA17095: mov     ecx, offset dword_B07CFC
0xA1709A: call    BSSimpleList_Remove
0xA1709F: mov     eax, off_B03090; "sMainMenuMovieIntro:General"
0xA170A4: test    eax, eax
0xA170A6: jz      short locret_A170B4
0xA170A8: cmp     byte ptr [eax], 53h ; 'S'
0xA170AB: jnz     short locret_A170B4
0xA170AD: push    eax
0xA170AE: call    FormHeapFree
0xA170B3: pop     ecx
0xA170B4: retn
