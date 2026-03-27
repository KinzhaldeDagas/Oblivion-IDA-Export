0xA17ED0: push    offset iMaxPickHavok
0xA17ED5: mov     ecx, offset dword_B07CFC
0xA17EDA: call    BSSimpleList_Remove
0xA17EDF: mov     eax, off_B05228; "iMaxPicks:HAVOK"
0xA17EE4: test    eax, eax
0xA17EE6: jz      short locret_A17EF4
0xA17EE8: cmp     byte ptr [eax], 53h ; 'S'
0xA17EEB: jnz     short locret_A17EF4
0xA17EED: push    eax
0xA17EEE: call    FormHeapFree
0xA17EF3: pop     ecx
0xA17EF4: retn
