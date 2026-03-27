char __thiscall sub_6D6C80(int this)
{
  int v2; // eax
  unsigned int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // edx

  if ( *(_DWORD *)(this + 0x44) )
    return 1;
  v2 = *(_DWORD *)(this + 0x30);
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(this + 0x4C);
  if ( *(_BYTE *)(this + 0x48) )
  {
    v4 = *(_DWORD *)(v2 + 0x2C);
    if ( v4 && v3 < *(unsigned __int16 *)(v4 + 0xA) )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v3);
      *(_DWORD *)(this + 0x44) = v5;
      return v5 != 0;
    }
    else
    {
      *(_DWORD *)(this + 0x44) = 0;
      return 0;
    }
  }
  else
  {
    v6 = *(_DWORD *)(*(_DWORD *)(v2 + 0x20) + 4 * v3);
    *(_DWORD *)(this + 0x44) = v6;
    return v6 != 0;
  }
}
