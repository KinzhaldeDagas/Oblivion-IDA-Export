int __thiscall sub_56B8D0(_DWORD *this)
{
  int v2; // ecx
  int v3; // esi

  v2 = *(this + 3);
  if ( v2 )
  {
    if ( !byte_B3F944 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 0x4C))(v2);
      v3 = *(this + 3);
      if ( v3 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
          (**(void (__thiscall ***)(int, int))v3)(v3, 1);
        *(this + 3) = 0;
      }
    }
  }
  return (*(int (__thiscall **)(_DWORD *))(*this + 0x54))(this);
}
