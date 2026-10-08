char __thiscall sub_74FB20(int *this)
{
  NiRTTI *v2; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  if ( !(unsigned __int8)sub_6CE1B0(this) ) /*0x74fb24*/
    return 0; /*0x74fb24*/
  if ( !NiTMap_GetAt((_DWORD *)(*(this + 0xC) + 0xD4), *(this + 0x10), &v4) ) /*0x74fb3f*/
    return 0; /*0x74fb3f*/
  if ( !v4 ) /*0x74fb4e*/
    return 0; /*0x74fb4e*/
  v2 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4); /*0x74fb55*/
  if ( !v2 ) /*0x74fb59*/
    return 0; /*0x74fb6e*/
  while ( v2 != &stru_B40B50 ) /*0x74fb65*/
  {
    v2 = v2->parent; /*0x74fb67*/
    if ( !v2 ) /*0x74fb6c*/
      return 0; /*0x74fb6c*/
  }
  return 1; /*0x74fb70*/
}
