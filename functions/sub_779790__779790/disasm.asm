0x779790: mov     ecx, [ecx+28h]; Load shader+0x28 render-state group. If present, restore its recorded D3D state IDs.
0x779793: test    ecx, ecx
0x779795: jz      short loc_77979C
0x779797: call    NiD3DRenderStateGroup__RestoreRenderState; Restore every render-state ID saved in the shader's state group. Automatic-constant enable flags are not part of this group.
0x77979C: xor     eax, eax
0x77979E: retn    1Ch
