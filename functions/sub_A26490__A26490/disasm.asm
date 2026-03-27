0xA26490: push    offset dword_B1629C
0xA26495: mov     ecx, offset dword_B07CFC
0xA2649A: call    BSSimpleList_Remove
0xA2649F: mov     eax, off_B162A0; "fMetalMediumMassMin:Audio"
0xA264A4: test    eax, eax
0xA264A6: jz      short locret_A264B4
0xA264A8: cmp     byte ptr [eax], 53h ; 'S'
0xA264AB: jnz     short locret_A264B4
0xA264AD: push    eax
0xA264AE: call    FormHeapFree
0xA264B3: pop     ecx
0xA264B4: retn
