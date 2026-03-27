0xA19800: push    offset flt_B06E7C
0xA19805: mov     ecx, offset dword_B07CFC
0xA1980A: call    BSSimpleList_Remove
0xA1980F: mov     eax, off_B06E80; "fBrightClamp:BlurShaderHDRInterior"
0xA19814: test    eax, eax
0xA19816: jz      short locret_A19824
0xA19818: cmp     byte ptr [eax], 53h ; 'S'
0xA1981B: jnz     short locret_A19824
0xA1981D: push    eax
0xA1981E: call    FormHeapFree
0xA19823: pop     ecx
0xA19824: retn
