0xA194D0: push    offset dword_B06DF4
0xA194D5: mov     ecx, offset dword_B07CFC
0xA194DA: call    BSSimpleList_Remove
0xA194DF: mov     eax, off_B06DF8; "iNumBlurpasses:BlurShaderHDR"
0xA194E4: test    eax, eax
0xA194E6: jz      short locret_A194F4
0xA194E8: cmp     byte ptr [eax], 53h ; 'S'
0xA194EB: jnz     short locret_A194F4
0xA194ED: push    eax
0xA194EE: call    FormHeapFree
0xA194F3: pop     ecx
0xA194F4: retn
