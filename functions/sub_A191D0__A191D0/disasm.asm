0xA191D0: push    offset flt_B06D74
0xA191D5: mov     ecx, offset dword_B07CFC
0xA191DA: call    BSSimpleList_Remove
0xA191DF: mov     eax, off_B06D78; "fSkyBrightness:BlurShader"
0xA191E4: test    eax, eax
0xA191E6: jz      short locret_A191F4
0xA191E8: cmp     byte ptr [eax], 53h ; 'S'
0xA191EB: jnz     short locret_A191F4
0xA191ED: push    eax
0xA191EE: call    FormHeapFree
0xA191F3: pop     ecx
0xA191F4: retn
