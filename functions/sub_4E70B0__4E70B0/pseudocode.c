int sub_4E70B0()
{
  int result; // eax
  NiObjectNET *v1; // eax
  int v2; // esi
  int v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // edi

  result = dword_B35F8C;
  if ( !dword_B35F8C )
  {
    v1 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
    v2 = (int)v1;
    if ( v1 )
    {
      NiObjectNET::NiObjectNET(v1);
      *(_DWORD *)v2 = &NiVertexColorProperty::`vftable';
      *(_WORD *)(v2 + 0x18) = 8;
    }
    else
    {
      v2 = 0;
    }
    v3 = dword_B35F8C;
    if ( dword_B35F8C != v2 )
    {
      if ( v3 )
      {
        v4 = (void (__thiscall ***)(_DWORD, int))dword_B35F8C;
        if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
          (**v4)(v4, 1);
      }
      v3 = v2;
      dword_B35F8C = v2;
      if ( v2 )
      {
        InterlockedIncrement((volatile LONG *)(v2 + 4));
        v3 = dword_B35F8C;
      }
    }
    *(_WORD *)(v3 + 0x18) = *(_WORD *)(v3 + 0x18) & 0xFFCF | 0x10;
    *(_WORD *)(dword_B35F8C + 0x18) &= ~8u;
    return dword_B35F8C;
  }
  return result;
}
