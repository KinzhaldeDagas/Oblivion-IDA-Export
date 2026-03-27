0x783230: push    esi
0x783231: mov     esi, ecx
0x783233: mov     eax, [esi+2Ch]
0x783236: push    eax
0x783237: mov     dword ptr [esi], offset ??_7NiD3DHLSLPixelShader@@6B@; const NiD3DHLSLPixelShader::`vftable'
0x78323D: call    FormHeapFree
0x783242: mov     ecx, [esi+30h]
0x783245: push    ecx
0x783246: call    FormHeapFree
0x78324B: mov     eax, [esi+34h]
0x78324E: add     esp, 8
0x783251: test    eax, eax
0x783253: jz      short loc_783264
0x783255: mov     edx, [eax]
0x783257: push    eax
0x783258: mov     eax, [edx+8]
0x78325B: call    eax
0x78325D: mov     dword ptr [esi+34h], 0
0x783264: mov     ecx, esi; this
0x783266: pop     esi
0x783267: jmp     ??1NiD3DPixelShader@@UAE@XZ; NiD3DPixelShader::~NiD3DPixelShader(void)
