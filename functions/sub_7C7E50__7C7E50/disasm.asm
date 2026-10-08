0x7C7E50: push    esi; Remove full-list lights, free list nodes, reset partition anchors, and reset the active list.
0x7C7E51: push    edi
0x7C7E52: mov     edi, ecx
0x7C7E54: mov     esi, [edi+0E8h]
0x7C7E5A: test    esi, esi
0x7C7E5C: jz      short loc_7C7E77
0x7C7E5E: mov     edi, edi
0x7C7E60: lea     eax, [esi+8]
0x7C7E63: mov     eax, [eax]
0x7C7E65: test    eax, eax
0x7C7E67: mov     esi, [esi]
0x7C7E69: jz      short loc_7C7E73
0x7C7E6B: push    eax
0x7C7E6C: mov     ecx, edi
0x7C7E6E: call    ShadowSceneNode_RemoveFullLight; Remove one ShadowSceneLight from the full-list owner with native refcount/list cleanup.
0x7C7E73: test    esi, esi
0x7C7E75: jnz     short loc_7C7E60
0x7C7E77: lea     ecx, [edi+0E4h]
0x7C7E7D: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7C7E82: lea     ecx, [edi+0F4h]
0x7C7E88: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7C7E8D: mov     dword ptr [edi+108h], 0
0x7C7E97: mov     dword ptr [edi+10Ch], 0
0x7C7EA1: mov     ecx, edi
0x7C7EA3: pop     edi
0x7C7EA4: pop     esi
0x7C7EA5: jmp     ShadowSceneNode_ResetActiveLightList; Remove active-list payloads, free list nodes, and clear partition anchors/counters.
