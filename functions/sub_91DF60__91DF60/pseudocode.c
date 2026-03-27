int __thiscall sub_91DF60(_DWORD *this)
{
  int result; // eax
  int i; // esi

  result = *(this + 7);
  if ( result )
  {
    for ( i = 0; i < *(_DWORD *)(result + 0x60); ++i )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))*(this + 6))(this + 6, *(_DWORD *)(*(_DWORD *)(result + 0x5C) + 4 * i));
      result = *(this + 7);
    }
  }
  return result;
}
