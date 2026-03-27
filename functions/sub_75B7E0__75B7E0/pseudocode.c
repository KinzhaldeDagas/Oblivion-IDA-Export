void __thiscall sub_75B7E0(int *this, _DWORD **a2)
{
  _DWORD **v2; // edi
  _DWORD **v4; // ebx

  v2 = a2;
  sub_752D80(this, a2);
  NiTMap_GetAt(*v2, (int)this, &a2);
  v4 = a2;
  if ( NiTMap_GetAt(*v2, *(this + 6), &a2) )
    v4[6] = a2;
  else
    v4[6] = (_DWORD *)*(this + 6);
}
