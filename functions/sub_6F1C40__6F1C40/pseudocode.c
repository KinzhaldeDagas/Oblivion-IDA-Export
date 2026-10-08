unsigned int *__thiscall sub_6F1C40(
        unsigned int *this,
        int a2,
        unsigned int *Src,
        unsigned int count,
        unsigned int *value)
{
  unsigned int *result; // eax
  int v7; // ecx
  unsigned int v8; // edi
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // edi
  unsigned int *_010201A0; // ebp
  unsigned int *v16; // eax
  unsigned int *v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // ebx
  unsigned int *v21; // ebp
  unsigned int v22; // eax
  bool v23; // cf
  const unsigned int *v24; // ebx
  int v25; // [esp+0h] [ebp-Ch]
  int v26; // [esp+4h] [ebp-8h]
  unsigned int counta; // [esp+18h] [ebp+Ch]

  result = value; /*0x6f1c40*/
  value = (unsigned int *)*value; /*0x6f1c4a*/
  v7 = *(this + 1); /*0x6f1c4e*/
  if ( v7 ) /*0x6f1c54*/
    v8 = (int)(*(this + 3) - v7) >> 2; /*0x6f1c5f*/
  else
    v8 = 0; /*0x6f1c56*/
  if ( count ) /*0x6f1c68*/
  {
    if ( v7 ) /*0x6f1c70*/
      v10 = (int)(*(this + 2) - v7) >> 2; /*0x6f1c7b*/
    else
      v10 = 0; /*0x6f1c72*/
    if ( 0x3FFFFFFF - v10 < count ) /*0x6f1c87*/
      sub_6F1780(v25, v26); /*0x6f1c89*/
    if ( v7 ) /*0x6f1c90*/
      v11 = (int)(*(this + 2) - v7) >> 2; /*0x6f1c9b*/
    else
      v11 = 0; /*0x6f1c92*/
    if ( v8 >= count + v11 ) /*0x6f1ca3*/
    {
      v21 = (unsigned int *)*(this + 2); /*0x6f1d5d*/
      v22 = 4 * count; /*0x6f1d6b*/
      v23 = v21 - Src < count; /*0x6f1d72*/
      counta = 4 * count; /*0x6f1d74*/
      if ( v23 ) /*0x6f1d7a*/
      {
        OB_stVector4_UninitializedCopyRange_010201A0(Src, v21, &Src[v22 / 4]); /*0x6f1d81*/
        OB_stVector4_UninitializedFillN_010201A0( /*0x6f1d9b*/
          (unsigned int *)*(this + 2),
          count - ((int)(*(this + 2) - (_DWORD)Src) >> 2),
          (const unsigned int *)&value);
        *(this + 2) += counta; /*0x6f1da4*/
        return OB_stVector4_CopyFillRange_010201A0( /*0x6f1db3*/
                 Src,
                 (unsigned int *)(*(this + 2) - counta),
                 (const unsigned int *)&value);
      }
      else
      {
        v24 = &v21[v22 / 0xFFFFFFFC]; /*0x6f1dc5*/
        *(this + 2) = (unsigned int)OB_stVector4_UninitializedCopyRange_010201A0(&v21[v22 / 0xFFFFFFFC], v21, v21); /*0x6f1dd1*/
        OB_stVector4_CopyBackwardRange_010201A0(Src, v24, v21); /*0x6f1dd4*/
        return OB_stVector4_CopyFillRange_010201A0(Src, &Src[counta / 4], (const unsigned int *)&value); /*0x6f1de6*/
      }
    }
    else
    {
      if ( 0x3FFFFFFF - (v8 >> 1) >= v8 ) /*0x6f1cb6*/
        v12 = (v8 >> 1) + v8; /*0x6f1cbc*/
      else
        v12 = 0; /*0x6f1cb8*/
      if ( v7 ) /*0x6f1cc0*/
        v13 = (int)(*(this + 2) - v7) >> 2; /*0x6f1ccb*/
      else
        v13 = 0; /*0x6f1cc2*/
      if ( v12 < count + v13 ) /*0x6f1cd2*/
      {
        if ( v7 ) /*0x6f1cd6*/
          v14 = (int)(*(this + 2) - v7) >> 2; /*0x6f1ce1*/
        else
          v14 = 0; /*0x6f1cd8*/
        v12 = count + v14; /*0x6f1ce4*/
      }
      _010201A0 = OB_stVector4_Allocate_010201A0(v12); /*0x6f1cf4*/
      v16 = OB_stVector4_UninitializedCopyRange_010201A0((const unsigned int *)*(this + 1), Src, _010201A0); /*0x6f1cff*/
      v17 = OB_stVector4_UninitializedFillN_010201A0(v16, count, (const unsigned int *)&value); /*0x6f1d0d*/
      OB_stVector4_UninitializedCopyRange_010201A0(Src, (const unsigned int *)*(this + 2), v17); /*0x6f1d1e*/
      v18 = *(this + 1); /*0x6f1d23*/
      if ( v18 ) /*0x6f1d28*/
        v19 = (int)(*(this + 2) - v18) >> 2; /*0x6f1d33*/
      else
        v19 = 0; /*0x6f1d2a*/
      v20 = v19 + count; /*0x6f1d36*/
      if ( v18 ) /*0x6f1d3a*/
        FormHeapFree(*(this + 1)); /*0x6f1d3d*/
      result = &_010201A0[v20]; /*0x6f1d49*/
      *(this + 1) = (unsigned int)_010201A0; /*0x6f1d4d*/
      *(this + 3) = (unsigned int)&_010201A0[v12]; /*0x6f1d52*/
      *(this + 2) = (unsigned int)result; /*0x6f1d55*/
    }
  }
  return result; /*0x6f1d51*/
}
