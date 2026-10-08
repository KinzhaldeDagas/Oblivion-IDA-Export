int __thiscall sub_55AE70(_DWORD *this, unsigned int a2)
{
  int v2; // eax

  v2 = *(this + 2); /*0x55ae70*/
  if ( v2 && a2 <= 0xC ) /*0x55ae7e*/
    return *(_DWORD *)(v2 + 4 * a2); /*0x55ae80*/
  else
    return 0; /*0x55ae86*/
}
