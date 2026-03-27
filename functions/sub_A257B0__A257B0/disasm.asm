0xA257B0: push    offset flt_B14E34
0xA257B5: mov     ecx, offset dword_B07CFC
0xA257BA: call    BSSimpleList_Remove
0xA257BF: mov     eax, off_B14E38; "fQuadrupedPitchMult:HAVOK"
0xA257C4: test    eax, eax
0xA257C6: jz      short locret_A257D4
0xA257C8: cmp     byte ptr [eax], 53h ; 'S'
0xA257CB: jnz     short locret_A257D4
0xA257CD: push    eax
0xA257CE: call    FormHeapFree
0xA257D3: pop     ecx
0xA257D4: retn
