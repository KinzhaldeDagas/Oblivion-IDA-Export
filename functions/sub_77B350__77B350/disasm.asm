0x77B350: cmp     [esp+savePrevious], 0; MoonSugarEffect decode: NiDX9RenderState SetVertexShader cache. Caches current shader at +0xFE0, optional previous at +0xFE4, and only calls D3D SetVertexShader when value changes.
0x77B355: jz      short loc_77B363
0x77B357: mov     eax, [ecx+0FE0h]
0x77B35D: mov     [ecx+0FE4h], eax
0x77B363: mov     eax, [esp+shader]
0x77B367: cmp     [ecx+0FE0h], eax
0x77B36D: jz      short locret_77B38D
0x77B36F: mov     [ecx+0FE0h], eax
0x77B375: mov     ecx, [ecx+0FF8h]
0x77B37B: mov     edx, [ecx]
0x77B37D: mov     dword ptr [esp+savePrevious], eax
0x77B381: mov     eax, [edx+170h]
0x77B387: mov     [esp+shader], ecx
0x77B38B: jmp     eax
0x77B38D: retn    8
