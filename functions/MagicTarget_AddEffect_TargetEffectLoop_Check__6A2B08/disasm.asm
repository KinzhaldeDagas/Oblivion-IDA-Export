0x6A2B08: cmp     dword ptr [ebx+4], 0
0x6A2B0C: jnz     short MagicTarget_AddEffect___TargetEffectLoop_Body
0x6A2B0E: cmp     dword ptr [ebx], 0
0x6A2B11: jz      short MagicTarget_AddEffect___CloneActiveEffect; Verified AddEffect clone path calls the source ActiveEffect vtable clone slot (+4), then sets the clone's target before insertion. Fresh clone constructors null hitEffectList, and the registered clone/copy overrides do not overwrite +0x34. A nonempty source list is not shared by the clone.
