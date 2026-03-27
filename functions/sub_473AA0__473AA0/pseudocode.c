void __thiscall sub_473AA0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  bool v5; // zf
  _DWORD *v6; // ecx

  sub_470FC0(this, 4, 0.0);
  sub_470FC0(this, 0, 0.0);
  sub_470FC0(this, 1, 0.0);
  sub_470FC0(this, 2, 0.0);
  if ( *(this + 0x26) )
  {
    v3 = *(this + 0x2B);
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 0x44) )
      {
        v4 = *(_DWORD *)(v3 + 0x58);
        if ( v4 )
          sub_470B50(v4, 0.0);
        if ( *(_DWORD *)(*(this + 0x2B) + 0x44) == 5 )
          sub_6C4480((_DWORD *)*(this + 0x26), 0.0);
        sub_6C9CB0(*(this + 0x2B), 0.0, 0);
      }
    }
  }
  *(this + 0x2B) = 0;
  *((_WORD *)this + 0x21) = 0xFF;
  *((_WORD *)this + 0x3B) = 0xFF;
  *(this + 0x15) = 0xFFFFFFFF;
  sub_4728C0((int)this);
  if ( *(this + 0x33) )
    sub_472ED0(this, (int **)this + 0x33);
  v5 = *(this + 0x34) == 0;
  *(this + 0x33) = 0;
  if ( !v5 )
    sub_472ED0(this, (int **)this + 0x34);
  *(this + 0x34) = 0;
  *(this + 0x2C) = 0;
  sub_470FC0(this, 4, 0.0);
  v6 = (_DWORD *)*(this + 0x26);
  if ( v6 )
    sub_4715C0(v6, 0.0);
  sub_473120((_DWORD *)*(this + 1));
  sub_4730B0(this);
  sub_473200(this, 1);
}
