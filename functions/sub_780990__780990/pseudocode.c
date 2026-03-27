void __thiscall sub_780990(_DWORD *this)
{
  int v1; // edx
  unsigned int v2; // eax

  v1 = dword_B3FAA4;
  if ( dword_B3FAA4 )
  {
    v2 = *(_DWORD *)(v1 + 0x58);
    if ( v2 )
    {
      *(_DWORD *)(v1 + 0x58) = 0;
      if ( v2 == *this )
        *this = 0;
      FormHeapFree(v2);
    }
  }
}
