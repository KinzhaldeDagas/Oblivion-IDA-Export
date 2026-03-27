0xA197A0: push    offset dword_B06E6C
0xA197A5: mov     ecx, offset dword_B07CFC
0xA197AA: call    BSSimpleList_Remove
0xA197AF: mov     eax, off_B06E70; "iNumBlurpasses:BlurShaderHDRInterior"
0xA197B4: test    eax, eax
0xA197B6: jz      short locret_A197C4
0xA197B8: cmp     byte ptr [eax], 53h ; 'S'
0xA197BB: jnz     short locret_A197C4
0xA197BD: push    eax
0xA197BE: call    FormHeapFree
0xA197C3: pop     ecx
0xA197C4: retn
