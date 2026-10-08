hkVector4 *__thiscall sub_8A2FF0(_DWORD *this, hkVector4 *a2)
{
  int v2; // eax
  hkVector4 v3; // xmm0

  if ( this && (v2 = *(this + 2)) != 0 ) /*0x8a2fff*/
  {
    v3 = *(hkVector4 *)(*(_DWORD *)(v2 + 0x50) + 0x90); /*0x8a3004*/
    *a2 = v3; /*0x8a3013*/
    return a2; /*0x8a3010*/
  }
  else
  {
    *a2 = unk_BA7A40; /*0x8a3027*/
    return a2; /*0x8a3024*/
  }
}
