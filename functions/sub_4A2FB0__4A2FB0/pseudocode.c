char __thiscall sub_4A2FB0(int **this)
{
  int *v1; // esi
  void *v2; // ecx

  v1 = *(this + 7);
  if ( !v1 )
    return 0;
  v2 = *(this + 6);
  if ( !v2 || !sub_4A44A0(v2) )
    return 0;
  do
  {
    if ( !*v1 )
      break;
    if ( !sub_4A78A0(*v1, 1) )
      return 0;
    v1 = (int *)v1[1];
  }
  while ( v1 );
  return 1;
}
