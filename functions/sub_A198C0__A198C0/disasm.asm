0xA198C0: push    offset flt_B06E9C
0xA198C5: mov     ecx, offset dword_B07CFC
0xA198CA: call    BSSimpleList_Remove
0xA198CF: mov     eax, off_B06EA0; "fUpperLUMClamp:BlurShaderHDRInterior"
0xA198D4: test    eax, eax
0xA198D6: jz      short locret_A198E4
0xA198D8: cmp     byte ptr [eax], 53h ; 'S'
0xA198DB: jnz     short locret_A198E4
0xA198DD: push    eax
0xA198DE: call    FormHeapFree
0xA198E3: pop     ecx
0xA198E4: retn
