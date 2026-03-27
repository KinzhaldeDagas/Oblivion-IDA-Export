0xA1B5A0: push    offset flt_B08188
0xA1B5A5: mov     ecx, offset dword_B07CFC
0xA1B5AA: call    BSSimpleList_Remove
0xA1B5AF: mov     eax, off_B0818C; "fLinearRadiusMult:bLightAttenuation"
0xA1B5B4: test    eax, eax
0xA1B5B6: jz      short locret_A1B5C4
0xA1B5B8: cmp     byte ptr [eax], 53h ; 'S'
0xA1B5BB: jnz     short locret_A1B5C4
0xA1B5BD: push    eax
0xA1B5BE: call    FormHeapFree
0xA1B5C3: pop     ecx
0xA1B5C4: retn
