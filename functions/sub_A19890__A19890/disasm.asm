0xA19890: push    offset flt_B06E94
0xA19895: mov     ecx, offset dword_B07CFC
0xA1989A: call    BSSimpleList_Remove
0xA1989F: mov     eax, off_B06E98; "fEmissiveHDRMult:BlurShaderHDRInterior"
0xA198A4: test    eax, eax
0xA198A6: jz      short locret_A198B4
0xA198A8: cmp     byte ptr [eax], 53h ; 'S'
0xA198AB: jnz     short locret_A198B4
0xA198AD: push    eax
0xA198AE: call    FormHeapFree
0xA198B3: pop     ecx
0xA198B4: retn
