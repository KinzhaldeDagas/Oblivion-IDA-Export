0xA18ED0: push    offset DoStaticAndArchShadows
0xA18ED5: mov     ecx, offset dword_B07CFC
0xA18EDA: call    BSSimpleList_Remove
0xA18EDF: mov     eax, off_B06CF8; "bDoStaticAndArchShadows:Display"
0xA18EE4: test    eax, eax
0xA18EE6: jz      short locret_A18EF4
0xA18EE8: cmp     byte ptr [eax], 53h ; 'S'
0xA18EEB: jnz     short locret_A18EF4
0xA18EED: push    eax
0xA18EEE: call    FormHeapFree
0xA18EF3: pop     ecx
0xA18EF4: retn
