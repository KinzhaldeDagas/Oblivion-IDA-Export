0x4FCA30: mov     ecx, [esp+a1]; TES4 authoritative: vanilla command lookup. Supports opcode ranges 0x100..0x182 at 0xB0B420 and 0x1000..0x1170 at 0xB0C8C0; each CommandInfo record is 0x28 bytes.
0x4FCA34: lea     edx, [ecx-100h]
0x4FCA3A: xor     eax, eax
0x4FCA3C: cmp     edx, 82h ; '‚'
0x4FCA42: ja      short loc_4FCA53; Opcode 0x100..0x182 maps to CommandInfo table 0xB0B420 with stride 0x28.
0x4FCA44: lea     eax, [ecx+ecx*4-500h]
0x4FCA4B: lea     eax, ds:0B0B420h[eax*8]
0x4FCA52: retn
0x4FCA53: lea     edx, [ecx-1000h]
0x4FCA59: cmp     edx, 170h
0x4FCA5F: ja      short locret_4FCA6F; Opcode 0x1000..0x1170 maps to CommandInfo table 0xB0C8C0 with stride 0x28. Vanilla lookup rejects other opcodes.
0x4FCA61: lea     eax, [ecx+ecx*4-5000h]
0x4FCA68: lea     eax, ds:0B0C8C0h[eax*8]
0x4FCA6F: retn
