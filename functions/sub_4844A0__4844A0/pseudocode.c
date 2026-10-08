unsigned __int8 ***__thiscall sub_4844A0(unsigned __int8 ***this, int a2)
{
  unsigned __int8 ***v2; // esi
  unsigned __int8 **v3; // eax
  int *v4; // ebx
  _DWORD *v5; // eax
  ExtraDataList *v6; // edi
  _DWORD *i; // esi
  ExtraDataList **v8; // eax

  v2 = this; /*0x4844c7*/
  *(this + 2) = *(unsigned __int8 ***)(a2 + 8); /*0x4844d6*/
  v3 = (unsigned __int8 **)FormHeapAlloc(8u); /*0x4844d9*/
  if ( v3 ) /*0x4844e5*/
  {
    *v3 = 0; /*0x4844e7*/
    v3[1] = 0; /*0x4844e9*/
  }
  else
  {
    v3 = 0; /*0x4844ee*/
  }
  *v2 = v3; /*0x4844f0*/
  v4 = *(int **)a2; /*0x4844f2*/
  if ( *(_DWORD *)a2 )
  {
    do
    {
      if ( !*v4 ) /*0x4844fc*/
        break; /*0x4844fe*/
      v5 = (_DWORD *)FormHeapAlloc(0x14u); /*0x484502*/
      v6 = v5 ? (ExtraDataList *)ExtraDataList_constr(v5) : 0;
      ExtraDataList_DuplicateListForContainer(v6, *v4); /*0x484530*/
      if ( v6 ) /*0x484537*/
      {
        for ( i = *v2; i[1]; i = (_DWORD *)i[1] ) /*0x48453b*/
          ; /*0x484540*/
        if ( *i ) /*0x484548*/
        {
          v8 = (ExtraDataList **)FormHeapAlloc(8u); /*0x48454e*/
          if ( v8 ) /*0x484558*/
          {
            *v8 = v6; /*0x48455a*/
            v8[1] = 0; /*0x48455c*/
            i[1] = v8; /*0x48455f*/
          }
          else
          {
            i[1] = 0; /*0x484566*/
          }
        }
        else
        {
          *i = v6; /*0x48456b*/
        }
        v2 = this; /*0x48456d*/
      }
      v4 = (int *)v4[1]; /*0x484571*/
    }
    while ( v4 );
  }
  v2[1] = *(unsigned __int8 ***)(a2 + 4); /*0x48457f*/
  return v2; /*0x484584*/
}
