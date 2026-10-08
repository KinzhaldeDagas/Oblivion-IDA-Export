0x77AF50: movzx   edx, [esp+arg_0]; MoonSugarEffect decode: NiDX9RenderState SetVertexBlending helper. Maps requested blend count through cached table at this+0x0C and writes D3DRS_VERTEXBLEND (0x97).
0x77AF55: mov     edx, [ecx+edx*4+0Ch]
0x77AF59: mov     eax, [ecx]
0x77AF5B: mov     eax, [eax+64h]
0x77AF5E: push    0
0x77AF60: push    edx
0x77AF61: push    97h ; '—'
0x77AF66: call    eax
0x77AF68: retn    4
