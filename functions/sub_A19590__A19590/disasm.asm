0xA19590: push    offset flt_B06E14
0xA19595: mov     ecx, offset dword_B07CFC
0xA1959A: call    BSSimpleList_Remove
0xA1959F: mov     eax, off_B06E18; "fSunBrightness:BlurShaderHDR"
0xA195A4: test    eax, eax
0xA195A6: jz      short locret_A195B4
0xA195A8: cmp     byte ptr [eax], 53h ; 'S'
0xA195AB: jnz     short locret_A195B4
0xA195AD: push    eax
0xA195AE: call    FormHeapFree
0xA195B3: pop     ecx
0xA195B4: retn
