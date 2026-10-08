void __thiscall sub_42C160(int this)
{
  unsigned int v2; // edi
  int v3; // ebx

  if ( (*(_BYTE *)(this + 0x194) & 4) == 0 ) /*0x42c16a*/
  {
    if ( *(_DWORD *)(this + 0x178) ) /*0x42c16c*/
    {
      v2 = 0; /*0x42c176*/
      if ( *(_DWORD *)(this + 0x164) ) /*0x42c178*/
      {
        v3 = 0; /*0x42c181*/
        do /*0x42c1a2*/
        {
          FormHeapFree(*(_DWORD *)(*(_DWORD *)(this + 0x178) + v3 + 0xC)); /*0x42c18e*/
          ++v2; /*0x42c193*/
          v3 += 0x10; /*0x42c199*/
        }
        while ( v2 < *(_DWORD *)(this + 0x164) ); /*0x42c1a2*/
      }
      FormHeapFree(*(_DWORD *)(this + 0x178)); /*0x42c1ac*/
    }
    *(_DWORD *)(this + 0x178) = 0; /*0x42c1b5*/
  }
}
