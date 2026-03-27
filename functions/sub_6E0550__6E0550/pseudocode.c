void __thiscall sub_6E0550(int *this, _DWORD **a2)
{
  _DWORD **v2; // edi
  int v4; // eax
  int v5; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_715E40(this, (int)a2);
  NiTMap_GetAt(*v2, (int)this, &v5);
  v4 = *(this + 0x10);
  if ( v4 )
  {
    if ( NiTMap_GetAt(*v2, v4, &a2) )
      *(_DWORD *)(v5 + 0x40) = a2;
    else
      *(_DWORD *)(v5 + 0x40) = *(this + 0x10);
  }
}
