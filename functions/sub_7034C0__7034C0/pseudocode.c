NiTriShapeData *__thiscall sub_7034C0(NiTriShapeData *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 0x16); /*0x7034c6*/
  this->__vftable = (NiTriBasedGeomDataVtbl *)&NiScreenElementsData::`vftable'; /*0x7034c7*/
  FormHeapFree(v4); /*0x7034cd*/
  FormHeapFree(*((_DWORD *)this + 0x17)); /*0x7034d6*/
  NiTriShapeData_Destruct(this); /*0x7034e0*/
  if ( (a2 & 1) != 0 ) /*0x7034ea*/
    FormHeapFree((unsigned int)this); /*0x7034ed*/
  return this; /*0x7034f7*/
}
