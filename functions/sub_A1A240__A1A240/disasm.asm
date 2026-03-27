0xA1A240: push    offset byte_B07050
0xA1A245: mov     ecx, offset dword_B07CFC
0xA1A24A: call    BSSimpleList_Remove
0xA1A24F: mov     eax, off_B07054; "bUseWaterShader:Water"
0xA1A254: test    eax, eax
0xA1A256: jz      short locret_A1A264
0xA1A258: cmp     byte ptr [eax], 53h ; 'S'
0xA1A25B: jnz     short locret_A1A264
0xA1A25D: push    eax
0xA1A25E: call    FormHeapFree
0xA1A263: pop     ecx
0xA1A264: retn
