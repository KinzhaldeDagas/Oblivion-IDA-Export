__int64 __thiscall sub_436FF0(_DWORD *this)
{
  char v2; // al
  unsigned int v4; // [esp-10h] [ebp-18h]
  unsigned __int8 v5; // [esp-Ch] [ebp-14h]
  unsigned __int16 v6; // [esp-8h] [ebp-10h]

  if ( !*(this + 9) )
    return sub_4365F0(this);
  v6 = InterlockedIncrement(&dword_B33A14);
  v5 = BYTE2(*(this + 4));
  v4 = *(_DWORD *)(*(this + 9) + 0xC) & 0x7FFFFFFF;
  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 0x2C))(this);
  return sub_436560(this, v2, v4, v5, v6);
}
