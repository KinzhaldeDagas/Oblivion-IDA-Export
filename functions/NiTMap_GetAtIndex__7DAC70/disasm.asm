0x7DAC70: push    ecx; [Verified] Map lookup wrapper used by both CreateVertexShader and CreatePixelShader. It delegates the supplied program key to NiTMap_GetAt and returns the associated ShaderBufferEntry pointer, or null when absent.
0x7DAC71: mov     edx, [esp+4+arg_0]
0x7DAC75: lea     eax, [esp+4+var_4]
0x7DAC78: push    eax
0x7DAC79: push    edx
0x7DAC7A: add     ecx, 8
0x7DAC7D: mov     [esp+0Ch+var_4], 0
0x7DAC85: call    NiTMap_GetAt
0x7DAC8A: mov     eax, [esp+4+var_4]
0x7DAC8D: pop     ecx
0x7DAC8E: retn    4
