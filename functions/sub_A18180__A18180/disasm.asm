0xA18180: push    offset off_B0557C; "One or more plugins could not find the "...
0xA18185: mov     ecx, offset dword_B07CFC
0xA1818A: call    BSSimpleList_Remove
0xA1818F: mov     eax, off_B05580; "sGeneralMasterMismatchWarning:GeneralWa"...
0xA18194: test    eax, eax
0xA18196: jz      short locret_A181A4
0xA18198: cmp     byte ptr [eax], 53h ; 'S'
0xA1819B: jnz     short locret_A181A4
0xA1819D: push    eax
0xA1819E: call    FormHeapFree
0xA181A3: pop     ecx
0xA181A4: retn
