0x796820: push    ecx; OBLIVION AUTHORITY (2026-08-30): Stdcall adapter for uninitialized copying of vector<unsigned short*> owners. Boundary repaired through ret 0x0C at 0x796846 and noreturn cleared.
0x796821: mov     edx, [esp+4+destination]
0x796825: mov     byte ptr [esp+4+var_4], 0
0x796829: mov     eax, [esp+4+var_4]
0x79682C: push    eax
0x79682D: mov     eax, [esp+8+destination]
0x796831: push    edx
0x796832: mov     edx, [esp+0Ch+first]
0x796836: push    ecx
0x796837: mov     ecx, [esp+10h+last]
0x79683B: push    eax; destination
0x79683C: push    ecx; last
0x79683D: push    edx; first
0x79683E: call    OB_stVector_stVectorUShortPtr_UninitializedCopyRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized copy of inner vector<unsigned short*> owners. Uses the shared 4-byte-element vector copy constructor and normally returns at 0x795C0E; prior noreturn metadata was false.
0x796843: add     esp, 1Ch
0x796846: retn    0Ch
