0x55DF70: mov     ecx, [ecx+24h]; Verified map insertion for asynchronous tree build results. Stores TESObjectREFR* -> BSTreeNode*; if insertion fails, releases/destroys the node.
0x55DF73: mov     eax, [ecx]
0x55DF75: mov     edx, [esp+reference]
0x55DF79: mov     eax, [eax+0Ch]
0x55DF7C: push    esi
0x55DF7D: mov     esi, [esp+4+node]
0x55DF81: push    0
0x55DF83: push    esi
0x55DF84: push    edx
0x55DF85: call    eax; Verified: inserts TESObjectREFR* -> BSTreeNode* into pendingReferenceNodes; failed insertion destroys/releases the unaccepted node. Fallout AddBackgroundLoadedTree has matching set-and-release-on-failure behavior.
0x55DF87: test    al, al
0x55DF89: jnz     short loc_55DF99
0x55DF8B: test    esi, esi
0x55DF8D: jz      short loc_55DF99
0x55DF8F: mov     edx, [esi]
0x55DF91: mov     eax, [edx]
0x55DF93: push    1
0x55DF95: mov     ecx, esi
0x55DF97: call    eax
0x55DF99: pop     esi
0x55DF9A: retn    8
