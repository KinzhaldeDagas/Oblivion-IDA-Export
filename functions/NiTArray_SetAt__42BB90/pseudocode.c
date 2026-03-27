// Actually first arg is a generic NiTArray
unsigned int __thiscall NiTArray_SetAt(NiTArray_NiTexturingPropertyMap *this, unsigned int a2, _DWORD *a3)
{
  unsigned int result; // eax
  _DWORD *v4; // edx
  NiTexturingProperty_Map *data; // esi

  result = a2;
  if ( a2 < this->end )
  {
    v4 = a3;
    data = this->data;
    if ( *a3 )
    {
      if ( !*((_DWORD *)&data->vtbl + a2) )
      {
        ++this->numObjs;
        *((_DWORD *)&this->data->vtbl + a2) = *a3;
        return result;
      }
    }
    else if ( *((_DWORD *)&data->vtbl + a2) )
    {
      --this->numObjs;
    }
  }
  else
  {
    this->end = a2 + 1;
    v4 = a3;
    if ( *a3 )
    {
      ++this->numObjs;
      *((_DWORD *)&this->data->vtbl + a2) = *a3;
      return result;
    }
  }
  *((_DWORD *)&this->data->vtbl + a2) = *v4;
  return result;
}
