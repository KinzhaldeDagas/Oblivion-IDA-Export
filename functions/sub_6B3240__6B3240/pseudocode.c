int __thiscall sub_6B3240(_DWORD *this, int a2)
{
  unsigned __int8 *v3; // esi
  int v4; // ecx
  int v5; // ebp
  __int16 v6; // ax
  int v7; // esi

  v3 = (unsigned __int8 *)(*(this + 2) + *(this + 4));
  v4 = *(this + 5);
  v5 = v4 + a2;
  v6 = *v3 << 8;
  if ( v4 + a2 <= 0x10 )
    v7 = (unsigned __int16)((v6 + v3[1]) << v4) >> (0x10 - a2);
  else
    v7 = ((unsigned __int16)((v6 + v3[1]) << v4) >> v4 << (v5 - 0x10))
       + (v3[2] >> (0x18 - *((_BYTE *)this + 0x14) - a2));
  *(this + 5) = v5;
  if ( v5 >= 8 )
    ++*(this + 4);
  if ( v5 >= 0x10 )
    ++*(this + 4);
  *(this + 5) = v5 % 8;
  return v7;
}
