0x79ABD0: sub     esp, 8; Oblivion st_vector<SFrondVertex>::clear. Validates begin/end and erases the entire initialized range without releasing capacity.
0x79ABD3: push    ebx
0x79ABD4: push    esi
0x79ABD5: mov     esi, ecx
0x79ABD7: mov     ebx, [esi+8]
0x79ABDA: cmp     [esi+4], ebx
0x79ABDD: push    edi
0x79ABDE: jbe     short loc_79ABE5
0x79ABE0: call    __invalid_parameter_noinfo
0x79ABE5: mov     edi, [esi+4]
0x79ABE8: cmp     edi, [esi+8]
0x79ABEB: jbe     short loc_79ABF2
0x79ABED: call    __invalid_parameter_noinfo
0x79ABF2: push    ebx; last
0x79ABF3: push    esi; lastOwner
0x79ABF4: push    edi; first
0x79ABF5: push    esi; firstOwner
0x79ABF6: lea     eax, [esp+24h+result]
0x79ABFA: push    eax; result
0x79ABFB: mov     ecx, esi; this
0x79ABFD: call    OB_stVector_SFrondVertex_EraseRange_010201A0; Checked erase-range helper for the trivial SFrondVertex vector. Validates both iterator owners, moves [last,end) forward over [first,last), updates end, and returns {owner,first}.
0x79AC02: pop     edi
0x79AC03: pop     esi
0x79AC04: pop     ebx
0x79AC05: add     esp, 8
0x79AC08: retn
