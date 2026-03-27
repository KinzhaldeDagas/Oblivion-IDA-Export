int __thiscall sub_7C62D0(_DWORD *this, unsigned __int16 a2)
{
  int v2; // esi
  int result; // eax
  int v4; // eax
  _DWORD *v5; // ecx
  int *v6; // eax

  v2 = a2;
  if ( (unsigned int)a2 >= *(this + 0x3C) )
    return 0;
  v4 = *(this + 0x3A);
  v5 = *(_DWORD **)v4;
  result = *(_DWORD *)(v4 + 8);
  if ( a2 )
  {
    do
    {
      --v2;
      v6 = v5 + 2;
      v5 = (_DWORD *)*v5;
      result = *v6;
    }
    while ( v2 );
  }
  return result;
}
