0x6A2B44: mov     eax, [esi]
0x6A2B46: mov     edx, [eax+18h]
0x6A2B49: mov     ecx, esi
0x6A2B4B: call    edx
0x6A2B4D: cmp     eax, 6
0x6A2B50: jz      short loc_6A2B5C
0x6A2B52: add     eax, 0FFFFFFF9h
0x6A2B55: cmp     eax, 1
0x6A2B58: ja      short MagicTarget_AddEffect___RemoveDuplicate
0x6A2B5A: jmp     short MagicTarget_AddEffect___CloneActiveEffect; Verified AddEffect clone path calls the source ActiveEffect vtable clone slot (+4), then sets the clone's target before insertion. Fresh clone constructors null hitEffectList, and the registered clone/copy overrides do not overwrite +0x34. A nonempty source list is not shared by the clone.
0x6A2B5C: mov     eax, [ebp+30h]
0x6A2B5F: test    eax, eax
0x6A2B61: jz      short MagicTarget_AddEffect___RemoveDuplicate
0x6A2B63: cmp     byte ptr [eax+4], 15h
0x6A2B67: jz      short MagicTarget_AddEffect___CloneActiveEffect; Verified AddEffect clone path calls the source ActiveEffect vtable clone slot (+4), then sets the clone's target before insertion. Fresh clone constructors null hitEffectList, and the registered clone/copy overrides do not overwrite +0x34. A nonempty source list is not shared by the clone.
