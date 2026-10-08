NiTexturingProperty *__thiscall NiTexturingProperty::NiTexturingProperty(NiTexturingProperty *this)
{
  unsigned int end; // ecx
  UInt16 unk018; // si
  unsigned int v4; // eax
  UInt16 *p_unk04; // edx
  UInt16 v6; // si
  _DWORD v8[4]; // [esp+10h] [ebp-10h] BYREF

  NiObjectNET::NiObjectNET((NiObjectNET *)this); /*0x7043da*/
  this->vtbl = &NiTexturingProperty::`vftable'; /*0x7043e1*/
  this->unk018 = 0; /*0x7043e7*/
  this->unk01C.capacity = 7; /*0x7043f5*/
  v8[3] = 0; /*0x704403*/
  this->unk01C._vtbl = &NiTArray<NiTexturingProperty::Map *>::`vftable'; /*0x704407*/
  this->unk01C.growSize = 1; /*0x70440d*/
  this->unk01C.end = 0; /*0x704413*/
  this->unk01C.numObjs = 0; /*0x704417*/
  this->unk01C.data = (NiTexturingProperty_Map *)FormHeapAlloc(28u); /*0x704425*/
  this->unk02C = 0; /*0x704433*/
  v8[0] = 0; /*0x704436*/
  NiTArray_SetAt(&this->unk01C, 0, v8); /*0x70443a*/
  v8[0] = 0; /*0x704448*/
  NiTArray_SetAt(&this->unk01C, 1u, v8); /*0x70444c*/
  v8[0] = 0; /*0x70445a*/
  NiTArray_SetAt(&this->unk01C, 2u, v8); /*0x70445e*/
  v8[0] = 0; /*0x70446c*/
  NiTArray_SetAt(&this->unk01C, 3u, v8); /*0x704470*/
  v8[0] = 0; /*0x70447e*/
  NiTArray_SetAt(&this->unk01C, 4u, v8); /*0x704482*/
  v8[0] = 0; /*0x704490*/
  NiTArray_SetAt(&this->unk01C, 5u, v8); /*0x704494*/
  v8[0] = 0; /*0x7044a2*/
  NiTArray_SetAt(&this->unk01C, 6u, v8); /*0x7044a6*/
  end = this->unk01C.end; /*0x7044ab*/
  this->unk018 &= 0xF00Fu; /*0x7044af*/
  unk018 = this->unk018; /*0x7044b5*/
  v4 = 1; /*0x7044b9*/
  if ( end <= 1 ) /*0x7044c0*/
  {
LABEL_5:
    v6 = unk018 & 0xFFFE; /*0x7044d6*/
  }
  else
  {
    p_unk04 = &this->unk01C.data->unk04; /*0x7044c5*/
    while ( !*(_DWORD *)p_unk04 ) /*0x7044ca*/
    {
      ++v4; /*0x7044cc*/
      p_unk04 += 2; /*0x7044cf*/
      if ( v4 >= end ) /*0x7044d4*/
        goto LABEL_5; /*0x7044d4*/
    }
    v6 = unk018 | 1; /*0x704505*/
  }
  this->unk018 = v6; /*0x7044e8*/
  this->unk018 = v6 & 0xFFF1 | 4; /*0x7044ec*/
  return this; /*0x7044f2*/
}
