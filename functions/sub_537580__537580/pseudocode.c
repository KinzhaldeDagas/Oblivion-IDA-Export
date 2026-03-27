void __thiscall sub_537580(_DWORD *this, int a2)
{
  int v2; // esi
  PlayerCharacter *v4; // eax
  _DWORD *i; // ecx

  v2 = *(_DWORD *)(a2 + 0x30) & 0x3F;
  if ( v2 == 0xE || v2 == 0x10 || v2 == 0x14 )
  {
    v4 = sub_536110(a2 + 0x14);
    if ( v4 )
    {
      if ( v2 == 0xE || v2 == 0x10 )
      {
        for ( i = (_DWORD *)*(this + 6); i; i = (_DWORD *)i[1] )
        {
          if ( (PlayerCharacter *)i[3] == v4 )
            break;
        }
        sub_536D30(this, i);
      }
      else
      {
        sub_5374F0(this, (int)v4);
      }
    }
  }
}
