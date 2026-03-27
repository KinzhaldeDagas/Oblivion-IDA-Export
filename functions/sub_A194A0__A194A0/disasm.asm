0xA194A0: push    offset dword_B06DEC
0xA194A5: mov     ecx, offset dword_B07CFC
0xA194AA: call    BSSimpleList_Remove
0xA194AF: mov     eax, off_B06DF0; "iBlendType:BlurShaderHDR"
0xA194B4: test    eax, eax
0xA194B6: jz      short locret_A194C4
0xA194B8: cmp     byte ptr [eax], 53h ; 'S'
0xA194BB: jnz     short locret_A194C4
0xA194BD: push    eax
0xA194BE: call    FormHeapFree
0xA194C3: pop     ecx
0xA194C4: retn
