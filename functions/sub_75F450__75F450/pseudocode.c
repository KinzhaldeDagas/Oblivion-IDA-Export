_DWORD *__thiscall sub_75F450(Ni2DBuffer **this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v4; // esi
  float *v5; // eax
  float *v6; // eax

  result = (_DWORD *)j_NiSingleInterpController_LinkObject(this, a2); /*0x75f459*/
  if ( a2[0x36] < 0xA010068u ) /*0x75f468*/
  {
    v4 = sub_7124A0(a2); /*0x75f473*/
    v5 = (float *)FormHeapAlloc(0x20u); /*0x75f475*/
    if ( v5 ) /*0x75f47f*/
    {
      v6 = sub_6E7DB0(v5, v4); /*0x75f484*/
      return NiSmartPointer_Set__(this + 0xF, (Ni2DBuffer *)v6); /*0x75f48d*/
    }
    else
    {
      return NiSmartPointer_Set__(this + 0xF, 0); /*0x75f49d*/
    }
  }
  return result; /*0x75f492*/
}
