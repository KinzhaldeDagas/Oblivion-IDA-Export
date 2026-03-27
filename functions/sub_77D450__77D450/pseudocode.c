void sub_77D450()
{
  _DWORD *v0; // esi
  _DWORD *v1; // edi

  sub_782810();
  v0 = (_DWORD *)dword_B4289C;
  if ( dword_B4289C )
  {
    do
    {
      v1 = (_DWORD *)v0[0xF];
      sub_7826E0(v0);
      FormHeapFree((unsigned int)v0);
      v0 = v1;
    }
    while ( v1 );
  }
  dword_B4289C = 0;
}
