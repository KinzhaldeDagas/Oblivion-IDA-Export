void __thiscall sub_537630(_DWORD *this, int a2)
{
  _DWORD *i; // esi
  int j; // edi
  int v5; // eax
  int v6; // esi

  for ( i = (_DWORD *)*(this + 7); i; i = (_DWORD *)i[1] )
    sub_537020(i, a2);
  for ( j = *(this + 6); j; j = *(_DWORD *)(j + 4) )
  {
    v5 = *(_DWORD *)(j + 0x10);
    if ( v5 )
    {
      do
      {
        v6 = *(_DWORD *)(v5 + 4);
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v5 + 0xC) + 0x110))(*(_DWORD *)(v5 + 0xC), j, v5);
        v5 = v6;
      }
      while ( v6 );
    }
  }
}
