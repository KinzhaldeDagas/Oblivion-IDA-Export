unsigned __int16 *__thiscall sub_7D7F80(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  unsigned __int16 *v3; // esi
  int v4; // edi
  NiObject *v5; // eax
  NiObjectNET *v6; // ecx
  int v7; // eax
  int v8; // ebp
  NiExtraData *v9; // ecx
  unsigned int v10; // eax
  NiExtraDataVtbl *vftable; // eax
  NiExtraData *ExtraData; // [esp+14h] [ebp-18h]

  v2 = this; /*0x7d7fa7*/
  v3 = 0; /*0x7d7fbb*/
  ExtraData = 0; /*0x7d7fbf*/
  v4 = *(unsigned __int16 *)(*(_DWORD *)(a2 + 0xB4) + 8); /*0x7d7fc3*/
  v5 = (NiObject *)FormHeapAlloc(0x2Cu); /*0x7d7fc6*/
  if ( v5 ) /*0x7d7fd8*/
    v3 = (unsigned __int16 *)sub_4C14D0(v5, v4); /*0x7d7fe2*/
  v6 = *(NiObjectNET **)(a2 + 0x1C); /*0x7d7fe4*/
  if ( v6 ) /*0x7d7ff1*/
    ExtraData = NiObjectNET_GetExtraData(v6, "tex %"); /*0x7d7ffd*/
  v7 = v2[0x35]; /*0x7d8001*/
  v8 = 0; /*0x7d8007*/
  if ( v7 ) /*0x7d800b*/
  {
    if ( *(_DWORD *)(v7 + 0xC) ) /*0x7d800d*/
    {
      if ( *(_DWORD *)(v7 + 0x10) ) /*0x7d8012*/
        v8 = 2; /*0x7d8017*/
    }
  }
  v9 = ExtraData; /*0x7d801c*/
  if ( ExtraData ) /*0x7d8022*/
    v8 += 2; /*0x7d8024*/
  if ( v7 ) /*0x7d8029*/
  {
    if ( *(_DWORD *)(v7 + 0xC) ) /*0x7d802f*/
    {
      if ( *(_DWORD *)(v7 + 0x10) ) /*0x7d8039*/
      {
        v10 = v8 - 1; /*0x7d8046*/
        if ( v8 <= 2 ) /*0x7d8049*/
          v10 = v8; /*0x7d804b*/
        OB_NiAdditionalGeometryData_SetDataBlockCount_010201A0(v3, v10); /*0x7d8050*/
        sub_726B80(v3, v8); /*0x7d8058*/
        OB_NiAdditionalGeometryData_SetDataBlock_010201A0( /*0x7d8079*/
          (int)v3,
          v4,
          0,
          *(void **)(*(this + 0x35) + 0xC),
          (_DWORD *)(0xC * v4),
          0);
        OB_NiAdditionalGeometryData_SetDataStream_010201A0((int)v3, 0, 0, 0, 3, v4, 0xC, 0xC); /*0x7d808d*/
        OB_NiAdditionalGeometryData_SetDataBlock_010201A0( /*0x7d80a7*/
          (int)v3,
          v4,
          1u,
          *(void **)(*(this + 0x35) + 0x10),
          (_DWORD *)(0xC * v4),
          0);
        OB_NiAdditionalGeometryData_SetDataStream_010201A0((int)v3, 1u, 1u, 0, 3, v4, 0xC, 0xC); /*0x7d80bb*/
        v2 = this; /*0x7d80c0*/
        v9 = ExtraData; /*0x7d80c4*/
      }
    }
  }
  if ( v9 ) /*0x7d80ca*/
  {
    vftable = v9[1].__vftable; /*0x7d80cc*/
    v2[0x36] = vftable; /*0x7d80d1*/
    if ( vftable ) /*0x7d80d7*/
      v2[7] |= 0x4000u; /*0x7d80d9*/
    else
      v2[7] &= ~0x4000u; /*0x7d80e2*/
    v2[9] = 0; /*0x7d80f1*/
    OB_NiAdditionalGeometryData_SetDataBlock_010201A0((int)v3, v4, v8 - 1, vftable, (_DWORD *)(0x20 * v4), 0); /*0x7d80ff*/
    OB_NiAdditionalGeometryData_SetDataStream_010201A0((int)v3, v8 - 2, v8 - 1, 0, 4, v4, 0x10, 0x20); /*0x7d8114*/
    OB_NiAdditionalGeometryData_SetDataStream_010201A0((int)v3, v8 - 1, v8 - 1, 0x10, 4, v4, 0x10, 0x20); /*0x7d8126*/
    ExtraData[1].member.super.m_uiRefCount = 0; /*0x7d8131*/
    ExtraData[1].__vftable = 0; /*0x7d8134*/
    sub_6FFAC0((_WORD *)a2, "tex %"); /*0x7d8140*/
  }
  return v3; /*0x7d8147*/
}
