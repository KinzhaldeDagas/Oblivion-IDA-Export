0xA16D90: push    offset flt_B02DA8
0xA16D95: mov     ecx, offset dword_B07CFC
0xA16D9A: call    BSSimpleList_Remove
0xA16D9F: mov     eax, off_B02DAC; "fLODFadeOutObjectMultCity:LOD"
0xA16DA4: test    eax, eax
0xA16DA6: jz      short locret_A16DB4
0xA16DA8: cmp     byte ptr [eax], 53h ; 'S'
0xA16DAB: jnz     short locret_A16DB4
0xA16DAD: push    eax
0xA16DAE: call    FormHeapFree
0xA16DB3: pop     ecx
0xA16DB4: retn
