int __thiscall sub_8A1560(_DWORD *this, unsigned int a2)
{
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  if ( a2 == 0xFFFFFFFF ) /*0x8a156b*/
    return *(this + 4); /*0x8a156b*/
  if ( this && (v3 = *(this + 2)) != 0 ) /*0x8a1576*/
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x1C))(v3); /*0x8a157d*/
  else
    v4 = 0; /*0x8a1581*/
  if ( a2 > v4 ) /*0x8a1585*/
    return *(this + 4); /*0x8a1585*/
  if ( this && (v5 = *(this + 2)) != 0 && (v6 = *(_DWORD *)(*(_DWORD *)(v5 + 0x10) + 8 * a2)) != 0 ) /*0x8a159a*/
    v7 = *(_DWORD *)(v6 + 8); /*0x8a159c*/
  else
    v7 = 0; /*0x8a15a1*/
  if ( !v7 ) /*0x8a15a5*/
    return *(this + 4); /*0x8a15af*/
  else
    return *(_DWORD *)(v7 + 0x10); /*0x8a15a7*/
}
