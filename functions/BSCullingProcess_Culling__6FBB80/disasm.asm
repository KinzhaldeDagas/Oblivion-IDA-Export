0x6FBB80: cmp     byte ptr [ecx+90h], 0; MoonSugarEffect decode: BSCullingProcess ProcessCull override. If +0x90/unk90 is nonzero, uses normal frustum culling; if zero, bypasses cull tests and calls object OnVisible directly.
0x6FBB87: jz      short loc_6FBB8E
0x6FBB89: jmp     NiCullingProcess_CullBoundAndDispatch; Oblivion NiCullingProcess process-cull entry for native scene traversal.
0x6FBB8E: mov     eax, [esp+arg_0]
0x6FBB92: mov     edx, [eax]
0x6FBB94: mov     [esp+arg_0], ecx
0x6FBB98: mov     ecx, eax
0x6FBB9A: mov     eax, [edx+7Ch]
0x6FBB9D: jmp     eax
