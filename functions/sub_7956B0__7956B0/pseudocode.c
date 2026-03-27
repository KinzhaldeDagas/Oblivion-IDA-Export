void __thiscall sub_7956B0(_DWORD *this, unsigned int a2, _DWORD *a3)
{
  int v4; // eax
  unsigned int v5; // ecx
  _DWORD *v6; // edx

  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( a2 )
  {
    v4 = FormHeapAlloc(4 * a2);
    *(this + 3) = 4 * a2 + v4;
    *(this + 1) = v4;
    *(this + 2) = v4;
    v5 = a2;
    v6 = (_DWORD *)v4;
    do
    {
      *v6 = *a3;
      --v5;
      ++v6;
    }
    while ( v5 );
    *(this + 2) = v4 + 4 * a2;
  }
}
