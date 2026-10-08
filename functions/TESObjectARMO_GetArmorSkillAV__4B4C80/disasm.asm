0x4B4C80: mov     al, [ecx+6Ah]; Oblivion authoritative armor-skill selector: native flags+0x6A bit 0x80 maps Heavy AV 0x12, otherwise Light AV 0x1B. MWMediumArmor detours here and gives precedence to plugin-owned memory flag 0x0004 (file BMDT 0x00040000) for Medium and 0x0008 (file BMDT 0x00080000) for explicit Light; native Heavy remains 0x0080 (file 0x00800000). Untagged records may then use weight inference.
0x4B4C83: and     al, 80h
0x4B4C85: neg     al
0x4B4C87: sbb     eax, eax
0x4B4C89: and     eax, 0FFFFFFF7h
0x4B4C8C: add     eax, 1Bh
0x4B4C8F: retn
