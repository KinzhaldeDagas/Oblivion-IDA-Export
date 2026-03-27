0xA1B5D0: push    offset flt_B08190
0xA1B5D5: mov     ecx, offset dword_B07CFC
0xA1B5DA: call    BSSimpleList_Remove
0xA1B5DF: mov     eax, off_B08194; "fQuadraticRadiusMult:bLightAttenuation"
0xA1B5E4: test    eax, eax
0xA1B5E6: jz      short locret_A1B5F4
0xA1B5E8: cmp     byte ptr [eax], 53h ; 'S'
0xA1B5EB: jnz     short locret_A1B5F4
0xA1B5ED: push    eax
0xA1B5EE: call    FormHeapFree
0xA1B5F3: pop     ecx
0xA1B5F4: retn
