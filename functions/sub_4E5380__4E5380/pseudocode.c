void __thiscall sub_4E5380(char *this, char *a2)
{
  char *v2; // ebp
  float *v4; // eax
  int v5; // esi
  char *v6; // edi
  char *v7; // ebx
  char *v8; // eax

  v2 = a2;
  if ( a2 )
  {
    v4 = (float *)sub_4BEF40(a2);
    v5 = sub_4E5320(v4);
    v6 = this + 0x44;
    a2 = 0;
    NiTMap_GetAt(v6, v5, &a2);
    v7 = a2;
    if ( !a2 )
    {
      v8 = (char *)FormHeapAlloc(8u);
      if ( v8 )
      {
        *(_DWORD *)v8 = 0;
        *((_DWORD *)v8 + 1) = 0;
      }
      else
      {
        v8 = 0;
      }
      v7 = v8;
      NiTMap_SetAt(v6, v5, (int)v8);
    }
    BSSimpleList_PushFront(v7, (int)v2);
  }
}
