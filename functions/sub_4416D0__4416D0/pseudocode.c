void __thiscall sub_4416D0(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx

  if ( a2 )
  {
    v2 = (_DWORD *)*(this + 0x22);
    if ( v2 )
      BSSimpleList_Remove(v2, a2);
  }
}
