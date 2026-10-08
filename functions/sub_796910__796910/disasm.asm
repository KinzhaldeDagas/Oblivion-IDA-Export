0x796910: push    ecx; OBLIVION AUTHORITY (2026-08-30): Stdcall adapter for uninitialized moving vector<unsigned short> owners. Boundary repaired through ret 0x0C at 0x796936 and noreturn cleared.
0x796911: mov     edx, [esp+4+destination]
0x796915: mov     byte ptr [esp+4+var_4], 0
0x796919: mov     eax, [esp+4+var_4]
0x79691C: push    eax
0x79691D: mov     eax, [esp+8+destination]
0x796921: push    edx
0x796922: mov     edx, [esp+0Ch+first]
0x796926: push    ecx
0x796927: mov     ecx, [esp+10h+last]
0x79692B: push    eax; destination
0x79692C: push    ecx; last
0x79692D: push    edx; first
0x79692E: call    OB_stVector_stVectorUShort_UninitializedMoveRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized move for vector<unsigned short> owners. Constructs empty destinations then swaps their buffers with sources, leaving sources empty; normal return is at 0x795EA8.
0x796933: add     esp, 1Ch
0x796936: retn    0Ch
