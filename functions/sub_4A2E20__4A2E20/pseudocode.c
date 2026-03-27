int __thiscall sub_4A2E20(_DWORD *this)
{
  _DWORD *v2; // ecx
  int result; // eax
  _DWORD *i; // esi
  _DWORD *v5; // ecx

  v2 = (_DWORD *)*(this + 6);
  if ( v2 )
    sub_4A4400(v2);
  result = *(this + 7);
  if ( result )
  {
    for ( i = *(_DWORD **)result; *(_DWORD *)result; i = *(_DWORD **)result )
    {
      v5 = *(_DWORD **)(result + 4);
      if ( v5 )
      {
        *(_DWORD *)(result + 4) = v5[1];
        *(_DWORD *)result = *v5;
        FormHeapFree((unsigned int)v5);
      }
      else
      {
        *(_DWORD *)result = 0;
      }
      if ( i )
      {
        sub_4A76F0(i);
        FormHeapFree((unsigned int)i);
      }
      result = *(this + 7);
    }
  }
  return result;
}
