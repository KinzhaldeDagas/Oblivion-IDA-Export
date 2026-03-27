0xA260F0: push    offset flt_B161A8
0xA260F5: mov     ecx, offset dword_B07CFC
0xA260FA: call    BSSimpleList_Remove
0xA260FF: mov     eax, off_B161AC; "fDefaultEffectsVolume:Audio"
0xA26104: test    eax, eax
0xA26106: jz      short locret_A26114
0xA26108: cmp     byte ptr [eax], 53h ; 'S'
0xA2610B: jnz     short locret_A26114
0xA2610D: push    eax
0xA2610E: call    FormHeapFree
0xA26113: pop     ecx
0xA26114: retn
