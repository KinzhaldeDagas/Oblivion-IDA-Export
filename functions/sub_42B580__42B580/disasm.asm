0x42B580: mov     eax, [ecx]
0x42B582: test    eax, eax
0x42B584: jz      short locret_42B58D
0x42B586: push    eax
0x42B587: call    TESObjectREFR__AddToLowPathWorld; Verified `LinkDoors` creates reciprocal TeleportData and calls this hook once for a1. The resulting single AStarWorldNode stores both door refs and both spatial forms; its map entries make it reachable from either endpoint space.
0x42B58C: pop     ecx
0x42B58D: retn
