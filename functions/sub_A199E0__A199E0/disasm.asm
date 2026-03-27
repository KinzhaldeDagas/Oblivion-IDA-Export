0xA199E0: push    offset flt_B06ECC
0xA199E5: mov     ecx, offset dword_B07CFC
0xA199EA: call    BSSimpleList_Remove
0xA199EF: mov     eax, off_B06ED0; "fSpecularLOD1:Display"
0xA199F4: test    eax, eax
0xA199F6: jz      short locret_A19A04
0xA199F8: cmp     byte ptr [eax], 53h ; 'S'
0xA199FB: jnz     short locret_A19A04
0xA199FD: push    eax
0xA199FE: call    FormHeapFree
0xA19A03: pop     ecx
0xA19A04: retn
