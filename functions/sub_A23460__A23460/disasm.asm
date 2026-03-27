0xA23460: push    offset dword_B120EC
0xA23465: mov     ecx, offset dword_B07CFC
0xA2346A: call    BSSimpleList_Remove
0xA2346F: mov     eax, off_B120F0; "uiFaceGenMaxEGMDataSize:General"
0xA23474: test    eax, eax
0xA23476: jz      short locret_A23484
0xA23478: cmp     byte ptr [eax], 53h ; 'S'
0xA2347B: jnz     short locret_A23484
0xA2347D: push    eax
0xA2347E: call    FormHeapFree
0xA23483: pop     ecx
0xA23484: retn
