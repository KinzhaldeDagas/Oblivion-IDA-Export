0x9A4AC0: push    esi
0x9A4AC1: mov     esi, [esp+4+entry]
0x9A4AC5: push    esi; entry
0x9A4AC6: call    NiD3DShaderConstantMap_ConvertMappedValue; DX11 mapped-float provenance (2026-09-28):9A92E0 does NOT always return entry+30 directly. size(+28)/stride(+2C) counts1/2/3 broadcast or fill a scratch float4;8/9/12 expand matrices into scratch. Counts4 and16 pass the pointer through. Other counts pass through only when stride==4 and component count is divisible by4. A source-address provenance resolver must reject/bypass scratch-expansion cases rather than treating every mapped source as a direct float4 array.
0x9A4ACB: test    eax, eax
0x9A4ACD: jnz     short loc_9A4AD8
0x9A4ACF: mov     eax, 1
0x9A4AD4: pop     esi
0x9A4AD5: retn    0Ch
0x9A4AD8: mov     ecx, [esp+4+program]
0x9A4ADC: mov     edx, [ecx]
0x9A4ADE: push    0
0x9A4AE0: push    eax
0x9A4AE1: mov     eax, [edx+28h]
0x9A4AE4: push    esi
0x9A4AE5: call    eax
0x9A4AE7: neg     al
0x9A4AE9: pop     esi
0x9A4AEA: sbb     eax, eax
0x9A4AEC: and     eax, 7FFFFFB0h
0x9A4AF1: add     eax, 80000050h
0x9A4AF6: retn    0Ch
