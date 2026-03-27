unsigned int __thiscall sub_4BACA0(NiTArray_NiTexturingPropertyMap *this, _DWORD *a2)
{
  unsigned int result; // eax
  UInt16 end; // di
  NiTexturingProperty_Map *data; // ecx

  if ( !*a2 )
    return 0xFFFFFFFF;
  end = this->end;
  LOWORD(result) = 0;
  if ( end )
  {
    data = this->data;
    while ( *((_DWORD *)&data->vtbl + (unsigned __int16)result) )
    {
      LOWORD(result) = result + 1;
      if ( (unsigned __int16)result >= this->end )
        goto LABEL_7;
    }
    result = (unsigned __int16)result;
    *((_DWORD *)&data->vtbl + (unsigned __int16)result) = *a2;
    ++this->numObjs;
  }
  else
  {
LABEL_7:
    if ( end >= (unsigned int)this->capacity )
      NiTArray_SetSize((unsigned __int16 *)this, end + this->growSize);
    NiTArray_SetAt(this, end, a2);
    return end;
  }
  return result;
}
