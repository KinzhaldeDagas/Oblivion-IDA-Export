0xA1B510: push    offset flt_B08170
0xA1B515: mov     ecx, offset dword_B07CFC
0xA1B51A: call    BSSimpleList_Remove
0xA1B51F: mov     eax, off_B08174; "fQuadraticValue:bLightAttenuation"
0xA1B524: test    eax, eax
0xA1B526: jz      short locret_A1B534
0xA1B528: cmp     byte ptr [eax], 53h ; 'S'
0xA1B52B: jnz     short locret_A1B534
0xA1B52D: push    eax
0xA1B52E: call    FormHeapFree
0xA1B533: pop     ecx
0xA1B534: retn
