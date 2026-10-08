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

  v3 = *this; /*0x4896d7*/
  v4 = 1; /*0x4896dd*/
  if ( !*this ) /*0x4896d7*/
    goto LABEL_8; /*0x4896d7*/
  while ( v4 ) /*0x4896e3*/
  {
    if ( *v3 && (ExtraDataList **)(*v3)[2] == a2 ) /*0x4896f6*/
      v4 = 0; /*0x4896f8*/
    else
      v3 = (int **)v3[1]; /*0x4896fc*/
    if ( !v3 ) /*0x489701*/
      goto LABEL_8; /*0x489701*/
  }
  if ( v3 ) /*0x48978c*/
    v5 = *v3; /*0x489792*/
  else
LABEL_8:
    v5 = 0; /*0x489703*/
  v6 = 0; /*0x489705*/
  if ( v5 ) /*0x489709*/
  {
    for ( i = *v5; i; i = *(_DWORD *)(i + 4) ) /*0x489713*/
    {
      if ( v6 ) /*0x48971f*/
        break; /*0x48971f*/
      v7 = *(ExtraDataList **)i; /*0x489729*/
      if ( *(_DWORD *)i ) /*0x489729*/
      {
        if ( (char)sub_422C40(*(ExtraDataList **)i) == a3 ) /*0x489741*/
        {
          v8 = (ExtraDataList ***)FormHeapAlloc(0xCu); /*0x48974e*/
          if ( v8 ) /*0x48975d*/
          {
            ExtraCount = (ExtraDataList **)ExtraDataList_GetExtraCount(v7); /*0x48976c*/
            v8[2] = a2; /*0x48976f*/
            v10 = (ExtraDataList **)FormHeapAlloc(8u); /*0x489772*/
            if ( v10 ) /*0x48977c*/
            {
              *v10 = 0; /*0x48977e*/
              v10[1] = 0; /*0x489780*/
              *v8 = v10; /*0x489783*/
            }
            else
            {
              *v8 = 0; /*0x48979b*/
            }
            v8[1] = ExtraCount; /*0x489785*/
          }
          else
          {
            v8 = 0; /*0x4897a2*/
          }
          v6 = v8; /*0x4897ae*/
          if ( !*v8 ) /*0x4897a4*/
          {
            v11 = (ExtraDataList **)FormHeapAlloc(8u); /*0x4897b4*/
            if ( v11 ) /*0x4897be*/
            {
              *v11 = 0; /*0x4897c0*/
              v11[1] = 0; /*0x4897c2*/
            }
            else
            {
              v11 = 0; /*0x4897c7*/
            }
            *v8 = v11; /*0x4897c9*/
          }
          v12 = *v8; /*0x4897cb*/
          if ( *v12 ) /*0x4897cd*/
          {
            v13 = (ExtraDataList **)FormHeapAlloc(8u); /*0x4897d3*/
            if ( v13 ) /*0x4897dd*/
            {
              *v13 = *v12; /*0x4897e1*/
              v13[1] = 0; /*0x4897e3*/
            }
            else
            {
              v13 = 0; /*0x4897e8*/
            }
            v13[1] = v12[1]; /*0x4897ed*/
            v12[1] = (ExtraDataList *)v13; /*0x4897f0*/
          }
          *v12 = v7; /*0x4897f3*/
        }
      }
    }
  }
  return v6; /*0x48980a*/
}
