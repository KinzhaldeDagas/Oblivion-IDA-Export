int __thiscall sub_75D6C0(unsigned __int16 *this, int a2)
{
  unsigned __int16 v2; // bp
  unsigned __int16 i; // bx
  void (__thiscall ***v5)(_DWORD, int); // edi
  int result; // eax

  v2 = a2;
  for ( i = a2; i < *(this + 0x24); ++i )
  {
    (*(void (__thiscall **)(_DWORD, int *, _DWORD))(**((_DWORD **)this + 0x1A) + 0x8C))(
      *((_DWORD *)this + 0x1A),
      &a2,
      i);
    if ( a2 )
    {
      v5 = (void (__thiscall ***)(_DWORD, int))a2;
      if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
        (**v5)(v5, 1);
    }
  }
  result = *(this + 4);
  if ( v2 > (unsigned __int16)result )
    *(this + 0x24) = result;
  else
    *(this + 0x24) = v2;
  return result;
}
