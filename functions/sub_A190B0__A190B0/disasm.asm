0xA190B0: push    offset dword_B06D44
0xA190B5: mov     ecx, offset dword_B07CFC
0xA190BA: call    BSSimpleList_Remove
0xA190BF: mov     eax, off_B06D48; "iNumBlurpasses:BlurShader"
0xA190C4: test    eax, eax
0xA190C6: jz      short locret_A190D4
0xA190C8: cmp     byte ptr [eax], 53h ; 'S'
0xA190CB: jnz     short locret_A190D4
0xA190CD: push    eax
0xA190CE: call    FormHeapFree
0xA190D3: pop     ecx
0xA190D4: retn
