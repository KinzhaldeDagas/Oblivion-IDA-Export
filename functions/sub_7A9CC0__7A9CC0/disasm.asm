0x7A9CC0: push    1; a1
0x7A9CC2: call    GetShaderDefinition; DeferredRendering HDR+Bloom dependency: shader definition IDs 0x07=Blur/Bloom, 0x08=HDR, 0x0C=Copy fallback. Oblivion behavior observed here; both post-processes are forced by list composition, not Fallout naming.
0x7A9CC7: add     eax, 4
0x7A9CCA: mov     eax, [eax]
0x7A9CCC: add     esp, 4
0x7A9CCF: retn
