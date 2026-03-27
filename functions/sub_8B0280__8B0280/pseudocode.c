int __thiscall sub_8B0280(_DWORD *this, _DWORD *a2)
{
  int result; // eax
  int v4; // esi

  result = sub_8A2690(this, a2);
  if ( this && (v4 = *(this + 2)) != 0 )
  {
    a2[1] = *(_DWORD *)(v4 + 0xC);
  }
  else
  {
    a2[1] = 0;
    return 0;
  }
  return result;
}
