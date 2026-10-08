0x43CB90: push    ecx; Verified QueuedTree vtable QueueModels override (+0x2C). Reads its reference at +0x20, gets the base TESObjectTREE, computes a form-specific LOD multiplier with TESForm_GetLODMult, optionally substitutes value 6 when TESObjectREFR_HasVisibleDistantFlag is true, then attaches a QueuedTreeModel child with the same reference/tree and inherited priority. Probable visible-distant association is supported by Fallout's named getter and identical 0x8000 check; Oblivion helper does not test the base form bit.
0x43CB91: push    ebx
0x43CB92: push    esi
0x43CB93: mov     esi, ecx
0x43CB95: mov     ecx, [esi+20h]
0x43CB98: mov     eax, [ecx]
0x43CB9A: mov     edx, [eax+170h]
0x43CBA0: push    edi
0x43CBA1: call    edx
0x43CBA3: mov     edi, eax
0x43CBA5: push    edi; form
0x43CBA6: call    TESForm_GetLODMult; Verified control flow: returns 2 for form-type bytes {0x13,0x14,0x15,0x16,0x19,0x1B,0x21,0x22,0x26,0x27,0x28,0x2A}, 3 for {0x23,0x24}, otherwise 1. Probable semantic name TESForm_GetLODMult is supported by the direct queued-tree argument use and Fallout's named TES::GetLODMult; individual type-group meanings are not decoded here.
0x43CBAB: mov     ecx, [esi+20h]; this
0x43CBAE: add     esp, 4
0x43CBB1: test    ecx, ecx
0x43CBB3: mov     ebx, eax
0x43CBB5: jz      short loc_43CBC5
0x43CBB7: call    TESObjectREFR_HasVisibleDistantFlag; Probable: the reference's 0x8000 TESForm flag is the visible-distant flag. Oblivion promotes this queued tree task's LOD multiplier to 6 when set. Fallout's GetVisibleDistant checks the same bit on the reference and then its base form; this helper checks only the reference.
0x43CBBC: test    al, al
0x43CBBE: jz      short loc_43CBC5
0x43CBC0: mov     ebx, 6
0x43CBC5: mov     eax, [esi+10h]
0x43CBC8: mov     edx, [esi+14h]
0x43CBCB: push    ebx; unknownArg
0x43CBCC: push    esi; parent
0x43CBCD: mov     cl, 10h
0x43CBCF: call    __allshr
0x43CBD4: mov     ecx, [esi+20h]
0x43CBD7: movzx   eax, al
0x43CBDA: push    eax; priority
0x43CBDB: push    edi; tree
0x43CBDC: push    ecx; reference
0x43CBDD: mov     ecx, ds:0B33A1Ch
0x43CBE3: lea     edx, [esp+24h+outTask]
0x43CBE7: push    edx; outTask
0x43CBE8: call    QueuedTreeModel_CreateAndQueue; Verified: caller passes the form-derived LOD multiplier (or 6 for a reference carrying TESObjectREFR flag 0x8000) into QueuedTreeModel+0x30; constructor now labels that field lodMultiplier. Fallout QueueModels also calls GetIsImposter in addition to GetVisibleDistant, an observed call-path divergence whose effect is not yet established.
0x43CBED: mov     eax, [esp+10h+outTask]
0x43CBF1: test    eax, eax
0x43CBF3: jz      short loc_43CC13
0x43CBF5: mov     esi, eax
0x43CBF7: add     eax, 8
0x43CBFA: push    eax; lpAddend
0x43CBFB: call    ds:InterlockedDecrement
0x43CC01: test    eax, eax
0x43CC03: jnz     short loc_43CC13
0x43CC05: test    esi, esi
0x43CC07: jz      short loc_43CC13
0x43CC09: mov     eax, [esi]
0x43CC0B: mov     edx, [eax]
0x43CC0D: push    1
0x43CC0F: mov     ecx, esi
0x43CC11: call    edx
0x43CC13: pop     edi
0x43CC14: pop     esi
0x43CC15: pop     ebx
0x43CC16: pop     ecx
0x43CC17: retn
