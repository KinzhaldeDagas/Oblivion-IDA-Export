0x6A2B3B: mov     ebx, [ebx+4]
0x6A2B3E: test    ebx, ebx
0x6A2B40: jnz     short MagicTarget_AddEffect___TargetEffectLoop_Check
0x6A2B42: jmp     short MagicTarget_AddEffect___CloneActiveEffect; Verified AddEffect clone path calls the source ActiveEffect vtable clone slot (+4), then sets the clone's target before insertion. Fresh clone constructors null hitEffectList, and the registered clone/copy overrides do not overwrite +0x34. A nonempty source list is not shared by the clone.
