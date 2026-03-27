void __thiscall sub_4993B0(_BYTE *this)
{
  int v2; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // esi

  if ( !*(this + 0x10) )
  {
    if ( *(_DWORD *)this )
    {
      v2 = *(_DWORD *)(*(_DWORD *)this + 0x58);
      if ( v2 )
      {
        if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2) )
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 0x58) + 0x288) = 0;
      }
    }
  }
  v3 = InterlockedDecrement;
  *((_DWORD *)this + 1) = 0;
  v4 = *((_DWORD *)this + 2);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 2) = 0;
  }
  v5 = *((_DWORD *)this + 3);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 3) = 0;
  }
  v6 = *((_DWORD *)this + 3);
  if ( v6 )
  {
    if ( !v3((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  }
  v7 = *((_DWORD *)this + 2);
  if ( v7 )
  {
    if ( !v3((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
}
