0xA1B540: push    offset flt_B08178
0xA1B545: mov     ecx, offset dword_B07CFC
0xA1B54A: call    BSSimpleList_Remove
0xA1B54F: mov     eax, off_B0817C; "fConstantValue:bLightAttenuation"
0xA1B554: test    eax, eax
0xA1B556: jz      short locret_A1B564
0xA1B558: cmp     byte ptr [eax], 53h ; 'S'
0xA1B55B: jnz     short locret_A1B564
0xA1B55D: push    eax
0xA1B55E: call    FormHeapFree
0xA1B563: pop     ecx
0xA1B564: retn
