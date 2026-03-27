void __thiscall sub_67BF80(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax

  v2 = (_DWORD *)*this;
  if ( a2 )
  {
    if ( *v2 )
    {
      v3 = (_DWORD *)FormHeapAlloc(8u);
      if ( v3 )
      {
        *v3 = *v2;
        v3[1] = 0;
        v3[1] = v2[1];
        *v2 = a2;
        v2[1] = v3;
        return;
      }
      *(_DWORD *)4 = v2[1];
      v2[1] = 0;
    }
    *v2 = a2;
  }
}
