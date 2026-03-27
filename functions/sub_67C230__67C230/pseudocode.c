int __thiscall sub_67C230(int *this)
{
  int i; // esi
  int result; // eax

  for ( i = *this; i; i = *(_DWORD *)(i + 4) )
  {
    if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i )
      break;
    result = sub_67BDD0(*(_DWORD **)i);
  }
  return result;
}
