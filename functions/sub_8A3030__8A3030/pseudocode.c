hkVector4 *__thiscall sub_8A3030(_DWORD *this, hkVector4 *a2)
{
  int v2; // eax
  hkVector4 v3; // xmm0

  if ( this && (v2 = *(this + 2)) != 0 ) /*0x8a303f*/
  {
    v3 = *(hkVector4 *)(*(_DWORD *)(v2 + 0x50) + 0x60); /*0x8a3044*/
    *a2 = v3; /*0x8a304e*/
    return a2; /*0x8a304b*/
  }
  else
  {
    *a2 = unk_BA7A40; /*0x8a3062*/
    return a2; /*0x8a305f*/
  }
}
