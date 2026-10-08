char __thiscall sub_6FD7E0(NiTriBasedGeomData *this, int a2)
{
  int v2; // ebx
  NiTriBasedGeomData *v3; // edi
  UInt16 serial; // ax
  int v6; // ebp
  _DWORD *v7; // esi
  _DWORD *v8; // ebx
  int v9; // eax
  int v10; // edi

  v2 = a2; /*0x6fd7e2*/
  v3 = this; /*0x6fd7e7*/
  if ( !NiTimeController_IsEqual(this, a2) ) /*0x6fd7ee*/
    return 0; /*0x6fd7ee*/
  if ( *(_DWORD *)&v3->members.super.m_bVertexStreamLocked != *(_DWORD *)(a2 + 0x3C) ) /*0x6fd805*/
    return 0; /*0x6fd805*/
  if ( *(_DWORD *)&v3->members.m_usTriangles != *(_DWORD *)(a2 + 0x40) ) /*0x6fd80d*/
    return 0; /*0x6fd80d*/
  serial = v3[1].members.super.serial; /*0x6fd80f*/
  if ( serial != *(_WORD *)(a2 + 0x4E) ) /*0x6fd817*/
    return 0; /*0x6fd7fc*/
  v6 = 0; /*0x6fd81a*/
  if ( !serial ) /*0x6fd820*/
    return 1; /*0x6fd829*/
  while ( 1 ) /*0x6fd837*/
  {
    v7 = *(_DWORD **)(v3[1].members.super.super.m_uiRefCount + 4 * v6); /*0x6fd837*/
    v8 = *(_DWORD **)(*(_DWORD *)(v2 + 0x48) + 4 * v6); /*0x6fd83f*/
    if ( v7 ) /*0x6fd842*/
      break; /*0x6fd842*/
    if ( v8 ) /*0x6fd8a1*/
      return 0; /*0x6fd8a1*/
LABEL_16:
    if ( ++v6 >= (unsigned int)v3[1].members.super.serial ) /*0x6fd893*/
      return 1; /*0x6fd89c*/
    v2 = a2; /*0x6fd830*/
  }
  if ( !v8 ) /*0x6fd846*/
    return 0; /*0x6fd846*/
  v9 = v7[2]; /*0x6fd848*/
  if ( v9 != v8[2] ) /*0x6fd84e*/
    return 0; /*0x6fd84e*/
  v10 = 0; /*0x6fd850*/
  if ( !v9 ) /*0x6fd854*/
  {
LABEL_15:
    v3 = this; /*0x6fd886*/
    goto LABEL_16; /*0x6fd886*/
  }
  while ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(4 * v10 + *v7) + 0x2C))( /*0x6fd87c*/
            *(_DWORD *)(4 * v10 + *v7),
            *(_DWORD *)(4 * v10 + *v8)) )
  {
    if ( (unsigned int)++v10 >= v7[2] ) /*0x6fd884*/
      goto LABEL_15; /*0x6fd884*/
  }
  return 0; /*0x6fd7f7*/
}
