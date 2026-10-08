unsigned int *__thiscall sub_8AF600(_DWORD *this, int a2)
{
  int v3; // eax
  double v4; // st7
  unsigned int *result; // eax
  NiObjectNET *v6; // esi
  float v7; // [esp+18h] [ebp-4h]
  float v8; // [esp+18h] [ebp-4h]

  if ( this && (v3 = *(this + 2)) != 0 ) /*0x8af60e*/
    v4 = *(float *)(v3 + 0xC); /*0x8af610*/
  else
    v4 = flt_B2EFC4; /*0x8af615*/
  v7 = v4; /*0x8af61b*/
  v8 = v7 * dbl_A372E0; /*0x8af630*/
  result = (unsigned int *)sub_6FC010(v8, 0xA, 0xA, 0); /*0x8af63b*/
  v6 = (NiObjectNET *)result; /*0x8af640*/
  if ( result ) /*0x8af647*/
  {
    (*(void (__thiscall **)(_DWORD *, unsigned int *))(*this + 0x98))(this, result); /*0x8af654*/
    NiObjectNET_SetName(v6, "bhkSphereShape"); /*0x8af65d*/
    return (*(unsigned int *(__thiscall **)(int, NiObjectNET *, _DWORD))(*(_DWORD *)a2 + 0x84))(a2, v6, 0); /*0x8af671*/
  }
  return result; /*0x8af673*/
}
