void __thiscall sub_540590(_DWORD *this)
{
  int i; // esi

  for ( i = *(this + 0x38); i; i = *(_DWORD *)(i + 4) )
  {
    if ( !*(_DWORD *)i )
      break;
    sub_6B7240(**(int ***)i);
  }
}
