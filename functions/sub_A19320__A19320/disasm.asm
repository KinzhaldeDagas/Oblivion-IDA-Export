0xA19320: push    offset dword_B06DAC
0xA19325: mov     ecx, offset dword_B07CFC
0xA1932A: call    BSSimpleList_Remove
0xA1932F: mov     eax, off_B06DB0; "bAllow30Shaders:Display"
0xA19334: test    eax, eax
0xA19336: jz      short locret_A19344
0xA19338: cmp     byte ptr [eax], 53h ; 'S'
0xA1933B: jnz     short locret_A19344
0xA1933D: push    eax
0xA1933E: call    FormHeapFree
0xA19343: pop     ecx
0xA19344: retn
