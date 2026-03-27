int __thiscall sub_75E670(int *this, int a2)
{
  _DWORD **v2; // edi
  int result; // eax
  int v5; // ebx

  v2 = (_DWORD **)a2;
  sub_6CE2F0(this, a2);
  NiTMap_GetAt(*v2, (int)this, &a2);
  result = a2;
  v5 = a2;
  if ( *(this + 0xC) )
  {
    if ( *(_DWORD *)(a2 + 0x30) )
    {
      NiTMap_GetAt(*v2, *(this + 0x11), &a2);
      result = a2;
      *(_DWORD *)(v5 + 0x44) = a2;
    }
  }
  return result;
}
