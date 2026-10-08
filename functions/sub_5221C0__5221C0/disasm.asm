0x5221C0: push    esi; Builds absolute FaceGen parameters by combining race base with active NPC delta. CORRECTION: bank selection uses base actor value 0x45 (vampirism), zero -> +0x108, nonzero -> +0x168; earlier sex-selected description was incorrect. Null race copies manager default parameters.
0x5221C1: push    edi
0x5221C2: mov     edi, [esp+8+outAbsolute]
0x5221C6: push    edi; parameters
0x5221C7: mov     esi, ecx
0x5221C9: call    FaceGenHeadParameters_Initialize; Standard FaceGenHeadParameters dimensions: matrix0 50x1, matrix1 30x1, matrix2 50x1, matrix3 untouched. Thus standard initialized active coefficient count is 130, under PF supported 256 cap. Existing elements survive ResizeFill as documented; this routine is not a full zero reset.
0x5221CE: add     esp, 4
0x5221D1: cmp     dword ptr [esi+0E8h], 0
0x5221D8: jnz     short loc_5221EE
0x5221DA: push    edi; destination
0x5221DB: call    FaceGenManager_GetDefaultHeadParameters; Returns the FaceGen manager's default head-parameter block at manager+0x08, initializing the manager on demand.
0x5221E0: push    eax; source
0x5221E1: call    FaceGenHeadParameters_Copy; Deep-copies all four FaceGen matrices, preserving dimensions and engine ownership of destination coefficient buffers.
0x5221E6: add     esp, 8
0x5221E9: pop     edi
0x5221EA: pop     esi
0x5221EB: retn    4
0x5221EE: mov     eax, [esi]
0x5221F0: mov     edx, [eax+128h]
0x5221F6: push    45h ; 'E'
0x5221F8: mov     ecx, esi
0x5221FA: call    edx
0x5221FC: test    eax, eax
0x5221FE: lea     eax, [esi+168h]
0x522204: jnz     short loc_52220C
0x522206: lea     eax, [esi+108h]
0x52220C: fldz
0x52220E: push    ecx
0x52220F: fstp    [esp+0Ch+maximumRms]; maximumRms
0x522212: push    0; specialSecondBankMode
0x522214: push    edi; outParameters
0x522215: push    eax; delta
0x522216: mov     eax, [esi+0E8h]
0x52221C: add     eax, 29Ch
0x522221: push    eax; base
0x522222: call    FaceGenHeadParameters_Combine; Four-matrix combine. Normal branch adds base+delta; optional positive maximumRms rescales using sqrt(sumSquares/rows), NOT sqrt(sumSquares/(rows*columns)). Equivalent to coefficient RMS only for columns=1. Special second-bank branch copies base matrices 2/3 rather than adding delta. No claim of malformed multi-column asset impact without callers/asset evidence.
0x522227: add     esp, 14h
0x52222A: pop     edi
0x52222B: pop     esi
0x52222C: retn    4
