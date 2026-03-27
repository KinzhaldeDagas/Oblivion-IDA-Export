0xA261B0: push    offset flt_B161C8
0xA261B5: mov     ecx, offset dword_B07CFC
0xA261BA: call    BSSimpleList_Remove
0xA261BF: mov     eax, off_B161CC; "fDialogAttenuationMin:Audio"
0xA261C4: test    eax, eax
0xA261C6: jz      short locret_A261D4
0xA261C8: cmp     byte ptr [eax], 53h ; 'S'
0xA261CB: jnz     short locret_A261D4
0xA261CD: push    eax
0xA261CE: call    FormHeapFree
0xA261D3: pop     ecx
0xA261D4: retn
