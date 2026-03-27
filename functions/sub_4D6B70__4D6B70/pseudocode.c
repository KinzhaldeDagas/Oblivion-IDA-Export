void __thiscall sub_4D6B70(_DWORD *this, float a2)
{
  int v2; // eax

  if ( this )
  {
    v2 = *(this + 2);
    if ( v2 )
      *(float *)(*(_DWORD *)(v2 + 0x50) + 0xB4) = a2;
  }
}
