char __thiscall sub_452E70(_DWORD *this, int *a2, int a3)
{
  int v3; // ebx
  int *v5; // eax
  int *v6; // eax
  int *v7; // esi
  int v8; // edi

  v3 = (int)a2;
  LOBYTE(v5) = NiTMap_GetAt(this, (int)a2, &a2);
  if ( (_BYTE)v5 )
  {
    v7 = a2;
  }
  else
  {
    v6 = (int *)FormHeapAlloc(8u);
    if ( v6 )
    {
      *v6 = 0;
      v6[1] = 0;
      v7 = v6;
      LOBYTE(v5) = NiTMap_SetAt(this, v3, (int)v6);
    }
    else
    {
      v7 = 0;
      LOBYTE(v5) = NiTMap_SetAt(this, v3, 0);
    }
  }
  v8 = a3;
  if ( a3 )
  {
    if ( *v7 )
    {
      v5 = (int *)FormHeapAlloc(8u);
      if ( v5 )
      {
        *v5 = *v7;
        v5[1] = 0;
        v5[1] = v7[1];
        *v7 = v8;
        v7[1] = (int)v5;
        return (char)v5;
      }
      LOBYTE(v5) = 0;
      *(_DWORD *)4 = v7[1];
      v7[1] = 0;
    }
    *v7 = v8;
  }
  return (char)v5;
}
