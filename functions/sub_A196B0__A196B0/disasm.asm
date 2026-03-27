0xA196B0: push    offset flt_B06E44
0xA196B5: mov     ecx, offset dword_B07CFC
0xA196BA: call    BSSimpleList_Remove
0xA196BF: mov     eax, off_B06E48; "fEmissiveHDRMult:BlurShaderHDR"
0xA196C4: test    eax, eax
0xA196C6: jz      short locret_A196D4
0xA196C8: cmp     byte ptr [eax], 53h ; 'S'
0xA196CB: jnz     short locret_A196D4
0xA196CD: push    eax
0xA196CE: call    FormHeapFree
0xA196D3: pop     ecx
0xA196D4: retn
