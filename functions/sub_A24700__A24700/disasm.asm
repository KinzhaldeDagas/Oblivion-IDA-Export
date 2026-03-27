0xA24700: push    offset flt_B135C8
0xA24705: mov     ecx, offset dword_B07CFC
0xA2470A: call    BSSimpleList_Remove
0xA2470F: mov     eax, off_B135CC; "fMenuPlayerLightAmbientRed:Interface"
0xA24714: test    eax, eax
0xA24716: jz      short locret_A24724
0xA24718: cmp     byte ptr [eax], 53h ; 'S'
0xA2471B: jnz     short locret_A24724
0xA2471D: push    eax
0xA2471E: call    FormHeapFree
0xA24723: pop     ecx
0xA24724: retn
