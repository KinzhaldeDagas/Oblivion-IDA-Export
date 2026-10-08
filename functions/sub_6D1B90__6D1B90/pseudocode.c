char __stdcall sub_6D1B90(int a1)
{
  NiRTTI *v1; // eax

  if ( !a1 ) /*0x6d1b96*/
    return 0; /*0x6d1b96*/
  v1 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6d1b9d*/
  if ( !v1 ) /*0x6d1ba1*/
    return 0; /*0x6d1bb1*/
  while ( v1 != &stru_B3F96C ) /*0x6d1ba8*/
  {
    v1 = v1->parent; /*0x6d1baa*/
    if ( !v1 ) /*0x6d1baf*/
      return 0; /*0x6d1baf*/
  }
  return 1; /*0x6d1bb3*/
}
