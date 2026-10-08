// SpeedTreeOBSE 2026-05-31 branch normal map apply: decoded PPLighting base-normal setter writes texture ref into SpeedTreeBranchShaderProperty+0xC0[index]. The OBSE opt-in [MapBank] bApplyBranchNormalTexture uses index 0 only at the 0x563749 render boundary after stock branch/leaf resource construction.
LONG __thiscall sub_7D7790(_DWORD *this, int a2, int a3)
{
  LONG result; // eax
  int v4; // esi
  _DWORD *v5; // edi

  result = *(this + 0x30); /*0x7d7790*/
  v4 = *(_DWORD *)(result + 4 * a2); /*0x7d77a0*/
  v5 = (_DWORD *)(result + 4 * a2); /*0x7d77a6*/
  if ( v4 != a3 ) /*0x7d77a9*/
  {
    if ( v4 ) /*0x7d77ad*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x7d77b3*/
      if ( !result ) /*0x7d77bb*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x7d77c9*/
    }
    *v5 = a3; /*0x7d77cd*/
    if ( a3 ) /*0x7d77cf*/
      return InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x7d77d5*/
  }
  return result; /*0x7d77db*/
}
