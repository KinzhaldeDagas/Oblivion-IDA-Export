0x553B30: cmp     dword ptr ds:0B39B80h, 0; Fan-0 control projection wrapper. matrixChannel 0 projects FaceGen matrix 0; matrixChannel 1 projects FaceGen matrix 2, not matrix 1.
0x553B37: jnz     short loc_553B3E
0x553B39: call    FaceGenManager_EnsureInitialized; Lazily allocates and constructs the process FaceGen manager singleton (0xDBC bytes). Callers use g_faceGenManager; the authoritative control/basis data comes from FaceGen\\si.ctl.
0x553B3E: mov     eax, [esp+parameters]
0x553B42: mov     ecx, [esp+sexChannel]
0x553B46: mov     edx, [esp+controlIndex]
0x553B4A: push    eax; parameters
0x553B4B: push    ecx; matrixChannel
0x553B4C: mov     ecx, ds:0B39B80h
0x553B52: push    edx; controlIndex
0x553B53: push    0; fanIndex
0x553B55: add     ecx, 0C8h ; 'È'; this
0x553B5B: call    FaceGenFanControls_GetControlValue; Fan-0 control projection. matrixChannel 0 selects parameters.matrix[0]; matrixChannel 1 selects parameters.matrix[2].
0x553B60: retn
