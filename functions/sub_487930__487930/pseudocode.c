char __thiscall sub_487930(
        int ****this,
        TESForm *form,
        signed int a3,
        int a4,
        signed int *a5,
        bool (__thiscall *a6)(BSExtraData *this, BSExtraData *other),
        void *a7)
{
  TESObjectREFR *v9; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // ebx
  unsigned __int8 *type; // edi
  EntryData *EntryForForm; // esi
  int count; // eax
  int v15; // ecx
  EntryData *v16; // eax
  EntryData *v17; // esi
  int v18; // ecx
  int v19; // ecx
  int ***v20; // esi
  int v21; // eax
  int v22; // ecx
  int v23; // [esp+10h] [ebp-4h]
  _DWORD *v24; // [esp+28h] [ebp+14h]

  v23 = 0; /*0x48793a*/
  if ( a6 ) /*0x487942*/
    return sub_487820(this, a6); /*0x48794c*/
  v24 = 0; /*0x487955*/
  if ( a7 ) /*0x48795d*/
    v24 = OblivionDynamicCast( /*0x487976*/
            a7,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
            &Actor `RTTI Type Descriptor',
            0);
  v9 = (TESObjectREFR *)*(this + 1); /*0x48797a*/
  if ( v9 ) /*0x48797f*/
    Container = TESObjectREFR_GetContainer(v9); /*0x487981*/
  else
    Container = 0; /*0x487988*/
  p_list = &Container->list; /*0x48798b*/
  if ( Container != (TESContainer *)0xFFFFFFF8 ) /*0x487992*/
  {
    do /*0x487998*/
    {
      if ( !p_list->next && !p_list->data ) /*0x4879a1*/
        break; /*0x4879a1*/
      type = (unsigned __int8 *)p_list->data->type; /*0x4879a9*/
      if ( type ) /*0x4879ae*/
      {
        if ( form ) /*0x4879b6*/
        {
          if ( type != (unsigned __int8 *)form ) /*0x4879ba*/
            goto LABEL_23; /*0x4879ba*/
        }
        else if ( !a3 || !sub_568370((int)type, a3) ) /*0x4879c8*/
        {
          goto LABEL_23; /*0x4879d2*/
        }
        EntryForForm = ContainerExtraData_GetEntryForForm((ExtraContainerChanges_Data *)this, (TESForm *)type, 1, 0); /*0x4879e0*/
        if ( !EntryForForm ) /*0x4879e4*/
        {
          if ( v24 ) /*0x487ab1*/
          {
            v19 = v24[0x16]; /*0x487ab3*/
            if ( v19 ) /*0x487ab8*/
              (*(void (__thiscall **)(int, unsigned __int8 *))(*(_DWORD *)v19 + 0x154))(v19, type); /*0x487ac3*/
          }
          *a5 = sub_568240(type); /*0x487ad5*/
          return 1; /*0x487adb*/
        }
        count = p_list->data->count; /*0x4879ec*/
        if ( count < 0 ) /*0x4879f0*/
          return 1; /*0x4879f0*/
        v23 += count + EntryForForm->countDelta; /*0x4879ff*/
        if ( v24 ) /*0x487a05*/
        {
          v15 = v24[0x16]; /*0x487a07*/
          if ( v15 ) /*0x487a0c*/
            (*(void (__thiscall **)(int, TESForm *))(*(_DWORD *)v15 + 0x154))(v15, EntryForForm->type); /*0x487a1a*/
        }
        *a5 = sub_568240((unsigned __int8 *)EntryForForm->type); /*0x487a2c*/
      }
LABEL_23:
      p_list = p_list->next; /*0x487a2e*/
    }
    while ( p_list ); /*0x487998*/
  }
  if ( v23 >= a4 ) /*0x487a41*/
    return 1; /*0x487b54*/
  if ( !form ) /*0x487a4d*/
  {
    v20 = *this; /*0x487ade*/
    if ( *this ) /*0x487ade*/
    {
      while ( *v20 ) /*0x487ae9*/
      {
        v21 = (int)(*v20)[2]; /*0x487aeb*/
        if ( v21 && a3 && sub_568370(v21, a3) && (int)(*v20)[1] >= a4 ) /*0x487b0d*/
        {
          if ( v24 ) /*0x487b26*/
          {
            v22 = v24[0x16]; /*0x487b28*/
            if ( v22 ) /*0x487b2d*/
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)v22 + 0x154))(v22, (*v20)[2]); /*0x487b3b*/
          }
          *a5 = sub_568240((unsigned __int8 *)(*v20)[2]); /*0x487b4f*/
          return 1; /*0x487b4f*/
        }
        v20 = (int ***)v20[1]; /*0x487b0f*/
        if ( !v20 ) /*0x487b14*/
          return 0; /*0x487b14*/
      }
    }
    return 0; /*0x487ae9*/
  }
  v16 = ContainerExtraData_GetEntryForForm((ExtraContainerChanges_Data *)this, form, 1, 0); /*0x487a5a*/
  v17 = v16; /*0x487a5f*/
  if ( !v16 || v16->countDelta < a4 ) /*0x487a6c*/
    return 0; /*0x487b1d*/
  if ( v24 ) /*0x487a78*/
  {
    v18 = v24[0x16]; /*0x487a7a*/
    if ( v18 ) /*0x487a7f*/
      (*(void (__thiscall **)(int, TESForm *))(*(_DWORD *)v18 + 0x154))(v18, v16->type); /*0x487a8d*/
  }
  *a5 = sub_568240((unsigned __int8 *)v17->type); /*0x487aa2*/
  return 1; /*0x48794a*/
}
