int __thiscall sub_55AE90(_DWORD *this, unsigned int a2)
{
  int v2; // eax

  v2 = *(this + 3); /*0x55ae90*/
  if ( v2 && a2 <= 0x10 ) /*0x55ae9e*/
    return *(_DWORD *)(v2 + 4 * a2); /*0x55aea0*/
  else
    return 0; /*0x55aea6*/
}
