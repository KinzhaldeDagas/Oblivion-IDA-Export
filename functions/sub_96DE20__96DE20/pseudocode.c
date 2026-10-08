void __cdecl sub_96DE20(_DWORD *a1, unsigned int a2)
{
  int v2; // esi

  if ( a1 ) /*0x96de27*/
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0xC))(a1) ) /*0x96de30*/
    {
      v2 = a1[0x2D]; /*0x96de36*/
      if ( v2 ) /*0x96de3e*/
      {
        if ( a2 <= 1 ) /*0x96de46*/
          *(_BYTE *)(v2 + 0x30) |= 0x33u; /*0x96de4d*/
      }
    }
  }
}
