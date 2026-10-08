_DWORD *__thiscall sub_6F91C0(_DWORD *this, int *a2)
{
  struct std::locale::facet *v3; // esi
  _DWORD *result; // eax

  v3 = sub_6F9090(a2); /*0x6f91ce*/
  result = (_DWORD *)(*(int (__thiscall **)(struct std::locale::facet *))(*(_DWORD *)v3 + 4))(v3); /*0x6f91da*/
  if ( (_BYTE)result ) /*0x6f91de*/
  {
    *(this + 0xF) = 0; /*0x6f91e0*/
  }
  else
  {
    *(this + 0xF) = v3; /*0x6f91ee*/
    return sub_6F6F40(this); /*0x6f91f1*/
  }
  return result; /*0x6f91e7*/
}
