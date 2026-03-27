int __thiscall sub_927D80(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 6);
  *this = &off_AA1930;
  *(this + 2) = &off_AA192C;
  *(this + 3) = &off_AA1924;
  *(this + 4) = &off_AA191C;
  *(this + 5) = &off_AA1918;
  if ( v2 )
  {
    if ( *(_WORD *)(v2 + 4) )
    {
      if ( !--*(_WORD *)(v2 + 6) )
        result = (**(int (__thiscall ***)(int, int))v2)(v2, 1);
    }
  }
  *(this + 4) = &hkRayShapeCollectionFilter::`vftable';
  *(this + 3) = &hkShapeCollectionFilter::`vftable';
  *this = &hkBaseObject::`vftable';
  return result;
}
