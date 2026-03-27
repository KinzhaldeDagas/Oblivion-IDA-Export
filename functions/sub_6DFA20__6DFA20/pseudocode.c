void __thiscall sub_6DFA20(_DWORD *this, _DWORD **arg0)
{
  _DWORD **v2; // edi
  int v4; // ebx

  v2 = arg0;
  sub_700750((NiTriBasedGeomData *)this, (int)arg0);
  NiTMap_GetAt(*v2, (int)this, &arg0);
  v4 = (int)arg0;
  if ( NiTMap_GetAt(*v2, *(this + 4), &arg0) )
    *(_DWORD *)(v4 + 0x10) = arg0;
  else
    *(_DWORD *)(v4 + 0x10) = *(this + 4);
}
