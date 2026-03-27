void __thiscall sub_4EED80(_DWORD *this, _DWORD *a2, char a3)
{
  _DWORD *v3; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // ecx

  v3 = a2;
  if ( a2 )
  {
    if ( !a3 )
      sub_5B1D70(this);
    if ( a2[1] || *a2 )
    {
      do
      {
        v5 = (_DWORD *)FormHeapAlloc(8u);
        v6 = (_DWORD *)*v3;
        *v5 = *(_DWORD *)*v3;
        v5[1] = v6[1];
        BSSimpleList_PushBack(this, (int)v5);
        v3 = (_DWORD *)v3[1];
      }
      while ( v3 );
    }
  }
}
