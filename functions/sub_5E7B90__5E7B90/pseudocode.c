void __thiscall sub_5E7B90(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned int *v2; // edi
  int v3; // edi

  v1 = this + 0x27;
  v2 = this + 0x27;
  if ( this != (_DWORD *)0xFFFFFF64 )
  {
    do
    {
      if ( *v2 )
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
