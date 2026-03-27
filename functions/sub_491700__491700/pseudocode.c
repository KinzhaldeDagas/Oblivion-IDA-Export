void __userpurge sub_491700(
        float *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        signed int a6,
        TESForm *a7)
{
  TESObjectREFR *v8; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // esi
  int type; // edi
  _DWORD *v12; // esi

  v8 = *((TESObjectREFR **)this + 1);
  if ( v8 )
    Container = TESObjectREFR_GetContainer(v8);
  else
    Container = 0;
  p_list = &Container->list;
  if ( Container != (TESContainer *)0xFFFFFFF8 )
  {
    while ( p_list->next || p_list->data )
    {
      type = (int)p_list->data->type;
      if ( type && sub_469980((int)p_list->data->type) )
      {
LABEL_17:
        ContainerExtraData_RemoveForm((int ***)this, st5_0, a4, st6_0, a5, type, 0, a6, 0, 0, a7, 0, 0, 1, 0);
        return;
      }
      p_list = p_list->next;
      if ( !p_list )
        break;
    }
  }
  v12 = *(_DWORD **)this;
  if ( *(_DWORD *)this )
  {
    while ( v12[1] || *v12 )
    {
      type = *(_DWORD *)(*v12 + 8);
      if ( type && sub_469980(*(_DWORD *)(*v12 + 8)) )
        goto LABEL_17;
      v12 = (_DWORD *)v12[1];
      if ( !v12 )
        return;
    }
  }
}
