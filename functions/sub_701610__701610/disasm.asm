0x701610: mov     eax, [ecx]; Generic compatible depth/stencil request for a render-target surface: request 32 depth bits and 8 stencil bits from the renderer-specific selector.
0x701612: mov     edx, [esp+renderTargetSurfaceData]
0x701616: mov     eax, [eax+94h]
0x70161C: push    8
0x70161E: push    20h ; ' '
0x701620: push    edx
0x701621: call    eax
0x701623: retn    4; Request 32 depth bits and 8 stencil bits generically; the DX9 surface path normalizes this to the 24/8 compatibility target.
