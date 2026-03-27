void __thiscall sub_4F99C0(_DWORD *this)
{
  _DWORD *v1; // edi
  unsigned int *v2; // esi
  int v3; // esi

  v1 = this + 0xB;
  v2 = this + 0xB;
  if ( this != (_DWORD *)0xFFFFFFD4 )
  {
    do
    {
      if ( !v2[1] && !*v2 )
        break;
      FormHeapFree(*v2);
      v2 = (unsigned int *)v2[1];
    }
    while ( v2 );
  }
  if ( v1[1] )
  {
    do
    {
      v3 = *(_DWORD *)(v1[1] + 4);
      FormHeapFree(v1[1]);
      v1[1] = v3;
    }
    while ( v3 );
  }
  *v1 = 0;
}
