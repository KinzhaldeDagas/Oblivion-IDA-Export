0x75F9E0: mov     ecx, [ecx+30h]; this
0x75F9E3: test    ecx, ecx
0x75F9E5: jz      short loc_75F9EC
0x75F9E7: call    NiD3DRenderStateGroup__RestoreRenderState; Restore every D3D render-state ID recorded in a NiD3DRenderStateGroup. Walks the group's linked saved-state list and asks the global NiDX9RenderState to restore each ID.
0x75F9EC: xor     eax, eax
0x75F9EE: retn    4
