int __thiscall sub_9431A0(_DWORD *this)
{
  int v2; // ecx
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  v2 = *(this + 2); /*0x9431a3*/
  *this = &off_AA2768; /*0x9431a6*/
  if ( *(_WORD *)(v2 + 4) ) /*0x9431ac*/
  {
    if ( !--*(_WORD *)(v2 + 6) ) /*0x9431b7*/
      result = (**(int (__thiscall ***)(int, int))v2)(v2, 1); /*0x9431c2*/
  }
  v4 = *(this + 3); /*0x9431c4*/
  if ( *(_WORD *)(v4 + 4) ) /*0x9431c7*/
  {
    if ( !--*(_WORD *)(v4 + 6) ) /*0x9431d2*/
      result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x9431dd*/
  }
  v5 = *(this + 4); /*0x9431df*/
  if ( *(_WORD *)(v5 + 4) ) /*0x9431e2*/
  {
    if ( !--*(_WORD *)(v5 + 6) ) /*0x9431ed*/
      result = (**(int (__thiscall ***)(int, int))v5)(v5, 1); /*0x9431f8*/
  }
  *this = &hkBaseObject::`vftable'; /*0x9431fa*/
  return result; /*0x943200*/
}
