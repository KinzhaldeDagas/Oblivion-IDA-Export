void __thiscall sub_553000(_DWORD *this)
{
  int v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int v4; // esi
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // esi
  int v7; // esi

  v2 = dword_B39B80;
  if ( dword_B39B80 )
  {
    if ( *(_DWORD *)(v2 + 0xDAC) )
    {
      sub_54F840(*(_DWORD **)(v2 + 0xDAC));
      v3 = *(void (__thiscall ****)(_DWORD, int))(dword_B39B80 + 0xDAC);
      if ( v3 )
        (**v3)(v3, 1);
      *(_DWORD *)(dword_B39B80 + 0xDAC) = 0;
    }
  }
  v4 = *(this + 0x36E);
  v5 = InterlockedDecrement;
  if ( v4 )
  {
    if ( !v5((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  v6 = *(this + 0x36D);
  if ( v6 )
  {
    if ( !v5((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  }
  v7 = *(this + 0x36C);
  if ( v7 )
  {
    if ( !v5((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  sub_551FE0((int)(this + 0x32));
  _LN21(this + 0x22, 0x10u, 4, (void (__thiscall *)(void *))sub_552E50);
  sub_552F40(this);
}
