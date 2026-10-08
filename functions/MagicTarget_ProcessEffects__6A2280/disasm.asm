0x6A2280: push    ecx; Verified active-effect manager: obtains the target's active-effect list, checks target parent/node/cell/process conditions, then enters the list loop. Each eligible ActiveEffect goes through ActiveEffect_Base_ProcessEffect; removed effects are unlinked and destroyed by their virtual destructor. Actor_ProcessMagicEffect calls this manager each actor process tick.
0x6A2281: push    ebp
0x6A2282: push    esi
0x6A2283: push    edi
0x6A2284: mov     edi, ecx
0x6A2286: mov     eax, [edi]
0x6A2288: mov     edx, [eax+8]
0x6A228B: mov     [esp+10h+var_1], 0
0x6A2290: call    edx
0x6A2292: mov     ebp, eax
0x6A2294: mov     eax, [edi]
0x6A2296: mov     edx, [eax+0Ch]
0x6A2299: mov     ecx, edi
0x6A229B: call    edx
0x6A229D: test    al, al
0x6A229F: jz      short MagicTarget_ProcessEffects___ActvEffLoop_Start
0x6A22A1: lea     esi, [edi-68h]
0x6A22A4: test    esi, esi
0x6A22A6: jz      short loc_6A22B2
0x6A22A8: cmp     dword ptr [esi+58h], 0
0x6A22AC: jz      MagicTarget_ProcessEffects___Done
0x6A22B2: mov     eax, [edi]
0x6A22B4: mov     edx, [eax+4]
0x6A22B7: mov     ecx, edi
0x6A22B9: call    edx
0x6A22BB: mov     edx, [eax]
0x6A22BD: mov     ecx, eax
0x6A22BF: mov     eax, [edx+154h]
0x6A22C5: call    eax
0x6A22C7: test    eax, eax
0x6A22C9: jz      MagicTarget_ProcessEffects___Done
0x6A22CF: mov     edx, [edi]
0x6A22D1: mov     eax, [edx+4]
0x6A22D4: mov     ecx, edi
0x6A22D6: call    eax
0x6A22D8: mov     ecx, eax; this
0x6A22DA: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x6A22DF: test    eax, eax
0x6A22E1: jz      MagicTarget_ProcessEffects___Done
0x6A22E7: mov     edx, [edi]
0x6A22E9: mov     eax, [edx+4]
0x6A22EC: mov     ecx, edi
0x6A22EE: call    eax
0x6A22F0: mov     ecx, eax; this
0x6A22F2: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x6A22F7: mov     ecx, eax; object
0x6A22F9: call    GetObjectPointerAt_054; Verified machine behavior is a raw pointer load from object+0x54. Cell-side callsites use TESObjectCELL+0x54 as NiNode*. TravelPath_AddRoadSegmentsForPath passes a TESWorldSpace, for which +0x54 is the owned TESRoad*. Keep the return interpretation dependent on the receiver type.
0x6A22FE: test    eax, eax
0x6A2300: jz      MagicTarget_ProcessEffects___Done
0x6A2306: cmp     byte ptr [esi+78h], 0
0x6A230A: jnz     short MagicTarget_ProcessEffects___ActvEffLoop_Start
0x6A230C: mov     ecx, ds:0B33B00h
0x6A2312: call    sub_45A500
0x6A2317: test    al, al
0x6A2319: jnz     short MagicTarget_ProcessEffects___ActvEffLoop_Start
0x6A231B: mov     [esp+10h+var_1], 1
