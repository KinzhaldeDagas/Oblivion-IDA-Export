0x7904B0: mov     ecx, [esp+first]; Selects the fuzzy-volume pivot sample for branch-pointer partitioning. Sorts three candidates for ranges of at most 40 pointers; larger ranges use four three-way sorts over spaced samples (MSVC median-guess strategy).
0x7904B4: push    esi
0x7904B5: mov     esi, [esp+4+last]
0x7904B9: mov     eax, esi
0x7904BB: sub     eax, ecx
0x7904BD: sar     eax, 2
0x7904C0: cmp     eax, 28h ; '('
0x7904C3: jle     short loc_79053C
0x7904C5: add     eax, 1
0x7904C8: cdq
0x7904C9: push    ebx
0x7904CA: mov     ebx, [esp+8+arg_C]
0x7904CE: and     edx, 7
0x7904D1: add     eax, edx
0x7904D3: push    ebp
0x7904D4: sar     eax, 3
0x7904D7: push    edi
0x7904D8: lea     edx, ds:0[eax*8]
0x7904DF: mov     [esp+10h+last], edx
0x7904E3: push    ebx
0x7904E4: lea     edi, ds:0[eax*4]
0x7904EB: add     edx, ecx
0x7904ED: lea     eax, [edi+ecx]
0x7904F0: push    edx; last
0x7904F1: push    eax; middle
0x7904F2: push    ecx; first
0x7904F3: mov     [esp+20h+first], eax
0x7904F7: call    OB_BranchPtrVector_Sort3ByFuzzyVolume_010201A0; Orders three CBranch pointers using the float at CBranch+0x2C (fuzzyBranchVolume), implementing the descending-volume comparator used by the branch LOD sort.
0x7904FC: mov     eax, ebx
0x7904FE: mov     ebx, [esp+20h+middle]
0x790502: push    eax
0x790503: lea     ecx, [edi+ebx]
0x790506: push    ecx; last
0x790507: mov     edx, ebx
0x790509: sub     edx, edi
0x79050B: push    ebx; middle
0x79050C: push    edx; first
0x79050D: call    OB_BranchPtrVector_Sort3ByFuzzyVolume_010201A0; Orders three CBranch pointers using the float at CBranch+0x2C (fuzzyBranchVolume), implementing the descending-volume comparator used by the branch LOD sort.
0x790512: mov     ebp, esi
0x790514: sub     ebp, edi
0x790516: mov     edi, [esp+30h+arg_C]
0x79051A: push    edi
0x79051B: push    esi; last
0x79051C: sub     esi, [esp+38h+last]
0x790520: push    ebp; middle
0x790521: push    esi; first
0x790522: call    OB_BranchPtrVector_Sort3ByFuzzyVolume_010201A0; Orders three CBranch pointers using the float at CBranch+0x2C (fuzzyBranchVolume), implementing the descending-volume comparator used by the branch LOD sort.
0x790527: mov     eax, [esp+40h+first]
0x79052B: push    edi
0x79052C: push    ebp; last
0x79052D: push    ebx; middle
0x79052E: push    eax; first
0x79052F: call    OB_BranchPtrVector_Sort3ByFuzzyVolume_010201A0; Orders three CBranch pointers using the float at CBranch+0x2C (fuzzyBranchVolume), implementing the descending-volume comparator used by the branch LOD sort.
0x790534: add     esp, 40h
0x790537: pop     edi
0x790538: pop     ebp
0x790539: pop     ebx
0x79053A: pop     esi
0x79053B: retn
0x79053C: mov     edx, [esp+4+arg_C]
0x790540: mov     eax, [esp+4+middle]
0x790544: push    edx
0x790545: push    esi; last
0x790546: push    eax; middle
0x790547: push    ecx; first
0x790548: call    OB_BranchPtrVector_Sort3ByFuzzyVolume_010201A0; Orders three CBranch pointers using the float at CBranch+0x2C (fuzzyBranchVolume), implementing the descending-volume comparator used by the branch LOD sort.
0x79054D: add     esp, 10h
0x790550: pop     esi
0x790551: retn
