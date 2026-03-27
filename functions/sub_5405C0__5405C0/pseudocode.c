char __thiscall sub_5405C0(int **this, int a2, int a3)
{
  int *i; // ecx
  int v4; // eax

  for ( i = *(this + 0x38); i; i = (int *)i[1] )
  {
    v4 = *i;
    if ( !*i )
      break;
    if ( **(_DWORD **)v4 == a2 && *(_DWORD *)(v4 + 4) == a3 )
      return 1;
  }
  return 0;
}
