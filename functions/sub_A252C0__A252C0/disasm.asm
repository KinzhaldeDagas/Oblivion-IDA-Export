0xA252C0: push    offset trackAllDeath
0xA252C5: mov     ecx, offset dword_B07CFC
0xA252CA: call    BSSimpleList_Remove
0xA252CF: mov     eax, off_B148C8; "bTrackAllDeaths:General"
0xA252D4: test    eax, eax
0xA252D6: jz      short locret_A252E4
0xA252D8: cmp     byte ptr [eax], 53h ; 'S'
0xA252DB: jnz     short locret_A252E4
0xA252DD: push    eax
0xA252DE: call    FormHeapFree
0xA252E3: pop     ecx
0xA252E4: retn
