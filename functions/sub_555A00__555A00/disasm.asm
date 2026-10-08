0x555A00: sub     esp, 8; Set one fan-0 control while preserving its paired control. matrixChannel 0 updates matrix 0; matrixChannel 1 updates matrix 2 through the authored FanControls bases.
0x555A03: push    ebx
0x555A04: mov     ebx, [esp+0Ch+parameters]
0x555A08: push    ebp
0x555A09: mov     ebp, [esp+10h+sexChannel]
0x555A0D: push    esi
0x555A0E: push    edi
0x555A0F: mov     edi, [esp+18h+controlIndex]
0x555A13: xor     esi, esi
0x555A15: cmp     esi, ebp
0x555A17: jnz     short loc_555A1F
0x555A19: fld     [esp+18h+value]
0x555A1D: jmp     short loc_555A43
0x555A1F: cmp     dword ptr ds:0B39B80h, 0
0x555A26: jnz     short loc_555A2D
0x555A28: call    FaceGenManager_EnsureInitialized; Lazily allocates and constructs the process FaceGen manager singleton (0xDBC bytes). Callers use g_faceGenManager; the authoritative control/basis data comes from FaceGen\\si.ctl.
0x555A2D: mov     ecx, ds:0B39B80h
0x555A33: push    ebx; parameters
0x555A34: push    edi; matrixChannel
0x555A35: push    esi; controlIndex
0x555A36: push    0; fanIndex
0x555A38: add     ecx, 0C8h ; 'È'; this
0x555A3E: call    FaceGenFanControls_GetControlValue; Control value = projectionOffset + first element of basis * parameters.matrix[2*matrixChannel]. Record is this+0x25C + fanIndex*0x80 + controlIndex*0x40 + matrixChannel*0x20; layout FaceGenFanProjectionRecord (0x20 bytes). Returns zero when initialized byte is false. Signed upper-bound checks only; negative indices are not rejected. Assertion helper logs and returns, so oversized indices are not stopped either. Caller misuse impact unproven.
0x555A43: fstp    [esp+esi*4+18h+targetPair]
0x555A47: add     esi, 1
0x555A4A: cmp     esi, 2
0x555A4D: jl      short loc_555A15
0x555A4F: cmp     dword ptr ds:0B39B80h, 0
0x555A56: jnz     short loc_555A5D
0x555A58: call    FaceGenManager_EnsureInitialized; Lazily allocates and constructs the process FaceGen manager singleton (0xDBC bytes). Callers use g_faceGenManager; the authoritative control/basis data comes from FaceGen\\si.ctl.
0x555A5D: mov     ecx, ds:0B39B80h
0x555A63: push    ebx; parameters
0x555A64: lea     eax, [esp+1Ch+targetPair]
0x555A68: push    eax; targetPair
0x555A69: push    edi; matrixChannel
0x555A6A: push    0; fanIndex
0x555A6C: add     ecx, 0C8h ; 'È'; this
0x555A72: call    FaceGenFanControls_SetControlPair; Set the requested fan-0 control while preserving its paired control in the selected matrix 0/2 channel.
0x555A77: pop     edi
0x555A78: pop     esi
0x555A79: pop     ebp
0x555A7A: pop     ebx
0x555A7B: add     esp, 8
0x555A7E: retn
