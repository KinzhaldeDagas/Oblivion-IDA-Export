0xA1BDC0: push    offset flt_B09AF8
0xA1BDC5: mov     ecx, offset dword_B07CFC
0xA1BDCA: call    BSSimpleList_Remove
0xA1BDCF: mov     eax, off_B09AFC; "fLODQuadMinLoadDistance:LOD"
0xA1BDD4: test    eax, eax
0xA1BDD6: jz      short locret_A1BDE4
0xA1BDD8: cmp     byte ptr [eax], 53h ; 'S'
0xA1BDDB: jnz     short locret_A1BDE4
0xA1BDDD: push    eax
0xA1BDDE: call    FormHeapFree
0xA1BDE3: pop     ecx
0xA1BDE4: retn
