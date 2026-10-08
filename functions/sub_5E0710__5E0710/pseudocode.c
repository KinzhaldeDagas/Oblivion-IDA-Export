char __thiscall sub_5E0710(_DWORD **this, int a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // eax

  if ( !a2 ) /*0x5e071d*/
    return 0; /*0x5e077d*/
  if ( a3 ) /*0x5e0726*/
  {
    if ( *(this + 0x16) ) /*0x5e0728*/
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x40C))(*(this + 0x16)) ) /*0x5e0739*/
      {
        v4 = (*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x40C))(*(this + 0x16)); /*0x5e074a*/
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4) == 2 ) /*0x5e0758*/
        {
          v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x40C))(*(this + 0x16)); /*0x5e0765*/
          if ( v5 ) /*0x5e0769*/
            return sub_683C70(v5, a2, a3); /*0x5e076f*/
        }
      }
    }
  }
  return 0; /*0x5e0775*/
}
