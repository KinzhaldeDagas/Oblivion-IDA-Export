char __thiscall sub_4BFE80(_DWORD *this)
{
  BSShaderAccumulator *inited; // eax
  _DWORD *v3; // eax
  int i; // ebx
  int j; // esi
  bool v6; // zf
  _DWORD *v7; // ecx

  inited = InitBSShaderAccumulator();
  LOBYTE(v3) = sub_7AB6F0(inited);
  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned __int8)i < 4u )
    {
      v3 = (_DWORD *)*(this + 9);
      if ( v3 )
      {
        v3 = (_DWORD *)v3[(unsigned __int8)i + 8];
        if ( v3 )
          LOBYTE(v3) = sub_4C9230(v3);
      }
    }
    for ( j = 0; j < 8; ++j )
    {
      if ( (unsigned __int8)i < 4u && (unsigned __int16)j < 8u )
      {
        v3 = (_DWORD *)*(this + 9);
        if ( v3 )
        {
          v6 = v3[(unsigned __int8)i + 0xC] == 0;
          v3 += (unsigned __int8)i + 0xC;
          if ( !v6 )
          {
            v7 = *(_DWORD **)(*v3 + 4 * (unsigned __int16)j);
            if ( v7 )
              LOBYTE(v3) = sub_4C9230(v7);
          }
        }
      }
    }
  }
  return (char)v3;
}
