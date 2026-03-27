void __cdecl sub_96DE20(_DWORD *a1, unsigned int a2)
{
  int v2; // esi

  if ( a1 )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0xC))(a1) )
    {
      v2 = a1[0x2D];
      if ( v2 )
      {
        if ( a2 <= 1 )
          *(_BYTE *)(v2 + 0x30) |= 0x33u;
      }
    }
  }
}
