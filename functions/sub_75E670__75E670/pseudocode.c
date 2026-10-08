int __thiscall sub_75E670(int *this, int a2)
{
  _DWORD **v2; // edi
  int result; // eax
  int v5; // ebx

  v2 = (_DWORD **)a2; /*0x75e673*/
  sub_6CE2F0((NiTriBasedGeomData *)this, a2); /*0x75e67a*/
  NiTMap_GetAt(*v2, (int)this, &a2); /*0x75e687*/
  result = a2; /*0x75e690*/
  v5 = a2; /*0x75e694*/
  if ( *(this + 0xC) ) /*0x75e68c*/
  {
    if ( *(_DWORD *)(a2 + 0x30) ) /*0x75e698*/
    {
      NiTMap_GetAt(*v2, *(this + 0x11), &a2); /*0x75e6a9*/
      result = a2; /*0x75e6ae*/
      *(_DWORD *)(v5 + 0x44) = a2; /*0x75e6b2*/
    }
  }
  return result; /*0x75e6b5*/
}
