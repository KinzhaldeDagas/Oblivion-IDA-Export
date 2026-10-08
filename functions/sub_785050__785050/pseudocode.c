// Oblivion 1.2.0.416: vector<stVec>::insert(position,count,value); preserves aliasing with a local 24-byte copy, uses 1.5x growth, and handles in-place or reallocated insertion. False FUNC_NORET cleared.
// positive sp value has been detected, the output may be wrong!
void __thiscall OB_stVector_stVec_InsertFill_010201A0(
        OB_stVector_stVec_010201A0 *this,
        OB_stVector_stVecIterator_010201A0 position,
        unsigned int count,
        const OB_stVec_010201A0 *value)
{
  float v5; // edx
  float v6; // ecx
  float v7; // edx
  float v8; // ecx
  int size; // edx
  int begin; // edi
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned __int8 *v16; // eax
  OB_stVec_010201A0 *v17; // ecx
  unsigned __int8 *v18; // eax
  unsigned __int8 *v19; // eax
  unsigned __int8 *v20; // edi
  int v21; // eax
  unsigned int v22; // ebx
  OB_stVec_010201A0 *end; // ecx
  unsigned int v24; // ebx
  unsigned __int8 *v25; // [esp-10h] [ebp-54h]
  unsigned int v26; // [esp-Ch] [ebp-50h]
  int v27; // [esp-4h] [ebp-48h] BYREF
  unsigned __int8 v28[4]; // [esp+10h] [ebp-34h] BYREF
  float v29; // [esp+14h] [ebp-30h]
  float v30; // [esp+18h] [ebp-2Ch]
  float v31; // [esp+1Ch] [ebp-28h]
  float v32; // [esp+20h] [ebp-24h]
  int v33; // [esp+24h] [ebp-20h]
  int v34; // [esp+28h] [ebp-1Ch]
  int v35; // [esp+2Ch] [ebp-18h]
  OB_stVector_stVec_010201A0 *v36; // [esp+30h] [ebp-14h]
  int *v37; // [esp+34h] [ebp-10h]
  unsigned int v38; // [esp+40h] [ebp-4h]
  const unsigned __int8 *counta; // [esp+54h] [ebp+10h]
  OB_stVec_010201A0 *valuea; // [esp+58h] [ebp+14h]
  unsigned __int8 *valueb; // [esp+58h] [ebp+14h]

  v37 = &v27; /*0x785078*/
  v36 = this; /*0x78507d*/
  v5 = value->data[1]; /*0x785085*/
  *(float *)v28 = value->data[0]; /*0x785088*/
  v6 = value->data[2]; /*0x78508b*/
  v29 = v5; /*0x78508e*/
  v7 = value->data[3]; /*0x785091*/
  v30 = v6; /*0x785094*/
  v8 = value->data[4]; /*0x785097*/
  v31 = v7; /*0x78509a*/
  size = value->size; /*0x78509d*/
  v32 = v8; /*0x7850a0*/
  v33 = size; /*0x7850a3*/
  begin = (int)v36->begin; /*0x7850a6*/
  v11 = 0; /*0x7850a9*/
  v38 = 0; /*0x7850ad*/
  if ( begin ) /*0x7850b0*/
    v11 = ((int)this->capacityEnd - begin) / 0x18; /*0x7850c6*/
  if ( count ) /*0x7850cd*/
  {
    if ( begin ) /*0x7850d5*/
      v12 = ((int)this->end - begin) / 0x18; /*0x7850ef*/
    else
      v12 = 0; /*0x7850d7*/
    if ( 0xFFFFFFFF - v12 < count ) /*0x7850f8*/
      OB_stVector_ThrowLengthError_010201A0(begin); /*0x7850fa*/
    if ( begin ) /*0x785101*/
      v13 = ((int)this->end - begin) / 0x18; /*0x78511b*/
    else
      v13 = 0; /*0x785103*/
    if ( v11 >= count + v13 ) /*0x785121*/
    {
      end = this->end; /*0x78524f*/
      valueb = (unsigned __int8 *)end; /*0x78526c*/
      if ( end - position.current >= count ) /*0x78526f*/
      {
        v24 = count; /*0x785306*/
        counta = (const unsigned __int8 *)&end[-count]; /*0x78530e*/
        this->end = (OB_stVec_010201A0 *)OB_stVector24_UninitializedCopyRangeThunk_010201A0( /*0x785319*/
                                           counta,
                                           (const unsigned __int8 *)end,
                                           (unsigned __int8 *)end);
        OB_stVector24_CopyBackwardRangeThunk_010201A0((const unsigned __int8 *)position.current, counta, valueb); /*0x785322*/
        OB_stVector24_CopyFillRange_010201A0( /*0x78532f*/
          (unsigned __int8 *)position.current,
          (unsigned __int8 *)&position.current[v24],
          v28);
      }
      else
      {
        OB_stVector24_UninitializedCopyRangeThunk_010201A0( /*0x785288*/
          (const unsigned __int8 *)position.current,
          (const unsigned __int8 *)end,
          (unsigned __int8 *)&position.current[count]);
        v26 = count - (this->end - position.current); /*0x7852ab*/
        v25 = (unsigned __int8 *)this->end; /*0x7852ac*/
        LOBYTE(v38) = 3; /*0x7852af*/
        OB_stVector24_UninitializedFillNThunk_010201A0(v25, v26, v28); /*0x7852b3*/
        this->end += count; /*0x7852bb*/
        OB_stVector24_CopyFillRange_010201A0( /*0x7852c9*/
          (unsigned __int8 *)position.current,
          (unsigned __int8 *)&this->end[-count],
          v28);
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (v11 >> 1) >= v11 ) /*0x785132*/
        v14 = (v11 >> 1) + v11; /*0x785138*/
      else
        v14 = 0; /*0x785134*/
      if ( begin ) /*0x78513c*/
        v15 = ((int)this->end - begin) / 0x18; /*0x785156*/
      else
        v15 = 0; /*0x78513e*/
      if ( v14 < count + v15 ) /*0x78515c*/
        v14 = count + OB_stVector24_Size_010201A0((const OB_stVector24_010201A0 *)this); /*0x785167*/
      v34 = 0x18 * v14; /*0x785173*/
      v16 = (unsigned __int8 *)FormHeapAlloc(0x18 * v14); /*0x785176*/
      v17 = this->begin; /*0x78517e*/
      LOBYTE(v35) = 0; /*0x785181*/
      valuea = (OB_stVec_010201A0 *)v16; /*0x785194*/
      LOBYTE(v38) = 1; /*0x785197*/
      v18 = OB_stVector24_UninitializedCopyRange_010201A0( /*0x78519b*/
              (const unsigned __int8 *)v17,
              (const unsigned __int8 *)position.current,
              v16);
      v19 = OB_stVector24_UninitializedFillNThunk_010201A0(v18, count, v28); /*0x7851ae*/
      OB_stVector24_UninitializedCopyRange_010201A0( /*0x7851c9*/
        (const unsigned __int8 *)position.current,
        (const unsigned __int8 *)this->end,
        v19);
      v20 = (unsigned __int8 *)this->begin; /*0x7851ce*/
      v21 = 0; /*0x7851d1*/
      v38 = 0; /*0x7851d8*/
      if ( v20 ) /*0x7851db*/
        v21 = ((char *)this->end - (char *)v20) / 0x18; /*0x7851f1*/
      v22 = v21 + count; /*0x7851f3*/
      if ( v20 ) /*0x7851f7*/
      {
        OB_stVector24_DestroyRange_010201A0(v20, (unsigned __int8 *)this->end); /*0x785200*/
        FormHeapFree((unsigned int)this->begin); /*0x785209*/
      }
      this->capacityEnd = &valuea[v34 / 0x18u]; /*0x78521c*/
      this->end = &valuea[v22]; /*0x785222*/
      this->begin = valuea; /*0x785225*/
    }
  }
  v38 = 0xFFFFFFFF; /*0x78533a*/
  Shared_NoOpVirtual_60D0A0(v28); /*0x785341*/
}
