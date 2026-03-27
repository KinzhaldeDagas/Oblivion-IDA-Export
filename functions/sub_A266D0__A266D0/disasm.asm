0xA266D0: push    offset flt_B162FC
0xA266D5: mov     ecx, offset dword_B07CFC
0xA266DA: call    BSSimpleList_Remove
0xA266DF: mov     eax, off_B16300; "fMaxFootstepDistance:Audio"
0xA266E4: test    eax, eax
0xA266E6: jz      short locret_A266F4
0xA266E8: cmp     byte ptr [eax], 53h ; 'S'
0xA266EB: jnz     short locret_A266F4
0xA266ED: push    eax
0xA266EE: call    FormHeapFree
0xA266F3: pop     ecx
0xA266F4: retn
