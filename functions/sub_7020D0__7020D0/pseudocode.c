int __thiscall sub_7020D0(int this)
{
  int v2; // ecx

  if ( *(_DWORD *)(this + 0x24) ) /*0x7020d0*/
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x24) + 8))(*(_DWORD *)(this + 0x24)); /*0x7020de*/
  v2 = *(_DWORD *)(this + 0x3C); /*0x7020e0*/
  if ( v2 ) /*0x7020e5*/
    return **(_DWORD **)(v2 + 0x58); /*0x7020ea*/
  else
    return 0; /*0x7020ed*/
}
