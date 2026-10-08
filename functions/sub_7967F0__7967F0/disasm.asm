0x7967F0: push    ecx; OBLIVION AUTHORITY (2026-08-30): Stdcall adapter for exception-safe uninitialized copying of vector<unsigned short> owners. Boundary repaired through ret 0x0C at 0x796816 and noreturn cleared.
0x7967F1: mov     edx, [esp+4+destination]
0x7967F5: mov     byte ptr [esp+4+var_4], 0
0x7967F9: mov     eax, [esp+4+var_4]
0x7967FC: push    eax
0x7967FD: mov     eax, [esp+8+destination]
0x796801: push    edx
0x796802: mov     edx, [esp+0Ch+first]
0x796806: push    ecx
0x796807: mov     ecx, [esp+10h+last]
0x79680B: push    eax; destination
0x79680C: push    ecx; last
0x79680D: push    edx; first
0x79680E: call    OB_stVector_stVectorUShort_UninitializedCopyRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized copy of inner vector<unsigned short> owners. Deep-copy-constructs the destination range, destroys only its constructed prefix on unwind, and normally returns the constructed end at 0x795B5E; prior noreturn metadata was false.
0x796813: add     esp, 1Ch
0x796816: retn    0Ch
