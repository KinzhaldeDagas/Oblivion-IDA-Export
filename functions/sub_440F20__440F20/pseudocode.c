void __thiscall sub_440F20(_DWORD *this)
{
  _DWORD *v1; // edi
  unsigned int *v2; // esi
  int v3; // esi

  v1 = this + 0x23;
  v2 = this + 0x23;
  if ( this != (_DWORD *)0xFFFFFF74 )
  {
    do
    {
      if ( !*v2 )
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
