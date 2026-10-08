0x79AB70: push    ebx; Checked erase-range helper for the trivial SFrondVertex vector. Validates both iterator owners, moves [last,end) forward over [first,last), updates end, and returns {owner,first}.
0x79AB71: mov     ebx, [esp+4+firstOwner]
0x79AB75: test    ebx, ebx
0x79AB77: push    esi
0x79AB78: push    edi
0x79AB79: mov     esi, ecx
0x79AB7B: jz      short loc_79AB83
0x79AB7D: cmp     ebx, [esp+0Ch+lastOwner]
0x79AB81: jz      short loc_79AB88
0x79AB83: call    __invalid_parameter_noinfo
0x79AB88: mov     edi, [esp+0Ch+destinationFirst]
0x79AB8C: mov     ecx, [esp+0Ch+first]
0x79AB90: cmp     edi, ecx
0x79AB92: jz      short loc_79ABB9
0x79AB94: mov     eax, [esi+8]
0x79AB97: mov     byte ptr [esp+0Ch+firstOwner], 0
0x79AB9C: mov     edx, [esp+0Ch+firstOwner]
0x79ABA0: push    edx
0x79ABA1: mov     edx, [esp+10h+result]
0x79ABA5: push    edx
0x79ABA6: mov     edx, [esp+14h+result]
0x79ABAA: push    edx
0x79ABAB: push    edi; destinationFirst
0x79ABAC: push    eax; last
0x79ABAD: push    ecx; first
0x79ABAE: call    OB_SFrondVertex_CopyForward_010201A0; Forward copy/assignment of initialized 0x38-byte SFrondVertex records from [first,last) into destinationFirst; returns destination end.
0x79ABB3: add     esp, 18h
0x79ABB6: mov     [esi+8], eax
0x79ABB9: mov     eax, [esp+0Ch+result]
0x79ABBD: mov     [eax+4], edi
0x79ABC0: pop     edi
0x79ABC1: pop     esi
0x79ABC2: mov     [eax], ebx
0x79ABC4: pop     ebx
0x79ABC5: retn    14h
