int __thiscall sub_926320(_DWORD *this, int a2)
{
  int result; // eax
  void *v4; // ebx
  const void *v5; // eax

  result = *(this + 4); /*0x926323*/
  if ( result < a2 ) /*0x92632d*/
  {
    v4 = (void *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xC * a2, 0x14); /*0x926344*/
    v5 = (const void *)*(this + 3); /*0x926346*/
    if ( v5 ) /*0x92634b*/
      sub_8B1890(v4, v5, 0xC * *(this + 4)); /*0x926359*/
    result = *(this + 4); /*0x926361*/
    if ( result ) /*0x926366*/
      result = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x92637d*/
                 unk_BA7D98,
                 *(this + 3),
                 0xC * result,
                 0x14);
    *(this + 3) = v4; /*0x926380*/
    *(this + 4) = a2; /*0x926383*/
  }
  return result; /*0x926387*/
}
