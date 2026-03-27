0xA19470: push    offset bIsHDR
0xA19475: mov     ecx, offset dword_B07CFC
0xA1947A: call    BSSimpleList_Remove
0xA1947F: mov     eax, off_B06DE8; "bDoHighDynamicRange:BlurShaderHDR"
0xA19484: test    eax, eax
0xA19486: jz      short locret_A19494
0xA19488: cmp     byte ptr [eax], 53h ; 'S'
0xA1948B: jnz     short locret_A19494
0xA1948D: push    eax
0xA1948E: call    FormHeapFree
0xA19493: pop     ecx
0xA19494: retn
