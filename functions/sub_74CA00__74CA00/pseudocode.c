unsigned int __thiscall sub_74CA00(_DWORD *this, int *a2)
{
  int *v2; // ebp
  unsigned int result; // eax
  unsigned int v5; // edi
  _DWORD *v6; // ebx
  int *i; // [esp+Ch] [ebp-4h]

  v2 = a2;
  sub_752D80(this, (int)a2);
  NiTMap_GetAt((_DWORD *)*v2, (int)this, &a2);
  result = *((unsigned __int16 *)this + 0x2E);
  v5 = 0;
  for ( i = a2; v5 < result; ++v5 )
  {
    v6 = *(_DWORD **)(*(this + 0x15) + 4 * v5);
    if ( v6 )
    {
      if ( NiTMap_GetAt((_DWORD *)*v2, (int)v6, &a2) )
        sub_74C910(i, a2);
      else
        sub_74C910(i, v6);
    }
    result = *((unsigned __int16 *)this + 0x2E);
  }
  return result;
}
