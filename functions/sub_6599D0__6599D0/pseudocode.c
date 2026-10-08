double __thiscall sub_6599D0(_DWORD **this)
{
  double result; // st7
  int v2; // [esp+0h] [ebp-4h]

  if ( !*(this + 0x16) ) /*0x6599d1*/
    return kTerrainLODQuadRayDirectionZ; /*0x6599f3*/
  v2 = (*(int (__thiscall **)(_DWORD, _DWORD **))(**(this + 0x16) + 0x2C))(*(this + 0x16), this); /*0x6599e3*/
  result = (double)v2; /*0x6599e6*/
  if ( v2 < 0 ) /*0x6599e9*/
    return result + flt_A2FC78; /*0x6599eb*/
  return result; /*0x6599f2*/
}
