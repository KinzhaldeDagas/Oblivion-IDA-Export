0x60BE90: push    ebx; Validates projectile collision data and dispatches persisted collision state 0..4 to the corresponding reconstruction helper. Missing node collision data is reported and the stale state record is freed.
0x60BE91: push    esi; ArgList
0x60BE92: mov     esi, ecx
0x60BE94: xor     bl, bl
0x60BE96: cmp     dword ptr [esi+5Ch], 0
0x60BE9A: jz      short loc_60BEE0
0x60BE9C: mov     eax, [esi]
0x60BE9E: mov     edx, [eax+154h]
0x60BEA4: call    edx
0x60BEA6: test    eax, eax
0x60BEA8: jz      short loc_60BEC3
0x60BEAA: mov     eax, [esi]
0x60BEAC: mov     edx, [eax+154h]
0x60BEB2: mov     ecx, esi
0x60BEB4: call    edx
0x60BEB6: push    eax; object
0x60BEB7: call    NiAVObject_FindBhkCollisionObjectRecursive; Returns the first bhk collision object found on object or recursively beneath its NiNode children. This is structural traversal, independent of node names.
0x60BEBC: add     esp, 4
0x60BEBF: test    eax, eax
0x60BEC1: jnz     short loc_60BEE5
0x60BEC3: push    offset aNoCollisionDat; "No collision data was found on this arr"...
0x60BEC8: call    PrintError
0x60BECD: mov     eax, [esi+5Ch]
0x60BED0: push    eax
0x60BED1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x60BED6: add     esp, 8
0x60BED9: mov     dword ptr [esi+5Ch], 0
0x60BEE0: pop     esi
0x60BEE1: xor     al, al
0x60BEE3: pop     ebx
0x60BEE4: retn
0x60BEE5: mov     ecx, [esi+5Ch]
0x60BEE8: mov     ecx, [ecx]
0x60BEEA: cmp     ecx, 4; switch 5 cases
0x60BEED: mov     eax, [eax+10h]
0x60BEF0: ja      short def_60BEF2
0x60BEF2: jmp     ds:jpt_60BEF2[ecx*4]; Dispatch persisted projectile collision state 0..4 to distinct actor-attachment, reference/world-collision, placement and impulse reconstruction paths.
0x60BEF9: push    eax; jumptable 0060BEF2 case 0
0x60BEFA: mov     ecx, esi; this
0x60BEFC: call    ArrowProjectile_ResolveActorEmbedState0; State 0 resolver: embed/reparent projectile visual beneath recorded Actor attachment node.
0x60BF01: jmp     short loc_60BF29
0x60BF03: push    eax; jumptable 0060BEF2 case 1
0x60BF04: mov     ecx, esi; this
0x60BF06: call    ArrowProjectile_ResolveReferenceCollisionState1; State 1 resolver: rebuild collision relationship for a recorded non-Actor reference/node.
0x60BF0B: jmp     short loc_60BF29
0x60BF0D: push    eax; jumptable 0060BEF2 case 2
0x60BF0E: mov     ecx, esi; this
0x60BF10: call    ArrowProjectile_ResolveStaticPlacementState2; State 2 resolver: restore static/world placement and collision filter without target attachment.
0x60BF15: jmp     short loc_60BF29
0x60BF17: push    eax; jumptable 0060BEF2 case 3
0x60BF18: mov     ecx, esi; this
0x60BF1A: call    ArrowProjectile_ResolveFreeImpactState3; State 3 resolver: restore free impact placement and apply collision-resolved impulse/orientation.
0x60BF1F: jmp     short loc_60BF29
0x60BF21: push    eax; jumptable 0060BEF2 case 4
0x60BF22: mov     ecx, esi; this
0x60BF24: call    ArrowProjectile_ResolveFallbackImpactState4; State 4 resolver: fallback target-aware or free settling collision reconstruction.
0x60BF29: mov     bl, al
0x60BF2B: test    bl, bl
0x60BF2D: jnz     short loc_60BF4D
