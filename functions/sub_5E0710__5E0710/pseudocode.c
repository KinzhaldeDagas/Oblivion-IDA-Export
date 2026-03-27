char __thiscall sub_5E0710(_DWORD **this, int a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // eax

  if ( !a2 )
    return 0;
  if ( a3 )
  {
    if ( *(this + 0x16) )
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x40C))(*(this + 0x16)) )
      {
        v4 = (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x40C))(*(this + 0x16));
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4) == 2 )
        {
          v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x40C))(*(this + 0x16));
          if ( v5 )
            return sub_683C70(v5, a2, a3);
        }
      }
    }
  }
  return 0;
}
