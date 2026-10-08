char __thiscall sub_433180(_DWORD *this, LONG Comperand, int a3, int a4, int *a5)
{
  char v6; // bl

  v6 = sub_432A60(this, Comperand, a3, a4); /*0x43319a*/
  if ( v6 ) /*0x43319e*/
  {
    sub_4348B0(a5, (int *)((*(this + 5) & 0xFFFFFFFE) + 8)); /*0x4331ae*/
    if ( (*(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 0xC) & 1) != 0 ) /*0x4331bf*/
      v6 = 0; /*0x4331c1*/
  }
  *(_DWORD *)*(this + 1) = 0; /*0x4331c6*/
  *(_DWORD *)*(this + 2) = 0; /*0x4331cf*/
  *(_DWORD *)*(this + 3) = 0; /*0x4331db*/
  return v6; /*0x4331d8*/
}
