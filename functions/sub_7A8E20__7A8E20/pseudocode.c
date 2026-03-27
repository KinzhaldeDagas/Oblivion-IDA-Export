void __thiscall sub_7A8E20(_DWORD *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // edx

  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( a2 )
  {
    if ( (unsigned int)a2 > 0x3FFFFFFF )
      sub_790B90(a2);
    v4 = sub_78FB60((char *)a2);
    *(this + 3) = &v4[a2];
    *(this + 1) = v4;
    *(this + 2) = v4;
    v5 = a2;
    v6 = v4;
    do
    {
      *v6 = *a3;
      --v5;
      ++v6;
    }
    while ( v5 );
    *(this + 2) = &v4[a2];
  }
}
