0x563E80: cmp     byte ptr ds:0B125E8h, 0; Verified visibility gate: requires both bEnableTrees:SpeedTree.value and BSTreeManager.treesVisible at +0x20 before forwarding to NiNode::OnVisible.
0x563E87: push    esi
0x563E88: mov     esi, ecx
0x563E8A: jz      short loc_563EA8
0x563E8C: push    1; createIfMissing
0x563E8E: call    BSTreeManager_GetInstance; Returns SpeedTree singleton dword_B39E04, creating it on demand when caller passes true.
0x563E93: add     esp, 4
0x563E96: cmp     byte ptr [eax+20h], 0
0x563E9A: jz      short loc_563EA8
0x563E9C: mov     eax, [esp+4+a2]
0x563EA0: push    eax; a2
0x563EA1: mov     ecx, esi; this
0x563EA3: call    NiNode__OnVisible; Retail NiNode OnVisible entry; visible nonempty child arrays recurse through ordinary child traversal.
0x563EA8: pop     esi
0x563EA9: retn    4
