0xA198F0: push    offset flt_B06EA4
0xA198F5: mov     ecx, offset dword_B07CFC
0xA198FA: call    BSSimpleList_Remove
0xA198FF: mov     eax, off_B06EA8; "fTargetLUM:BlurShaderHDRInterior"
0xA19904: test    eax, eax
0xA19906: jz      short locret_A19914
0xA19908: cmp     byte ptr [eax], 53h ; 'S'
0xA1990B: jnz     short locret_A19914
0xA1990D: push    eax
0xA1990E: call    FormHeapFree
0xA19913: pop     ecx
0xA19914: retn
