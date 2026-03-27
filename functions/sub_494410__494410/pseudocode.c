int __thiscall sub_494410(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx

  result = this;
  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      v3 = *(_DWORD *)(this + 8) + this + 0xF;
      while ( *(_BYTE *)++v3 )
        ;
      *(_WORD *)v3 = *(_WORD *)word_A3D9B0;
      *(_BYTE *)(v3 + 2) = byte_A3D9B2;
      *(_DWORD *)(result + 8) = strlen((const char *)(result + 0x10));
    }
  }
  else
  {
    *(_BYTE *)(this + 0x10) = 0;
    *(_DWORD *)(this + 8) = 0;
  }
  return result;
}
