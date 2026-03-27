0x664A40: fld     [esp+arg_0]
0x664A44: push    esi
0x664A45: mov     esi, ecx
0x664A47: push    0; a3
0x664A49: fst     dword ptr [esi+598h]
0x664A4F: push    ecx
0x664A50: mov     ecx, ds:0B333CCh; this
0x664A56: fstp    [esp+0Ch+a2]; a2
0x664A59: call    SetCameraFOV_0
0x664A5E: fld     [esp+4+arg_0]
0x664A62: push    ecx
0x664A63: fstp    [esp+8+var_8]; float
0x664A66: call    UpdateParticleShaderFOVData
0x664A6B: fld     dword ptr [esi+598h]
0x664A71: add     esp, 4
0x664A74: pop     esi
0x664A75: retn    4
