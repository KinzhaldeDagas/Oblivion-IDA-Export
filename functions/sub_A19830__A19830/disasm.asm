0xA19830: push    offset flt_B06E84
0xA19835: mov     ecx, offset dword_B07CFC
0xA1983A: call    BSSimpleList_Remove
0xA1983F: mov     eax, off_B06E88; "fBrightScale:BlurShaderHDRInterior"
0xA19844: test    eax, eax
0xA19846: jz      short locret_A19854
0xA19848: cmp     byte ptr [eax], 53h ; 'S'
0xA1984B: jnz     short locret_A19854
0xA1984D: push    eax
0xA1984E: call    FormHeapFree
0xA19853: pop     ecx
0xA19854: retn
