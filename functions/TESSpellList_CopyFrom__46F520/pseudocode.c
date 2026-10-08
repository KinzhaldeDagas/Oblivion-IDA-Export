void __thiscall TESSpellList_CopyFrom(_DWORD *this, void *a2)
{
  _DWORD *v3; // ebx
  int *v4; // edi
  int v5; // ebx
  _DWORD *v6; // eax
  int *i; // ebx
  int v8; // edi
  _DWORD *v9; // eax
  _DWORD *v10; // [esp+10h] [ebp+4h]

  v3 = OblivionDynamicCast( /*0x46f53d*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESSpellList `RTTI Type Descriptor',
         0);
  v10 = v3; /*0x46f544*/
  if ( v3 ) /*0x46f548*/
  {
    TESSpellList_ClearLists(this); /*0x46f551*/
    v4 = v3 + 1; /*0x46f556*/
    if ( v3 != (_DWORD *)0xFFFFFFFC ) /*0x46f55b*/
    {
      do /*0x46f596*/
      {
        v5 = *v4; /*0x46f560*/
        if ( *v4 ) /*0x46f560*/
        {
          if ( *(this + 1) ) /*0x46f566*/
          {
            v6 = (_DWORD *)FormHeapAlloc(8u); /*0x46f56d*/
            if ( v6 ) /*0x46f577*/
            {
              *v6 = *(this + 1); /*0x46f57c*/
              v6[1] = 0; /*0x46f57e*/
            }
            else
            {
              v6 = 0; /*0x46f583*/
            }
            v6[1] = *(this + 2); /*0x46f588*/
            *(this + 2) = v6; /*0x46f58b*/
          }
          *(this + 1) = v5; /*0x46f58e*/
        }
        v4 = (int *)v4[1]; /*0x46f591*/
      }
      while ( v4 ); /*0x46f596*/
      v3 = v10; /*0x46f598*/
    }
    for ( i = v3 + 3; i; i = (int *)i[1] ) /*0x46f5a1*/
    {
      v8 = *i; /*0x46f5a3*/
      if ( *i ) /*0x46f5a3*/
      {
        if ( *(this + 3) ) /*0x46f5a9*/
        {
          v9 = (_DWORD *)FormHeapAlloc(8u); /*0x46f5b0*/
          if ( v9 ) /*0x46f5ba*/
          {
            *v9 = *(this + 3); /*0x46f5bf*/
            v9[1] = 0; /*0x46f5c1*/
          }
          else
          {
            v9 = 0; /*0x46f5c6*/
          }
          v9[1] = *(this + 4); /*0x46f5cb*/
          *(this + 4) = v9; /*0x46f5ce*/
        }
        *(this + 3) = v8; /*0x46f5d1*/
      }
    }
  }
}
