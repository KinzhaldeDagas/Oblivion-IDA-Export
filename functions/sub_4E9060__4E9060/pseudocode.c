void __thiscall sub_4E9060(char *this, signed int a3)
{
  char *v2; // ebp
  float *v4; // eax
  signed int v5; // esi
  int v6; // edi
  int v7; // eax
  char *v8; // ebx
  _DWORD *v9; // ecx
  _DWORD *v10; // eax
  int v11; // eax
  signed int v12; // [esp+8h] [ebp-8h]

  v2 = (char *)a3;
  if ( a3 )
  {
    v4 = (float *)sub_4BEF40((char *)a3);
    if ( !sub_4E8D00(this, v4) )
    {
      a3 = (int)*(float *)sub_4BEF40(v2);
      v5 = a3 >> 0xC;
      v6 = (int)*((float *)sub_4BEF40(v2) + 1) >> 0xC;
      v7 = sub_4EF1D0(v5, v6);
      v8 = this + 0x1C;
      a3 = 0;
      NiTMap_GetAt(v8, v7, &a3);
      v9 = (_DWORD *)a3;
      if ( !a3 )
      {
        v10 = (_DWORD *)FormHeapAlloc(8u);
        if ( v10 )
        {
          *v10 = 0;
          v10[1] = 0;
          a3 = (signed int)v10;
        }
        else
        {
          a3 = 0;
        }
        v12 = a3;
        v11 = sub_4EF1D0(v5, v6);
        NiTMap_SetAt(v8, v11, a3);
        v9 = (_DWORD *)v12;
      }
      BSSimpleList_PushFront(v9, (int)v2);
      ++*((_DWORD *)this + 6);
    }
  }
}
