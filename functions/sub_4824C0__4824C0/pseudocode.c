unsigned int __thiscall sub_4824C0(_DWORD *this, char a2)
{
  unsigned int result; // eax
  unsigned int i; // ebp
  unsigned int j; // esi
  TESObjectCELL *v6; // ecx
  TESObjectLAND *v7; // eax

  result = *(this + 3);
  for ( i = 0; i < result; ++i )
  {
    for ( j = 0; j < result; ++j )
    {
      v6 = *(TESObjectCELL **)(*(this + 4) + 8 * (j + i * result));
      if ( v6 )
      {
        if ( v6->members.cellProcessLevel == 6 )
        {
          v7 = sub_4CE3C0(v6);
          if ( v7 )
            sub_4C5BA0((int)v7, a2);
        }
      }
      result = *(this + 3);
    }
    result = *(this + 3);
  }
  return result;
}
