void __thiscall sub_4887C0(int *this)
{
  int i; // esi

  for ( i = *this; i; i = *(_DWORD *)(i + 4) )
  {
    if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i )
      break;
    if ( *(_DWORD *)i )
      sub_485BC0(*(_DWORD **)i);
  }
}
