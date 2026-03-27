NiTexturingProperty *__thiscall NiTexturingProperty::NiTexturingProperty(NiTexturingProperty *this)
{
  unsigned int end; // ecx
  UInt16 unk018; // si
  unsigned int v4; // eax
  UInt16 *p_unk04; // edx
  UInt16 v6; // si
  _DWORD v8[4]; // [esp+10h] [ebp-10h] BYREF

  NiObjectNET::NiObjectNET((NiObjectNET *)this);
  this->vtbl = &NiTexturingProperty::`vftable';
  this->unk018 = 0;
  this->unk01C.capacity = 7;
  v8[3] = 0;
  this->unk01C._vtbl = &NiTArray<NiTexturingProperty::Map *>::`vftable';
  this->unk01C.growSize = 1;
  this->unk01C.end = 0;
  this->unk01C.numObjs = 0;
  this->unk01C.data = (NiTexturingProperty_Map *)FormHeapAlloc(28u);
  this->unk02C = 0;
  v8[0] = 0;
  NiTArray_SetAt(&this->unk01C, 0, v8);
  v8[0] = 0;
  NiTArray_SetAt(&this->unk01C, 1u, v8);
  v8[0] = 0;
  NiTArray_SetAt(&this->unk01C, 2u, v8);
  v8[0] = 0;
  NiTArray_SetAt(&this->unk01C, 3u, v8);
  v8[0] = 0;
  NiTArray_SetAt(&this->unk01C, 4u, v8);
  v8[0] = 0;
  NiTArray_SetAt(&this->unk01C, 5u, v8);
  v8[0] = 0;
  NiTArray_SetAt(&this->unk01C, 6u, v8);
  end = this->unk01C.end;
  this->unk018 &= 0xF00Fu;
  unk018 = this->unk018;
  v4 = 1;
  if ( end <= 1 )
  {
LABEL_5:
    v6 = unk018 & 0xFFFE;
  }
  else
  {
    p_unk04 = &this->unk01C.data->unk04;
    while ( !*(_DWORD *)p_unk04 )
    {
      ++v4;
      p_unk04 += 2;
      if ( v4 >= end )
        goto LABEL_5;
    }
    v6 = unk018 | 1;
  }
  this->unk018 = v6;
  this->unk018 = v6 & 0xFFF1 | 4;
  return this;
}
