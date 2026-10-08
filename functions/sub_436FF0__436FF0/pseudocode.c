__int64 __thiscall sub_436FF0(_DWORD *this)
{
  char v2; // al
  unsigned int v4; // [esp-10h] [ebp-18h]
  unsigned __int8 v5; // [esp-Ch] [ebp-14h]
  unsigned __int16 v6; // [esp-8h] [ebp-10h]

  if ( !*(this + 9) ) /*0x436ff4*/
    return sub_4365F0(this); /*0x437045*/
  v6 = InterlockedIncrement(&unk_B33A14); /*0x437026*/
  v5 = BYTE2(*(this + 4)); /*0x43702c*/
  v4 = *(_DWORD *)(*(this + 9) + 0xC) & 0x7FFFFFFF; /*0x43702d*/
  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 0x2C))(this); /*0x437033*/
  return sub_436560(this, v2, v4, v5, v6); /*0x43703e*/
}
