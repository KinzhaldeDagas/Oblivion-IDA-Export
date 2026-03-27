0xA242B0: push    offset dword_B12DB4
0xA242B5: mov     ecx, offset dword_B07CFC
0xA242BA: call    BSSimpleList_Remove
0xA242BF: mov     eax, off_B12DB8; "iDebugTextFont:Menu"
0xA242C4: test    eax, eax
0xA242C6: jz      short locret_A242D4
0xA242C8: cmp     byte ptr [eax], 53h ; 'S'
0xA242CB: jnz     short locret_A242D4
0xA242CD: push    eax
0xA242CE: call    FormHeapFree
0xA242D3: pop     ecx
0xA242D4: retn
