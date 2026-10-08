int __thiscall sub_6B3240(_DWORD *this, int a2)
{
  unsigned __int8 *v3; // esi
  int v4; // ecx
  int v5; // ebp
  __int16 v6; // ax
  int v7; // esi

  v3 = (unsigned __int8 *)(*(this + 2) + *(this + 4)); /*0x6b324f*/
  v4 = *(this + 5); /*0x6b3256*/
  v5 = v4 + a2; /*0x6b325c*/
  v6 = *v3 << 8; /*0x6b325f*/
  if ( v4 + a2 <= 0x10 ) /*0x6b3265*/
    v7 = (unsigned __int16)((v6 + v3[1]) << v4) >> (0x10 - a2); /*0x6b32af*/
  else
    v7 = ((unsigned __int16)((v6 + v3[1]) << v4) >> v4 << (v5 - 0x10)) /*0x6b3295*/
       + (v3[2] >> (0x18 - *((_BYTE *)this + 0x14) - a2));
  *(this + 5) = v5; /*0x6b32b4*/
  if ( v5 >= 8 ) /*0x6b32b7*/
    ++*(this + 4); /*0x6b32bf*/
  if ( v5 >= 0x10 ) /*0x6b32c5*/
    ++*(this + 4); /*0x6b32c7*/
  *(this + 5) = v5 % 8; /*0x6b32db*/
  return v7; /*0x6b32da*/
}
