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
  double v20; // st7
  int m_usMaxVQuantity; // edi
  NiColorAlpha *v22; // eax
  int v23; // edx
  float *v24; // ecx
  UInt16 v25; // ax
  UInt16 v26; // cx
  int v28; // [esp-Ch] [ebp-3Ch]
  float v29; // [esp+18h] [ebp-18h]
  float v30; // [esp+1Ch] [ebp-14h]
  float v31; // [esp+20h] [ebp-10h]

  sub_71FBB0(this);
  v11 = a5;
  this->__vftable = &NiScreenElementsData::`vftable';
  if ( a5 <= 0 )
    v11 = 1;
  v12 = a6;
  this->member.m_usMaxPQuantity = v11;
  if ( a6 <= 0 )
    v12 = 1;
  this->member.m_usPGrowBy = v12;
  this->member.m_usPQuantity = 0;
  this->member.m_akPolygon = (void *)FormHeapAlloc((unsigned __int64)v11 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v11);
  v13 = (void *)FormHeapAlloc(
                  (unsigned __int64)this->member.m_usMaxPQuantity >> 0x1F != 0
                ? 0xFFFFFFFF
                : 2 * this->member.m_usMaxPQuantity);
  v28 = 2 * this->member.m_usMaxPQuantity;
  this->member.m_ausPIndexer = v13;
  _memset(v13, 0xFF, v28);
  v14 = a7;
  if ( a7 <= 0 )
    v14 = 1;
  v15 = a8;
  this->member.m_usMaxVQuantity = v14;
  if ( a8 <= 0 )
    v15 = 1;
  this->member.m_usVGrowBy = v15;
  this->member.super.super.super.m_usVertices = 0;
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
    v17 = 0;
    v18 = this->member.m_usMaxVQuantity == 0;
    this->member.super.super.super.m_pkNormal = v16;
    if ( !v18 )
    {
      do
      {
        v29 = -*(float *)&dword_B258E8;
        v19 = &this->member.super.super.super.m_pkNormal[(unsigned __int16)v17];
        v30 = -*(float *)&dword_B258EC;
        ++v17;
        v20 = *(float *)&dword_B258F0;
        v19->x = v29;
        v19->y = v30;
        v31 = -v20;
        v19->z = v31;
      }
      while ( (unsigned __int16)v17 < this->member.m_usMaxVQuantity );
    }
  }
  else
  {
    this->member.super.super.super.m_pkNormal = 0;
  }
  if ( a3
    && (m_usMaxVQuantity = this->member.m_usMaxVQuantity,
        (v22 = (NiColorAlpha *)FormHeapAlloc(
                                 (unsigned __int64)this->member.m_usMaxVQuantity >> 0x1C != 0
                               ? 0xFFFFFFFF
                               : 0x10 * m_usMaxVQuantity)) != 0) )
  {
    v23 = m_usMaxVQuantity - 1;
    if ( m_usMaxVQuantity - 1 >= 0 )
    {
      v24 = (float *)((char *)v22 + 8);
      do
      {
        v24[0xFFFFFFFE] = 0.0;
        v24 += 4;
        --v23;
        v24[0xFFFFFFFB] = 0.0;
        v24[0xFFFFFFFC] = 0.0;
        v24[0xFFFFFFFD] = 0.0;
      }
      while ( v23 >= 0 );
    }
  }
  else
  {
    v22 = 0;
  }
  this->member.super.super.super.m_pkColor = v22;
  if ( a4 )
  {
    this->member.super.super.super.m_pkTexture = (void *)FormHeapAlloc(
                                                           (unsigned __int64)(a4
                                                                            * (unsigned int)this->member.m_usMaxVQuantity) >> 0x1D != 0
                                                         ? 0xFFFFFFFF
                                                         : 8 * a4 * this->member.m_usMaxVQuantity);
    this->member.super.super.super.format ^= ((unsigned __int8)a4
                                            ^ LOBYTE(this->member.super.super.super.format))
                                           & 0x3F;
  }
  else
  {
    this->member.super.super.super.m_pkTexture = 0;
  }
  v25 = 3 * a9;
  if ( a9 <= 0 )
    v25 = 3;
  this->member.m_usMaxIQuantity = v25;
  v26 = 3 * a10;
  if ( a10 <= 0 )
    v26 = 3;
  this->member.m_usIGrowBy = v26;
  this->member.super.super.m_usTriangles = 0;
  this->member.super.m_uiTriListLength = 0;
  this->member.super.m_pusTriList = (UInt16 *)FormHeapAlloc((unsigned __int64)v25 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v25);
  this->member.pad6E[0] = 0;
  return this;
}
