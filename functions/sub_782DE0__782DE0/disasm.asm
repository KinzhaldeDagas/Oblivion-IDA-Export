0x782DE0: cmp     byte ptr ds:0B4295Bh, 0
0x782DE7: push    esi
0x782DE8: mov     esi, [ecx+14h]
0x782DEB: jnz     short loc_782DF2
0x782DED: call    NiD3DHLSLShader__InitializeParameterClassTables; Initializes the HLSL/D3DX parameter-class dispatch lookup once (observed identity mapping for supported class codes) and sets the ready flag.
0x782DF2: and     esi, 0FFh
0x782DF8: xor     eax, eax
0x782DFA: cmp     dword ptr ds:0B428D8h[esi*4], 8
0x782E02: pop     esi
0x782E03: setz    al
0x782E06: retn
