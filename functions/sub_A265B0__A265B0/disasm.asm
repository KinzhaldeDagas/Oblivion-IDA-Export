0xA265B0: push    offset dword_B162CC
0xA265B5: mov     ecx, offset dword_B07CFC
0xA265BA: call    BSSimpleList_Remove
0xA265BF: mov     eax, off_B162D0; "fMediumWeaponWeightMin:Audio"
0xA265C4: test    eax, eax
0xA265C6: jz      short locret_A265D4
0xA265C8: cmp     byte ptr [eax], 53h ; 'S'
0xA265CB: jnz     short locret_A265D4
0xA265CD: push    eax
0xA265CE: call    FormHeapFree
0xA265D3: pop     ecx
0xA265D4: retn
