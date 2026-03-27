0xA1A940: push    offset byte_B07644
0xA1A945: mov     ecx, offset dword_B07CFC
0xA1A94A: call    BSSimpleList_Remove
0xA1A94F: mov     eax, off_B07648; "bLODPopActors:LOD"
0xA1A954: test    eax, eax
0xA1A956: jz      short locret_A1A964
0xA1A958: cmp     byte ptr [eax], 53h ; 'S'
0xA1A95B: jnz     short locret_A1A964
0xA1A95D: push    eax
0xA1A95E: call    FormHeapFree
0xA1A963: pop     ecx
0xA1A964: retn
