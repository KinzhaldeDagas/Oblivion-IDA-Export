_DWORD *__thiscall sub_497340(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax

  if ( this && (v2 = *(this + 2)) != 0 && (v3 = v2 + 0x14) != 0 ) /*0x49734e*/
  {
    *a2 = *(_DWORD *)(v3 + 0x1C); /*0x497357*/
    return a2; /*0x497359*/
  }
  else
  {
    *a2 = 0; /*0x497364*/
    return a2; /*0x49735e*/
  }
}
