void (__thiscall ***__thiscall sub_77C8E0(_DWORD *this, int a2))(_DWORD, signed int)
{
  _DWORD *v2; // ecx
  char v3; // al
  void (__thiscall ***v4)(_DWORD, int); // esi
  _DWORD *v6; // [esp+0h] [ebp-4h] BYREF

  v6 = this;
  v2 = (_DWORD *)*(this + 8);
  v6 = 0;
  v3 = sub_4A1AB0(v2, a2, (int *)&v6);
  v4 = (void (__thiscall ***)(_DWORD, int))v6;
  if ( v3 )
  {
    if ( v6 )
    {
      if ( !InterlockedDecrement(v6 + 1) )
        (**v4)(v4, 1);
    }
    return v4;
  }
  else
  {
    if ( v6 )
    {
      if ( !InterlockedDecrement(v6 + 1) )
        (**v4)(v4, 1);
    }
    return 0;
  }
}
