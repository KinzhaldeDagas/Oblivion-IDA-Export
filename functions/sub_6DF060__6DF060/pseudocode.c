char __thiscall sub_6DF060(_DWORD *this, int a2)
{
  int v3; // eax

  if ( *(this + 4) ) /*0x6df063*/
    return 1; /*0x6df067*/
  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x4C))(a2, *(this + 5)); /*0x6df076*/
  if ( v3 ) /*0x6df07a*/
  {
    *(this + 4) = v3; /*0x6df07c*/
    return 1; /*0x6df082*/
  }
  return 0; /*0x6df081*/
}
