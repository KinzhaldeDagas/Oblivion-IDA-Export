void __thiscall sub_4895B0(unsigned int ***this, int a2, int a3)
{
  unsigned int **v3; // eax
  char v4; // dl
  unsigned int *v5; // edi
  unsigned int v6; // ebx
  ExtraDataList *v7; // esi
  bool v8; // zf

  v3 = *this;
  v4 = 1;
  if ( *this )
  {
    while ( v4 )
    {
      if ( *v3 && (*v3)[2] == a2 )
        v4 = 0;
      else
        v3 = (unsigned int **)v3[1];
      if ( !v3 )
        return;
    }
    if ( v3 )
    {
      v5 = *v3;
      if ( *v3 )
      {
        v6 = *v5;
        if ( *v5 )
        {
          while ( 1 )
          {
            v7 = *(ExtraDataList **)v6;
            if ( (char)sub_422C40(*(ExtraDataList **)v6) == a3 )
            {
              sub_422C60(v7);
              if ( !v7->members.m_data || ExtraDataList_GetExtraCount(v7) > 1 && BaseExtraList_Count(v7) == 1 )
                break;
            }
            v6 = *(_DWORD *)(v6 + 4);
            if ( !v6 )
              goto LABEL_19;
          }
          BSSimpleList_Remove((_DWORD *)*v5, (int)v7);
        }
LABEL_19:
        if ( !*(_DWORD *)(*v5 + 4) && !*(_DWORD *)*v5 )
        {
          FormHeapFree(*v5);
          v8 = v5[1] == 0;
          *v5 = 0;
          if ( v8 )
          {
            BSSimpleList_Remove(*this, (int)v5);
            if ( *v5 )
              BSSimpleList_Clear((_DWORD *)*v5);
            FormHeapFree(*v5);
            *v5 = 0;
            FormHeapFree((unsigned int)v5);
          }
        }
      }
    }
  }
}
