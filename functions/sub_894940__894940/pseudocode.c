void __thiscall sub_894940(int *this, signed int a2)
{
  bool v3; // bl
  _DWORD *v4; // ecx
  hkVector4 *v5; // eax
  int v6; // eax
  int v7; // [esp-8h] [ebp-10h]

  if ( *(this + 0xDB) != a2 && a2 < 2 )
  {
    if ( *(this + a2 + 0xDD) )
    {
      v3 = (*(this + 0x7D) & 0x8000) != 0;
      if ( (*(this + 0x7D) & 0x8000) != 0 )
        sub_893950(this);
      v4 = (_DWORD *)*(this + 2);
      *(this + 0xDB) = a2;
      if ( v4 )
        v5 = (hkVector4 *)sub_8AC070(v4);
      else
        v5 = &stru_BA7A40;
      v7 = (int)v5;
      v6 = sub_890BA0(this);
      sub_890660(this, v6, v7);
      if ( v3 )
        (*(void (__thiscall **)(int *, _DWORD))(*this + 0x88))(this, 0);
    }
  }
}
