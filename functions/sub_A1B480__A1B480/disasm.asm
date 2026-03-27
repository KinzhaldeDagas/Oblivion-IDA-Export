0xA1B480: push    offset dword_B08158
0xA1B485: mov     ecx, offset dword_B07CFC
0xA1B48A: call    BSSimpleList_Remove
0xA1B48F: mov     eax, off_B0815C; "uLinearMethod:bLightAttenuation"
0xA1B494: test    eax, eax
0xA1B496: jz      short locret_A1B4A4
0xA1B498: cmp     byte ptr [eax], 53h ; 'S'
0xA1B49B: jnz     short locret_A1B4A4
0xA1B49D: push    eax
0xA1B49E: call    FormHeapFree
0xA1B4A3: pop     ecx
0xA1B4A4: retn
