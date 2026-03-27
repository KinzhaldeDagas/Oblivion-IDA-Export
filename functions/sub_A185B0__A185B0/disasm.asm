0xA185B0: push    offset flt_B06538
0xA185B5: mov     ecx, offset dword_B07CFC
0xA185BA: call    BSSimpleList_Remove
0xA185BF: mov     eax, off_B0653C; "fAnimationDefaultBlend:General"
0xA185C4: test    eax, eax
0xA185C6: jz      short locret_A185D4
0xA185C8: cmp     byte ptr [eax], 53h ; 'S'
0xA185CB: jnz     short locret_A185D4
0xA185CD: push    eax
0xA185CE: call    FormHeapFree
0xA185D3: pop     ecx
0xA185D4: retn
