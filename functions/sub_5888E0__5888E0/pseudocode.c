int __thiscall sub_5888E0(_DWORD *this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // eax
  int v3; // eax
  int result; // eax

  v1 = (_DWORD *)*this;
  if ( *this )
  {
    do
      v1 = (_DWORD *)*v1;
    while ( v1 );
  }
  if ( *this )
    *(_DWORD *)(*this + 4) = *(this + 1);
  v2 = (_DWORD *)*(this + 1);
  if ( v2 )
    *v2 = *this;
  v3 = *(this + 4);
  if ( v3 )
    *(_DWORD *)(v3 + 0x14) = *(this + 5);
  result = *(this + 5);
  if ( result )
    *(_DWORD *)(result + 0x10) = *(this + 4);
  *this = 0;
  *(this + 1) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  return result;
}
