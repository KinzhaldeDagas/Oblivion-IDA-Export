0x7C7880: push    esi; Remove active-list payloads, free list nodes, and clear partition anchors/counters.
0x7C7881: push    edi
0x7C7882: mov     edi, ecx
0x7C7884: mov     esi, [edi+0F8h]
0x7C788A: test    esi, esi
0x7C788C: jz      short loc_7C78A7
0x7C788E: mov     edi, edi
0x7C7890: lea     eax, [esi+8]
0x7C7893: mov     eax, [eax]
0x7C7895: test    eax, eax
0x7C7897: mov     esi, [esi]
0x7C7899: jz      short loc_7C78A3
0x7C789B: push    eax
0x7C789C: mov     ecx, edi
0x7C789E: call    ShadowSceneNode_RemoveFullLight; Remove one ShadowSceneLight from the full-list owner with native refcount/list cleanup.
0x7C78A3: test    esi, esi
0x7C78A5: jnz     short loc_7C7890
0x7C78A7: lea     ecx, [edi+0F4h]
0x7C78AD: call    NiTPointerList__FreeAllNodes; Free every active NiTPointerList node through the list's FreeNode virtual and clear head/tail/count. The generic list helper does not destroy payload objects; owner code must do that separately when required.
0x7C78B2: mov     dword ptr [edi+108h], 0
0x7C78BC: mov     dword ptr [edi+10Ch], 0
0x7C78C6: pop     edi
0x7C78C7: pop     esi
0x7C78C8: retn
