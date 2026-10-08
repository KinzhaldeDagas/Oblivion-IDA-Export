unsigned int __thiscall sub_4BACA0(NiTArray_NiTexturingPropertyMap *this, _DWORD *a2)
{
  unsigned int result; // eax
  UInt16 end; // di
  NiTexturingProperty_Map *data; // ecx

  if ( !*a2 ) /*0x4baca5*/
    return 0xFFFFFFFF; /*0x4bacaf*/
  end = this->end; /*0x4bacb8*/
  LOWORD(result) = 0; /*0x4bacbc*/
  if ( end ) /*0x4bacc1*/
  {
    data = this->data; /*0x4bacc3*/
    while ( *((_DWORD *)&data->vtbl + (unsigned __int16)result) ) /*0x4baccd*/
    {
      LOWORD(result) = result + 1; /*0x4baccf*/
      if ( (unsigned __int16)result >= this->end ) /*0x4bacd6*/
        goto LABEL_7; /*0x4bacd6*/
    }
    result = (unsigned __int16)result; /*0x4bad03*/
    *((_DWORD *)&data->vtbl + (unsigned __int16)result) = *a2; /*0x4bad08*/
    ++this->numObjs; /*0x4bad0b*/
  }
  else
  {
LABEL_7:
    if ( end >= (unsigned int)this->capacity ) /*0x4bace1*/
      NiTArray_SetSize((unsigned __int16 *)this, end + this->growSize); /*0x4bacec*/
    NiTArray_SetAt(this, end, a2); /*0x4bacf5*/
    return end; /*0x4bacfa*/
  }
  return result; /*0x4bacae*/
}
