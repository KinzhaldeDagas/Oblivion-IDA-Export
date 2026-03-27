0xA26150: push    offset flt_B161B8
0xA26155: mov     ecx, offset dword_B07CFC
0xA2615A: call    BSSimpleList_Remove
0xA2615F: mov     eax, off_B161BC; "fUnderwaterFrequencyDelta:Audio"
0xA26164: test    eax, eax
0xA26166: jz      short locret_A26174
0xA26168: cmp     byte ptr [eax], 53h ; 'S'
0xA2616B: jnz     short locret_A26174
0xA2616D: push    eax
0xA2616E: call    FormHeapFree
0xA26173: pop     ecx
0xA26174: retn
