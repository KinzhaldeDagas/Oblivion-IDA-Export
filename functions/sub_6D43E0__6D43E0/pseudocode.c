void __cdecl sub_6D43E0(int a1, int a2)
{
  NiRTTI *v2; // eax

  if ( *(_DWORD *)(a1 + 0xD8) < 0xA010068u ) /*0x6d43ef*/
  {
    if ( a2 ) /*0x6d43f8*/
    {
      v2 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x6d4401*/
      if ( v2 ) /*0x6d4405*/
      {
        while ( v2 != &stru_B3F584 ) /*0x6d440c*/
        {
          v2 = v2->parent; /*0x6d440e*/
          if ( !v2 ) /*0x6d4413*/
            return; /*0x6d4413*/
        }
        sub_6D42D0(a1, a2); /*0x6d441a*/
      }
    }
  }
}
