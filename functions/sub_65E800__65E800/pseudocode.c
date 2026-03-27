void __thiscall sub_65E800(_DWORD *this)
{
  _DWORD *v2; // esi
  unsigned int *v3; // edi
  int v4; // edi

  v2 = this + 0x1CF;
  v3 = this + 0x1CF;
  if ( this != (_DWORD *)0xFFFFF8C4 )
  {
    do
    {
      FormHeapFree(*v3);
      v3 = (unsigned int *)v3[1];
    }
    while ( v3 );
  }
  if ( v2[1] )
  {
    do
    {
      v4 = *(_DWORD *)(v2[1] + 4);
      FormHeapFree(v2[1]);
      v2[1] = v4;
    }
    while ( v4 );
  }
  *v2 = 0;
  *(this + 0x1D1) = 0;
}
