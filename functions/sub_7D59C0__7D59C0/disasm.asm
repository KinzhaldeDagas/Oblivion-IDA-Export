0x7D59C0: cmp     byte ptr [ecx+0F5h], 0; Dispatch on ShadowSceneLight+0xF5: zero -> normal per-source projected map at 0x007D46C0; nonzero -> special cube/object-list path at 0x007D4570. No persistent direct native producer for +0xF5 is proven.
0x7D59C7: jz      short loc_7D59CE
0x7D59C9: jmp     ShadowSceneLight_RenderSpecialCubeObjectList; Special ShadowSceneLight renderer selected only when +0xF5 is nonzero. Uses a BSCubeMapCamera and the light-local category/object list; it is separate from the normal exact-caster-root map renderer.
0x7D59CE: mov     eax, [esp+arg_4]
0x7D59D2: push    eax
0x7D59D3: call    ShadowSceneLight_RenderPerSourceShadowMap; Normal dispatch branch calls the retail per-source shadow-map renderer.
0x7D59D8: retn    8
