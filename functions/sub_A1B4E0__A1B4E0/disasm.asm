0xA1B4E0: push    offset flt_B08168
0xA1B4E5: mov     ecx, offset dword_B07CFC
0xA1B4EA: call    BSSimpleList_Remove
0xA1B4EF: mov     eax, off_B0816C; "fLinearValue:bLightAttenuation"
0xA1B4F4: test    eax, eax
0xA1B4F6: jz      short locret_A1B504
0xA1B4F8: cmp     byte ptr [eax], 53h ; 'S'
0xA1B4FB: jnz     short locret_A1B504
0xA1B4FD: push    eax
0xA1B4FE: call    FormHeapFree
0xA1B503: pop     ecx
0xA1B504: retn
