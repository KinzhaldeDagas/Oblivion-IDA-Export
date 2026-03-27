0xA1B3C0: push    offset byte_B08138
0xA1B3C5: mov     ecx, offset dword_B07CFC
0xA1B3CA: call    BSSimpleList_Remove
0xA1B3CF: mov     eax, off_B0813C; "bUseConstant:bLightAttenuation"
0xA1B3D4: test    eax, eax
0xA1B3D6: jz      short locret_A1B3E4
0xA1B3D8: cmp     byte ptr [eax], 53h ; 'S'
0xA1B3DB: jnz     short locret_A1B3E4
0xA1B3DD: push    eax
0xA1B3DE: call    FormHeapFree
0xA1B3E3: pop     ecx
0xA1B3E4: retn
