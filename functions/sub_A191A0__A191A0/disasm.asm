0xA191A0: push    offset flt_B06D6C
0xA191A5: mov     ecx, offset dword_B07CFC
0xA191AA: call    BSSimpleList_Remove
0xA191AF: mov     eax, off_B06D70; "fSunBrightness:BlurShader"
0xA191B4: test    eax, eax
0xA191B6: jz      short locret_A191C4
0xA191B8: cmp     byte ptr [eax], 53h ; 'S'
0xA191BB: jnz     short locret_A191C4
0xA191BD: push    eax
0xA191BE: call    FormHeapFree
0xA191C3: pop     ecx
0xA191C4: retn
