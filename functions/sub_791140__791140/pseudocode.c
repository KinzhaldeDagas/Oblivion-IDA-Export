// Fixed-stride 0x18 vector insert/fill machinery for OB_CBranchFlareEntry records. Handles overlap, capacity growth, reallocation, and count copies; the observed wrapper at 0x791510 always requests count=1.
unsigned int __thiscall OB_stVectorBranchFlareEntry_InsertFill_010201A0(
        OB_stVector16_010201A0 *this,
        int iteratorOwner,
        OB_CBranchFlareEntry_010201A0 *position,
        unsigned int count,
        const OB_CBranchFlareEntry_010201A0 *value)
{
  unsigned int result; // eax
  float radialInfluence; // edx
  float lengthExponent; // ecx
  float lengthInfluence; // edx
  void *begin; // ecx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  unsigned __int8 *v16; // eax
  unsigned __int8 *v17; // eax
  void *v18; // ecx
  int v19; // eax
  unsigned int v20; // edi
  unsigned __int8 *end; // ecx
  unsigned int v22; // edi
  const unsigned __int8 *v23; // [esp-20h] [ebp-58h]
  unsigned __int8 *v24; // [esp-Ch] [ebp-44h]
  unsigned int v25; // [esp-8h] [ebp-40h]
  int v26; // [esp+0h] [ebp-38h] BYREF
  unsigned __int8 v27[4]; // [esp+10h] [ebp-28h] BYREF
  float v28; // [esp+14h] [ebp-24h]
  float radialExponent; // [esp+18h] [ebp-20h]
  float v30; // [esp+1Ch] [ebp-1Ch]
  float v31; // [esp+20h] [ebp-18h]
  float flareDistance; // [esp+24h] [ebp-14h]
  int *v33; // [esp+28h] [ebp-10h]
  int v34; // [esp+34h] [ebp-4h]
  const unsigned __int8 *counta; // [esp+48h] [ebp+10h]
  unsigned __int8 *valuea; // [esp+4Ch] [ebp+14h]
  unsigned __int8 *valueb; // [esp+4Ch] [ebp+14h]

  v33 = &v26; /*0x791168*/
  result = (unsigned int)value; /*0x79116d*/
  radialInfluence = value->radialInfluence; /*0x791172*/
  *(float *)v27 = value->flareAngle; /*0x791175*/
  radialExponent = value->radialExponent; /*0x79117b*/
  lengthExponent = value->lengthExponent; /*0x79117e*/
  v28 = radialInfluence; /*0x791181*/
  lengthInfluence = value->lengthInfluence; /*0x791184*/
  v31 = lengthExponent; /*0x791187*/
  begin = this->begin; /*0x79118a*/
  v30 = lengthInfluence; /*0x79118f*/
  flareDistance = value->flareDistance; /*0x791195*/
  if ( begin ) /*0x791198*/
  {
    result = 0x2AAAAAAB * ((char *)this->capacityEnd - (char *)begin); /*0x7911a8*/
    v11 = ((char *)this->capacityEnd - (char *)begin) / 0x18; /*0x7911b2*/
  }
  else
  {
    v11 = 0; /*0x79119a*/
  }
  if ( count ) /*0x7911b9*/
  {
    if ( begin ) /*0x7911c1*/
      v12 = ((char *)this->end - (char *)begin) / 0x18; /*0x7911db*/
    else
      v12 = 0; /*0x7911c3*/
    if ( 0xAAAAAAA - v12 < count ) /*0x7911e6*/
      OB_stVector_ThrowLengthError_010201A0(count); /*0x7911e8*/
    if ( begin ) /*0x7911ef*/
      v13 = ((char *)this->end - (char *)begin) / 0x18; /*0x791209*/
    else
      v13 = 0; /*0x7911f1*/
    if ( v11 >= count + v13 ) /*0x79120f*/
    {
      end = (unsigned __int8 *)this->end; /*0x791325*/
      valueb = end; /*0x791342*/
      if ( (end - (unsigned __int8 *)position) / 0x18 >= count ) /*0x791345*/
      {
        v22 = count; /*0x7913c4*/
        counta = &end[0xFFFFFFE8 * count]; /*0x7913cc*/
        this->end = OB_stVector24_UninitializedCopyRangeThunk_010201A0(counta, end, end); /*0x7913d7*/
        OB_stVector24_CopyBackwardRangeThunk_010201A0((const unsigned __int8 *)position, counta, valueb); /*0x7913e0*/
        return (unsigned int)OB_stVector24_CopyFillRange_010201A0( /*0x7913ed*/
                               (unsigned __int8 *)position,
                               (unsigned __int8 *)&position[v22],
                               v27);
      }
      else
      {
        OB_stVector24_UninitializedCopyRangeThunk_010201A0( /*0x79135a*/
          (const unsigned __int8 *)position,
          end,
          (unsigned __int8 *)&position[count]);
        v25 = count - ((char *)this->end - (char *)position) / 0x18; /*0x79137d*/
        v24 = (unsigned __int8 *)this->end; /*0x79137e*/
        v34 = 2; /*0x791381*/
        OB_stVector24_UninitializedFillNThunk_010201A0(v24, v25, v27); /*0x791388*/
        this->end = (char *)this->end + 0x18 * count; /*0x791390*/
        return (unsigned int)OB_stVector24_CopyFillRange_010201A0( /*0x79139e*/
                               (unsigned __int8 *)position,
                               (unsigned __int8 *)this->end + 0xFFFFFFE8 * count,
                               v27);
      }
    }
    else
    {
      if ( 0xAAAAAAA - (v11 >> 1) >= v11 ) /*0x791222*/
        v14 = (v11 >> 1) + v11; /*0x791228*/
      else
        v14 = 0; /*0x791224*/
      if ( begin ) /*0x79122c*/
        v15 = ((char *)this->end - (char *)begin) / 0x18; /*0x791246*/
      else
        v15 = 0; /*0x79122e*/
      if ( v14 < count + v15 ) /*0x79124c*/
        v14 = count + OB_stVector24_Size_010201A0((const OB_stVector24_010201A0 *)this); /*0x791257*/
      valuea = (unsigned __int8 *)OB_stVectorBranchFlareEntry_Allocate_010201A0((char *)v14); /*0x79126c*/
      v23 = (const unsigned __int8 *)this->begin; /*0x791279*/
      v34 = 0; /*0x79127a*/
      v16 = OB_stVector24_UninitializedCopyRange_010201A0(v23, (const unsigned __int8 *)position, valuea); /*0x791281*/
      v17 = OB_stVector24_UninitializedFillNThunk_010201A0(v16, count, v27); /*0x791291*/
      OB_stVector24_UninitializedCopyRange_010201A0( /*0x7912ac*/
        (const unsigned __int8 *)position,
        (const unsigned __int8 *)this->end,
        v17);
      v18 = this->begin; /*0x7912b1*/
      if ( v18 ) /*0x7912b9*/
        v19 = ((char *)this->end - (char *)v18) / 0x18; /*0x7912d3*/
      else
        v19 = 0; /*0x7912bb*/
      v20 = v19 + count; /*0x7912d5*/
      if ( v18 ) /*0x7912d9*/
        FormHeapFree((unsigned int)this->begin); /*0x7912dc*/
      this->capacityEnd = &valuea[0x18 * v14]; /*0x7912f0*/
      this->end = &valuea[0x18 * v20]; /*0x7912f6*/
      this->begin = valuea; /*0x7912f9*/
      return (unsigned int)valuea; /*0x7912e4*/
    }
  }
  return result; /*0x7912fc*/
}
