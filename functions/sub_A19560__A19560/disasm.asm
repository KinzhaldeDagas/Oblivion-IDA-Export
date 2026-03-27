0xA19560: push    offset flt_B06E0C
0xA19565: mov     ecx, offset dword_B07CFC
0xA1956A: call    BSSimpleList_Remove
0xA1956F: mov     eax, off_B06E10; "fBrightScale:BlurShaderHDR"
0xA19574: test    eax, eax
0xA19576: jz      short locret_A19584
0xA19578: cmp     byte ptr [eax], 53h ; 'S'
0xA1957B: jnz     short locret_A19584
0xA1957D: push    eax
0xA1957E: call    FormHeapFree
0xA19583: pop     ecx
0xA19584: retn
