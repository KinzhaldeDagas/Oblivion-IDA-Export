void __thiscall sub_6623A0(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi

  v1 = (_DWORD *)*(this + 0x7E);
  if ( v1[1] )
  {
    do
    {
      v2 = *(_DWORD *)(v1[1] + 4);
      FormHeapFree(v1[1]);
      v1[1] = v2;
    }
    while ( v2 );
  }
  *v1 = 0;
}
