0x791410: push    ecx; Source-match: CBranch::SortBranchVector wrapper. Sorts branch pointers by fuzzy volume for branch LOD selection.
0x791411: push    ebx
0x791412: push    esi
0x791413: push    edi
0x791414: mov     edi, [esp+10h+arg_0]
0x791418: mov     ebx, [edi+8]
0x79141B: cmp     [edi+4], ebx
0x79141E: mov     byte ptr [esp+10h+comparatorState], 0
0x791423: jbe     short loc_79142A
0x791425: call    __invalid_parameter_noinfo
0x79142A: mov     esi, [edi+4]
0x79142D: cmp     esi, [edi+8]
0x791430: jbe     short loc_791437
0x791432: call    __invalid_parameter_noinfo
0x791437: mov     eax, [esp+10h+comparatorState]
0x79143B: mov     ecx, ebx
0x79143D: push    eax; comparatorState
0x79143E: sub     ecx, esi
0x791440: sar     ecx, 2
0x791443: push    ecx; depthLimit
0x791444: push    ebx; end
0x791445: push    esi; begin
0x791446: call    OB_BranchPtrVector_IntrosortByFuzzyVolume_010201A0; Compiler introsort loop for the compact OB_CBranch* vector. Uses 0x7905D0's fuzzyBranchVolume partition, insertion sort for small ranges, and heap-sort fallback when the depth limit expires; branch LOD policy remains in the 0x791410 wrapper/callers.
0x79144B: add     esp, 10h
0x79144E: pop     edi
0x79144F: pop     esi
0x791450: pop     ebx
0x791451: pop     ecx
0x791452: retn
