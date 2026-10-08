0x7F1AB0: mov     eax, [ecx+0A4h]; SpeedTreeShaderLightingProperty STSPData setter: writes data pointer +0x08 and count word +0x0C in the referenced STSPData.
0x7F1AB6: test    eax, eax
0x7F1AB8: jz      short locret_7F1ACA
0x7F1ABA: mov     ecx, [esp+streamData]
0x7F1ABE: mov     dx, [esp+vertexCount]
0x7F1AC3: mov     [eax+8], ecx
0x7F1AC6: mov     [eax+0Ch], dx
0x7F1ACA: retn    8
