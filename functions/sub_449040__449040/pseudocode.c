int __thiscall sub_449040(int *this, int a2, int a3)
{
  int *i; // ecx
  int result; // eax

  for ( i = this + 0x2D; i; i = (int *)i[1] )
  {
    result = *i;
    if ( !*i )
      break;
    if ( *(_DWORD *)(result + 0x30) == a2 )
    {
      if ( !a3 )
        return result;
      --a3;
    }
  }
  return 0;
}
