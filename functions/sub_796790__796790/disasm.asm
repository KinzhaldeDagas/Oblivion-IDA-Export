0x796790: push    ebx; OBLIVION AUTHORITY (2026-08-30): Checked erase-range for vector<vector<unsigned short*>>. Uses the 4-byte inner-vector assignment family, destroys vacated owners, and updates end.
0x796791: push    ebp
0x796792: mov     ebp, [esp+8+firstOwner]
0x796796: test    ebp, ebp
0x796798: push    esi
0x796799: mov     esi, ecx
0x79679B: jz      short loc_7967A3
0x79679D: cmp     ebp, [esp+0Ch+lastOwner]
0x7967A1: jz      short loc_7967A8
0x7967A3: call    __invalid_parameter_noinfo
0x7967A8: mov     ebx, [esp+0Ch+first]
0x7967AC: mov     eax, [esp+0Ch+last]
0x7967B0: cmp     ebx, eax
0x7967B2: jz      short loc_7967D9
0x7967B4: mov     ecx, [esi+8]
0x7967B7: push    edi
0x7967B8: push    ebx; destination
0x7967B9: push    ecx; last
0x7967BA: push    eax; first
0x7967BB: call    OB_stVector_stVectorUShortPtr_CopyAssignRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Copy-assigns a range of vector<unsigned short*> owners using the structurally shared 4-byte-element vector assignment.
0x7967C0: mov     edx, [esp+1Ch+result]
0x7967C4: push    edx
0x7967C5: mov     edi, eax
0x7967C7: mov     eax, [esi+8]
0x7967CA: push    esi
0x7967CB: push    eax; last
0x7967CC: push    edi; first
0x7967CD: call    OB_stVector4_DestroyRange_010201A0; OBLIVION AUTHORITY (2026-08-30): Destroys each 0x10-byte vector owner in [first,last), freeing its owned buffer and clearing the pointer triplet.
0x7967D2: add     esp, 1Ch
0x7967D5: mov     [esi+8], edi
0x7967D8: pop     edi
0x7967D9: mov     eax, [esp+0Ch+result]
0x7967DD: pop     esi
0x7967DE: mov     [eax], ebp
0x7967E0: pop     ebp
0x7967E1: mov     [eax+4], ebx
0x7967E4: pop     ebx
0x7967E5: retn    14h
