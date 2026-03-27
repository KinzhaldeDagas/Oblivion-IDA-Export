bool __thiscall sub_51C090(_DWORD *this, int a2)
{
  bool result; // al
  int v3; // edx
  _DWORD *v4; // ecx

  result = 0;
  if ( *(this + 3) != iClassCharactergenClass )
  {
    v3 = 0;
    v4 = this + 0x11;
    do
    {
      if ( result )
        break;
      result = *v4 == a2;
      ++v3;
      ++v4;
    }
    while ( v3 < 7 );
  }
  return result;
}
