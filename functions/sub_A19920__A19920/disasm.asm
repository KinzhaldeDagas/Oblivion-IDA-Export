0xA19920: push    offset flt_B06EAC
0xA19925: mov     ecx, offset dword_B07CFC
0xA1992A: call    BSSimpleList_Remove
0xA1992F: mov     eax, off_B06EB0; "fLightLOD1:Display"
0xA19934: test    eax, eax
0xA19936: jz      short locret_A19944
0xA19938: cmp     byte ptr [eax], 53h ; 'S'
0xA1993B: jnz     short locret_A19944
0xA1993D: push    eax
0xA1993E: call    FormHeapFree
0xA19943: pop     ecx
0xA19944: retn
