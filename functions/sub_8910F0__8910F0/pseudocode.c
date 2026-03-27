void __thiscall sub_8910F0(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx

  v3 = (_DWORD *)*(this + 0xD9);
  if ( v3 )
  {
    if ( !sub_890A10(v3, a2) )
    {
      v4 = (_DWORD *)v3[2];
      if ( v4 )
        sub_8BC750(v4, a2, a3, a3 >> 0x1F);
    }
  }
}
