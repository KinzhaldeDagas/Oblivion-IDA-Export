0x76C730: push    esi; Set or replace one D3D render state on a NiD3DPass. Lazily acquires the pass RenderStateGroup and delegates to NiD3DRenderStateGroup_SetRenderState.
0x76C731: mov     esi, ecx
0x76C733: cmp     dword ptr [esi+30h], 0
0x76C737: jnz     short loc_76C741
0x76C739: call    NiD3DRenderStateGroupPool_Acquire; Acquire a pooled NiD3DRenderStateGroup for a pass.
0x76C73E: mov     [esi+30h], eax
0x76C741: mov     eax, dword ptr [esp+4+restore]
0x76C745: mov     ecx, [esp+4+value]
0x76C749: mov     edx, [esp+4+state]
0x76C74D: push    eax
0x76C74E: push    ecx
0x76C74F: mov     ecx, [esi+30h]
0x76C752: push    edx
0x76C753: call    NiD3DRenderStateGroup_SetRenderState; Insert or update one D3D render-state id/value pair in a NiD3DRenderStateGroup.
0x76C758: pop     esi
0x76C759: retn    0Ch
