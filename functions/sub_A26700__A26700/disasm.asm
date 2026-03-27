0xA26700: push    offset dword_B16304
0xA26705: mov     ecx, offset dword_B07CFC
0xA2670A: call    BSSimpleList_Remove
0xA2670F: mov     eax, off_B16308; "iMaxImpactSoundCount:Audio"
0xA26714: test    eax, eax
0xA26716: jz      short locret_A26724
0xA26718: cmp     byte ptr [eax], 53h ; 'S'
0xA2671B: jnz     short locret_A26724
0xA2671D: push    eax
0xA2671E: call    FormHeapFree
0xA26723: pop     ecx
0xA26724: retn
