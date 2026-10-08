0x5538D0: mov     eax, ds:0B39B80h; Returns the FaceGen manager's default head-parameter block at manager+0x08, initializing the manager on demand.
0x5538D5: test    eax, eax
0x5538D7: jnz     short loc_5538E3
0x5538D9: call    FaceGenManager_EnsureInitialized; Lazily allocates and constructs the process FaceGen manager singleton (0xDBC bytes). Callers use g_faceGenManager; the authoritative control/basis data comes from FaceGen\\si.ctl.
0x5538DE: mov     eax, ds:0B39B80h
0x5538E3: add     eax, 8
0x5538E6: retn
