void __thiscall sub_488AA0(void **this, BSExtraDataVtbl *a2, _DWORD **a3, ExtraDataList *a4)
{
  unsigned __int16 *v5; // eax
  int *v6; // eax
  _DWORD *v7; // eax
  ExtraDataList *v8; // edi
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  ExtraDataList *v11; // ecx
  _DWORD *v12; // eax
  ExtraDataList *v13; // esi
  int v14; // esi
  _DWORD **v15; // eax
  float v16; // [esp+14h] [ebp-10h]

  v5 = (unsigned __int16 *)OblivionDynamicCast(
                             *(this + 2),
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                             &TESEnchantableForm `RTTI Type Descriptor',
                             0);
  if ( v5 )
  {
    v16 = (float)v5[4];
    v6 = (int *)*this;
    if ( v16 < (double)*(float *)&a2 )
    {
      for ( ; v6; v6 = (int *)v6[1] )
      {
        v14 = *v6;
        if ( !*v6 )
          break;
        if ( (ExtraDataList *)v14 == a4 )
        {
          sub_41F640((_DWORD *)*v6);
          if ( !*(_DWORD *)(v14 + 4) )
          {
            ContainerExtraData_GetEntryForForm(a3, (int)*(this + 2), 1, 0);
            BSSimpleList_Remove(*v15, v14);
            (**(void (__thiscall ***)(int, int))v14)(v14, 1);
          }
          return;
        }
      }
    }
    else if ( v6 )
    {
      do
      {
        v11 = (ExtraDataList *)*v6;
        if ( !*v6 )
          break;
        if ( v11 == a4 )
        {
          sub_41EE90(v11, a2);
          return;
        }
        v6 = (int *)v6[1];
      }
      while ( v6 );
      v12 = (_DWORD *)FormHeapAlloc(0x14u);
      if ( v12 )
        v13 = (ExtraDataList *)ExtraDataList_constr(v12);
      else
        v13 = 0;
      sub_41EE90(v13, a2);
      BSSimpleList_PushFront(*this, (int)v13);
    }
    else
    {
      v7 = (_DWORD *)FormHeapAlloc(0x14u);
      if ( v7 )
        v8 = (ExtraDataList *)ExtraDataList_constr(v7);
      else
        v8 = 0;
      v9 = (_DWORD *)FormHeapAlloc(8u);
      if ( v9 )
      {
        *v9 = 0;
        v9[1] = 0;
        v10 = v9;
      }
      else
      {
        v10 = 0;
      }
      sub_41EE90(v8, a2);
      BSSimpleList_PushFront(v10, (int)v8);
      *this = v10;
    }
  }
}
