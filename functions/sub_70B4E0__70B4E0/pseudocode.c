_DWORD *__thiscall sub_70B4E0(_DWORD *this, _DWORD *a2, int *a3)
{
  _DWORD *result; // eax
  int v4; // esi
  int *v6; // ebp
  _DWORD *v7; // edi

  result = a2; /*0x70b4e0*/
  v4 = a2[2]; /*0x70b4e6*/
  if ( v4 ) /*0x70b4ed*/
  {
    v6 = a3; /*0x70b4f0*/
    do /*0x70b522*/
    {
      v7 = *(_DWORD **)(v4 + 8); /*0x70b4f5*/
      v4 = *(_DWORD *)(v4 + 4); /*0x70b4fb*/
      if ( !NiTMap_GetAt((_DWORD *)*v6, (int)v7, &a2) ) /*0x70b507*/
        a2 = v7; /*0x70b510*/
      result = sub_708E40(this, a2); /*0x70b51b*/
    }
    while ( v4 ); /*0x70b522*/
  }
  return result; /*0x70b526*/
}
