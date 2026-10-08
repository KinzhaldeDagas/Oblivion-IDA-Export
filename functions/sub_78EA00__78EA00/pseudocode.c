// Oblivion stRandom::GetUniform. Returns minValue + (maxValue - minValue) * SIdvRandomImpl::m_cUniform.Next(). Used throughout spline, branch, frond, tree, leaf-LOD, and seed generation paths.
float __thiscall OB_stRandom_GetUniform_010201A0(OB_stRandom_010201A0 *this, float minValue, float maxValue)
{
  return minValue /*0x78ea24*/
       + (maxValue - minValue) * OB_Random_Next_010201A0((OB_Random_010201A0 *)&OB_SIdvRandomImpl_m_cUniform_010201A0);
}
