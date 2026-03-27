void __thiscall sub_7982D0(int this)
{
  int v1; // eax
  int v2; // edx

  if ( *(_DWORD *)(this + 0x2C) )
  {
    v1 = 0;
    if ( *(_WORD *)(this + 0x28) )
    {
      v2 = 0;
      do
      {
        *(_BYTE *)(v2 + *(_DWORD *)(this + 0x2C) + 0x3C) = 0;
        ++v1;
        v2 += 0x44;
      }
      while ( v1 < *(unsigned __int16 *)(this + 0x28) );
    }
  }
}
