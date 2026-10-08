0x780840: push    esi; Apply NiPropertyState in stock order; alpha property is propertyState[2] and is applied before the shader pass.
0x780841: push    edi
0x780842: mov     edi, [esp+8+propertyState]
0x780846: mov     esi, ecx
0x780848: mov     ecx, [edi+28h]; Pass324 runtime crash decode (CD, 2026-07-14 23:14:55): generic NiDX9RenderState::UpdateRenderState dereferenced null state argument (EDI/a2=0) at a2+0x28. Caller 0x0076C9A0 received renderer->propertyState as a5; stack returned through generic geometry draw and VisualEffectShaders. This is outside ShadowSceneLight 0x007D46C0/0x007D59D3 and CE later completed 5853 + 1530 balanced ShadowPasses with the projector hook still installed.
0x78084B: mov     eax, [esi]
0x78084D: mov     edx, [eax+24h]
0x780850: push    ecx
0x780851: mov     ecx, esi
0x780853: call    edx
0x780855: mov     ecx, [edi+18h]
0x780858: mov     eax, [esi]
0x78085A: mov     edx, [eax+18h]
0x78085D: push    ecx
0x78085E: mov     ecx, esi
0x780860: call    edx
0x780862: mov     ecx, [edi+8]
0x780865: mov     eax, [esi]
0x780867: mov     edx, [eax+8]
0x78086A: push    ecx
0x78086B: mov     ecx, esi
0x78086D: call    edx; Apply propertyState[2] through NiD3DRenderState::ApplyAlphaProperty before the shader pass and texture-stage application.
0x78086F: mov     ecx, [edi+2Ch]
0x780872: mov     eax, [esi]
0x780874: mov     edx, [eax+28h]
0x780877: push    ecx
0x780878: mov     ecx, esi
0x78087A: call    edx
0x78087C: mov     ecx, [edi+1Ch]
0x78087F: mov     eax, [esi]
0x780881: mov     edx, [eax+20h]
0x780884: push    ecx
0x780885: mov     ecx, esi
0x780887: call    edx
0x780889: mov     ecx, [edi+10h]
0x78088C: mov     eax, [esi]
0x78088E: mov     edx, [eax+14h]
0x780891: push    ecx
0x780892: mov     ecx, esi
0x780894: call    edx
0x780896: pop     edi
0x780897: pop     esi
0x780898: retn    4
