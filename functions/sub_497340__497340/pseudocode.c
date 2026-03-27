_DWORD *__thiscall sub_497340(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax

  if ( this && (v2 = *(this + 2)) != 0 && (v3 = v2 + 0x14) != 0 )
  {
    *a2 = *(_DWORD *)(v3 + 0x1C);
    return a2;
  }
  else
  {
    *a2 = 0;
    return a2;
  }
}
