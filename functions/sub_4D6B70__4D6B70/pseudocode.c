void __thiscall sub_4D6B70(_DWORD *this, float a2)
{
  int v2; // eax

  if ( this ) /*0x4d6b72*/
  {
    v2 = *(this + 2); /*0x4d6b74*/
    if ( v2 ) /*0x4d6b79*/
      *(float *)(*(_DWORD *)(v2 + 0x50) + 0xB4) = a2; /*0x4d6b82*/
  }
}
