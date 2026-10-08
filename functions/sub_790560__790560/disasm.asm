0x790560: push    ebx; Builds the fuzzy-volume heap for a CBranch pointer range from the bottom non-leaf upward by repeated adjust-heap calls.
0x790561: mov     ebx, [esp+4+begin]
0x790565: push    esi
0x790566: push    edi
0x790567: mov     edi, [esp+0Ch+end]
0x79056B: sub     edi, ebx
0x79056D: sar     edi, 2
0x790570: mov     eax, edi
0x790572: cdq
0x790573: sub     eax, edx
0x790575: mov     esi, eax
0x790577: sar     esi, 1
0x790579: test    esi, esi
0x79057B: jle     short loc_79059B
0x79057D: push    ebp
0x79057E: mov     ebp, [esp+10h+arg_8]
0x790582: mov     eax, [ebx+esi*4-4]
0x790586: sub     esi, 1
0x790589: push    ebp
0x79058A: push    eax; value
0x79058B: push    edi; count
0x79058C: push    esi; holeIndex
0x79058D: push    ebx; begin
0x79058E: call    OB_BranchPtrVector_AdjustHeapByFuzzyVolume_010201A0; MSVC adjust-heap primitive for CBranch pointers: selects a child by fuzzyBranchVolume, sifts the hole downward, then delegates to the heap-push helper. Used by make-heap and sort-heap.
0x790593: add     esp, 14h
0x790596: test    esi, esi
0x790598: jg      short loc_790582
0x79059A: pop     ebp
0x79059B: pop     edi
0x79059C: pop     esi
0x79059D: pop     ebx
0x79059E: retn
