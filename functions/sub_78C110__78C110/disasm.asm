0x78C110: fldz; CSpeedTreeRT::SetLodLevel. Accepts only [0,1], writing instanceData+0x10 for instances or treeEngine+0x14 for base trees; out-of-range input records the SDK error.
0x78C112: fld     [esp+lodLevel]
0x78C116: fcom    st(1)
0x78C118: fnstsw  ax
0x78C11A: fstp    st(1)
0x78C11C: test    ah, 1
0x78C11F: jnz     short loc_78C141
0x78C121: fld1
0x78C123: fcomp   st(1)
0x78C125: fnstsw  ax
0x78C127: test    ah, 1
0x78C12A: jnz     short loc_78C141
0x78C12C: mov     eax, [ecx+34h]
0x78C12F: test    eax, eax
0x78C131: jz      short loc_78C139
0x78C133: fstp    dword ptr [eax+10h]
0x78C136: retn    4
0x78C139: mov     eax, [ecx]
0x78C13B: fstp    dword ptr [eax+14h]
0x78C13E: retn    4
0x78C141: push    38h ; '8'; count
0x78C143: fstp    st
0x78C145: push    offset aSetlodlevelExp; "SetLodLevel() expects a value in the ra"...
0x78C14A: mov     ecx, offset OB_g_strError_010201A0; this
0x78C14F: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x78C154: retn    4
