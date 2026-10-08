0x4ACDE0: fldz; Verified (Oblivion): returns 1 when the amplitude field at TESEffectShader+0x3C is nonpositive; otherwise returns sin(2π * activeElapsedSeconds * frequency at +0x40) * amplitude. TESEffectShader_AnimateTextureEffect multiplies fill alpha by (1 + this pulse) and clamps the result. Fill-alpha pulse role is direct; field names are Probable from Fallout's corresponding EffectShaderData layout.
0x4ACDE2: push    esi
0x4ACDE3: mov     esi, ecx
0x4ACDE5: fcomp   dword ptr [esi+3Ch]
0x4ACDE8: fnstsw  ax
0x4ACDEA: test    ah, 5
0x4ACDED: jp      short loc_4ACE20
0x4ACDEF: fld     dword ptr ds:0B3F9A0h
0x4ACDF5: fmul    [esp+4+activeElapsedSeconds]
0x4ACDF9: fmul    dword ptr [esi+40h]
0x4ACDFC: fstp    [esp+4+activeElapsedSeconds]
0x4ACE00: fld     [esp+4+activeElapsedSeconds]
0x4ACE04: call    __CIsin
0x4ACE09: fstp    [esp+4+activeElapsedSeconds]
0x4ACE0D: fld     [esp+4+activeElapsedSeconds]
0x4ACE11: fmul    dword ptr [esi+3Ch]
0x4ACE14: pop     esi
0x4ACE15: fstp    [esp+activeElapsedSeconds]
0x4ACE19: fld     [esp+activeElapsedSeconds]
0x4ACE1D: retn    4
0x4ACE20: fld1
0x4ACE22: pop     esi
0x4ACE23: retn    4
