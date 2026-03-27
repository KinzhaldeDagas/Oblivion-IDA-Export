0xA19170: push    offset flt_B06D64
0xA19175: mov     ecx, offset dword_B07CFC
0xA1917A: call    BSSimpleList_Remove
0xA1917F: mov     eax, off_B06D68; "fAlphaAddExterior:BlurShader"
0xA19184: test    eax, eax
0xA19186: jz      short locret_A19194
0xA19188: cmp     byte ptr [eax], 53h ; 'S'
0xA1918B: jnz     short locret_A19194
0xA1918D: push    eax
0xA1918E: call    FormHeapFree
0xA19193: pop     ecx
0xA19194: retn
