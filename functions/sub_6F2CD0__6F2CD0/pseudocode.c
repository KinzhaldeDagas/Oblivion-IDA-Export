void __thiscall sub_6F2CD0(_DWORD *this, char *a2, _BYTE *a3)
{
  _DWORD *v4; // eax
  char *v5; // ecx
  _BYTE *v6; // edi

  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( a2 )
  {
    v4 = sub_412E70(a2);
    *(this + 3) = &a2[(_DWORD)v4];
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
    *(this + 2) = (char *)v4 + (_DWORD)a2;
  }
}
