unsigned int __cdecl NiObjectNET_StartControllersRecursive(int a1)
{
  _DWORD *i; // esi
  NiRTTI *v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  unsigned int result; // eax
  unsigned int j; // esi
  float v7; // [esp+0h] [ebp-Ch]

  for ( i = *(_DWORD **)(a1 + 0xC); i; i = (_DWORD *)i[0xD] ) /*0x715b4b*/
  {
    v7 = -flt_A7DEB4; /*0x715b60*/
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*i + 0x4C))(i, LODWORD(v7)); /*0x715b63*/
  }
  v2 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x715b73*/
  if ( v2 ) /*0x715b77*/
  {
    while ( v2 != &stru_B3FA80 ) /*0x715b85*/
    {
      v2 = v2->parent; /*0x715b87*/
      if ( !v2 ) /*0x715b8c*/
        goto LABEL_12; /*0x715b8c*/
    }
    v3 = *(_DWORD **)(a1 + 0x9C); /*0x715b90*/
    while ( v3 ) /*0x715b98*/
    {
      v4 = v3[2]; /*0x715ba3*/
      v3 = (_DWORD *)*v3; /*0x715ba7*/
      if ( v4 ) /*0x715ba9*/
      {
        if ( *(_DWORD *)(v4 + 0xC) ) /*0x715bab*/
          NiObjectNET_StartControllersRecursive(v4); /*0x715bb2*/
      }
    }
  }
LABEL_12:
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x715bbe*/
  if ( result ) /*0x715bc9*/
  {
    result = *(unsigned __int16 *)(a1 + 0xB6); /*0x715bcb*/
    for ( j = 0; result > j; ++j ) /*0x715bcb*/
    {
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * j) ) /*0x715be2*/
        NiObjectNET_StartControllersRecursive(*(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * j)); /*0x715bea*/
      result = *(unsigned __int16 *)(a1 + 0xB6); /*0x715bf2*/
    }
  }
  return result; /*0x715c00*/
}
