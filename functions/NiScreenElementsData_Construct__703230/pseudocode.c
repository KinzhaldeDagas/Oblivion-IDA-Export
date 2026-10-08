NiScreenElementsData *__thiscall NiScreenElementsData::Construct(
        NiScreenElementsData *this,
        char a2,
        char a3,
        unsigned __int16 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  UInt16 v11; // ax
  UInt16 v12; // cx
  void *v13; // eax
  UInt16 v14; // ax
  UInt16 v15; // cx
  NiPoint3 *v16; // eax
  int v17; // ecx
  bool v18; // zf
  NiPoint3 *v19; // eax
  double z; // st7
  int m_usMaxVQuantity; // edi
  NiColorAlpha *v22; // eax
  int v23; // edx
  float *v24; // ecx
  UInt16 v25; // ax
  UInt16 v26; // cx
  unsigned int v28; // [esp-Ch] [ebp-3Ch]
  float v29; // [esp+18h] [ebp-18h]
  float v30; // [esp+1Ch] [ebp-14h]
  float v31; // [esp+20h] [ebp-10h]

  NiTriShapeData_Construct((NiObject *)this); /*0x70325d*/
  v11 = a5; /*0x703262*/
  this->__vftable = &NiScreenElementsData::`vftable'; /*0x70326e*/
  if ( a5 <= 0 ) /*0x703274*/
    v11 = 1; /*0x703276*/
  v12 = a6; /*0x70327b*/
  this->member.m_usMaxPQuantity = v11; /*0x703281*/
  if ( a6 <= 0 ) /*0x703285*/
    v12 = 1; /*0x703287*/
  this->member.m_usPGrowBy = v12; /*0x70328c*/
  this->member.m_usPQuantity = 0; /*0x70329f*/
  this->member.m_akPolygon = (void *)FormHeapAlloc((unsigned __int64)v11 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v11);
  v13 = (void *)FormHeapAlloc(
                  (unsigned __int64)this->member.m_usMaxPQuantity >> 0x1F != 0
                ? 0xFFFFFFFF
                : 2 * this->member.m_usMaxPQuantity);
  v28 = 2 * this->member.m_usMaxPQuantity; /*0x7032d0*/
  this->member.m_ausPIndexer = v13; /*0x7032d7*/
  _memset((int)v13, 0xFF, v28); /*0x7032da*/
  v14 = a7; /*0x7032df*/
  if ( a7 <= 0 ) /*0x7032e8*/
    v14 = 1; /*0x7032ea*/
  v15 = a8; /*0x7032ef*/
  this->member.m_usMaxVQuantity = v14; /*0x7032f5*/
  if ( a8 <= 0 ) /*0x7032f9*/
    v15 = 1; /*0x7032fb*/
  this->member.m_usVGrowBy = v15; /*0x703300*/
  this->member.super.super.super.m_usVertices = 0; /*0x703313*/
  this->member.super.super.super.m_pkVertex = (NiPoint3 *)FormHeapAlloc(
                                                            (0xC * (unsigned __int64)v14) >> 0x20 != 0
                                                          ? 0xFFFFFFFF
                                                          : 0xC * v14);
  if ( a2 )
  {
    v16 = (NiPoint3 *)FormHeapAlloc(
                        (0xC * (unsigned __int64)this->member.m_usMaxVQuantity) >> 0x20 != 0
                      ? 0xFFFFFFFF
                      : 0xC * this->member.m_usMaxVQuantity);
    v17 = 0; /*0x70334f*/
    v18 = this->member.m_usMaxVQuantity == 0; /*0x703351*/
    this->member.super.super.super.m_pkNormal = v16; /*0x703355*/
    if ( !v18 ) /*0x703358*/
    {
      do /*0x7033ab*/
      {
        v29 = -rhs.x; /*0x70336e*/
        v19 = &this->member.super.super.super.m_pkNormal[(unsigned __int16)v17]; /*0x70337b*/
        v30 = -rhs.y; /*0x703384*/
        ++v17; /*0x703388*/
        z = rhs.z; /*0x70338b*/
        v19->x = v29; /*0x703391*/
        v19->y = v30; /*0x703399*/
        v31 = -z; /*0x70339c*/
        v19->z = v31; /*0x7033a4*/
      }
      while ( (unsigned __int16)v17 < this->member.m_usMaxVQuantity ); /*0x7033ab*/
    }
  }
  else
  {
    this->member.super.super.super.m_pkNormal = 0; /*0x7033af*/
  }
  if ( a3
    && (m_usMaxVQuantity = this->member.m_usMaxVQuantity,
        (v22 = (NiColorAlpha *)FormHeapAlloc(
                                 (unsigned __int64)this->member.m_usMaxVQuantity >> 0x1C != 0
                               ? 0xFFFFFFFF
                               : 0x10 * m_usMaxVQuantity)) != 0) )
  {
    v23 = m_usMaxVQuantity - 1; /*0x7033dc*/
    if ( m_usMaxVQuantity - 1 >= 0 ) /*0x7033e1*/
    {
      v24 = (float *)((char *)v22 + 8); /*0x7033e5*/
      do /*0x7033fa*/
      {
        v24[0xFFFFFFFE] = 0.0; /*0x7033e8*/
        v24 += 4; /*0x7033eb*/
        --v23; /*0x7033ee*/
        v24[0xFFFFFFFB] = 0.0; /*0x7033f1*/
        v24[0xFFFFFFFC] = 0.0; /*0x7033f4*/
        v24[0xFFFFFFFD] = 0.0; /*0x7033f7*/
      }
      while ( v23 >= 0 ); /*0x7033fa*/
    }
  }
  else
  {
    v22 = 0; /*0x703400*/
  }
  this->member.super.super.super.m_pkColor = v22; /*0x70340a*/
  if ( a4 )
  {
    this->member.super.super.super.m_pkTexture = (void *)FormHeapAlloc(
                                                           (unsigned __int64)(a4
                                                                            * (unsigned int)this->member.m_usMaxVQuantity) >> 0x1D != 0
                                                         ? 0xFFFFFFFF
                                                         : 8 * a4 * this->member.m_usMaxVQuantity);
    this->member.super.super.super.format ^= ((unsigned __int8)a4 /*0x70343e*/
                                            ^ LOBYTE(this->member.super.super.super.format))
                                           & 0x3F;
  }
  else
  {
    this->member.super.super.super.m_pkTexture = 0; /*0x703446*/
  }
  v25 = 3 * a9; /*0x70344f*/
  if ( a9 <= 0 ) /*0x703452*/
    v25 = 3; /*0x703454*/
  this->member.m_usMaxIQuantity = v25; /*0x70345f*/
  v26 = 3 * a10; /*0x703463*/
  if ( a10 <= 0 ) /*0x703466*/
    v26 = 3; /*0x703468*/
  this->member.m_usIGrowBy = v26; /*0x70346d*/
  this->member.super.super.m_usTriangles = 0; /*0x703480*/
  this->member.super.m_uiTriListLength = 0; /*0x703484*/
  this->member.super.m_pusTriList = (UInt16 *)FormHeapAlloc((unsigned __int64)v25 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v25);
  this->member.pad6E[0] = 0; /*0x703497*/
  return this; /*0x70349d*/
}
