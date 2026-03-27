void __thiscall sub_4E50E0(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // ebx
  _DWORD *v4; // edi
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int v8; // [esp-10h] [ebp-14h]

  v3 = (int)a2;
  if ( a2 && a3 )
  {
    v4 = this + 0xD;
    v8 = (int)a2;
    a2 = 0;
    if ( !NiTMap_GetAt(this + 0xD, v8, &a2) || (v5 = a2) == 0 )
    {
      v6 = (_DWORD *)FormHeapAlloc(8u);
      if ( v6 )
      {
        *v6 = 0;
        v6[1] = 0;
      }
      else
      {
        v6 = 0;
      }
      v5 = v6;
      NiTMap_SetAt(v4, v3, (int)v6);
    }
    v7 = v5;
    if ( v5 )
    {
      while ( *v7 != a3 )
      {
        v7 = (_DWORD *)v7[1];
        if ( !v7 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      BSSimpleList_PushFront(v5, a3);
    }
  }
}
