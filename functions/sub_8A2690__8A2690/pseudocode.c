int __thiscall sub_8A2690(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int result; // eax

  if ( this && (v2 = *(this + 2)) != 0 )
  {
    result = *(_DWORD *)(v2 + 8);
    *a2 = result;
  }
  else
  {
    *a2 = 0;
    return 0;
  }
  return result;
}
