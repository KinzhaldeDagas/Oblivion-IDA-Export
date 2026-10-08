0x7C2420: mov     eax, [esp+a7]
0x7C2424: mov     edx, [esp+a6]
0x7C2428: push    eax; aux
0x7C2429: mov     eax, [esp+4+a5]
0x7C242D: push    edx; d3dFormat
0x7C242E: mov     edx, [esp+8+a2]
0x7C2432: push    eax; targetFlags
0x7C2433: mov     eax, [esp+0Ch+a3]
0x7C2437: push    eax; height
0x7C2438: push    eax; width
0x7C2439: push    edx; renderer
0x7C243A: call    BSTextureManager_GetOrCreateRenderedTexture; Oblivion BSTextureManager cache lookup/allocation. Reuses a matching BSRenderedTexture by size, format, auxiliary value, and flags or creates one, then moves the resource to the in-use list.
0x7C243F: retn    14h
