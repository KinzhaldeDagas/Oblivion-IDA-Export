OblivionTileActionNode *__thiscall sub_58CEF0(Tile *this, _DWORD *trait, int a3, int a4)
{
  OblivionTileValueView *Value; // eax

  Value = Tile::GetOrCreateValue(this, (unsigned int)trait); /*0x58ceff*/
  return sub_58CB70(Value, a3, a4); /*0x58cf0b*/
}
