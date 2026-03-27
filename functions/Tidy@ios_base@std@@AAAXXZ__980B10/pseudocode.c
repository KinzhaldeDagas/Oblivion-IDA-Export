void __cdecl std::ios_base::_Tidy(int ***this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // edi

  std::ios_base::_Callfns(this, 0);
  v1 = *(this + 7);
  if ( v1 )
  {
    do
    {
      v2 = (_DWORD *)*v1;
      FormHeapFree((unsigned int)v1);
      v1 = v2;
    }
    while ( v2 );
  }
  v3 = *(this + 8);
  *(this + 7) = 0;
  if ( v3 )
  {
    do
    {
      v4 = (_DWORD *)*v3;
      FormHeapFree((unsigned int)v3);
      v3 = v4;
    }
    while ( v4 );
  }
  *(this + 8) = 0;
}
