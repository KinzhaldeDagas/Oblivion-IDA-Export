0x79E220: mov     ecx, [esp+first]; Selects a robust fuzzySurfaceArea pivot for SFrondGuide partitioning. Small ranges sort first/middle/last; ranges over 40 elements sort multiple evenly spaced triplets before the final three-sample ordering.
0x79E224: push    edi
0x79E225: mov     edi, [esp+4+last]
0x79E229: mov     edx, edi
0x79E22B: sub     edx, ecx
0x79E22D: mov     eax, 2AAAAAABh
0x79E232: imul    edx
0x79E234: sar     edx, 3
0x79E237: mov     eax, edx
0x79E239: shr     eax, 1Fh
0x79E23C: add     eax, edx
0x79E23E: cmp     eax, 28h ; '('
0x79E241: jle     short loc_79E2BD
0x79E243: add     eax, 1
0x79E246: cdq
0x79E247: push    ebx
0x79E248: and     edx, 7
0x79E24B: add     eax, edx
0x79E24D: mov     edx, [esp+8+arg_C]
0x79E251: push    ebp
0x79E252: sar     eax, 3
0x79E255: push    esi
0x79E256: lea     ebx, [eax+eax*2]
0x79E259: push    edx
0x79E25A: lea     esi, [eax+eax*2]
0x79E25D: shl     ebx, 5
0x79E260: lea     edx, [ebx+ecx]
0x79E263: shl     esi, 4
0x79E266: lea     eax, [esi+ecx]
0x79E269: push    edx; last
0x79E26A: push    eax; middle
0x79E26B: push    ecx; first
0x79E26C: mov     [esp+20h+first], eax
0x79E270: call    OB_SFrondGuide_SortThreeByFuzzyArea_010201A0; Orders three SFrondGuide samples in descending fuzzySurfaceArea order using full-guide swaps. This is the median/pivot primitive for the guide introsort partitioner.
0x79E275: mov     ebp, [esp+20h+middle]
0x79E279: mov     eax, [esp+20h+arg_C]
0x79E27D: push    eax
0x79E27E: lea     ecx, [esi+ebp]
0x79E281: push    ecx; last
0x79E282: mov     edx, ebp
0x79E284: sub     edx, esi
0x79E286: push    ebp; middle
0x79E287: push    edx; first
0x79E288: call    OB_SFrondGuide_SortThreeByFuzzyArea_010201A0; Orders three SFrondGuide samples in descending fuzzySurfaceArea order using full-guide swaps. This is the median/pivot primitive for the guide introsort partitioner.
0x79E28D: mov     eax, edi
0x79E28F: sub     eax, esi
0x79E291: mov     esi, [esp+30h+arg_C]
0x79E295: push    esi
0x79E296: push    edi; last
0x79E297: push    eax; middle
0x79E298: sub     edi, ebx
0x79E29A: push    edi; first
0x79E29B: mov     [esp+40h+last], eax
0x79E29F: call    OB_SFrondGuide_SortThreeByFuzzyArea_010201A0; Orders three SFrondGuide samples in descending fuzzySurfaceArea order using full-guide swaps. This is the median/pivot primitive for the guide introsort partitioner.
0x79E2A4: mov     eax, [esp+40h+last]
0x79E2A8: mov     ecx, [esp+40h+first]
0x79E2AC: push    esi
0x79E2AD: push    eax; last
0x79E2AE: push    ebp; middle
0x79E2AF: push    ecx; first
0x79E2B0: call    OB_SFrondGuide_SortThreeByFuzzyArea_010201A0; Orders three SFrondGuide samples in descending fuzzySurfaceArea order using full-guide swaps. This is the median/pivot primitive for the guide introsort partitioner.
0x79E2B5: add     esp, 40h
0x79E2B8: pop     esi
0x79E2B9: pop     ebp
0x79E2BA: pop     ebx
0x79E2BB: pop     edi
0x79E2BC: retn
0x79E2BD: mov     edx, [esp+4+arg_C]
0x79E2C1: mov     eax, [esp+4+middle]
0x79E2C5: push    edx
0x79E2C6: push    edi; last
0x79E2C7: push    eax; middle
0x79E2C8: push    ecx; first
0x79E2C9: call    OB_SFrondGuide_SortThreeByFuzzyArea_010201A0; Orders three SFrondGuide samples in descending fuzzySurfaceArea order using full-guide swaps. This is the median/pivot primitive for the guide introsort partitioner.
0x79E2CE: add     esp, 10h
0x79E2D1: pop     edi
0x79E2D2: retn
