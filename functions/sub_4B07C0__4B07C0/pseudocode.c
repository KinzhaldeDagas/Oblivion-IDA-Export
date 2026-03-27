int *__thiscall sub_4B07C0(int *this, int a2, int a3)
{
  _DWORD *v4; // esi
  int v5; // edi
  _DWORD *v6; // eax
  void *v7; // ebx
  _DWORD *v8; // eax
  _BYTE *v9; // eax
  void *v10; // eax
  void *v12; // edi
  _DWORD *v13; // eax
  _DWORD *v14; // esi
  int *v15; // [esp+Ch] [ebp-4h]

  v4 = 0;
  if ( TESLeveledList_GetCalcEachInCount((_BYTE *)this + 0x24) )
  {
    v15 = this + 0xA;
    if ( this != (int *)0xFFFFFFD8 )
    {
      while ( 1 )
      {
        v5 = *v15;
        if ( *v15 )
        {
          if ( !v4 )
          {
            v6 = (_DWORD *)FormHeapAlloc(8u);
            if ( v6 )
            {
              *v6 = 0;
              v6[1] = 0;
            }
            else
            {
              v6 = 0;
            }
            v4 = v6;
          }
          v7 = OblivionDynamicCast(
                 *(void **)(v5 + 4),
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &SpellItem `RTTI Type Descriptor',
                 0);
          if ( !v7 )
          {
            v9 = OblivionDynamicCast(
                   *(void **)(v5 + 4),
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &TESLevSpell `RTTI Type Descriptor',
                   0);
            if ( v9 )
            {
              v10 = sub_4B0770(v9, a2, a3);
              if ( v10 )
                BSSimpleList_PushFront(v4, (int)v10);
            }
            goto LABEL_18;
          }
          if ( !*v4 )
            goto LABEL_14;
          v8 = (_DWORD *)FormHeapAlloc(8u);
          if ( !v8 )
          {
            *(_DWORD *)4 = v4[1];
            v4[1] = 0;
LABEL_14:
            *v4 = v7;
            goto LABEL_18;
          }
          *v8 = *v4;
          v8[1] = 0;
          v8[1] = v4[1];
          v4[1] = v8;
          *v4 = v7;
        }
LABEL_18:
        v15 = (int *)v15[1];
        if ( !v15 )
          return v4;
      }
    }
  }
  else
  {
    v12 = sub_4B0770(this, a2, a3);
    if ( v12 )
    {
      v13 = (_DWORD *)FormHeapAlloc(8u);
      if ( v13 )
      {
        v14 = v13;
        *v13 = 0;
        v13[1] = 0;
        BSSimpleList_PushFront(v13, (int)v12);
        return v14;
      }
      BSSimpleList_PushFront(0, (int)v12);
    }
  }
  return 0;
}
