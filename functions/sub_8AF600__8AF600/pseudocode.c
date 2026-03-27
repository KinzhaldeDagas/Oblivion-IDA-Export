unsigned int *__thiscall sub_8AF600(_DWORD *this, int a2)
{
  int v3; // eax
  double v4; // st7
  unsigned int *result; // eax
  NiObjectNET *v6; // esi
  float v7; // [esp+18h] [ebp-4h]
  float v8; // [esp+18h] [ebp-4h]

  if ( this && (v3 = *(this + 2)) != 0 )
    v4 = *(float *)(v3 + 0xC);
  else
    v4 = flt_B2EFC4;
  v7 = v4;
  v8 = v7 * dbl_A372E0;
  result = (unsigned int *)sub_6FC010(v8, 0xAu, 0xA, 0);
  v6 = (NiObjectNET *)result;
  if ( result )
  {
    (*(void (__thiscall **)(_DWORD *, unsigned int *))(*this + 0x98))(this, result);
    NiObjectNET_SetName(v6, "bhkSphereShape");
    return (*(unsigned int *(__thiscall **)(int, NiObjectNET *, _DWORD))(*(_DWORD *)a2 + 0x84))(a2, v6, 0);
  }
  return result;
}
