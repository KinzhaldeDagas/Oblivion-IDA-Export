0x79E2E0: mov     ecx, [esp+last]; Builds a heap over [first,last) SFrondGuide records by walking parent holes backward from count/2 and applying the guide adjust-heap primitive.
0x79E2E4: push    ebx
0x79E2E5: push    ebp
0x79E2E6: push    esi
0x79E2E7: mov     esi, [esp+0Ch+first]
0x79E2EB: sub     ecx, esi
0x79E2ED: mov     eax, 2AAAAAABh
0x79E2F2: imul    ecx
0x79E2F4: sar     edx, 3
0x79E2F7: mov     ebp, edx
0x79E2F9: shr     ebp, 1Fh
0x79E2FC: add     ebp, edx
0x79E2FE: mov     eax, ebp
0x79E300: cdq
0x79E301: sub     eax, edx
0x79E303: mov     ebx, eax
0x79E305: sar     ebx, 1
0x79E307: test    ebx, ebx
0x79E309: push    edi
0x79E30A: jle     short loc_79E377
0x79E30C: lea     eax, [ebx+ebx*2]
0x79E30F: shl     eax, 4
0x79E312: lea     esi, [eax+esi+14h]
0x79E316: mov     ecx, dword ptr [esp+10h+sorterState]
0x79E31A: push    ecx; sorterState
0x79E31B: sub     esp, 30h
0x79E31E: sub     esi, 30h ; '0'
0x79E321: mov     edi, esp
0x79E323: lea     edx, [esi-14h]
0x79E326: mov     [esp+44h+last], esp
0x79E32A: push    edx; source
0x79E32B: mov     ecx, edi; this
0x79E32D: sub     ebx, 1
0x79E330: call    OB_stVector_SFrondVertex_CopyCtor_010201A0; Oblivion-authoritative copy construction for the 16-byte vector wrapper embedded at SFrondGuide+0x00. Allocates capacity for the exact source count and deep-copies 0x38-byte SFrondVertex records; scalar guide fields are copied separately by callers.
0x79E335: fld     dword ptr [esi-4]
0x79E338: fstp    dword ptr [edi+10h]
0x79E33B: push    ebp; length
0x79E33C: fld     dword ptr [esi]
0x79E33E: push    ebx; holeIndex
0x79E33F: fstp    dword ptr [edi+14h]
0x79E342: mov     al, [esi+4]
0x79E345: mov     [edi+18h], al
0x79E348: fld     dword ptr [esi+8]
0x79E34B: mov     eax, [esp+4Ch+first]
0x79E34F: fstp    dword ptr [edi+1Ch]
0x79E352: fld     dword ptr [esi+0Ch]
0x79E355: push    eax; base
0x79E356: fstp    dword ptr [edi+20h]
0x79E359: fld     dword ptr [esi+10h]
0x79E35C: fstp    dword ptr [edi+24h]
0x79E35F: mov     ecx, [esi+14h]
0x79E362: mov     [edi+28h], ecx
0x79E365: mov     edx, [esi+18h]
0x79E368: mov     [edi+2Ch], edx
0x79E36B: call    OB_SFrondGuide_AdjustHeap_010201A0; Adjusts/sifts one hole down the SFrondGuide heap, selecting children by fuzzySurfaceArea and moving whole non-trivial guide records. Finishes by pushing the saved by-value guide upward into its final heap slot.
0x79E370: add     esp, 40h
0x79E373: test    ebx, ebx
0x79E375: jg      short loc_79E316
0x79E377: pop     edi
0x79E378: pop     esi
0x79E379: pop     ebp
0x79E37A: pop     ebx
0x79E37B: retn
