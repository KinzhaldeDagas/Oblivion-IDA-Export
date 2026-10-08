0x6A2AEA: mov     edx, [ebp+0Ch]
0x6A2AED: mov     eax, [edx+1Ch]
0x6A2AF0: test    dword ptr [eax+58h], 30000h
0x6A2AF7: jz      short MagicTarget_AddEffect___CloneActiveEffect; Verified AddEffect clone path calls the source ActiveEffect vtable clone slot (+4), then sets the clone's target before insertion. Fresh clone constructors null hitEffectList, and the registered clone/copy overrides do not overwrite +0x34. A nonempty source list is not shared by the clone.
0x6A2AF9: mov     eax, [edi]
0x6A2AFB: mov     edx, [eax+8]
0x6A2AFE: mov     ecx, edi
0x6A2B00: call    edx
0x6A2B02: mov     ebx, eax
0x6A2B04: test    ebx, ebx
0x6A2B06: jz      short MagicTarget_AddEffect___CloneActiveEffect; Verified AddEffect clone path calls the source ActiveEffect vtable clone slot (+4), then sets the clone's target before insertion. Fresh clone constructors null hitEffectList, and the registered clone/copy overrides do not overwrite +0x34. A nonempty source list is not shared by the clone.
