void __thiscall sub_43FF80(_DWORD *this, int a2)
{
  int v2; // edi
  int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // esi
  int v6; // edx

  if ( a2 )
  {
    v2 = uExteriorCellBuffer - 1;
    v3 = 0;
    if ( v2 > 0 )
    {
      v4 = (_DWORD *)*(this + 0xF);
      while ( a2 != *v4 )
      {
        if ( *v4 )
        {
          ++v3;
          ++v4;
          if ( v3 < v2 )
            continue;
        }
        return;
      }
      for ( ; v3 < v2; *v5 = v6 )
      {
        v5 = (_DWORD *)(*(this + 0xF) + 4 * v3);
        v6 = v5[1];
        if ( !v6 )
          break;
        if ( *(_BYTE *)(v6 + 0x26) != 6 )
          break;
        ++v3;
      }
      *(_DWORD *)(*(this + 0xF) + 4 * v3) = a2;
    }
  }
}
