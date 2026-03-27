0xA263D0: push    offset dword_B1627C
0xA263D5: mov     ecx, offset dword_B07CFC
0xA263DA: call    BSSimpleList_Remove
0xA263DF: mov     eax, off_B16280; "fSkinMediumMassMin:Audio"
0xA263E4: test    eax, eax
0xA263E6: jz      short locret_A263F4
0xA263E8: cmp     byte ptr [eax], 53h ; 'S'
0xA263EB: jnz     short locret_A263F4
0xA263ED: push    eax
0xA263EE: call    FormHeapFree
0xA263F3: pop     ecx
0xA263F4: retn
