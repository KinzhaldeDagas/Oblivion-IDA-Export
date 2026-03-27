unsigned __int8 ***__thiscall sub_4844A0(unsigned __int8 ***this, int a2)
{
  unsigned __int8 ***v2; // esi
  unsigned __int8 **v3; // eax
  int *v4; // ebx
  _DWORD *v5; // eax
  ExtraDataList *v6; // edi
  _DWORD *i; // esi
  ExtraDataList **v8; // eax

  v2 = this;
  *(this + 2) = *(unsigned __int8 ***)(a2 + 8);
  v3 = (unsigned __int8 **)FormHeapAlloc(8u);
  if ( v3 )
  {
    *v3 = 0;
    v3[1] = 0;
  }
  else
  {
    v3 = 0;
  }
  *v2 = v3;
  v4 = *(int **)a2;
  if ( *(_DWORD *)a2 )
  {
    do
    {
      if ( !*v4 )
        break;
      v5 = (_DWORD *)FormHeapAlloc(0x14u);
      v6 = v5 ? (ExtraDataList *)ExtraDataList_constr(v5) : 0;
      ExtraDataList_DuplicateListForContainer(v6, *v4);
      if ( v6 )
      {
        for ( i = *v2; i[1]; i = (_DWORD *)i[1] )
          ;
        if ( *i )
        {
          v8 = (ExtraDataList **)FormHeapAlloc(8u);
          if ( v8 )
          {
            *v8 = v6;
            v8[1] = 0;
            i[1] = v8;
          }
          else
          {
            i[1] = 0;
          }
        }
        else
        {
          *i = v6;
        }
        v2 = this;
      }
      v4 = (int *)v4[1];
    }
    while ( v4 );
  }
  v2[1] = *(unsigned __int8 ***)(a2 + 4);
  return v2;
}
