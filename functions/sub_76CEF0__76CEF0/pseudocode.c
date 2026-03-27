void __thiscall sub_76CEF0(int this, unsigned int a2)
{
  unsigned __int16 v3; // ax
  int v4; // eax
  int v5; // edi
  _DWORD *v6; // ecx
  NiD3DPass *v7; // ecx

  if ( *(_DWORD *)(this + 0x3C) )
  {
    if ( *(_BYTE *)(this + 0x50) )
    {
      if ( a2 )
      {
        v3 = *(unsigned __int8 *)(a2 + 4);
        if ( (unsigned int)*(unsigned __int8 *)(a2 + 4) > *(_DWORD *)(this + 0x54) )
          v3 = *(_WORD *)(this + 0x54);
        v4 = sub_76CA10((_DWORD *)this, (unsigned int *)a2, v3);
        v5 = v4;
        if ( v4 )
        {
          sub_772FF0(*(_DWORD **)(v4 + 0xC), 1, 3, 0);
          v6 = *(_DWORD **)(v5 + 0xC);
          if ( *(_BYTE *)(this + 0x50) )
          {
            sub_772FF0(v6, 4, 4, 0);
            sub_772FF0(*(_DWORD **)(v5 + 0xC), 6, 0, 0);
          }
          else
          {
            sub_772FF0(v6, 4, 2, 0);
          }
        }
      }
    }
    v7 = *(NiD3DPass **)(this + 0x3C);
    if ( v7 )
    {
      if ( v7->RefCount-- == 1 )
        sub_7604D0(v7);
      *(_DWORD *)(this + 0x3C) = 0;
    }
    ++*(_DWORD *)(this + 0x38);
    *(_DWORD *)(this + 0x58) = 0;
    *(_DWORD *)(this + 0x5C) = 0;
  }
}
