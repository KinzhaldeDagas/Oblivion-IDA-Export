0x478730: push    esi; Constructs a 0x154-byte ActorSkinInfo: clears exactly 0x154 bytes, stores the owning Actor at byte offset +0x150, and optionally caches exact-name model nodes from rootNode.
0x478731: push    154h
0x478736: mov     esi, ecx
0x478738: push    0
0x47873A: push    esi
0x47873B: call    __memset
0x478740: push    100h
0x478745: push    0
0x478747: push    offset unk_B33C80
0x47874C: call    __memset
0x478751: mov     eax, [esp+1Ch+owner]
0x478755: mov     [esi+150h], eax
0x47875B: mov     eax, [esp+1Ch+rootNode]
0x47875F: add     esp, 18h
0x478762: test    eax, eax
0x478764: jz      short loc_47876E
0x478766: push    eax; rootNode
0x478767: mov     ecx, esi; this
0x478769: call    ActorSkinInfo_CacheNamedNodes; Caches ActorSkinInfo nodes by exact name. +0 is Bip01. Node indices 0..8 are Bip01 Head, Bip01 R Finger1, Bip01 L Finger1, Weapon, BackWeapon, SideWeapon, Quiver, Bip01 L ForearmTwist, Torch. Each indexed entry uses an 8-byte {flags,node} layout; node is at +8+index*8.
0x47876E: mov     eax, esi
0x478770: pop     esi
0x478771: retn    8
