void (__thiscall ***__thiscall sub_77C8E0(_DWORD *this, int a2))(_DWORD, signed int)
{
  _DWORD *v2; // ecx
  char v3; // al
  void (__thiscall ***v4)(_DWORD, int); // esi
  _DWORD *v6; // [esp+0h] [ebp-4h] BYREF

  v6 = this; /*0x77c8e0*/
  v2 = (_DWORD *)*(this + 8); /*0x77c8e5*/
  v6 = 0; /*0x77c8ef*/
  v3 = sub_4A1AB0(v2, a2, (int *)&v6); /*0x77c8f7*/
  v4 = (void (__thiscall ***)(_DWORD, int))v6; /*0x77c8fe*/
  if ( v3 ) /*0x77c902*/
  {
    if ( v6 ) /*0x77c906*/
    {
      if ( !InterlockedDecrement(v6 + 1) ) /*0x77c90c*/
        (**v4)(v4, 1); /*0x77c91e*/
    }
    return v4; /*0x77c920*/
  }
  else
  {
    if ( v6 ) /*0x77c929*/
    {
      if ( !InterlockedDecrement(v6 + 1) ) /*0x77c92f*/
        (**v4)(v4, 1); /*0x77c941*/
    }
    return 0; /*0x77c943*/
  }
}
