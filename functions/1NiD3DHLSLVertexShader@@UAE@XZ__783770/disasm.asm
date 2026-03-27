0x783770: push    esi
0x783771: mov     esi, ecx
0x783773: mov     eax, [esi+38h]
0x783776: push    eax
0x783777: mov     dword ptr [esi], offset ??_7NiD3DHLSLVertexShader@@6B@; const NiD3DHLSLVertexShader::`vftable'
0x78377D: call    FormHeapFree
0x783782: mov     ecx, [esi+3Ch]
0x783785: push    ecx
0x783786: call    FormHeapFree
0x78378B: mov     eax, [esi+40h]
0x78378E: add     esp, 8
0x783791: test    eax, eax
0x783793: jz      short loc_7837A4
0x783795: mov     edx, [eax]
0x783797: push    eax
0x783798: mov     eax, [edx+8]
0x78379B: call    eax
0x78379D: mov     dword ptr [esi+40h], 0
0x7837A4: mov     ecx, esi; this
0x7837A6: pop     esi
0x7837A7: jmp     ??1NiD3DVertexShader@@UAE@XZ; NiD3DVertexShader::~NiD3DVertexShader(void)
