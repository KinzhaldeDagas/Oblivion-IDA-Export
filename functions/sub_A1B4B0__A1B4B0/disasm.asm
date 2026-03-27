0xA1B4B0: push    offset dword_B08160
0xA1B4B5: mov     ecx, offset dword_B07CFC
0xA1B4BA: call    BSSimpleList_Remove
0xA1B4BF: mov     eax, off_B08164; "uQuadraticMethod:bLightAttenuation"
0xA1B4C4: test    eax, eax
0xA1B4C6: jz      short locret_A1B4D4
0xA1B4C8: cmp     byte ptr [eax], 53h ; 'S'
0xA1B4CB: jnz     short locret_A1B4D4
0xA1B4CD: push    eax
0xA1B4CE: call    FormHeapFree
0xA1B4D3: pop     ecx
0xA1B4D4: retn
