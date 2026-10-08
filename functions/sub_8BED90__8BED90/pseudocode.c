int __thiscall sub_8BED90(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax

  if ( a2 ) /*0x8bed9a*/
  {
    if ( *(_WORD *)(a2 + 4) ) /*0x8bed9c*/
      ++*(_WORD *)(a2 + 6); /*0x8beda3*/
  }
  v3 = *(this + 3); /*0x8beda8*/
  if ( v3 ) /*0x8bedad*/
  {
    if ( *(_WORD *)(v3 + 4) ) /*0x8bedaf*/
    {
      result = (unsigned __int16)--*(_WORD *)(v3 + 6); /*0x8bedbb*/
      if ( !(_WORD)result ) /*0x8bedc2*/
        result = (**(int (__thiscall ***)(int, int))v3)(v3, 1); /*0x8bedca*/
    }
  }
  *(this + 3) = a2; /*0x8bedcc*/
  return result; /*0x8bedcf*/
}
