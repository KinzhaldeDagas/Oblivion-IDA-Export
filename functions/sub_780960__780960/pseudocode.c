void __thiscall sub_780960(_DWORD *this, int a2)
{
  unsigned int v2; // eax

  if ( a2 )
  {
    v2 = *(_DWORD *)(a2 + 0x58);
    if ( v2 )
    {
      *(_DWORD *)(a2 + 0x58) = 0;
      if ( v2 == *this )
        *this = 0;
      FormHeapFree(v2);
    }
  }
}
