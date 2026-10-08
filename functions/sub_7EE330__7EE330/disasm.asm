0x7EE330: mov     edx, [esp+light]; Insert ShadowSceneLight into BSShaderProperty+0x6C in receiver-distance order and clear property cache/dirty state.
0x7EE334: push    esi
0x7EE335: mov     esi, ecx
0x7EE337: mov     ecx, [esp+4+bound]
0x7EE33B: lea     eax, [esp+4+bound]
0x7EE33F: push    eax; before
0x7EE340: push    ecx; bound
0x7EE341: push    edx; light
0x7EE342: mov     ecx, esi; self
0x7EE344: call    BSShaderProperty_FindShadowLightInsertionPoint; MEF PERF 2026-10-07 PASS3: PERF-14 admission contrast: native FindInsertionPoint result drives no-insert on observed duplicate, otherwise raw insert-before or tail insertion at property+6C. No count cap branch in this examined body. AddShadowLight clears property+24 even on duplicate, unlike reorder which clears it only on move. Do not conflate their invalidation semantics.
0x7EE349: test    al, al
0x7EE34B: jnz     short loc_7EE37B
0x7EE34D: mov     eax, [esp+4+bound]
0x7EE351: test    eax, eax
0x7EE353: jz      short loc_7EE36E
0x7EE355: lea     ecx, [esp+4+light]
0x7EE359: push    ecx
0x7EE35A: push    eax
0x7EE35B: lea     ecx, [esi+6Ch]
0x7EE35E: call    NiTPointerList__InsertBeforePosition
0x7EE363: mov     dword ptr [esi+24h], 0
0x7EE36A: pop     esi
0x7EE36B: retn    8
0x7EE36E: lea     edx, [esp+4+light]
0x7EE372: push    edx
0x7EE373: lea     ecx, [esi+6Ch]
0x7EE376: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x7EE37B: mov     dword ptr [esi+24h], 0
0x7EE382: pop     esi
0x7EE383: retn    8
