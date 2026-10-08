NiTArray_NiD3DTextureStage *__thiscall NiTArray<NiPointer<NiD3DTextureStage>>::NiTArray<NiPointer<NiD3DTextureStage>>(
        NiTArray_NiD3DTextureStage *this,
        unsigned __int16 a2,
        UInt16 a3)
{
  unsigned int v4; // ecx
  _DWORD *v5; // eax
  NiD3DTextureStage *v6; // ebx

  this->_vtbl = &NiTArray<NiPointer<NiD3DTextureStage>>::`vftable'; /*0x75fe3f*/
  this->capacity = a2; /*0x75fe45*/
  this->growSize = a3; /*0x75fe49*/
  this->end = 0; /*0x75fe4d*/
  this->numObjs = 0; /*0x75fe53*/
  if ( a2 )
  {
    v4 = (unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2;
    v5 = (_DWORD *)FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x75fe89*/
    {
      v6 = (NiD3DTextureStage *)(v5 + 1); /*0x75fe91*/
      *v5 = a2; /*0x75fe97*/
      sub_401080(v5 + 1, 4, a2, (void *(__thiscall *)(void *))Concurrency::details::_NonReentrantLock::_Release); /*0x75fe99*/
      this->data = v6; /*0x75fe9f*/
    }
    else
    {
      this->data = 0; /*0x75feac*/
    }
    return this; /*0x75fea3*/
  }
  else
  {
    this->data = 0; /*0x75feb6*/
    return this; /*0x75febd*/
  }
}
