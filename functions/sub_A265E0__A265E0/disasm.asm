0xA265E0: push    offset fLargeWeaponWeightMin_Audio
0xA265E5: mov     ecx, offset dword_B07CFC
0xA265EA: call    BSSimpleList_Remove
0xA265EF: mov     eax, off_B162D8; "fLargeWeaponWeightMin:Audio"
0xA265F4: test    eax, eax
0xA265F6: jz      short locret_A26604
0xA265F8: cmp     byte ptr [eax], 53h ; 'S'
0xA265FB: jnz     short locret_A26604
0xA265FD: push    eax
0xA265FE: call    FormHeapFree
0xA26603: pop     ecx
0xA26604: retn
