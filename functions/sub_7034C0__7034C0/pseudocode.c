NiTriShapeDynamicData *__thiscall sub_7034C0(NiTriShapeDynamicData *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x16);
  *(_DWORD *)this = &NiScreenElementsData::`vftable';
  FormHeapFree(v4);
  FormHeapFree(*((_DWORD *)this + 0x17));
  NiTriShapeDynamicData::~NiTriShapeDynamicData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
