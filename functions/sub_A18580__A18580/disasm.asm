0xA18580: push    offset flt_B06530
0xA18585: mov     ecx, offset dword_B07CFC
0xA1858A: call    BSSimpleList_Remove
0xA1858F: mov     eax, off_B06534; "fAnimationMult:General"
0xA18594: test    eax, eax
0xA18596: jz      short locret_A185A4
0xA18598: cmp     byte ptr [eax], 53h ; 'S'
0xA1859B: jnz     short locret_A185A4
0xA1859D: push    eax
0xA1859E: call    FormHeapFree
0xA185A3: pop     ecx
0xA185A4: retn
