0xA195C0: push    offset flt_B06E1C
0xA195C5: mov     ecx, offset dword_B07CFC
0xA195CA: call    BSSimpleList_Remove
0xA195CF: mov     eax, off_B06E20; "fSkyBrightness:BlurShaderHDR"
0xA195D4: test    eax, eax
0xA195D6: jz      short locret_A195E4
0xA195D8: cmp     byte ptr [eax], 53h ; 'S'
0xA195DB: jnz     short locret_A195E4
0xA195DD: push    eax
0xA195DE: call    FormHeapFree
0xA195E3: pop     ecx
0xA195E4: retn
