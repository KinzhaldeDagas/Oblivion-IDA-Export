float *__thiscall sub_751800(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  float *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x3Cu); /*0x751806*/
  if ( v3 ) /*0x751810*/
    v4 = (float *)sub_750B50(v3); /*0x751819*/
  else
    v4 = 0; /*0x75181d*/
  sub_752C40(this, (int)v4, a2); /*0x751827*/
  *((_DWORD *)v4 + 7) = *(this + 7); /*0x75182f*/
  *((_DWORD *)v4 + 8) = *(this + 8); /*0x751835*/
  *((_DWORD *)v4 + 9) = *(this + 9); /*0x75183b*/
  v4[0xA] = *((float *)this + 0xA); /*0x751841*/
  v4[0xB] = *((float *)this + 0xB); /*0x751849*/
  *((_DWORD *)v4 + 0xC) = *(this + 0xC); /*0x75184f*/
  v4[0xD] = *((float *)this + 0xD); /*0x751855*/
  v4[0xE] = *((float *)this + 0xE); /*0x75185c*/
  return v4; /*0x75185f*/
}
