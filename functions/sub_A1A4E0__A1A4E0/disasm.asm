0xA1A4E0: push    offset unk_B070C0
0xA1A4E5: mov     ecx, offset dword_B07CFC
0xA1A4EA: call    BSSimpleList_Remove
0xA1A4EF: mov     eax, off_B070C4; "fNearWaterUnderwaterFreq:Water"
0xA1A4F4: test    eax, eax
0xA1A4F6: jz      short locret_A1A504
0xA1A4F8: cmp     byte ptr [eax], 53h ; 'S'
0xA1A4FB: jnz     short locret_A1A504
0xA1A4FD: push    eax
0xA1A4FE: call    FormHeapFree
0xA1A503: pop     ecx
0xA1A504: retn
