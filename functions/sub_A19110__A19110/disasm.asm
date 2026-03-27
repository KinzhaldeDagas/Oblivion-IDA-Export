0xA19110: push    offset dword_B06D54
0xA19115: mov     ecx, offset dword_B07CFC
0xA1911A: call    BSSimpleList_Remove
0xA1911F: mov     eax, off_B06D58; "iBlurTexSize:BlurShader"
0xA19124: test    eax, eax
0xA19126: jz      short locret_A19134
0xA19128: cmp     byte ptr [eax], 53h ; 'S'
0xA1912B: jnz     short locret_A19134
0xA1912D: push    eax
0xA1912E: call    FormHeapFree
0xA19133: pop     ecx
0xA19134: retn
