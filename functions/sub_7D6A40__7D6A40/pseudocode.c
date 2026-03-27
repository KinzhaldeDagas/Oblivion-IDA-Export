void __thiscall sub_7D6A40(int **this)
{
  _DWORD *v2; // esi
  NiNode *v3; // eax

  v2 = *(this + 0x51);
  while ( v2 )
  {
    v3 = (NiNode *)v2[2];
    v2 = (_DWORD *)*v2;
    if ( v3 )
      sub_7D6940(this, v3);
  }
  *(this + 0x51) = 0;
}
