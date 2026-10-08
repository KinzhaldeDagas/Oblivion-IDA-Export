0x79BE50: push    esi; OBLIVION AUTHORITY (2026-08-30): Assigns the same vector<float> value into every initialized element in [first,last), advancing by one 0x10-byte vector owner per iteration.
0x79BE51: mov     esi, [esp+4+first]
0x79BE55: push    edi
0x79BE56: mov     edi, [esp+8+last]
0x79BE5A: cmp     esi, edi
0x79BE5C: jz      short loc_79BE73
0x79BE5E: push    ebx
0x79BE5F: mov     ebx, [esp+0Ch+value]
0x79BE63: push    ebx; source
0x79BE64: mov     ecx, esi; this
0x79BE66: call    OB_stVector4_CopyAssign_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded copy assignment for a 0x10-byte vector owner with four-byte elements. Handles self-assignment, empty source, capacity reuse, initialized/uninitialized tails, and reallocation.
0x79BE6B: add     esi, 10h
0x79BE6E: cmp     esi, edi
0x79BE70: jnz     short loc_79BE63
0x79BE72: pop     ebx
0x79BE73: pop     edi
0x79BE74: pop     esi
0x79BE75: retn
