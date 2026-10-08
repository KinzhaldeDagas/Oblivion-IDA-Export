0x79FA30: sub     esp, 8; Oblivion CFrondEngine guide introsort used only by BuildGuideLods. Orders full 0x30-byte SFrondGuide records by descending fuzzySurfaceArea: three-way partition while the ideal partition budget remains, insertion sort at <=32 records, and heap fallback on budget exhaustion. RT 4.1 corroborates the descending comparator, but its source sorts SFrondGuide* pointers; the executable moves compact guide records directly.
0x79FA33: push    ebx
0x79FA34: mov     ebx, [esp+0Ch+first]
0x79FA38: push    ebp
0x79FA39: push    esi
0x79FA3A: push    edi
0x79FA3B: mov     edi, [esp+18h+last]
0x79FA3F: mov     ecx, edi
0x79FA41: sub     ecx, ebx
0x79FA43: mov     eax, 2AAAAAABh
0x79FA48: imul    ecx
0x79FA4A: sar     edx, 3
0x79FA4D: mov     eax, edx
0x79FA4F: shr     eax, 1Fh
0x79FA52: add     eax, edx
0x79FA54: cmp     eax, 20h ; ' '
0x79FA57: jle     loc_79FB10
0x79FA5D: mov     esi, [esp+18h+depthLimit]
0x79FA61: test    esi, esi
0x79FA63: jle     loc_79FB2C
0x79FA69: mov     eax, dword ptr [esp+18h+sorterState]
0x79FA6D: push    eax
0x79FA6E: push    edi; last
0x79FA6F: lea     ecx, [esp+20h+result]
0x79FA73: push    ebx; first
0x79FA74: push    ecx; result
0x79FA75: call    OB_SFrondGuide_PartitionByFuzzyArea_010201A0; Three-way partition of 0x30-byte SFrondGuide records around a sampled fuzzySurfaceArea pivot, descending. Groups values greater than, equal to, and less than the pivot and returns the lower/upper bounds of the equal partition.
0x79FA7A: mov     ebp, [esp+28h+result.upper]
0x79FA7E: mov     eax, esi
0x79FA80: cdq
0x79FA81: sub     eax, edx
0x79FA83: sar     eax, 1
0x79FA85: mov     esi, eax
0x79FA87: cdq
0x79FA88: sub     eax, edx
0x79FA8A: sar     eax, 1
0x79FA8C: add     esi, eax
0x79FA8E: mov     ecx, edi
0x79FA90: sub     ecx, ebp
0x79FA92: mov     eax, 2AAAAAABh
0x79FA97: imul    ecx
0x79FA99: mov     ecx, [esp+28h+result.lower]
0x79FA9D: sar     edx, 3
0x79FAA0: mov     eax, edx
0x79FAA2: shr     eax, 1Fh
0x79FAA5: add     eax, edx
0x79FAA7: mov     [esp+28h+last], eax
0x79FAAB: sub     ecx, ebx
0x79FAAD: mov     eax, 2AAAAAABh
0x79FAB2: imul    ecx
0x79FAB4: mov     ecx, [esp+28h+last]
0x79FAB8: sar     edx, 3
0x79FABB: mov     eax, edx
0x79FABD: shr     eax, 1Fh
0x79FAC0: add     eax, edx
0x79FAC2: add     esp, 10h
0x79FAC5: cmp     eax, ecx
0x79FAC7: jge     short loc_79FADE
0x79FAC9: mov     ecx, dword ptr [esp+18h+sorterState]
0x79FACD: mov     edx, [esp+18h+result.lower]
0x79FAD1: push    ecx; sorterState
0x79FAD2: push    esi; partitionBudget
0x79FAD3: push    edx; last
0x79FAD4: push    ebx; first
0x79FAD5: call    OB_CFrondEngine_SortGuidesByFuzzyArea_010201A0; Oblivion CFrondEngine guide introsort used only by BuildGuideLods. Orders full 0x30-byte SFrondGuide records by descending fuzzySurfaceArea: three-way partition while the ideal partition budget remains, insertion sort at <=32 records, and heap fallback on budget exhaustion. RT 4.1 corroborates the descending comparator, but its source sorts SFrondGuide* pointers; the executable moves compact guide records directly.
0x79FADA: mov     ebx, ebp
0x79FADC: jmp     short loc_79FAEF
0x79FADE: mov     eax, dword ptr [esp+18h+sorterState]
0x79FAE2: push    eax; sorterState
0x79FAE3: push    esi; partitionBudget
0x79FAE4: push    edi; last
0x79FAE5: push    ebp; first
0x79FAE6: call    OB_CFrondEngine_SortGuidesByFuzzyArea_010201A0; Oblivion CFrondEngine guide introsort used only by BuildGuideLods. Orders full 0x30-byte SFrondGuide records by descending fuzzySurfaceArea: three-way partition while the ideal partition budget remains, insertion sort at <=32 records, and heap fallback on budget exhaustion. RT 4.1 corroborates the descending comparator, but its source sorts SFrondGuide* pointers; the executable moves compact guide records directly.
0x79FAEB: mov     edi, [esp+28h+result.lower]
0x79FAEF: mov     ecx, edi
0x79FAF1: sub     ecx, ebx
0x79FAF3: mov     eax, 2AAAAAABh
0x79FAF8: imul    ecx
0x79FAFA: sar     edx, 3
0x79FAFD: mov     eax, edx
0x79FAFF: shr     eax, 1Fh
0x79FB02: add     eax, edx
0x79FB04: add     esp, 10h
0x79FB07: cmp     eax, 20h ; ' '
0x79FB0A: jg      loc_79FA61
0x79FB10: cmp     eax, 1
0x79FB13: jle     short loc_79FB24
0x79FB15: mov     ecx, dword ptr [esp+18h+sorterState]
0x79FB19: push    ecx
0x79FB1A: push    edi; last
0x79FB1B: push    ebx; first
0x79FB1C: call    OB_SFrondGuide_InsertionSortByFuzzyArea_010201A0; Insertion-sort cleanup for short SFrondGuide ranges (threshold 32 in the caller). Finds the descending fuzzySurfaceArea insertion point and rotates whole guide ranges to preserve embedded vector ownership.
0x79FB21: add     esp, 0Ch
0x79FB24: pop     edi
0x79FB25: pop     esi
0x79FB26: pop     ebp
0x79FB27: pop     ebx
0x79FB28: add     esp, 8
0x79FB2B: retn
0x79FB2C: cmp     eax, 20h ; ' '
0x79FB2F: jle     short loc_79FB10
0x79FB31: mov     ecx, edi
0x79FB33: sub     ecx, ebx
0x79FB35: mov     eax, 2AAAAAABh
0x79FB3A: imul    ecx
0x79FB3C: sar     edx, 3
0x79FB3F: mov     ecx, edx
0x79FB41: shr     ecx, 1Fh
0x79FB44: add     ecx, edx
0x79FB46: cmp     ecx, 1
0x79FB49: jle     short loc_79FB5E
0x79FB4B: mov     edx, dword ptr [esp+18h+sorterState]
0x79FB4F: push    0
0x79FB51: push    0
0x79FB53: push    edx; sorterState
0x79FB54: push    edi; last
0x79FB55: push    ebx; first
0x79FB56: call    OB_SFrondGuide_MakeHeap_010201A0; Builds a heap over [first,last) SFrondGuide records by walking parent holes backward from count/2 and applying the guide adjust-heap primitive.
0x79FB5B: add     esp, 14h
0x79FB5E: mov     eax, dword ptr [esp+18h+sorterState]
0x79FB62: push    eax; sorterState
0x79FB63: push    edi; last
0x79FB64: push    ebx; first
0x79FB65: call    OB_SFrondGuide_SortHeapByFuzzyArea_010201A0; Sorts an SFrondGuide heap by repeatedly popping the last heap element and repairing the shortened heap. Used as the introsort worst-case fallback.
0x79FB6A: add     esp, 0Ch
0x79FB6D: pop     edi
0x79FB6E: pop     esi
0x79FB6F: pop     ebp
0x79FB70: pop     ebx
0x79FB71: add     esp, 8
0x79FB74: retn
