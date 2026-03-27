0xA248B0: push    offset dword_B13610
0xA248B5: mov     ecx, offset dword_B07CFC
0xA248BA: call    BSSimpleList_Remove
0xA248BF: mov     eax, off_B13614; "iSafeZoneYWide:Interface"
0xA248C4: test    eax, eax
0xA248C6: jz      short locret_A248D4
0xA248C8: cmp     byte ptr [eax], 53h ; 'S'
0xA248CB: jnz     short locret_A248D4
0xA248CD: push    eax
0xA248CE: call    FormHeapFree
0xA248D3: pop     ecx
0xA248D4: retn
