0x7C15C0: mov     eax, dword ptr [esp+targetFlags]
0x7C15C4: mov     edx, [esp+aux]
0x7C15C8: push    eax; targetFlags
0x7C15C9: mov     eax, [esp+4+d3dFormat]
0x7C15CD: push    edx; aux
0x7C15CE: mov     edx, [esp+8+renderer]
0x7C15D2: push    eax; d3dFormat
0x7C15D3: mov     eax, [esp+0Ch+width]
0x7C15D7: push    eax; height
0x7C15D8: push    eax; width
0x7C15D9: push    edx; renderer
0x7C15DA: call    BSTextureManager_CreateRenderedTexture; Oblivion BSTextureManager rendered-texture creator. Builds a BSRenderedTexture for the requested dimensions, D3D format override, auxiliary value, and target flags; eligible targets receive the manager depth-stencil unless flags suppress it.
0x7C15DF: retn    14h
