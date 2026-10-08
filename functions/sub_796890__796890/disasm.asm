0x796890: sub     esp, 8; OBLIVION AUTHORITY (2026-08-30): clear() for vector<vector<unsigned short*>>, implemented as checked erase(begin,end) while retaining outer capacity.
0x796893: push    ebx
0x796894: push    esi
0x796895: mov     esi, ecx
0x796897: mov     ebx, [esi+8]
0x79689A: cmp     [esi+4], ebx
0x79689D: push    edi
0x79689E: jbe     short loc_7968A5
0x7968A0: call    __invalid_parameter_noinfo
0x7968A5: mov     edi, [esi+4]
0x7968A8: cmp     edi, [esi+8]
0x7968AB: jbe     short loc_7968B2
0x7968AD: call    __invalid_parameter_noinfo
0x7968B2: push    ebx; last
0x7968B3: push    esi; last
0x7968B4: push    edi; first
0x7968B5: push    esi; first
0x7968B6: lea     eax, [esp+24h+result]
0x7968BA: push    eax; result
0x7968BB: mov     ecx, esi; this
0x7968BD: call    OB_stVector_stVectorUShortPtr_EraseRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Checked erase-range for vector<vector<unsigned short*>>. Uses the 4-byte inner-vector assignment family, destroys vacated owners, and updates end.
0x7968C2: pop     edi
0x7968C3: pop     esi
0x7968C4: pop     ebx
0x7968C5: add     esp, 8
0x7968C8: retn
