0x4ACD90: fldz; Verified (Oblivion): returns 1 when the amplitude field at TESEffectShader+0x64 is nonpositive; otherwise returns sin(2π * activeElapsedSeconds * frequency at +0x68) * amplitude. TESEffectShader_AnimateTextureEffect multiplies edge alpha by (1 + this pulse) and clamps the result. Edge-alpha pulse role is direct; field names are Probable from Fallout's corresponding EffectShaderData layout.
0x4ACD92: push    esi
0x4ACD93: mov     esi, ecx
0x4ACD95: fcomp   dword ptr [esi+64h]
0x4ACD98: fnstsw  ax
0x4ACD9A: test    ah, 5
0x4ACD9D: jp      short loc_4ACDD0
0x4ACD9F: fld     dword ptr ds:0B3F9A0h
0x4ACDA5: fmul    [esp+4+activeElapsedSeconds]
0x4ACDA9: fmul    dword ptr [esi+68h]
0x4ACDAC: fstp    [esp+4+activeElapsedSeconds]
0x4ACDB0: fld     [esp+4+activeElapsedSeconds]
0x4ACDB4: call    __CIsin
0x4ACDB9: fstp    [esp+4+activeElapsedSeconds]
0x4ACDBD: fld     [esp+4+activeElapsedSeconds]
0x4ACDC1: fmul    dword ptr [esi+64h]
0x4ACDC4: pop     esi
0x4ACDC5: fstp    [esp+activeElapsedSeconds]
0x4ACDC9: fld     [esp+activeElapsedSeconds]
0x4ACDCD: retn    4
0x4ACDD0: fld1
0x4ACDD2: pop     esi
0x4ACDD3: retn    4
