int __thiscall AVCollection_ClearArrayAndList(_DWORD *this)
{
  if ( !*this )
    JUMPOUT(0x65C6E1);
  return AVCollection_ClearArrayAndList_::ClearListLoop();
}
