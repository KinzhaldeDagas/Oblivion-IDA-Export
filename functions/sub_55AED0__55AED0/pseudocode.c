int __thiscall sub_55AED0(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = *(this + 5); /*0x55aed0*/
  if ( !v2 || a2 ) /*0x55aedd*/
    return 0; /*0x55aee5*/
  else
    return *(_DWORD *)v2; /*0x55aedf*/
}
