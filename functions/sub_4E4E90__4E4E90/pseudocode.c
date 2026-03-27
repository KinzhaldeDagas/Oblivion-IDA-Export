int __thiscall sub_4E4E90(int this, int a2)
{
  int v2; // edi
  int result; // eax
  int v4; // esi
  int v5; // edx
  _DWORD *i; // ecx

  v2 = *(_DWORD *)(this + 0x24);
  result = 0xFFFFFFFF;
  if ( v2 )
  {
    if ( a2 )
    {
      v4 = *(unsigned __int16 *)(this + 0x30);
      v5 = 0;
      if ( *(_WORD *)(this + 0x30) )
      {
        for ( i = *(_DWORD **)(v2 + 4); *i != a2; ++i )
        {
          if ( ++v5 >= v4 )
            return result;
        }
        return v5;
      }
    }
  }
  return result;
}
