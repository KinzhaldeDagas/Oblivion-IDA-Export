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

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESSpellList `RTTI Type Descriptor',
         0);
  v10 = v3;
  if ( v3 )
  {
    TESSpellList_ClearLists(this);
    v4 = v3 + 1;
    if ( v3 != (_DWORD *)0xFFFFFFFC )
    {
      do
      {
        v5 = *v4;
        if ( *v4 )
        {
          if ( *(this + 1) )
          {
            v6 = (_DWORD *)FormHeapAlloc(8u);
            if ( v6 )
            {
              *v6 = *(this + 1);
              v6[1] = 0;
            }
            else
            {
              v6 = 0;
            }
            v6[1] = *(this + 2);
            *(this + 2) = v6;
          }
          *(this + 1) = v5;
        }
        v4 = (int *)v4[1];
      }
      while ( v4 );
      v3 = v10;
    }
    for ( i = v3 + 3; i; i = (int *)i[1] )
    {
      v8 = *i;
      if ( *i )
      {
        if ( *(this + 3) )
        {
          v9 = (_DWORD *)FormHeapAlloc(8u);
          if ( v9 )
          {
            *v9 = *(this + 3);
            v9[1] = 0;
          }
          else
          {
            v9 = 0;
          }
          v9[1] = *(this + 4);
          *(this + 4) = v9;
        }
        *(this + 3) = v8;
      }
    }
  }
}
