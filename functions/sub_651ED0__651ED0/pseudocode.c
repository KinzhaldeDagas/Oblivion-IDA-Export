void __thiscall sub_651ED0(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx

  if ( a2 )
  {
    v2 = (_DWORD *)*(this + 0x5C);
    if ( v2 )
      BSSimpleList_Remove(v2, a2);
  }
}
