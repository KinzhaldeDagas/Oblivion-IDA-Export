float *__thiscall sub_757520(const char **this, _DWORD **a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x48u); /*0x757526*/
  if ( v3 ) /*0x757530*/
    v4 = sub_7572B0(v3); /*0x757539*/
  else
    v4 = 0; /*0x75753d*/
  sub_75E830(this, (int)v4, a2); /*0x757547*/
  *((_DWORD *)v4 + 0xC) = *(this + 0xC); /*0x75754f*/
  *((_DWORD *)v4 + 0xD) = *(this + 0xD); /*0x757555*/
  *((_DWORD *)v4 + 0xE) = *(this + 0xE); /*0x75755b*/
  *((_DWORD *)v4 + 0xF) = *(this + 0xC); /*0x757564*/
  *((_DWORD *)v4 + 0x10) = *(this + 0xD); /*0x757569*/
  *((_DWORD *)v4 + 0x11) = *(this + 0xE); /*0x75756f*/
  Vector3_NormalizeInPlace(v4 + 0xF); /*0x757572*/
  return v4; /*0x757579*/
}
