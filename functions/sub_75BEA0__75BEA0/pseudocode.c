void __thiscall sub_75BEA0(int *this, _DWORD **a2)
{
  _DWORD **v2; // edi
  int v4; // eax
  _DWORD **v5; // ebx

  v2 = a2;
  sub_752D80(this, a2);
  NiTMap_GetAt(*v2, (int)this, &a2);
  v4 = *(this + 7);
  v5 = a2;
  if ( v4 )
  {
    if ( NiTMap_GetAt(*v2, v4, &a2) )
      v5[7] = a2;
    else
      v5[7] = (_DWORD *)*(this + 7);
  }
}
