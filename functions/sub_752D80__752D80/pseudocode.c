_DWORD **__thiscall sub_752D80(_DWORD *this, _DWORD **arg0)
{
  _DWORD **v2; // edi
  _DWORD **v4; // ebx
  _DWORD **result; // eax

  v2 = arg0; /*0x752d83*/
  sub_700750((NiTriBasedGeomData *)this, (int)arg0); /*0x752d8a*/
  NiTMap_GetAt(*v2, (int)this, &arg0); /*0x752d97*/
  v4 = arg0; /*0x752d9f*/
  NiTMap_GetAt(*v2, *(this + 4), &arg0); /*0x752dab*/
  result = arg0; /*0x752db0*/
  v4[4] = arg0; /*0x752db6*/
  return result; /*0x752db4*/
}
