int __thiscall sub_927D80(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 6); /*0x927d83*/
  *this = &off_AA1930; /*0x927d88*/
  *(this + 2) = &off_AA192C; /*0x927d8e*/
  *(this + 3) = &off_AA1924; /*0x927d95*/
  *(this + 4) = &off_AA191C; /*0x927d9c*/
  *(this + 5) = &off_AA1918; /*0x927da3*/
  if ( v2 ) /*0x927daa*/
  {
    if ( *(_WORD *)(v2 + 4) ) /*0x927dac*/
    {
      if ( !--*(_WORD *)(v2 + 6) ) /*0x927db7*/
        result = (**(int (__thiscall ***)(int, int))v2)(v2, 1); /*0x927dc2*/
    }
  }
  *(this + 4) = &hkRayShapeCollectionFilter::`vftable'; /*0x927dc4*/
  *(this + 3) = &hkShapeCollectionFilter::`vftable'; /*0x927dcb*/
  *this = &hkBaseObject::`vftable'; /*0x927dd2*/
  return result; /*0x927dd8*/
}
