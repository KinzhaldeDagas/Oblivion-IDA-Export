int __thiscall sub_4ED430(float *this, volatile LONG *a2, float a3, float a4, float a5, int a6)
{
  int v8; // eax
  int v10; // eax
  float *v11; // ecx
  int v12; // eax
  float v13; // [esp+20h] [ebp+4h]

  if ( !a2 )
    return 0;
  v8 = *(_DWORD *)this;
  *(this + 6) = (float)(*(__int16 *)(*(_DWORD *)this + 8) << 0x11);
  v13 = (float)(*(__int16 *)(v8 + 0xA) << 0x11);
  *(this + 7) = v13;
  if ( a3 < sub_4EC870(*(this + 6), v13, flt_A47B20, a4, a5) )
  {
    sub_4ECAE0(this, a2);
    return 0;
  }
  v10 = *((_DWORD *)this + 2);
  if ( v10 == 3 )
    return 0;
  if ( (v10 == 5 || v10 == 1) && !*((_DWORD *)this + 0xB) )
  {
    if ( !sub_4ED320((int *)this) )
      PrintError(
        "TESTerrainLODQuad::BuildMesh() failed for %i,%i.",
        *(__int16 *)(*(_DWORD *)this + 8),
        *(__int16 *)(*(_DWORD *)this + 0xA));
    v11 = *((float **)this + 0xB);
    if ( !v11 )
      return 0;
    sub_404CF0(v11, *(this + 6), *(this + 7), 0.0);
  }
  v12 = *((_DWORD *)this + 2);
  if ( v12 == 2 || v12 == 4 )
  {
    (*(void (__thiscall **)(volatile LONG *, _DWORD, int))(*a2 + 0x84))(a2, *((_DWORD *)this + 0xB), 1);
    *((_DWORD *)this + 2) = 3;
    sub_43FCD0(TES);
  }
  return *((_DWORD *)this + 9) - 2;
}
