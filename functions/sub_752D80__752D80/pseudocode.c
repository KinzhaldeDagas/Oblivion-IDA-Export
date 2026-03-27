_DWORD **__thiscall sub_752D80(_DWORD *this, _DWORD **arg0)
{
  _DWORD **v2; // edi
  int v4; // ebx
  _DWORD **result; // eax

  v2 = arg0;
  sub_700750((NiTriBasedGeomData *)this, (int)arg0);
  NiTMap_GetAt(*v2, (int)this, &arg0);
  v4 = (int)arg0;
  NiTMap_GetAt(*v2, *(this + 4), &arg0);
  result = arg0;
  *(_DWORD *)(v4 + 0x10) = arg0;
  return result;
}
