void __thiscall sub_7C7EB0(_DWORD *this, char a2, char a3)
{
  _DWORD *v4; // esi
  int v5; // eax

  if ( a2 )
  {
    v4 = (_DWORD *)*(this + 0x3A);
    while ( v4 )
    {
      v5 = v4[2];
      v4 = (_DWORD *)*v4;
      if ( v5 )
        sub_7C5F60(this, v5);
    }
    if ( !a3 )
      sub_7C7E50(this);
  }
}
