int __thiscall sub_9003C0(_DWORD *this)
{
  int i; // edi

  if ( *(this + 2) )
  {
    for ( i = 0; i < *(this + 4); ++i )
    {
      if ( *(_WORD *)(*(this + 3) + 2 * i) != 0xFFFF )
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 2) + 0x10))(
          *(this + 2),
          *(unsigned __int16 *)(*(this + 3) + 2 * i));
    }
  }
  return (*(int (__thiscall **)(_DWORD *, int))*this)(this, 1);
}
