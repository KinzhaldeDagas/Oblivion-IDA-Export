int __thiscall sub_7020B0(int this)
{
  int v2; // ecx

  if ( *(_DWORD *)(this + 0x24) ) /*0x7020b0*/
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x24) + 4))(*(_DWORD *)(this + 0x24)); /*0x7020be*/
  v2 = *(_DWORD *)(this + 0x3C); /*0x7020c0*/
  if ( v2 ) /*0x7020c5*/
    return **(_DWORD **)(v2 + 0x54); /*0x7020ca*/
  else
    return 0; /*0x7020cd*/
}
