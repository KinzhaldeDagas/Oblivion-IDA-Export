0x46AF70: mov     edx, [esp+arg_0]
0x46AF74: cmp     edx, ds:0B33C20h
0x46AF7A: jnz     short loc_46AF82
0x46AF7C: mov     eax, ds:0B33C1Ch
0x46AF81: retn
0x46AF82: xor     eax, eax
0x46AF84: mov     ecx, offset dword_B05E08
0x46AF89: lea     esp, [esp+0]
0x46AF90: cmp     [ecx], edx
0x46AF92: jz      short loc_46AFA5
0x46AF94: add     ecx, 0Ch
0x46AF97: add     eax, 1
0x46AF9A: cmp     ecx, offset dword_B06144
0x46AFA0: jl      short TESForm_GetFormTypeFromChunkType___LookupChunkType
0x46AFA2: xor     eax, eax
0x46AFA4: retn
0x46AFA5: mov     ds:0B33C1Ch, eax
0x46AFAA: mov     ds:0B33C20h, edx
0x46AFB0: retn
