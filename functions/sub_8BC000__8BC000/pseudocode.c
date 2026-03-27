int __thiscall sub_8BC000(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 2);
  *this = &off_A98328;
  if ( v2 )
  {
    if ( *(_WORD *)(v2 + 4) )
    {
      if ( !--*(_WORD *)(v2 + 6) )
        result = (**(int (__thiscall ***)(int, int))v2)(v2, 1);
    }
  }
  *this = &hkBaseObject::`vftable';
  return result;
}
