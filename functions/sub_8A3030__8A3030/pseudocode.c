hkVector4 *__thiscall sub_8A3030(_DWORD *this, hkVector4 *a2)
{
  int v2; // eax
  hkVector4 v3; // xmm0

  if ( this && (v2 = *(this + 2)) != 0 )
  {
    v3 = *(hkVector4 *)(*(_DWORD *)(v2 + 0x50) + 0x60);
    *a2 = v3;
    return a2;
  }
  else
  {
    *a2 = stru_BA7A40;
    return a2;
  }
}
