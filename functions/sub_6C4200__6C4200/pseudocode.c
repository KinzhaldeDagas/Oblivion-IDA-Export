char __thiscall sub_6C4200(int this, float a2)
{
  int v3; // eax
  unsigned int i; // edi
  int v5; // ebx

  LOBYTE(v3) = *(_BYTE *)(this + 8) >> 3;
  if ( (*(_BYTE *)(this + 8) & 8) != 0 )
  {
    for ( i = 0; i < *(_DWORD *)(this + 0x54); ++i )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(this + 0x4C) + 4 * i);
      LOBYTE(v3) = sub_6CA950(v5, a2, 1);
      if ( !*(_DWORD *)(v5 + 0x44) )
      {
        --*(_DWORD *)(this + 0x54);
        v3 = *(_DWORD *)(this + 0x4C);
        *(_DWORD *)(v3 + 4 * i--) = *(_DWORD *)(v3 + 4 * *(_DWORD *)(this + 0x54));
      }
    }
  }
  return v3;
}
