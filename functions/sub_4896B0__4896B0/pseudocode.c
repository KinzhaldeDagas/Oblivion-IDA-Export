ExtraDataList ***__thiscall sub_4896B0(int ***this, ExtraDataList **a2, int a3)
{
  int **v3; // eax
  char v4; // dl
  int *v5; // eax
  ExtraDataList ***v6; // edi
  ExtraDataList *v7; // ebp
  ExtraDataList ***v8; // esi
  ExtraDataList **ExtraCount; // edi
  ExtraDataList **v10; // eax
  ExtraDataList **v11; // eax
  ExtraDataList **v12; // esi
  ExtraDataList **v13; // eax
  int i; // [esp+14h] [ebp-14h]

  v3 = *this;
  v4 = 1;
  if ( !*this )
    goto LABEL_8;
  while ( v4 )
  {
    if ( *v3 && (ExtraDataList **)(*v3)[2] == a2 )
      v4 = 0;
    else
      v3 = (int **)v3[1];
    if ( !v3 )
      goto LABEL_8;
  }
  if ( v3 )
    v5 = *v3;
  else
LABEL_8:
    v5 = 0;
  v6 = 0;
  if ( v5 )
  {
    for ( i = *v5; i; i = *(_DWORD *)(i + 4) )
    {
      if ( v6 )
        break;
      v7 = *(ExtraDataList **)i;
      if ( *(_DWORD *)i )
      {
        if ( (char)sub_422C40(*(ExtraDataList **)i) == a3 )
        {
          v8 = (ExtraDataList ***)FormHeapAlloc(0xCu);
          if ( v8 )
          {
            ExtraCount = (ExtraDataList **)ExtraDataList_GetExtraCount(v7);
            v8[2] = a2;
            v10 = (ExtraDataList **)FormHeapAlloc(8u);
            if ( v10 )
            {
              *v10 = 0;
              v10[1] = 0;
              *v8 = v10;
            }
            else
            {
              *v8 = 0;
            }
            v8[1] = ExtraCount;
          }
          else
          {
            v8 = 0;
          }
          v6 = v8;
          if ( !*v8 )
          {
            v11 = (ExtraDataList **)FormHeapAlloc(8u);
            if ( v11 )
            {
              *v11 = 0;
              v11[1] = 0;
            }
            else
            {
              v11 = 0;
            }
            *v8 = v11;
          }
          v12 = *v8;
          if ( *v12 )
          {
            v13 = (ExtraDataList **)FormHeapAlloc(8u);
            if ( v13 )
            {
              *v13 = *v12;
              v13[1] = 0;
            }
            else
            {
              v13 = 0;
            }
            v13[1] = v12[1];
            v12[1] = (ExtraDataList *)v13;
          }
          *v12 = v7;
        }
      }
    }
  }
  return v6;
}
