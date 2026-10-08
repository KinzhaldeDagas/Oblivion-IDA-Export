0x7BD0A0: push    ebx
0x7BD0A1: push    esi
0x7BD0A2: mov     esi, ecx
0x7BD0A4: call    sub_8025F0; Generic BSShader initialization used by SpeedTreeFrondShader vtable +0x84: sets renderer, invokes setup/check virtuals, and allocates one pass slot through sub_76CCA0.
0x7BD0A9: mov     ecx, [esi+70h]
0x7BD0AC: test    ecx, ecx
0x7BD0AE: mov     bl, al
0x7BD0B0: jz      short loc_7BD0C4
0x7BD0B2: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7BD0B6: jnz     short loc_7BD0BD
0x7BD0B8: call    NiD3DPass_ReleaseToPool; Release a renderer-owned NiD3DPass: release attached resources and return the pass object to the global pool when its reference count reaches zero.
0x7BD0BD: mov     dword ptr [esi+70h], 0
0x7BD0C4: pop     esi
0x7BD0C5: mov     al, bl
0x7BD0C7: pop     ebx
0x7BD0C8: retn
