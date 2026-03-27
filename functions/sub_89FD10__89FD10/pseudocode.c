int __thiscall sub_89FD10(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int result; // eax
  int v5; // esi

  sub_89D8E0(this, a2);
  if ( this && (v3 = *(this + 2)) != 0 )
    result = *(_DWORD *)(v3 + 0x18);
  else
    result = 0;
  a2[1] = result;
  if ( this && (v5 = *(this + 2)) != 0 )
  {
    a2[2] = *(_DWORD *)(v5 + 0x1C);
  }
  else
  {
    a2[2] = 0;
    return 0;
  }
  return result;
}
