int __thiscall sub_8C4C70(_DWORD *this, unsigned int a2)
{
  int v2; // ecx

  v2 = *(this + 4); /*0x8c4c70*/
  if ( (int)HIBYTE(a2) < *(unsigned __int16 *)(v2 + 0x10) ) /*0x8c4c80*/
    return *(_DWORD *)(*(_DWORD *)(v2 + 0x1C) + 0xC * HIBYTE(a2)); /*0x8c4c8d*/
  else
    return 0; /*0x8c4c82*/
}
