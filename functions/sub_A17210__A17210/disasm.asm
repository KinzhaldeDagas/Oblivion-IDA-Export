0xA17210: push    offset flt_B0311C
0xA17215: mov     ecx, offset dword_B07CFC
0xA1721A: call    BSSimpleList_Remove
0xA1721F: mov     eax, off_B03120; "fNoLODFarDistanceMin:Display"
0xA17224: test    eax, eax
0xA17226: jz      short locret_A17234
0xA17228: cmp     byte ptr [eax], 53h ; 'S'
0xA1722B: jnz     short locret_A17234
0xA1722D: push    eax
0xA1722E: call    FormHeapFree
0xA17233: pop     ecx
0xA17234: retn
