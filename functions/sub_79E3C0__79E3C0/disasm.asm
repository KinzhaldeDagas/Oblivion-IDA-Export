0x79E3C0: push    ecx; OBLIVION AUTHORITY (2026-08-30): stdcall adapter for vector<vector<float>> uninitialized_fill_n. Corrected boundary includes the pointer-result calculation and ret 0x0C normal tail through 0x79E3F6.
0x79E3C1: mov     edx, [esp+4+value]
0x79E3C5: push    esi
0x79E3C6: mov     esi, [esp+8+count]
0x79E3CA: push    edi
0x79E3CB: mov     edi, [esp+0Ch+destination]
0x79E3CF: mov     byte ptr [esp+0Ch+var_4], 0
0x79E3D4: mov     eax, [esp+0Ch+var_4]
0x79E3D8: push    eax
0x79E3D9: mov     eax, [esp+10h+value]
0x79E3DD: push    edx
0x79E3DE: push    ecx
0x79E3DF: push    eax; value
0x79E3E0: push    esi; count
0x79E3E1: push    edi; destination
0x79E3E2: call    OB_stVector_stVectorFloat_UninitializedFillN_010201A0; OBLIVION AUTHORITY (2026-08-30): Exception-safe uninitialized_fill_n for vector<float> elements of vector<vector<float>>. Deep-copy-constructs each inner vector and destroys only the constructed prefix on unwind. Its normal return at 0x79BFD0 proves the prior noreturn annotation false.
0x79E3E7: mov     eax, esi; Recovered normal tail omitted by the false noreturn callee: returns destination + count and performs ret 0x0C.
0x79E3E9: add     esp, 18h
0x79E3EC: shl     eax, 4
0x79E3EF: add     eax, edi
0x79E3F1: pop     edi
0x79E3F2: pop     esi
0x79E3F3: pop     ecx
0x79E3F4: retn    0Ch
