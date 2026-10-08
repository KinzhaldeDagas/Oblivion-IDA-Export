0x422DF0: lea     eax, [ecx+0Ch]; Structural response-list emptiness check: counts all DialogueResponse nodes, independent of currentResponseNode position. An exhausted but still populated cache does not trigger a rebuild; only a truly empty list does.
0x422DF3: xor     edx, edx
0x422DF5: test    eax, eax
0x422DF7: jz      short loc_422E0F
0x422DF9: lea     esp, [esp+0]
0x422E00: cmp     dword ptr [eax], 0
0x422E03: jz      short loc_422E08
0x422E05: add     edx, 1
0x422E08: mov     eax, [eax+4]
0x422E0B: test    eax, eax
0x422E0D: jnz     short loc_422E00
0x422E0F: xor     eax, eax
0x422E11: test    edx, edx
0x422E13: setz    al
0x422E16: retn
