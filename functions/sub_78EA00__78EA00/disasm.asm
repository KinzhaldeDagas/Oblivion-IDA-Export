0x78EA00: mov     ecx, offset OB_SIdvRandomImpl_m_cUniform_010201A0; Oblivion stRandom::GetUniform. Returns minValue + (maxValue - minValue) * SIdvRandomImpl::m_cUniform.Next(). Used throughout spline, branch, frond, tree, leaf-LOD, and seed generation paths.
0x78EA05: call    OB_Random_Next_010201A0; Oblivion Random::Next. Rejects an uninitialized seed, selects Buffer[int(Raw()*128)], replaces that entry with another Raw() result, and returns the prior buffered sample.
0x78EA0A: fld     [esp+maxValue]
0x78EA0E: fld     [esp+minValue]
0x78EA12: fld     st
0x78EA14: fsubp   st(2), st
0x78EA16: fxch    st(2)
0x78EA18: fmulp   st(1), st
0x78EA1A: faddp   st(1), st
0x78EA1C: fstp    [esp+maxValue]
0x78EA20: fld     [esp+maxValue]
0x78EA24: retn    8
