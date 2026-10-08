0x553B70: push    edi; Oblivion FaceGen randomizer wrapper. Ensures the manager exists, then fills all four output matrices as race base plus independent Gaussian variation.
0x553B71: mov     edi, [esp+4+outParameters]
0x553B75: test    edi, edi
0x553B77: jz      short loc_553BAC
0x553B79: push    esi
0x553B7A: mov     esi, [esp+8+raceParameters]
0x553B7E: test    esi, esi
0x553B80: jz      short loc_553BAB
0x553B82: cmp     dword ptr ds:0B39B80h, 0
0x553B89: jnz     short loc_553B90
0x553B8B: call    FaceGenManager_EnsureInitialized; Lazily allocates and constructs the process FaceGen manager singleton (0xDBC bytes). Callers use g_faceGenManager; the authoritative control/basis data comes from FaceGen\\si.ctl.
0x553B90: fld     [esp+8+geneticVariation]
0x553B94: push    edi; outParameters
0x553B95: push    esi; baseParameters
0x553B96: push    ecx
0x553B97: mov     ecx, ds:0B39B80h
0x553B9D: fstp    [esp+14h+var_14]; geneticVariation
0x553BA0: add     ecx, 0C8h ; 'È'; this
0x553BA6: call    FaceGenHeadParameters_AddGaussianVariation; Call the manager+0xC8 random-generator method with (geneticVariation, raceParameters, outParameters). The method receives but does not otherwise use its manager subobject.
0x553BAB: pop     esi
0x553BAC: pop     edi
0x553BAD: retn
