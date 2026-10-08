char __stdcall sub_6C3D80(int a1)
{
  NiRTTI *v1; // eax

  if ( !a1 ) /*0x6c3d86*/
    return 0; /*0x6c3d86*/
  v1 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x6c3d8d*/
  if ( !v1 ) /*0x6c3d91*/
    return 0; /*0x6c3da1*/
  while ( v1 != &stru_B3FA80 ) /*0x6c3d98*/
  {
    v1 = v1->parent; /*0x6c3d9a*/
    if ( !v1 ) /*0x6c3d9f*/
      return 0; /*0x6c3d9f*/
  }
  return 1; /*0x6c3da3*/
}
