0x805D40: push    esi
0x805D41: mov     esi, ecx
0x805D43: call    sub_805320; BloodOnDeath decode 2026-05-30: GeometryDecalShader program creation. MAXDECALS="1" is a shader-pass define for geometry decal variants, not the gameplay blood spawn/trail count.
0x805D48: mov     eax, [esi]
0x805D4A: mov     edx, [eax+0A8h]
0x805D50: mov     ecx, esi
0x805D52: pop     esi
0x805D53: jmp     edx
