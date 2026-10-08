char __thiscall sub_5E5480(int *this)
{
  int v1; // ecx

  v1 = *(this + 0x16); /*0x5e5480*/
  if ( v1 ) /*0x5e5485*/
    return (*(char (__thiscall **)(int))(*(_DWORD *)v1 + 0x2B8))(v1); /*0x5e548f*/
  else
    return 0; /*0x5e5491*/
}
