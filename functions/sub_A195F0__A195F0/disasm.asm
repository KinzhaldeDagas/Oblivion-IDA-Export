0xA195F0: push    offset flt_B06E24
0xA195F5: mov     ecx, offset dword_B07CFC
0xA195FA: call    BSSimpleList_Remove
0xA195FF: mov     eax, off_B06E28; "fSISpecularMult:BlurShaderHDR"
0xA19604: test    eax, eax
0xA19606: jz      short locret_A19614
0xA19608: cmp     byte ptr [eax], 53h ; 'S'
0xA1960B: jnz     short locret_A19614
0xA1960D: push    eax
0xA1960E: call    FormHeapFree
0xA19613: pop     ecx
0xA19614: retn
