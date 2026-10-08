0x7C5F60: push    ebp; Reconcile one ordinary source light against current scene receivers. Projector-mode lights are skipped; culled sources clear associations, visible sources begin/add/remove receiver reconciliation.
0x7C5F61: mov     ebp, [esp+4+light]
0x7C5F65: cmp     byte ptr [ebp+0F4h], 0
0x7C5F6C: push    edi
0x7C5F6D: mov     edi, ecx
0x7C5F6F: jnz     loc_7C6015
0x7C5F75: push    ebx
0x7C5F76: push    esi
0x7C5F77: lea     eax, [esp+10h+light]
0x7C5F7B: push    eax
0x7C5F7C: mov     ecx, ebp
0x7C5F7E: call    ShadowSceneLight_GetLightRef
0x7C5F83: mov     ecx, [eax]
0x7C5F85: mov     bl, [ecx+18h]
0x7C5F88: mov     eax, [esp+10h+light]
0x7C5F8C: and     bl, 1
0x7C5F8F: test    eax, eax
0x7C5F91: jz      short loc_7C5FB1
0x7C5F93: mov     esi, eax
0x7C5F95: add     eax, 4
0x7C5F98: push    eax; lpAddend
0x7C5F99: call    dword ptr ds:0A2807Ch
0x7C5F9F: test    eax, eax
0x7C5FA1: jnz     short loc_7C5FB1
0x7C5FA3: test    esi, esi
0x7C5FA5: jz      short loc_7C5FB1
0x7C5FA7: mov     edx, [esi]
0x7C5FA9: mov     eax, [edx]
0x7C5FAB: push    1
0x7C5FAD: mov     ecx, esi
0x7C5FAF: call    eax
0x7C5FB1: test    bl, bl
0x7C5FB3: mov     ecx, ebp; self
0x7C5FB5: jz      short loc_7C5FC3
0x7C5FB7: call    ShadowSceneLight_ClearReceiverAssociations; Remove property-side shadow-light links, reset shader-side state, and free this light's object/receiver list associations.
0x7C5FBC: pop     esi
0x7C5FBD: pop     ebx
0x7C5FBE: pop     edi
0x7C5FBF: pop     ebp
0x7C5FC0: retn    4
0x7C5FC3: call    ShadowSceneLight_BeginReceiverReconciliation; Create/reuse the fence geometry at +0x148, insert it at object-list head, and set reconciliation cursor +0x144.
0x7C5FC8: xor     esi, esi
0x7C5FCA: cmp     [edi+0B8h], si
0x7C5FD1: jbe     short loc_7C600C
0x7C5FD3: movzx   ecx, word ptr [edi+0B6h]
0x7C5FDA: cmp     ecx, esi
0x7C5FDC: jbe     short loc_7C5FFE
0x7C5FDE: mov     edx, [edi+0B0h]
0x7C5FE4: mov     ecx, [edx+esi*4]
0x7C5FE7: test    ecx, ecx
0x7C5FE9: jz      short loc_7C5FFE
0x7C5FEB: mov     eax, [ecx]
0x7C5FED: mov     edx, [eax+8]
0x7C5FF0: call    edx
0x7C5FF2: test    eax, eax
0x7C5FF4: jz      short loc_7C5FFE
0x7C5FF6: push    eax
0x7C5FF7: mov     ecx, ebp
0x7C5FF9: call    ShadowSceneLight_AddToScene; Native receiver-root gate: require a non-null root, non-null world bound, AppCulled clear, and nonzero bound radius, then recurse through ShadowSceneLight_UpdateLightingProperty.
0x7C5FFE: movzx   eax, word ptr [edi+0B8h]
0x7C6005: add     esi, 1
0x7C6008: cmp     esi, eax
0x7C600A: jb      short loc_7C5FD3
0x7C600C: mov     ecx, ebp; self
0x7C600E: call    ShadowSceneLight_RemoveStaleReceivers; Walk the stale reconciliation cursor tail via ShadowSceneLight_RemoveReceiverGeometry, then clear +0x144.
0x7C6013: pop     esi
0x7C6014: pop     ebx
0x7C6015: pop     edi
0x7C6016: pop     ebp
0x7C6017: retn    4
