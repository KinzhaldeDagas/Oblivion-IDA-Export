0x795820: mov     eax, [esp+last]; OBLIVION AUTHORITY (2026-08-30): stdcall adapter for the compiler-folded 0x10-byte vector-owner destruction range.
0x795824: mov     edx, [esp+first]
0x795828: push    eax
0x795829: push    ecx
0x79582A: mov     ecx, [esp+8+last]
0x79582E: push    ecx; last
0x79582F: push    edx; first
0x795830: call    OB_stVector4_DestroyRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Destroys each 0x10-byte vector owner in [first,last), freeing its owned buffer and clearing the pointer triplet.
0x795835: add     esp, 10h
0x795838: retn    8
