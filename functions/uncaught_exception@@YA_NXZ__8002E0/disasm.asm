0x8002E0: xor     eax, eax; MoonSugarEffect decode: Refraction active predicate is dword_B474AC != 0, not a persistent gameplay flag.
0x8002E2: cmp     ds:0B474ACh, eax
0x8002E8: setnz   al
0x8002EB: retn
