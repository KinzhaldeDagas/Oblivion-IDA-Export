0x680410: mov     eax, [esp+reference]; Verified endpoint predicate: returns true when the supplied TESObjectREFR equals either referenceA or referenceB in the AStarWorldNode.
0x680414: cmp     eax, [ecx+4]
0x680417: jz      short loc_680423
0x680419: cmp     eax, [ecx+0Ch]
0x68041C: jz      short loc_680423
0x68041E: xor     al, al
0x680420: retn    4
0x680423: mov     al, 1
0x680425: retn    4
