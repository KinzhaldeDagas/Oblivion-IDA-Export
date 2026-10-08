unsigned int __thiscall sub_4824C0(_DWORD *this, char a2)
{
  unsigned int result; // eax
  unsigned int i; // ebp
  unsigned int j; // esi
  TESObjectCELL *v6; // ecx
  TESObjectLAND *v7; // eax

  result = *(this + 3); /*0x4824c4*/
  for ( i = 0; i < result; ++i ) /*0x4824cb*/
  {
    for ( j = 0; j < result; ++j ) /*0x4824d7*/
    {
      v6 = *(TESObjectCELL **)(*(this + 4) + 8 * (j + i * result)); /*0x4824eb*/
      if ( v6 ) /*0x4824ef*/
      {
        if ( v6->members.cellProcessLevel == 6 ) /*0x4824f5*/
        {
          v7 = sub_4CE3C0(v6); /*0x4824f7*/
          if ( v7 ) /*0x4824fe*/
            sub_4C5BA0((int)v7, a2); /*0x482503*/
        }
      }
      result = *(this + 3); /*0x482508*/
    }
    result = *(this + 3); /*0x482512*/
  }
  return result; /*0x48251e*/
}
