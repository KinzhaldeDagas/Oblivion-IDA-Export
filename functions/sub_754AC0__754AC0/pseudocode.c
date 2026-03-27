void __thiscall sub_754AC0(int *this, _DWORD **a2)
{
  _DWORD **v2; // edi
  int v4; // eax
  int v5; // ebx

  v2 = a2;
  sub_75EDA0(this, (int)a2);
  NiTMap_GetAt(*v2, (int)this, &a2);
  v4 = *(this + 0xB);
  v5 = (int)a2;
  if ( v4 )
  {
    if ( NiTMap_GetAt(*v2, v4, &a2) )
      *(_DWORD *)(v5 + 0x2C) = a2;
    else
      *(_DWORD *)(v5 + 0x2C) = *(this + 0xB);
  }
}
