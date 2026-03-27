int __thiscall sub_4040A0(_BYTE *this, char *a2, int a3)
{
  char *v3; // eax
  char v4; // dl
  int (__stdcall *v6)(int); // eax

  v3 = a2;
  if ( a2 )
  {
    do
    {
      v4 = *v3;
      v3[this + 4 - a2] = *v3;
      ++v3;
    }
    while ( v4 );
    return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x14))(this, a3);
  }
  else
  {
    v6 = *(int (__stdcall **)(int))(*(_DWORD *)this + 0x14);
    *(this + 4) = 0;
    return v6(a3);
  }
}
