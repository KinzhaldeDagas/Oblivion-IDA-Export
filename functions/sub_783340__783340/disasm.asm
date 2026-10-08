0x783340: cmp     byte ptr ds:0B4295Bh, 0
0x783347: push    esi
0x783348: mov     esi, [ecx+14h]
0x78334B: jnz     short loc_783352
0x78334D: call    NiD3DHLSLShader__InitializeParameterClassTables; Initializes the HLSL/D3DX parameter-class dispatch lookup once (observed identity mapping for supported class codes) and sets the ready flag.
0x783352: and     esi, 0FFh
0x783358: xor     eax, eax
0x78335A: cmp     dword ptr ds:0B428D8h[esi*4], 5
0x783362: pop     esi
0x783363: setz    al
0x783366: retn
