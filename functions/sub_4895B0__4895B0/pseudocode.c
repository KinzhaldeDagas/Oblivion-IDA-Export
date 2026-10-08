void __thiscall sub_4895B0(unsigned int ***this, int a2, int a3)
{
  int *v3; // eax
  char v4; // dl
  int **v5; // edi
  int *v6; // ebx
  ExtraDataList *v7; // esi
  bool v8; // zf

  v3 = (int *)*this; /*0x4895b1*/
  v4 = 1; /*0x4895b8*/
  if ( *this ) /*0x4895b1*/
  {
    while ( v4 ) /*0x4895c7*/
    {
      if ( *v3 && *(_DWORD *)(*v3 + 8) == a2 ) /*0x4895d2*/
        v4 = 0; /*0x4895d4*/
      else
        v3 = (int *)v3[1]; /*0x4895d8*/
      if ( !v3 ) /*0x4895dd*/
        return; /*0x4895dd*/
    }
    if ( v3 ) /*0x4895e6*/
    {
      v5 = (int **)*v3; /*0x4895ed*/
      if ( *v3 ) /*0x4895ed*/
      {
        v6 = *v5; /*0x4895f8*/
        if ( *v5 ) /*0x4895f8*/
        {
          while ( 1 ) /*0x489603*/
          {
            v7 = (ExtraDataList *)*v6; /*0x489603*/
            if ( (char)sub_422C40((ExtraDataList *)*v6) == a3 ) /*0x489611*/
            {
              sub_422C60(v7); /*0x489615*/
              if ( !v7->members.m_data || ExtraDataList_GetExtraCount(v7) > 1 && BaseExtraList_Count(v7) == 1 ) /*0x489637*/
                break; /*0x489637*/
            }
            v6 = (int *)v6[1]; /*0x489639*/
            if ( !v6 ) /*0x48963e*/
              goto LABEL_19; /*0x48963e*/
          }
          BSSimpleList_Remove(*v5, (int)v7); /*0x489645*/
        }
LABEL_19:
        if ( !(*v5)[1] && !**v5 ) /*0x489654*/
        {
          FormHeapFree((unsigned int)*v5); /*0x48965a*/
          v8 = v5[1] == 0; /*0x489662*/
          *v5 = 0; /*0x489666*/
          if ( v8 ) /*0x48966c*/
          {
            BSSimpleList_Remove((int *)*this, (int)v5); /*0x489675*/
            if ( *v5 ) /*0x48967a*/
              BSSimpleList_Clear(*v5); /*0x489680*/
            FormHeapFree((unsigned int)*v5); /*0x489688*/
            *v5 = 0; /*0x48968e*/
            FormHeapFree((unsigned int)v5); /*0x489694*/
          }
        }
      }
    }
  }
}
