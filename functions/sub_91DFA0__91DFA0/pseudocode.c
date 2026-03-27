int __thiscall sub_91DFA0(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *v4; // eax

  v2 = *(this + 9);
  *this = &off_A9D81C;
  *(this + 2) = &off_A9D804;
  *(this + 8) = off_A9D7FC;
  *(this + 0xA) = off_A9D7E8;
  if ( v2 )
  {
    v3 = 0;
    if ( *(int *)(v2 + 0x60) > 0 )
    {
      do
      {
        if ( this )
          v4 = this + 0xA;
        else
          v4 = 0;
        sub_898AD0(*(int **)(*(_DWORD *)(*(this + 9) + 0x5C) + 4 * v3++), (int)v4);
      }
      while ( v3 < *(_DWORD *)(*(this + 9) + 0x60) );
    }
  }
  *(this + 0xA) = &hkCollisionListener::`vftable';
  return sub_949180(this);
}
