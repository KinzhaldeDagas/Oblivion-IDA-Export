int __thiscall sub_4B3400(int *this, int a3)
{
  int v3; // eax
  _DWORD *v4; // edi
  _DWORD *v6; // [esp+4h] [ebp-4h] BYREF

  v3 = *(this + 3);
  v6 = 0;
  if ( NiTMap_GetAt(&off_B08310, v3, &v6) )
  {
    v4 = v6;
    if ( v6 )
    {
      sub_46D450(v6);
      FormHeapFree((unsigned int)v4);
    }
  }
  return NiTMap_SetAt(&off_B08310, *(this + 3), a3);
}
