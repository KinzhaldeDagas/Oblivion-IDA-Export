void __thiscall sub_67BEC0(unsigned int *this)
{
  _DWORD *v2; // esi
  int v3; // edi

  v2 = (_DWORD *)*this;
  if ( *(_DWORD *)(*this + 4) )
  {
    do
    {
      v3 = *(_DWORD *)(v2[1] + 4);
      FormHeapFree(v2[1]);
      v2[1] = v3;
    }
    while ( v3 );
  }
  *v2 = 0;
  FormHeapFree(*this);
}
