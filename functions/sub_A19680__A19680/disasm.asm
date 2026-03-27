0xA19680: push    offset flt_B06E3C
0xA19685: mov     ecx, offset dword_B07CFC
0xA1968A: call    BSSimpleList_Remove
0xA1968F: mov     eax, off_B06E40; "fEyeAdaptSpeed:BlurShaderHDR"
0xA19694: test    eax, eax
0xA19696: jz      short locret_A196A4
0xA19698: cmp     byte ptr [eax], 53h ; 'S'
0xA1969B: jnz     short locret_A196A4
0xA1969D: push    eax
0xA1969E: call    FormHeapFree
0xA196A3: pop     ecx
0xA196A4: retn
