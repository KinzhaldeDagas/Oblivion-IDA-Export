0x7F2130: mov     eax, [ecx+0F0h]; SpeedTreeShaderPPLightingProperty STSPData setter: writes data pointer +0x08 and count word +0x0C in the referenced STSPData.
0x7F2136: test    eax, eax
0x7F2138: jz      short locret_7F214A
0x7F213A: mov     ecx, [esp+streamData]
0x7F213E: mov     dx, [esp+vertexCount]
0x7F2143: mov     [eax+8], ecx
0x7F2146: mov     [eax+0Ch], dx
0x7F214A: retn    8
