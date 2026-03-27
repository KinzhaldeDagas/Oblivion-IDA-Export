0xA190E0: push    offset flt_B06D4C
0xA190E5: mov     ecx, offset dword_B07CFC
0xA190EA: call    BSSimpleList_Remove
0xA190EF: mov     eax, off_B06D50; "fBlurRadius:BlurShader"
0xA190F4: test    eax, eax
0xA190F6: jz      short locret_A19104
0xA190F8: cmp     byte ptr [eax], 53h ; 'S'
0xA190FB: jnz     short locret_A19104
0xA190FD: push    eax
0xA190FE: call    FormHeapFree
0xA19103: pop     ecx
0xA19104: retn
