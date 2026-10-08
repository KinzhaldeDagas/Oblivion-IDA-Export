char __stdcall sub_6D2290(int a1)
{
  NiRTTI *v1; // eax

  if ( !a1 ) /*0x6d2296*/
    return 0; /*0x6d2296*/
  v1 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6d229d*/
  if ( !v1 ) /*0x6d22a1*/
    return 0; /*0x6d22b1*/
  while ( v1 != &stru_B3FA9C ) /*0x6d22a8*/
  {
    v1 = v1->parent; /*0x6d22aa*/
    if ( !v1 ) /*0x6d22af*/
      return 0; /*0x6d22af*/
  }
  return 1; /*0x6d22b3*/
}
