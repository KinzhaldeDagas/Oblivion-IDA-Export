0xA197D0: push    offset flt_B06E74
0xA197D5: mov     ecx, offset dword_B07CFC
0xA197DA: call    BSSimpleList_Remove
0xA197DF: mov     eax, off_B06E78; "fBlurRadius:BlurShaderHDRInterior"
0xA197E4: test    eax, eax
0xA197E6: jz      short locret_A197F4
0xA197E8: cmp     byte ptr [eax], 53h ; 'S'
0xA197EB: jnz     short locret_A197F4
0xA197ED: push    eax
0xA197EE: call    FormHeapFree
0xA197F3: pop     ecx
0xA197F4: retn
