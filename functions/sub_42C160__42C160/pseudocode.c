void __thiscall sub_42C160(int this)
{
  unsigned int v2; // edi
  int v3; // ebx

  if ( (*(_BYTE *)(this + 0x194) & 4) == 0 )
  {
    if ( *(_DWORD *)(this + 0x178) )
    {
      v2 = 0;
      if ( *(_DWORD *)(this + 0x164) )
      {
        v3 = 0;
        do
        {
          FormHeapFree(*(_DWORD *)(*(_DWORD *)(this + 0x178) + v3 + 0xC));
          ++v2;
          v3 += 0x10;
        }
        while ( v2 < *(_DWORD *)(this + 0x164) );
      }
      FormHeapFree(*(_DWORD *)(this + 0x178));
    }
    *(_DWORD *)(this + 0x178) = 0;
  }
}
