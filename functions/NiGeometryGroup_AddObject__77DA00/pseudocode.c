void __thiscall NiGeometryGroup::AddObject(NiGeometryGroup *this, NiGeometryData *a2, int a3, int a4)
{
  NiGeometryBufferData *v5; // eax
  NiGeometryBufferData *v6; // esi
  NiGeometryBufferData *v7; // eax
  NiRTTI *v8; // eax
  int v9; // ecx

  if ( a4 ) /*0x77da10*/
  {
    if ( *(_DWORD *)(a4 + 0x28) ) /*0x77da12*/
      return; /*0x77da16*/
    v5 = (NiGeometryBufferData *)FormHeapAlloc(0x50u); /*0x77da1e*/
    if ( v5 ) /*0x77da28*/
      v6 = NiGeometryBufferData::NiGeometryBufferData(v5); /*0x77da31*/
    else
      v6 = 0; /*0x77da35*/
    v6->PrimitiveType = (*(_WORD *)(a4 + 0x22) != 0) + 4; /*0x77da43*/
    *(_DWORD *)(a4 + 0x28) = v6; /*0x77da46*/
  }
  else
  {
    if ( a2->member.BuffData ) /*0x77da4b*/
      return; /*0x77da4f*/
    v7 = (NiGeometryBufferData *)FormHeapAlloc(0x50u); /*0x77da57*/
    if ( v7 ) /*0x77da61*/
      v6 = NiGeometryBufferData::NiGeometryBufferData(v7); /*0x77da6a*/
    else
      v6 = 0; /*0x77da6e*/
    v8 = a2->__vftable->super.GetType(a2); /*0x77da77*/
    if ( v8 ) /*0x77da7b*/
    {
      while ( v8 != &stru_B3FD2C ) /*0x77da85*/
      {
        v8 = v8->parent; /*0x77da87*/
        if ( !v8 ) /*0x77da8c*/
          goto LABEL_14; /*0x77da8c*/
      }
      v6->PrimitiveType = D3DPT_TRIANGLELIST; /*0x77dae4*/
    }
    else
    {
LABEL_14:
      if ( NiRTTI::IsObjectOfRTTIType(&stru_B3FD0C, (NiObject *)a2) ) /*0x77da94*/
        v6->PrimitiveType = D3DPT_TRIANGLESTRIP; /*0x77daa0*/
    }
    a2->member.BuffData = v6; /*0x77daa7*/
  }
  v9 = 0; /*0x77dab5*/
  if ( a2->member.m_pkColor ) /*0x77daba*/
    v9 = 0x400000; /*0x77dabf*/
  if ( a2->member.m_pkNormal ) /*0x77daaa*/
    v9 |= (unsigned int)&loc_800000; /*0x77dac8*/
  v6->Flags = v9 | ((a2->member.format & 0x3F) << 0x18); /*0x77dad6*/
  sub_782910(this, v6); /*0x77dad8*/
}
