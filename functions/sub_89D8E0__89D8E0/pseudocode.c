int __thiscall sub_89D8E0(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  int result; // eax

  if ( this && (v2 = *(this + 2)) != 0 )
  {
    result = *(_DWORD *)(v2 + 0x10);
    *a2 = result;
  }
  else
  {
    *a2 = 0;
    return 0;
  }
  return result;
}
