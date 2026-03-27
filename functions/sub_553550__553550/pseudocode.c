void sub_553550()
{
  _DWORD *v0; // eax

  if ( !dword_B39B80 )
  {
    v0 = (_DWORD *)FormHeapAlloc(0xDBCu);
    if ( v0 )
      dword_B39B80 = (int)sub_553140(v0);
    else
      dword_B39B80 = 0;
  }
}
