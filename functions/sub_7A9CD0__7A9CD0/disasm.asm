0x7A9CD0: push    9; Resolve shader definition 9 and bind the supplied NiRenderedTexture through its image-space shader.
0x7A9CD2: call    GetShaderDefinition; DeferredRendering HDR+Bloom dependency: shader definition IDs 0x07=Blur/Bloom, 0x08=HDR, 0x0C=Copy fallback. Oblivion behavior observed here; both post-processes are forced by list composition, not Fallout naming.
0x7A9CD7: mov     ecx, [esp+4+a2]
0x7A9CDB: add     esp, 4
0x7A9CDE: add     eax, 4
0x7A9CE1: push    ecx; renderedTexture
0x7A9CE2: mov     ecx, [eax]; imageSpaceShader
0x7A9CE4: call    BSImageSpaceShader_BindFirstFreeRenderedTexture; Find the first empty rendered-texture slot in a BSImageSpaceShader, replace its strong-owned texture reference, and AddRef the new texture.
0x7A9CE9: retn
